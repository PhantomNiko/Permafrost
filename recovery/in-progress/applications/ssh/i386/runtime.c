/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1001f038
#define DAT_1001f038 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1514U)))
#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000790
 */

/* WARNING: Removing unreachable block (ram,0x100007cc) */

void recovered_10000790(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1001f038 = 0;
    recovered_100007f0();
    DAT_1001f040 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f038
#undef DAT_1001f040

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1001f038
#define DAT_1001f038 (*(char *)(((uintptr_t)pf_module_state + 0x1514U)))
#undef DAT_1001f03c
#define DAT_1001f03c (*(int *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f044
#define DAT_1001f044 (*(int *)(((uintptr_t)pf_module_state + 0x1520U)))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100007f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100007f0(void)

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
  if (DAT_1001f038 != '\0') {
    return;
  }
  DAT_1001f03c = 0;
  DAT_1001f044 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_1000085b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_1000085b:
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
        if (iVar9 == 0) goto LAB_100009b0;
      }
      do {
        recovered_10004b50((int *)local_9c);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1001f03c != 0) goto LAB_100009eb;
    }
  }
LAB_100009b0:
  recovered_10004b50((int *)local_9c);
LAB_100009eb:
  if (DAT_1001f044 == 0) {
    DAT_1001f044 = DAT_1001f03c;
  }
  DAT_1001f038 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1001f038
#undef DAT_1001f03c
#undef DAT_1001f044
#undef _DAT_0028008c
#undef local_9c

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a10
 */

/* WARNING: Removing unreachable block (ram,0x10000a5c) */

void recovered_10000a10(undefined4 param_1,undefined4 param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000a80(param_3);
    DAT_1001f040 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f040

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1001f03c
#define DAT_1001f03c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f044
#define DAT_1001f044 (*(int * *)(((uintptr_t)pf_module_state + 0x1520U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000a80
 */

bool recovered_10000a80(int param_1)

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
    recovered_100007f0();
    local_18 = DAT_1001f03c;
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
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10000b80;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10000b80:
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
      piVar1 = DAT_1001f03c;
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
    piVar5 = (int *)&DAT_1001f03c;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10004b50(&local_1c);
      iVar10 = iVar10 + 1;
    } while (param_1 != iVar10);
    if (DAT_1001f044 == (int *)0x0) {
      DAT_1001f044 = DAT_1001f03c;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_1001f03c
#undef DAT_1001f044
#undef local_1c
#undef local_18

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000cc0
 */

/* WARNING: Removing unreachable block (ram,0x10000d0c) */

void recovered_10000cc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000a80(1);
    DAT_1001f040 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f040

#undef DAT_1001f03c
#define DAT_1001f03c (*(int * *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000d40
 */

/* WARNING: Removing unreachable block (ram,0x10000d7c) */

int recovered_10000d40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100007f0();
  iVar1 = 0;
  for (piVar2 = DAT_1001f03c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_1001f040 = 0;
  return iVar1;
}

#undef DAT_1001f03c
#undef DAT_1001f040

#undef DAT_1001f03c
#define DAT_1001f03c (*(int *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000dc0
 */

/* WARNING: Removing unreachable block (ram,0x10000dfc) */

void recovered_10000dc0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100007f0();
  for (iVar1 = DAT_1001f03c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1001f040 = 0;
  return;
}

#undef DAT_1001f03c
#undef DAT_1001f040

#undef DAT_1001f03c
#define DAT_1001f03c (*(int * *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000e40
 */

/* WARNING: Removing unreachable block (ram,0x10000e7c) */

int recovered_10000e40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100007f0();
  iVar2 = 0;
  for (piVar1 = DAT_1001f03c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_1001f040 = 0;
  return iVar2;
}

#undef DAT_1001f03c
#undef DAT_1001f040

#undef DAT_1001f03c
#define DAT_1001f03c (*(int *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000eb0
 */

/* WARNING: Removing unreachable block (ram,0x10000eec) */

void recovered_10000eb0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100007f0();
  for (iVar1 = DAT_1001f03c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1001f040 = 0;
  return;
}

#undef DAT_1001f03c
#undef DAT_1001f040

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000f30
 */

/* WARNING: Removing unreachable block (ram,0x10000f7c) */

void recovered_10000f30(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000fa0((uint *)0xffffffff);
    DAT_1001f040 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f040

#undef DAT_1001f03c
#define DAT_1001f03c (*(uint * *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f044
#define DAT_1001f044 (*(uint * *)(((uintptr_t)pf_module_state + 0x1520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10000fa0
 */

uint * recovered_10000fa0(uint *param_1)

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
    recovered_100007f0();
    puVar3 = DAT_1001f03c;
    puVar4 = DAT_1001f044;
    if (DAT_1001f044 == (uint *)0x0) {
      puVar4 = DAT_1001f03c;
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
              if (uVar8 < uVar10) goto LAB_10001082;
            }
          }
          else {
LAB_10001082:
            if ((uVar9 - 1 <= (uint)((int)param_1 - (int)puVar7) && puVar7 <= param_1) &&
               (uVar9 <= uVar10 - uVar8 && uVar8 <= uVar10)) {
              if (uVar9 - 1 < uVar10) {
                bVar2 = 0xffffffef < uVar10;
                if ((uint)(uVar10 - uVar9 < 0x20) <= -(uint)(uVar10 < uVar9)) {
                  bVar2 = 0xffffffdf < uVar9;
                }
                if (!bVar2) {
                  if (uVar8 == 0) {
LAB_10001164:
                    if ((bool)(~(uVar10 < uVar9) & 0x1f < uVar10 - uVar9)) {
                      DAT_1001f044 = (uint *)((int)puVar6 + uVar9 + 0x10);
                      *(uint *)((int)puVar6 + uVar9 + 0x10) = (uVar10 - uVar9) - 0x10;
                      uVar10 = puVar6[1];
                      *(uint *)((int)puVar6 + uVar9 + 0x14) = uVar10;
                      *(uint **)((int)puVar6 + uVar9 + 0x18) = puVar6;
                      *(undefined1 *)((int)puVar6 + uVar9 + 0x1c) = 1;
                      if (uVar10 != 0) {
                        *(uint **)(uVar10 + 8) = DAT_1001f044;
                      }
                      *puVar6 = uVar9;
                      puVar6[1] = (uint)DAT_1001f044;
                    }
                    else {
                      DAT_1001f044 = (uint *)puVar6[1];
                    }
                    *(undefined1 *)(puVar6 + 3) = 0;
                    if (DAT_1001f044 == (uint *)0x0) {
                      DAT_1001f044 = DAT_1001f03c;
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
                      puVar6 = recovered_10004cf0();
                      if (puVar6 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar10 = *puVar6;
                      goto LAB_10001164;
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

#undef DAT_1001f03c
#undef DAT_1001f044

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100011d0
 */

/* WARNING: Removing unreachable block (ram,0x1000121c) */

void recovered_100011d0(undefined4 param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10000fa0(param_2);
    DAT_1001f040 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f040

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001240
 */

/* WARNING: Removing unreachable block (ram,0x1000128c) */

uint * recovered_10001240(undefined4 param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10000fa0((uint *)param_3);
  }
  DAT_1001f040 = 0;
  return puVar2;
}

#undef DAT_1001f040

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012b0
 */

/* WARNING: Removing unreachable block (ram,0x100012fc) */

void recovered_100012b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001320();
    DAT_1001f040 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1001f040

#undef DAT_1001f044
#define DAT_1001f044 (*(uint * *)(((uintptr_t)pf_module_state + 0x1520U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001320
 */

void recovered_10001320(void)

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
  recovered_100007f0();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1001f044 == puVar3) {
        DAT_1001f044 = puVar2;
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
      DAT_1001f044 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1001f044 = puVar2;
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
        if (DAT_1001f044 == puVar2) {
          DAT_1001f044 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1001f044 = puVar2;
  return;
}

#undef DAT_1001f044

#undef DAT_1001f040
#define DAT_1001f040 (*(int *)(((uintptr_t)pf_module_state + 0x151cU)))
#undef DAT_1001f044
#define DAT_1001f044 (*(uint * *)(((uintptr_t)pf_module_state + 0x1520U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001440
 */

/* WARNING: Removing unreachable block (ram,0x1000148c) */

undefined4 * recovered_10001440(undefined4 *param_1,uint param_2)

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

  iVar1 = DAT_1001f040;
  { __typeof__(DAT_1001f040) pf_atomic_old = __atomic_exchange_n(&(DAT_1001f040),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (undefined4 *)0x0) {
    puVar9 = recovered_10000fa0((uint *)0xffffffff);
    DAT_1001f040 = 0;
    return puVar9;
  }
  if (param_2 == 0) {
    recovered_10001320();
    DAT_1001f040 = 0;
    return (undefined4 *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_1001f040 = 0;
    return (undefined4 *)0x0;
  }
  recovered_100007f0();
  uVar8 = param_2 + 0xf & 0xfffffff0;
  puVar9 = param_1 + -4;
  uVar6 = param_1[-4];
  if (uVar8 <= uVar6) {
    if (uVar6 <= uVar8 - 1) {
      DAT_1001f040 = 0;
      return (undefined4 *)0x0;
    }
    uVar2 = uVar6 - uVar8;
    bVar10 = 0xffffffdf < uVar8;
    if (-(uint)(uVar6 < uVar8) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar6;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_1001f040 = 0;
        return param_1;
      }
      DAT_1001f044 = (uint *)((int)param_1 + uVar8);
      *(uint *)((int)param_1 + uVar8) = uVar2 - 0x10;
      iVar1 = param_1[-3];
      *(int *)((int)param_1 + uVar8 + 4) = iVar1;
      *(uint **)((int)param_1 + uVar8 + 8) = puVar9;
      *(undefined1 *)((int)param_1 + uVar8 + 0xc) = 1;
      if (iVar1 != 0) {
        *(uint **)(iVar1 + 8) = DAT_1001f044;
      }
      param_1[-4] = uVar8;
      param_1[-3] = DAT_1001f044;
      DAT_1001f040 = 0;
      return param_1;
    }
    DAT_1001f040 = 0;
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
      local_20 = DAT_1001f044;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar6 ||
            (((uint *)(uVar6 + (int)param_1) != puVar3 || (-uVar6 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar9;
          DAT_1001f044 = puVar9;
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
        DAT_1001f040 = 0;
        return (undefined4 *)0x0;
      }
      uVar4 = recovered_10004d50();
      if ((char)uVar4 != '\0') {
        DAT_1001f044 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1001f040 = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10000fa0((uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_1001f040 = 0;
    return (undefined4 *)0x0;
  }
  if (*puVar9 < uVar8) {
    uVar8 = *puVar9;
  }
  puVar9 = puVar3;
  if (uVar8 < 8) {
LAB_100016b5:
    if (uVar8 == 0) goto LAB_100016cc;
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
    goto LAB_100016b5;
  }
  uVar6 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar6) = *(undefined1 *)((int)param_1 + uVar6);
    uVar6 = uVar6 + 1;
  } while (uVar8 != uVar6);
LAB_100016cc:
  recovered_10001320();
  DAT_1001f040 = 0;
  return puVar3;
}

#undef DAT_1001f040
#undef DAT_1001f044
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017e0
 */

undefined8 recovered_100017e0(uint param_1,uint param_2,uint param_3)

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
    if (0x3f < param_3) goto LAB_1000181b;
    bVar2 = (byte)param_3;
    if (0x1f < param_3) {
      uVar3 = param_1 << (bVar2 & 0x1f);
      uVar1 = 0;
      goto LAB_1000181b;
    }
    uVar3 = param_1 >> 0x20 - (bVar2 & 0x1f);
    param_1 = param_1 << (bVar2 & 0x1f);
    uVar3 = param_2 << (bVar2 & 0x1f) | uVar3;
  }
  uVar1 = param_1;
LAB_1000181b:
  return CONCAT44(uVar3,uVar1);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001830
 */

undefined8 recovered_10001830(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x10001880
 */

undefined8 recovered_10001880(uint param_1,uint param_2,uint param_3)

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
 * Address: 0x100018c0
 */

undefined8 recovered_100018c0(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x100019b0
 */

undefined8 recovered_100019b0(uint param_1,uint param_2,uint param_3,uint param_4)

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


#define local_30 (*(uint *)(pf_stack_frame + 32))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a20
 */

undefined8 recovered_10001a20(uint param_1,uint param_2,uint param_3,uint param_4)

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

#undef local_30
#undef local_34

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b70
 */

undefined8 recovered_10001b70(uint param_1,uint param_2,uint param_3,uint param_4)

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
 * Address: 0x10001c40
 */

void recovered_10001c40(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001c60
 */

int recovered_10001c60(int param_1)

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
 * Address: 0x10001c80
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10001c80(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
    uVar1 = (*_DAT_0028084c)(param_1);
    return uVar1;
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
 * Address: 0x10001cd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10001cd0(undefined4 param_1)

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
 * Address: 0x10001d20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10001d20(undefined4 param_1,undefined4 param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x57 < _DAT_00280808 && (_DAT_00280854 != (code *)0x0)))) {
    uVar1 = (*_DAT_00280854)(param_1,param_2);
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
 * Address: 0x10001d70
 */

void recovered_10001d70(undefined4 *param_1,undefined4 *param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  if (7 < param_3) {
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_10001d9a;
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
LAB_10001d9a:
  uVar3 = 0;
  do {
    *(undefined1 *)((int)param_1 + uVar3) = *(undefined1 *)((int)param_2 + uVar3);
    uVar3 = uVar3 + 1;
  } while (param_3 != uVar3);
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001e30
 */

undefined4 * recovered_10001e30(undefined4 *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10002000
 */

/* WARNING: Variable defined which should be unmapped: param_1 */

byte * recovered_10002000(byte *param_1,byte param_2,uint param_3)

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
 * Address: 0x100020b0
 */

void recovered_100020b0(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002150
 */

void recovered_10002150(undefined4 *param_1,uint param_2)

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
 * Address: 0x100021f0
 */

char * recovered_100021f0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10002230
 */

int recovered_10002230(uint *param_1,uint *param_2,uint param_3)

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
    if ((((uint)param_2 ^ (uint)param_1) & 3) != 0) goto LAB_100022ce;
    if (((uint)param_1 & 3) != 0) {
      uVar7 = param_3;
      puVar6 = param_1;
      do {
        puVar6 = (uint *)((int)puVar6 + 1);
        bVar1 = (byte)*param_1;
        bVar2 = (byte)*param_2;
        if (bVar1 != bVar2) goto LAB_100022e5;
        param_1 = (uint *)((int)param_1 + 1);
        param_2 = (uint *)((int)param_2 + 1);
        param_3 = uVar7 - 1;
      } while ((uVar7 != 1) && (uVar7 = param_3, ((uint)puVar6 & 3) != 0));
    }
    for (; 0xf < param_3; param_3 = param_3 - 0x10) {
      uVar7 = *param_1;
      uVar8 = *param_2;
      if (uVar7 != uVar8) {
LAB_10002316:
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
      if (uVar7 != uVar8) goto LAB_10002316;
      uVar7 = param_1[2];
      uVar8 = param_2[2];
      if (uVar7 != uVar8) goto LAB_10002316;
      uVar7 = param_1[3];
      uVar8 = param_2[3];
      if (uVar7 != uVar8) goto LAB_10002316;
      param_1 = param_1 + 4;
      param_2 = param_2 + 4;
    }
    for (; 3 < param_3; param_3 = param_3 - 4) {
      if (*param_1 != *param_2) {
        iVar3 = recovered_10002360();
        return iVar3;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
  }
  if (param_3 == 0) {
    return 0;
  }
LAB_100022ce:
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
LAB_100022e5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002360
 */

int recovered_10002360(void)

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
 * Address: 0x100023b0
 */

bool recovered_100023b0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023d0
 */

bool recovered_100023d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100023f0
 */

bool recovered_100023f0(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002410
 */

bool recovered_10002410(uint param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002440
 */

bool recovered_10002440(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002460
 */

bool recovered_10002460(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002480
 */

int recovered_10002480(int param_1)

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
 * Address: 0x100024a0
 */

int recovered_100024a0(int param_1)

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
 * Address: 0x100024c0
 */

int recovered_100024c0(int param_1)

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
 * Address: 0x10002500
 */

int recovered_10002500(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002536;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002536:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002540
 */

int recovered_10002540(byte *param_1,byte *param_2)

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
      if (bVar1 != *param_2) goto LAB_10002576;
      param_2 = param_2 + 1;
      bVar1 = *param_1;
    } while (bVar1 != 0);
    uVar2 = 0;
  }
LAB_10002576:
  return uVar2 - *param_2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002580
 */

void recovered_10002580(int param_1,int param_2)

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
 * Address: 0x100025b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_100025b0(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_100026c8;
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
LAB_100026c8:
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
 * Address: 0x100026f0
 */

char * recovered_100026f0(char *param_1,char param_2)

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
 * Address: 0x10002730
 */

int recovered_10002730(char *param_1,char *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  char cVar4;
  uint uVar3;
  char *pcVar5;

  if (*param_1 == '\0') {
LAB_1000277b:
    iVar2 = 0;
  }
  else {
    uVar3 = (uint)CONCAT11(*param_2,*param_1);
    iVar2 = 0;
    do {
      cVar4 = (char)(uVar3 >> 8);
      if (cVar4 == '\0') goto LAB_1000277b;
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
 * Address: 0x10002790
 */

int recovered_10002790(char *param_1,char *param_2)

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
 * Address: 0x100027f0
 */

char * recovered_100027f0(char *param_1,char *param_2)

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
 * Address: 0x10002840
 */

char * recovered_10002840(char *param_1,char *param_2)

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
          if (cVar4 == '\0') goto LAB_10002883;
        }
        pcVar3 = (char *)0x0;
        pcVar1 = param_1 + 1;
        param_1 = param_1 + 1;
      } while (*pcVar1 != '\0');
    }
  }
LAB_10002883:
  return pcVar3;
}


#undef DAT_1001e43e
#define DAT_1001e43e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x91aU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002890
 */

undefined * recovered_10002890(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1001e43e;
}

#undef DAT_1001e43e

#undef PTR_DAT_1001f000
#define PTR_DAT_1001f000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x14dcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028b0
 */

undefined ** recovered_100028b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1001f000;
}

#undef PTR_DAT_1001f000

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
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
#define local_20 (*(undefined4 *)(pf_stack_frame + 48))
#define local_34 (*(undefined4 *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(undefined4 *)(pf_stack_frame + 36))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100028d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100028d0(undefined4 *param_1)

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
#undef local_24
#undef local_20
#undef local_34
#undef local_30
#undef local_2c
#undef local_28

#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002970
 */

longdouble recovered_10002970(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1001db30;
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

#undef DAT_1001db30

#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100029c0
 */

void recovered_100029c0(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_1001db30;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1001db30 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1001db30);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1001db30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002a80
 */

longdouble recovered_10002a80(double param_1,double param_2)

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
 * Address: 0x10002ae0
 */

longdouble recovered_10002ae0(double param_1,double param_2)

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
 * Address: 0x10002b70
 */

longdouble recovered_10002b70(double param_1)

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
 * Address: 0x10002bc0
 */

longdouble recovered_10002bc0(double param_1)

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
 * Address: 0x10002c20
 */

void recovered_10002c20(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001db34
#define DAT_1001db34 (*(float *)(((uintptr_t)pf_module_state + 0x10U)))
#undef DAT_1001db38
#define DAT_1001db38 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1001db3c
#define DAT_1001db3c (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
#undef DAT_1001db40
#define DAT_1001db40 (*(float *)(((uintptr_t)pf_module_state + 0x1cU)))
#undef DAT_1001db44
#define DAT_1001db44 (*(float *)(((uintptr_t)pf_module_state + 0x20U)))
#undef DAT_1001db48
#define DAT_1001db48 (*(float *)(((uintptr_t)pf_module_state + 0x24U)))
#undef DAT_1001db4c
#define DAT_1001db4c (*(float *)(((uintptr_t)pf_module_state + 0x28U)))
#undef DAT_1001db50
#define DAT_1001db50 (*(float *)(((uintptr_t)pf_module_state + 0x2cU)))
#undef DAT_1001db54
#define DAT_1001db54 (*(float *)(((uintptr_t)pf_module_state + 0x30U)))
#undef DAT_1001db58
#define DAT_1001db58 (*(float *)(((uintptr_t)pf_module_state + 0x34U)))
#undef DAT_1001db5c
#define DAT_1001db5c (*(float *)(((uintptr_t)pf_module_state + 0x38U)))
#undef DAT_1001db60
#define DAT_1001db60 (*(float *)(((uintptr_t)pf_module_state + 0x3cU)))
#undef DAT_1001db88
#define DAT_1001db88 (*(double *)(((uintptr_t)pf_module_state + 0x64U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002d20
 */

longdouble recovered_10002d20(double param_1)

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
    lVar2 = (longdouble)DAT_1001db34;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1001db38 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1001db30;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1001db38 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1001db3c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1001db3c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1001db60 +
            lVar9 / (longdouble)DAT_1001db5c +
            lVar8 / (longdouble)DAT_1001db58 +
            lVar7 / (longdouble)DAT_1001db54 +
            lVar6 / (longdouble)DAT_1001db50 +
            lVar5 / (longdouble)DAT_1001db4c +
            lVar4 / (longdouble)DAT_1001db48 +
            lVar3 / (longdouble)DAT_1001db44 +
            (lVar10 * lVar2) / (longdouble)DAT_1001db40 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1001db88;
  }
  return lVar2;
}

#undef DAT_1001db30
#undef DAT_1001db34
#undef DAT_1001db38
#undef DAT_1001db3c
#undef DAT_1001db40
#undef DAT_1001db44
#undef DAT_1001db48
#undef DAT_1001db4c
#undef DAT_1001db50
#undef DAT_1001db54
#undef DAT_1001db58
#undef DAT_1001db5c
#undef DAT_1001db60
#undef DAT_1001db88

#undef DAT_1001dbb0
#define DAT_1001dbb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e30
 */

longlong recovered_10002e30(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1001dbb0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1001dbb0

#undef DAT_1001db64
#define DAT_1001db64 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1001db68
#define DAT_1001db68 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1001db6c
#define DAT_1001db6c (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1001db90
#define DAT_1001db90 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001db98
#define DAT_1001db98 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1001dba0
#define DAT_1001dba0 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1001dba8
#define DAT_1001dba8 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002e90
 */

longdouble recovered_10002e90(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1001db90 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1001db98;
    } while ((longdouble)DAT_1001db90 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1001dba0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1001dba8;
    } while (lVar1 < (longdouble)DAT_1001dba0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1001db6c +
         (lVar2 * lVar2) / (longdouble)DAT_1001db68 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1001db64) * lVar1;
}

#undef DAT_1001db64
#undef DAT_1001db68
#undef DAT_1001db6c
#undef DAT_1001db90
#undef DAT_1001db98
#undef DAT_1001dba0
#undef DAT_1001dba8

#undef DAT_1001db70
#define DAT_1001db70 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1001db74
#define DAT_1001db74 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1001db78
#define DAT_1001db78 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1001db90
#define DAT_1001db90 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001db98
#define DAT_1001db98 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1001dba0
#define DAT_1001dba0 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1001dba8
#define DAT_1001dba8 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002f20
 */

longdouble recovered_10002f20(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1001db90 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1001db98;
    } while ((longdouble)DAT_1001db90 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1001dba0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1001dba8;
    } while (lVar1 < (longdouble)DAT_1001dba0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1001db78 +
         (lVar1 * lVar1) / (longdouble)DAT_1001db74 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1001db70;
}

#undef DAT_1001db70
#undef DAT_1001db74
#undef DAT_1001db78
#undef DAT_1001db90
#undef DAT_1001db98
#undef DAT_1001dba0
#undef DAT_1001dba8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fb0
 */

longdouble recovered_10002fb0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if (lVar1 < -lVar1) {
    lVar1 = -lVar1;
  }
  return lVar1;
}


#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001db7c
#define DAT_1001db7c (*(float *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002fd0
 */

undefined8 recovered_10002fd0(double param_1)

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
    dVar3 = (double)DAT_1001db7c;
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
      dVar3 = dVar3 * (double)DAT_1001db30;
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

#undef DAT_1001db30
#undef DAT_1001db7c

#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001db7c
#define DAT_1001db7c (*(float *)(((uintptr_t)pf_module_state + 0x58U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003090
 */

undefined8 recovered_10003090(double param_1)

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
    dVar2 = (double)DAT_1001db7c;
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
      dVar2 = dVar2 * (double)DAT_1001db30;
      bVar10 = uVar5 != 0;
      uVar5 = uVar5 - 1;
    } while (bVar10);
  }
  return CONCAT44(uVar6,uVar4);
}

#undef DAT_1001db30
#undef DAT_1001db7c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003120
 */

void recovered_10003120(uint param_1,uint param_2)

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
 * Address: 0x10003190
 */

void recovered_10003190(uint param_1,uint param_2)

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
 * Address: 0x10003250
 */

void recovered_10003250(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100032c0
 */

void recovered_100032c0(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_1001db30;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1001db30 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1001db30);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1001db30

#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100033b0
 */

longdouble recovered_100033b0(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1001db30;
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

#undef DAT_1001db30

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003410
 */

longdouble recovered_10003410(float param_1,float param_2)

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
 * Address: 0x100034b0
 */

longdouble recovered_100034b0(float param_1)

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
 * Address: 0x10003510
 */

longdouble recovered_10003510(float param_1)

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
 * Address: 0x10003580
 */

longdouble recovered_10003580(double param_1)

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
 * Address: 0x100035f0
 */

longdouble recovered_100035f0(float param_1)

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
 * Address: 0x10003660
 */

longdouble recovered_10003660(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble extraout_ST0;

  recovered_10002c20();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001db38
#define DAT_1001db38 (*(float *)(((uintptr_t)pf_module_state + 0x14U)))
#undef DAT_1001db3c
#define DAT_1001db3c (*(float *)(((uintptr_t)pf_module_state + 0x18U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003680
 */

void recovered_10003680(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1001db38 < param_1) {
      do {
        param_1 = param_1 * DAT_1001db30;
      } while (DAT_1001db38 < param_1);
    }
    for (; param_1 < DAT_1001db3c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1001db30
#undef DAT_1001db38
#undef DAT_1001db3c

#undef DAT_1001dbb0
#define DAT_1001dbb0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x8cU)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037a0
 */

undefined4 recovered_100037a0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1001dbb0 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1001dbb0
#undef local_10

#undef DAT_1001db64
#define DAT_1001db64 (*(float *)(((uintptr_t)pf_module_state + 0x40U)))
#undef DAT_1001db68
#define DAT_1001db68 (*(float *)(((uintptr_t)pf_module_state + 0x44U)))
#undef DAT_1001db6c
#define DAT_1001db6c (*(float *)(((uintptr_t)pf_module_state + 0x48U)))
#undef DAT_1001db90
#define DAT_1001db90 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001db98
#define DAT_1001db98 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1001dba0
#define DAT_1001dba0 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1001dba8
#define DAT_1001dba8 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037f0
 */

longdouble recovered_100037f0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1001db90 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1001db98;
    } while ((float)DAT_1001db90 < param_1);
  }
  if (param_1 < (float)DAT_1001dba0) {
    do {
      param_1 = param_1 + (float)DAT_1001dba8;
    } while (param_1 < (float)DAT_1001dba0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1001db6c +
          (fVar1 * fVar1) / DAT_1001db68 + fVar1 / DAT_1001db64 + 1.0) * param_1);
}

#undef DAT_1001db64
#undef DAT_1001db68
#undef DAT_1001db6c
#undef DAT_1001db90
#undef DAT_1001db98
#undef DAT_1001dba0
#undef DAT_1001dba8

#undef DAT_1001db70
#define DAT_1001db70 (*(float *)(((uintptr_t)pf_module_state + 0x4cU)))
#undef DAT_1001db74
#define DAT_1001db74 (*(float *)(((uintptr_t)pf_module_state + 0x50U)))
#undef DAT_1001db78
#define DAT_1001db78 (*(float *)(((uintptr_t)pf_module_state + 0x54U)))
#undef DAT_1001db90
#define DAT_1001db90 (*(double *)(((uintptr_t)pf_module_state + 0x6cU)))
#undef DAT_1001db98
#define DAT_1001db98 (*(double *)(((uintptr_t)pf_module_state + 0x74U)))
#undef DAT_1001dba0
#define DAT_1001dba0 (*(double *)(((uintptr_t)pf_module_state + 0x7cU)))
#undef DAT_1001dba8
#define DAT_1001dba8 (*(double *)(((uintptr_t)pf_module_state + 0x84U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003880
 */

longdouble recovered_10003880(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1001db90 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1001db98;
    } while ((float)DAT_1001db90 < param_1);
  }
  if (param_1 < (float)DAT_1001dba0) {
    do {
      param_1 = param_1 + (float)DAT_1001dba8;
    } while (param_1 < (float)DAT_1001dba0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1001db78 +
         (fVar1 * fVar1) / DAT_1001db74 + fVar1 * DAT_1001db70 + 1.0);
}

#undef DAT_1001db70
#undef DAT_1001db74
#undef DAT_1001db78
#undef DAT_1001db90
#undef DAT_1001db98
#undef DAT_1001dba0
#undef DAT_1001dba8

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003910
 */

longdouble recovered_10003910(float param_1)

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
 * Address: 0x10003930
 */

int recovered_10003930(byte *param_1,undefined4 *param_2,uint param_3)

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
 * Address: 0x10003a80
 */

int recovered_10003a80(byte *param_1,undefined4 *param_2,uint param_3)

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

#undef DAT_1001db30
#define DAT_1001db30 (*(float *)(((uintptr_t)pf_module_state + 0xcU)))
#undef DAT_1001db80
#define DAT_1001db80 (*(float *)(((uintptr_t)pf_module_state + 0x5cU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003bd0
 */

longdouble recovered_10003bd0(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_1001db80 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_1001db80 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1001db80;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10003ca3;
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
LAB_10003ca3:
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
              lVar10 = lVar10 * (longdouble)DAT_1001db30;
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

#undef DAT_1001db30
#undef DAT_1001db80

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003d90
 */

longdouble recovered_10003d90(byte *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = recovered_10003bd0(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1001db80
#define DAT_1001db80 (*(float *)(((uintptr_t)pf_module_state + 0x5cU)))
#undef str_1001e440
#define str_1001e440 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x91cU)))
#undef str_1001e44a
#define str_1001e44a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x926U)))
#undef str_1001e45b
#define str_1001e45b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x937U)))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003dc0
 */

int recovered_10003dc0(byte *param_1,uint param_2,byte *param_3,double *param_4)

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
      goto LAB_10003e53;
    }
    bVar6 = param_3[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *param_1 = 0x25;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      param_3 = param_3 + 1;
      goto LAB_10003e53;
    }
    pbVar10 = param_3 + 2;
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10003eb5;
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
LAB_10003eb5:
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
      goto LAB_10003f9c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10003fa8;
    case 0x6c:
      param_3 = pbVar10 + 1;
      if (pbVar10[1] == 0x6c) {
        param_3 = pbVar10 + 2;
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_10003f9c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10003fa8;
    case 0x7a:
      cVar7 = '\x05';
LAB_10003fa8:
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
        goto LAB_100042b9;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_100042b9:
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
        abStack_51[iVar12 + 1] = str_1001e45b[uVar15 + uVar9 * -10];
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
      goto LAB_10003e08;
    default:
      if (1 < local_bc) {
        *param_1 = 0x3f;
        param_1 = param_1 + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10003e53;
    case 0x58:
    case 0x78:
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_100043e7;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_100043e7;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_100043e7:
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
      pcVar14 = str_1001e45b;
      if (*param_3 == 0x58) {
        pcVar14 = str_1001e44a;
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
LAB_100043bc:
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
LAB_10003e53:
      local_c0 = local_c0 + 1;
LAB_10003e54:
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
                        goto LAB_100044f5;
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
LAB_100044f5:
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
          abStack_51[iVar12 + 1] = str_1001e45b[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1001db80;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1001db80;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1001db80;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1001db80;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1001db80);
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
        abStack_51[iVar12 + 1] = str_1001e45b[uVar8 & 0xf];
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
      goto LAB_10003e54;
    case 0x73:
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1001e440;
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
      goto LAB_100043bc;
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
        goto LAB_100045cf;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_100045cf;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_100045cf:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1001e45b[uVar8 + uVar9 * -10];
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
LAB_10003e08:
      param_3 = param_3 + 1;
      param_1 = local_b8;
    }
  } while( true );
}

#undef DAT_1001db80
#undef str_1001e440
#undef str_1001e44a
#undef str_1001e45b
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_80
#undef abStack_51

/* Recover the native variadic formatting boundary; Pooka's Free Software License. */
int recovered_10004b20(char *buffer,ulong capacity,char *format,...){__builtin_va_list args;__builtin_va_start(args,format);int count=recovered_10003dc0(buffer,capacity,format,(void *)args);__builtin_va_end(args);return count;}


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
#undef DAT_1001f03c
#define DAT_1001f03c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1518U)))
#undef DAT_1001f044
#define DAT_1001f044 (*(int * *)(((uintptr_t)pf_module_state + 0x1520U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004b50
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10004b50(int *param_1)

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
        if (DAT_1001f03c == 0) {
          puVar2 = &DAT_1001f03c;
        }
        *puVar2 = piVar4;
        *param_1 = (int)piVar4;
        if (DAT_1001f044 == (int *)0x0) {
          DAT_1001f044 = piVar4;
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
    if (DAT_1001f03c == 0) {
      puVar2 = &DAT_1001f03c;
    }
    *puVar2 = 0x10000000;
    *param_1 = 0x10000000;
    if (DAT_1001f044 != (int *)0x0) {
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
    if (DAT_1001f03c == 0) {
      puVar2 = &DAT_1001f03c;
    }
    *puVar2 = piVar4;
    *param_1 = (int)piVar4;
    if (DAT_1001f044 != (int *)0x0) {
      return;
    }
  }
  DAT_1001f044 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1001f03c
#undef DAT_1001f044
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004cf0
 */

uint * recovered_10004cf0(void)

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
 * Address: 0x10004d50
 */

undefined4 recovered_10004d50(void)

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
#undef DAT_00280820
#define DAT_00280820 (*(uint8_t *)(0x280820U))
#undef DAT_00280828
#define DAT_00280828 (*(uint8_t *)(0x280828U))
#undef DAT_0028082c
#define DAT_0028082c (*(uint8_t *)(0x28082cU))
#undef DAT_00280830
#define DAT_00280830 (*(uint8_t *)(0x280830U))
#undef DAT_00280834
#define DAT_00280834 (*(uint8_t *)(0x280834U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef DAT_0028084c
#define DAT_0028084c (*(uint8_t *)(0x28084cU))
#undef DAT_00280894
#define DAT_00280894 (*(uint8_t *)(0x280894U))
#undef DAT_00280898
#define DAT_00280898 (*(uint8_t *)(0x280898U))
#undef DAT_0028089c
#define DAT_0028089c (*(uint8_t *)(0x28089cU))
#undef DAT_002808f8
#define DAT_002808f8 (*(uint8_t *)(0x2808f8U))
#undef DAT_00280924
#define DAT_00280924 (*(uint8_t *)(0x280924U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_00280974
#define DAT_00280974 (*(uint8_t *)(0x280974U))
#undef DAT_002809fc
#define DAT_002809fc (*(uint8_t *)(0x2809fcU))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1001e449
#define DAT_1001e449 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x925U)))
#undef DAT_1001e508
#define DAT_1001e508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e4U)))
#undef DAT_1001e513
#define DAT_1001e513 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9efU)))
#undef DAT_1001e5a9
#define DAT_1001e5a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa85U)))
#undef DAT_1001e607
#define DAT_1001e607 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xae3U)))
#undef DAT_1001e61e
#define DAT_1001e61e (*(uint8_t *)(((uintptr_t)pf_module_state + 0xafaU)))
#undef DAT_1001ea8d
#define DAT_1001ea8d (*(uint8_t *)(((uintptr_t)pf_module_state + 0xf69U)))
#undef DAT_1001f048
#define DAT_1001f048 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1524U)))
#undef DAT_1001f04c
#define DAT_1001f04c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1528U)))
#undef DAT_1001f050
#define DAT_1001f050 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x152cU)))
#undef DAT_1001f054
#define DAT_1001f054 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1530U)))
#undef DAT_1001f058
#define DAT_1001f058 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1534U)))
#undef DAT_1001f05c
#define DAT_1001f05c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1538U)))
#undef DAT_1001f060
#define DAT_1001f060 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x153cU)))
#undef DAT_1001f064
#define DAT_1001f064 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1540U)))
#undef DAT_1001f164
#define DAT_1001f164 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1640U)))
#undef DAT_1001f17c
#define DAT_1001f17c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1658U)))
#undef DAT_1001f180
#define DAT_1001f180 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x165cU)))
#undef DAT_1001f188
#define DAT_1001f188 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1664U)))
#undef DAT_1001f4ed
#define DAT_1001f4ed (*(uint8_t *)(((uintptr_t)pf_module_state + 0x19c9U)))
#undef DAT_1001f898
#define DAT_1001f898 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d74U)))
#undef DAT_1001f899
#define DAT_1001f899 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d75U)))
#undef DAT_1001f89a
#define DAT_1001f89a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d76U)))
#undef DAT_1001f89b
#define DAT_1001f89b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1d77U)))
#undef DAT_1001f8a0
#define DAT_1001f8a0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d7cU)))
#undef DAT_1001f8a4
#define DAT_1001f8a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d80U)))
#undef DAT_1001f8a8
#define DAT_1001f8a8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d84U)))
#undef DAT_1001f8bc
#define DAT_1001f8bc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x1d98U)))
#undef DAT_1001fac6
#define DAT_1001fac6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fa2U)))
#undef DAT_1001fac7
#define DAT_1001fac7 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1fa3U)))
#undef DAT_1001fbc8
#define DAT_1001fbc8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20a4U)))
#undef DAT_1001fbcc
#define DAT_1001fbcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20a8U)))
#undef DAT_1001fbd0
#define DAT_1001fbd0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20acU)))
#undef DAT_1001fbd4
#define DAT_1001fbd4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x20b0U)))
#undef DAT_1001fbd8
#define DAT_1001fbd8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20b4U)))
#undef DAT_1001fbd9
#define DAT_1001fbd9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x20b5U)))
#undef DAT_1001fddc
#define DAT_1001fddc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22b8U)))
#undef DAT_1001fde0
#define DAT_1001fde0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22bcU)))
#undef DAT_1001fde4
#define DAT_1001fde4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22c0U)))
#undef DAT_1001fdec
#define DAT_1001fdec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22c8U)))
#undef DAT_1001fdf0
#define DAT_1001fdf0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22ccU)))
#undef DAT_1001fdf1
#define DAT_1001fdf1 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cdU)))
#undef DAT_1001fdf2
#define DAT_1001fdf2 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22ceU)))
#undef DAT_1001fdf3
#define DAT_1001fdf3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22cfU)))
#undef DAT_1001fdf4
#define DAT_1001fdf4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22d0U)))
#undef DAT_1001fdf8
#define DAT_1001fdf8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22d4U)))
#undef DAT_1001fdfc
#define DAT_1001fdfc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22d8U)))
#undef DAT_1001fe00
#define DAT_1001fe00 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x22dcU)))
#undef DAT_1001fe04
#define DAT_1001fe04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x22e0U)))
#undef DAT_1001fe0c
#define DAT_1001fe0c (*(uint * *)(((uintptr_t)pf_module_state + 0x22e8U)))
#undef DAT_1001fe10
#define DAT_1001fe10 (*(int *)(((uintptr_t)pf_module_state + 0x22ecU)))
#undef DAT_1001ff3c
#define DAT_1001ff3c (*(int *)(((uintptr_t)pf_module_state + 0x2418U)))
#undef DAT_10020678
#define DAT_10020678 (*(int *)(((uintptr_t)pf_module_state + 0x2b54U)))
#undef DAT_10020990
#define DAT_10020990 (*(int *)(((uintptr_t)pf_module_state + 0x2e6cU)))
#undef DAT_10020995
#define DAT_10020995 (*(char *)(((uintptr_t)pf_module_state + 0x2e71U)))
#undef DAT_10020b98
#define DAT_10020b98 (*(char * *)(((uintptr_t)pf_module_state + 0x3074U)))
#undef DAT_10020b9c
#define DAT_10020b9c (*(int *)(((uintptr_t)pf_module_state + 0x3078U)))
#undef DAT_10020ba0
#define DAT_10020ba0 (*(int *)(((uintptr_t)pf_module_state + 0x307cU)))
#undef DAT_10020ba8
#define DAT_10020ba8 (*(char * *)(((uintptr_t)pf_module_state + 0x3084U)))
#undef DAT_10020bac
#define DAT_10020bac (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3088U)))
#undef DAT_10020bae
#define DAT_10020bae (*(uint8_t *)(((uintptr_t)pf_module_state + 0x308aU)))
#undef DAT_10020baf
#define DAT_10020baf (*(char *)(((uintptr_t)pf_module_state + 0x308bU)))
#undef DAT_10020bb4
#define DAT_10020bb4 (*(uint *)(((uintptr_t)pf_module_state + 0x3090U)))
#undef DAT_10020bc0
#define DAT_10020bc0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x309cU)))
#undef DAT_10020bc8
#define DAT_10020bc8 (*(uint * *)(((uintptr_t)pf_module_state + 0x30a4U)))
#undef DAT_10020bcc
#define DAT_10020bcc (*(int *)(((uintptr_t)pf_module_state + 0x30a8U)))
#undef DAT_10020cf8
#define DAT_10020cf8 (*(int *)(((uintptr_t)pf_module_state + 0x31d4U)))
#undef DAT_10021434
#define DAT_10021434 (*(int *)(((uintptr_t)pf_module_state + 0x3910U)))
#undef DAT_1002174c
#define DAT_1002174c (*(int *)(((uintptr_t)pf_module_state + 0x3c28U)))
#undef DAT_10021751
#define DAT_10021751 (*(char *)(((uintptr_t)pf_module_state + 0x3c2dU)))
#undef DAT_10021954
#define DAT_10021954 (*(char * *)(((uintptr_t)pf_module_state + 0x3e30U)))
#undef DAT_10021958
#define DAT_10021958 (*(int *)(((uintptr_t)pf_module_state + 0x3e34U)))
#undef DAT_1002195c
#define DAT_1002195c (*(int *)(((uintptr_t)pf_module_state + 0x3e38U)))
#undef DAT_10021964
#define DAT_10021964 (*(char * *)(((uintptr_t)pf_module_state + 0x3e40U)))
#undef DAT_10021968
#define DAT_10021968 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x3e44U)))
#undef DAT_1002196a
#define DAT_1002196a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e46U)))
#undef DAT_1002196b
#define DAT_1002196b (*(char *)(((uintptr_t)pf_module_state + 0x3e47U)))
#undef DAT_10021970
#define DAT_10021970 (*(uint *)(((uintptr_t)pf_module_state + 0x3e4cU)))
#undef DAT_1002197c
#define DAT_1002197c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e58U)))
#undef DAT_10021984
#define DAT_10021984 (*(uint * *)(((uintptr_t)pf_module_state + 0x3e60U)))
#undef DAT_10021988
#define DAT_10021988 (*(int *)(((uintptr_t)pf_module_state + 0x3e64U)))
#undef DAT_10021ab4
#define DAT_10021ab4 (*(int *)(((uintptr_t)pf_module_state + 0x3f90U)))
#undef DAT_100221f0
#define DAT_100221f0 (*(int *)(((uintptr_t)pf_module_state + 0x46ccU)))
#undef DAT_10022508
#define DAT_10022508 (*(int *)(((uintptr_t)pf_module_state + 0x49e4U)))
#undef DAT_1002250d
#define DAT_1002250d (*(char *)(((uintptr_t)pf_module_state + 0x49e9U)))
#undef DAT_10022710
#define DAT_10022710 (*(char * *)(((uintptr_t)pf_module_state + 0x4becU)))
#undef DAT_10022714
#define DAT_10022714 (*(int *)(((uintptr_t)pf_module_state + 0x4bf0U)))
#undef DAT_10022718
#define DAT_10022718 (*(int *)(((uintptr_t)pf_module_state + 0x4bf4U)))
#undef DAT_10022720
#define DAT_10022720 (*(char * *)(((uintptr_t)pf_module_state + 0x4bfcU)))
#undef DAT_10022724
#define DAT_10022724 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4c00U)))
#undef DAT_10022726
#define DAT_10022726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c02U)))
#undef DAT_10022727
#define DAT_10022727 (*(char *)(((uintptr_t)pf_module_state + 0x4c03U)))
#undef DAT_1002272c
#define DAT_1002272c (*(uint *)(((uintptr_t)pf_module_state + 0x4c08U)))
#undef DAT_10022738
#define DAT_10022738 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4c14U)))
#undef DAT_1002273a
#define DAT_1002273a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c16U)))
#undef DAT_1002273b
#define DAT_1002273b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c17U)))
#undef DAT_1002277a
#define DAT_1002277a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c56U)))
#undef DAT_100227fa
#define DAT_100227fa (*(char *)(((uintptr_t)pf_module_state + 0x4cd6U)))
#undef DAT_100227fc
#define DAT_100227fc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cd8U)))
#undef DAT_10022800
#define DAT_10022800 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4cdcU)))
#undef DAT_10022804
#define DAT_10022804 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ce0U)))
#undef DAT_10022808
#define DAT_10022808 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ce4U)))
#undef DAT_10022908
#define DAT_10022908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de4U)))
#undef DAT_10022912
#define DAT_10022912 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4deeU)))
#undef DAT_10022948
#define DAT_10022948 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e24U)))
#undef DAT_10022968
#define DAT_10022968 (*(char *)(((uintptr_t)pf_module_state + 0x4e44U)))
#undef DAT_1002296c
#define DAT_1002296c (*(uint *)(((uintptr_t)pf_module_state + 0x4e48U)))
#undef DAT_10022970
#define DAT_10022970 (*(char *)(((uintptr_t)pf_module_state + 0x4e4cU)))
#undef DAT_10022974
#define DAT_10022974 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e50U)))
#undef DAT_10022978
#define DAT_10022978 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e54U)))
#undef DAT_10022984
#define DAT_10022984 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e60U)))
#undef DAT_10022988
#define DAT_10022988 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x4e64U)))
#undef DAT_10022990
#define DAT_10022990 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e6cU)))
#undef DAT_100229a4
#define DAT_100229a4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e80U)))
#undef DAT_100229ac
#define DAT_100229ac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e88U)))
#undef DAT_100229b4
#define DAT_100229b4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e90U)))
#undef DAT_100229b8
#define DAT_100229b8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e94U)))
#undef DAT_100229bc
#define DAT_100229bc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e98U)))
#undef DAT_100229be
#define DAT_100229be (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e9aU)))
#undef DAT_100229c3
#define DAT_100229c3 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4e9fU)))
#undef DAT_100229cc
#define DAT_100229cc (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ea8U)))
#undef DAT_100229d4
#define DAT_100229d4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4eb0U)))
#undef DAT_100229dc
#define DAT_100229dc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4eb8U)))
#undef DAT_10022a44
#define DAT_10022a44 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f20U)))
#undef DAT_10022aac
#define DAT_10022aac (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4f88U)))
#undef DAT_10022b14
#define DAT_10022b14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4ff0U)))
#undef DAT_10022b7c
#define DAT_10022b7c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5058U)))
#undef DAT_10022be4
#define DAT_10022be4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x50c0U)))
#undef DAT_10022c4c
#define DAT_10022c4c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5128U)))
#undef DAT_10022cb4
#define DAT_10022cb4 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5190U)))
#undef DAT_10022d1c
#define DAT_10022d1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x51f8U)))
#undef DAT_10022d84
#define DAT_10022d84 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5260U)))
#undef DAT_10022dec
#define DAT_10022dec (*(uint8_t *)(((uintptr_t)pf_module_state + 0x52c8U)))
#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5a
#define DAT_10022e5a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5336U)))
#undef DAT_10022e5b
#define DAT_10022e5b (*(char *)(((uintptr_t)pf_module_state + 0x5337U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022ed0
#define DAT_10022ed0 (*(int *)(((uintptr_t)pf_module_state + 0x53acU)))
#undef DAT_10022ed4
#define DAT_10022ed4 (*(uint *)(((uintptr_t)pf_module_state + 0x53b0U)))
#undef DAT_10022ee0
#define DAT_10022ee0 (*(uint *)(((uintptr_t)pf_module_state + 0x53bcU)))
#undef DAT_10022ee4
#define DAT_10022ee4 (*(uint *)(((uintptr_t)pf_module_state + 0x53c0U)))
#undef DAT_10022ee8
#define DAT_10022ee8 (*(uint *)(((uintptr_t)pf_module_state + 0x53c4U)))
#undef DAT_10022eec
#define DAT_10022eec (*(uint *)(((uintptr_t)pf_module_state + 0x53c8U)))
#undef DAT_10022ef0
#define DAT_10022ef0 (*(int *)(((uintptr_t)pf_module_state + 0x53ccU)))
#undef DAT_10022ef4
#define DAT_10022ef4 (*(int *)(((uintptr_t)pf_module_state + 0x53d0U)))
#undef DAT_10022ef8
#define DAT_10022ef8 (*(uint *)(((uintptr_t)pf_module_state + 0x53d4U)))
#undef DAT_10022efc
#define DAT_10022efc (*(uint *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef DAT_10023f00
#define DAT_10023f00 (*(uint *)(((uintptr_t)pf_module_state + 0x63dcU)))
#undef DAT_10023f04
#define DAT_10023f04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e0U)))
#undef DAT_10023f05
#define DAT_10023f05 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e1U)))
#undef DAT_10023f06
#define DAT_10023f06 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e2U)))
#undef DAT_10023f07
#define DAT_10023f07 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e3U)))
#undef DAT_10023f08
#define DAT_10023f08 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e4U)))
#undef DAT_10023f09
#define DAT_10023f09 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e5U)))
#undef DAT_10023f0a
#define DAT_10023f0a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e6U)))
#undef DAT_10023f0b
#define DAT_10023f0b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e7U)))
#undef DAT_10023f0c
#define DAT_10023f0c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e8U)))
#undef DAT_10023f0d
#define DAT_10023f0d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e9U)))
#undef DAT_10023f0e
#define DAT_10023f0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63eaU)))
#undef DAT_10023f0f
#define DAT_10023f0f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63ebU)))
#undef DAT_10023f10
#define DAT_10023f10 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63ecU)))
#undef DAT_10023f11
#define DAT_10023f11 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63edU)))
#undef DAT_10023f12
#define DAT_10023f12 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63eeU)))
#undef DAT_10023f13
#define DAT_10023f13 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63efU)))
#undef DAT_10023f14
#define DAT_10023f14 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f0U)))
#undef DAT_10023f15
#define DAT_10023f15 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f1U)))
#undef DAT_10023f16
#define DAT_10023f16 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f2U)))
#undef DAT_10023f17
#define DAT_10023f17 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f3U)))
#undef DAT_10023f18
#define DAT_10023f18 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f4U)))
#undef DAT_10023f19
#define DAT_10023f19 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f5U)))
#undef DAT_10023f1a
#define DAT_10023f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f6U)))
#undef DAT_10023f1b
#define DAT_10023f1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f7U)))
#undef DAT_10023f1c
#define DAT_10023f1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f8U)))
#undef DAT_10023f1d
#define DAT_10023f1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63f9U)))
#undef DAT_10023f1e
#define DAT_10023f1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63faU)))
#undef DAT_10023f1f
#define DAT_10023f1f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63fbU)))
#undef DAT_10023f20
#define DAT_10023f20 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63fcU)))
#undef DAT_10023f21
#define DAT_10023f21 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63fdU)))
#undef DAT_10023f22
#define DAT_10023f22 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63feU)))
#undef DAT_10023f23
#define DAT_10023f23 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63ffU)))
#undef DAT_10023f24
#define DAT_10023f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6400U)))
#undef DAT_10023f43
#define DAT_10023f43 (*(byte *)(((uintptr_t)pf_module_state + 0x641fU)))
#undef DAT_10023f44
#define DAT_10023f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6420U)))
#undef DAT_10023f48
#define DAT_10023f48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6424U)))
#undef DAT_10023f78
#define DAT_10023f78 (*(uint *)(((uintptr_t)pf_module_state + 0x6454U)))
#undef DAT_10023f7c
#define DAT_10023f7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6458U)))
#undef DAT_10023fc0
#define DAT_10023fc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x649cU)))
#undef DAT_100240bc
#define DAT_100240bc (*(uint *)(((uintptr_t)pf_module_state + 0x6598U)))
#undef DAT_100240c0
#define DAT_100240c0 (*(uint *)(((uintptr_t)pf_module_state + 0x659cU)))
#undef DAT_100240c8
#define DAT_100240c8 (*(uint *)(((uintptr_t)pf_module_state + 0x65a4U)))
#undef DAT_100240cc
#define DAT_100240cc (*(int *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef DAT_100240d0
#define DAT_100240d0 (*(char *)(((uintptr_t)pf_module_state + 0x65acU)))
#undef DAT_100240d4
#define DAT_100240d4 (*(uint *)(((uintptr_t)pf_module_state + 0x65b0U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280820
#define _DAT_00280820 (*(code * *)(0x280820U))
#undef _DAT_00280828
#define _DAT_00280828 (*(code * *)(0x280828U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
#undef _DAT_00280830
#define _DAT_00280830 (*(code * *)(0x280830U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
#undef _DAT_0028084c
#define _DAT_0028084c (*(code * *)(0x28084cU))
#undef _DAT_00280894
#define _DAT_00280894 (*(code * *)(0x280894U))
#undef _DAT_00280898
#define _DAT_00280898 (*(code * *)(0x280898U))
#undef _DAT_0028089c
#define _DAT_0028089c (*(code * *)(0x28089cU))
#undef _DAT_002808f8
#define _DAT_002808f8 (*(code * *)(0x2808f8U))
#undef _DAT_00280924
#define _DAT_00280924 (*(code * *)(0x280924U))
#undef _DAT_00280968
#define _DAT_00280968 (*(code * *)(0x280968U))
#undef _DAT_00280974
#define _DAT_00280974 (*(code * *)(0x280974U))
#undef _DAT_002809fc
#define _DAT_002809fc (*(code * *)(0x2809fcU))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef _DAT_1001fdf0
#define _DAT_1001fdf0 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x22ccU)))
#undef str_1001de3e
#define str_1001de3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
#undef str_1001e0e4
#define str_1001e0e4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5c0U)))
#undef str_1001e46c
#define str_1001e46c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x948U)))
#undef str_1001e480
#define str_1001e480 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x95cU)))
#undef str_1001e4ae
#define str_1001e4ae (*(char (*)[1])(((uintptr_t)pf_module_state + 0x98aU)))
#undef str_1001e4d5
#define str_1001e4d5 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9b1U)))
#undef str_1001e50a
#define str_1001e50a (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9e6U)))
#undef str_1001e517
#define str_1001e517 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x9f3U)))
#undef str_1001e542
#define str_1001e542 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa1eU)))
#undef str_1001e549
#define str_1001e549 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa25U)))
#undef str_1001e586
#define str_1001e586 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa62U)))
#undef str_1001e594
#define str_1001e594 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa70U)))
#undef str_1001e5ac
#define str_1001e5ac (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa88U)))
#undef str_1001e5bc
#define str_1001e5bc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xa98U)))
#undef str_1001e5dc
#define str_1001e5dc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xab8U)))
#undef str_1001e60c
#define str_1001e60c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xae8U)))
#undef str_1001e615
#define str_1001e615 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaf1U)))
#undef str_1001e623
#define str_1001e623 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xaffU)))
#undef str_1001e62b
#define str_1001e62b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb07U)))
#undef str_1001e633
#define str_1001e633 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb0fU)))
#undef str_1001e63b
#define str_1001e63b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb17U)))
#undef str_1001e642
#define str_1001e642 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb1eU)))
#undef str_1001e64b
#define str_1001e64b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb27U)))
#undef str_1001e656
#define str_1001e656 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb32U)))
#undef str_1001e65f
#define str_1001e65f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb3bU)))
#undef str_1001e66c
#define str_1001e66c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb48U)))
#undef str_1001e674
#define str_1001e674 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb50U)))
#undef str_1001e6a8
#define str_1001e6a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xb84U)))
#undef str_1001e6df
#define str_1001e6df (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbbbU)))
#undef str_1001e721
#define str_1001e721 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xbfdU)))
#undef str_1001e76a
#define str_1001e76a (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc46U)))
#undef str_1001e78b
#define str_1001e78b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc67U)))
#undef str_1001e7a8
#define str_1001e7a8 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc84U)))
#undef str_1001e7c3
#define str_1001e7c3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc9fU)))
#undef str_1001e7ec
#define str_1001e7ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcc8U)))
#undef str_1001e810
#define str_1001e810 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xcecU)))
#undef str_1001e840
#define str_1001e840 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd1cU)))
#undef str_1001e85d
#define str_1001e85d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd39U)))
#undef str_1001e86e
#define str_1001e86e (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd4aU)))
#undef str_1001e878
#define str_1001e878 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd54U)))
#undef str_1001e8b9
#define str_1001e8b9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xd95U)))
#undef str_1001e8de
#define str_1001e8de (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdbaU)))
#undef str_1001e8fc
#define str_1001e8fc (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdd8U)))
#undef str_1001e911
#define str_1001e911 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xdedU)))
#undef str_1001e93f
#define str_1001e93f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe1bU)))
#undef str_1001e9b3
#define str_1001e9b3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe8fU)))
#undef str_1001e9cb
#define str_1001e9cb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xea7U)))
#undef str_1001e9ec
#define str_1001e9ec (*(char (*)[1])(((uintptr_t)pf_module_state + 0xec8U)))
#undef str_1001e9f2
#define str_1001e9f2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xeceU)))
#undef str_1001ea06
#define str_1001ea06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee2U)))
#undef str_1001ea2c
#define str_1001ea2c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf08U)))
#undef str_1001ea3c
#define str_1001ea3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf18U)))
#undef str_1001ea53
#define str_1001ea53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf2fU)))
#undef str_1001ea61
#define str_1001ea61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf3dU)))
#undef str_1001ea70
#define str_1001ea70 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf4cU)))
#undef str_1001ea92
#define str_1001ea92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf6eU)))
#undef str_1001ea9b
#define str_1001ea9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf77U)))
#undef str_1001eaa4
#define str_1001eaa4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf80U)))
#undef str_1001eac1
#define str_1001eac1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xf9dU)))
#undef str_1001ef53
#define str_1001ef53 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x142fU)))
#undef str_1001ef5f
#define str_1001ef5f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143bU)))
#undef str_1001ef7e
#define str_1001ef7e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x145aU)))
#undef str_1001ef86
#define str_1001ef86 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1462U)))
#undef str_1001ef92
#define str_1001ef92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x146eU)))
#define local_3f4 (*(undefined1 *)(pf_stack_frame + 92))
#define local_3f3 (*(undefined1 *)(pf_stack_frame + 93))
#define local_3f2 (*(undefined1 *)(pf_stack_frame + 94))
#define local_3f1 (*(undefined1 *)(pf_stack_frame + 95))
#define local_3f0 (*(undefined1 *)(pf_stack_frame + 96))
#define local_3ef (*(undefined1 *)(pf_stack_frame + 97))
#define local_3ee (*(undefined1 *)(pf_stack_frame + 98))
#define local_3ed (*(undefined1 *)(pf_stack_frame + 99))
#define local_3ec (*(undefined1 *)(pf_stack_frame + 100))
#define local_3eb (*(undefined1 *)(pf_stack_frame + 101))
#define local_3ea (*(undefined1 *)(pf_stack_frame + 102))
#define local_3e9 (*(undefined1 *)(pf_stack_frame + 103))
#define local_3e8 (*(uint *)(pf_stack_frame + 104))
#define local_3e4 (*(uint * *)(pf_stack_frame + 108))
#define local_3e0 (*(ushort *)(pf_stack_frame + 112))
#define local_3de (*(ushort *)(pf_stack_frame + 114))
#define local_3dc (*(uint *)(pf_stack_frame + 116))
#define local_3d8 (*(undefined4 *)(pf_stack_frame + 120))
#define local_3d4 (*(uint *)(pf_stack_frame + 124))
#define local_3d0 (*(float *)(pf_stack_frame + 128))
#define local_3cc (*(char * *)(pf_stack_frame + 132))
#define local_3c8 (*(undefined4 *)(pf_stack_frame + 136))
#define local_3c4 (*(undefined4 *)(pf_stack_frame + 140))
#define local_3c0 (*(undefined1 *)(pf_stack_frame + 144))
#define local_3bf (*(undefined1 *)(pf_stack_frame + 145))
#define local_3be (*(undefined1 *)(pf_stack_frame + 146))
#define local_3bd (*(undefined1 *)(pf_stack_frame + 147))
#define local_3bc (*(undefined1 *)(pf_stack_frame + 148))
#define local_3bb (*(undefined1 *)(pf_stack_frame + 149))
#define local_3ba (*(undefined1 *)(pf_stack_frame + 150))
#define local_3b9 (*(undefined1 *)(pf_stack_frame + 151))
#define local_358 (*(int *)(pf_stack_frame + 248))
#define local_354 (*(undefined4 *)(pf_stack_frame + 252))
#define local_350 (*(uint *)(pf_stack_frame + 256))
#define local_34c (*(undefined4 *)(pf_stack_frame + 260))
#define local_348 (*(undefined4 *)(pf_stack_frame + 264))
#define local_344 (*(uint *)(pf_stack_frame + 268))
#define local_340 (*(float *)(pf_stack_frame + 272))
#define local_33c (*(char * *)(pf_stack_frame + 276))
#define local_338 (*(uint *)(pf_stack_frame + 280))
#define local_334 (*(uint *)(pf_stack_frame + 284))
#define local_330 (*(undefined4 *)(pf_stack_frame + 288))
#define local_32c (*(undefined4 *)(pf_stack_frame + 292))
#define local_328 (*(uint *)(pf_stack_frame + 296))
#define local_324 (*(undefined4 *)(pf_stack_frame + 300))
#define local_320 (*(uint (*)[200])(pf_stack_frame + 304))
#define local_308 (*(undefined4 *)(pf_stack_frame + 328))
#define local_304 (*(undefined4 *)(pf_stack_frame + 332))
#define local_300 (*(undefined4 (*)[192])(pf_stack_frame + 336))
#define local_2e0 (*(int *)(pf_stack_frame + 368))
#define local_2c8 (*(longlong (*)[89])(pf_stack_frame + 392))
#define local_280 (*(int *)(pf_stack_frame + 464))
#define local_248 (*(uint (*)[146])(pf_stack_frame + 520))
#define local_144 (*(undefined4 * *)(pf_stack_frame + 780))
#define local_140 (*(uint *)(pf_stack_frame + 784))
#define local_138 (*(byte (*)[312])(pf_stack_frame + 792))
#define local_118 (*(uint (*)[70])(pf_stack_frame + 824))
#define local_98 (*(uint (*)[38])(pf_stack_frame + 952))
#define auStack_2f8 (*(undefined1 (*)[760])(pf_stack_frame + 344))
#define local_434 (*(char * *)(pf_stack_frame + 28))
#define local_428 (*(byte *)(pf_stack_frame + 40))
#define local_427 (*(undefined1 *)(pf_stack_frame + 41))
#define local_426 (*(undefined1 *)(pf_stack_frame + 42))
#define local_425 (*(undefined1 *)(pf_stack_frame + 43))
#define local_424 (*(undefined1 *)(pf_stack_frame + 44))
#define local_423 (*(undefined1 *)(pf_stack_frame + 45))
#define local_422 (*(undefined1 *)(pf_stack_frame + 46))
#define local_421 (*(undefined1 *)(pf_stack_frame + 47))
#define local_420 (*(undefined1 *)(pf_stack_frame + 48))
#define local_41f (*(undefined1 *)(pf_stack_frame + 49))
#define local_41e (*(undefined1 *)(pf_stack_frame + 50))
#define local_41d (*(undefined1 *)(pf_stack_frame + 51))
#define local_41c (*(undefined1 *)(pf_stack_frame + 52))
#define local_41b (*(undefined1 *)(pf_stack_frame + 53))
#define local_41a (*(undefined1 *)(pf_stack_frame + 54))
#define local_419 (*(undefined1 *)(pf_stack_frame + 55))
#define local_418 (*(undefined1 *)(pf_stack_frame + 56))
#define local_417 (*(undefined1 *)(pf_stack_frame + 57))
#define local_416 (*(undefined1 *)(pf_stack_frame + 58))
#define local_415 (*(undefined1 *)(pf_stack_frame + 59))
#define local_414 (*(undefined1 *)(pf_stack_frame + 60))
#define local_413 (*(undefined1 *)(pf_stack_frame + 61))
#define local_412 (*(undefined1 *)(pf_stack_frame + 62))
#define local_411 (*(undefined1 *)(pf_stack_frame + 63))
#define local_410 (*(undefined1 *)(pf_stack_frame + 64))
#define local_40f (*(undefined1 *)(pf_stack_frame + 65))
#define local_40e (*(undefined1 *)(pf_stack_frame + 66))
#define local_40d (*(undefined1 *)(pf_stack_frame + 67))
#define local_40c (*(undefined1 *)(pf_stack_frame + 68))
#define local_40b (*(undefined1 *)(pf_stack_frame + 69))
#define local_40a (*(undefined1 *)(pf_stack_frame + 70))
#define local_409 (*(byte *)(pf_stack_frame + 71))
#define local_408 (*(undefined1 *)(pf_stack_frame + 72))
#define local_407 (*(undefined1 *)(pf_stack_frame + 73))
#define local_406 (*(undefined1 *)(pf_stack_frame + 74))
#define local_405 (*(undefined1 *)(pf_stack_frame + 75))
#define local_404 (*(undefined1 *)(pf_stack_frame + 76))
#define local_403 (*(undefined1 *)(pf_stack_frame + 77))
#define local_402 (*(undefined1 *)(pf_stack_frame + 78))
#define local_401 (*(undefined1 *)(pf_stack_frame + 79))
#define local_400 (*(undefined1 *)(pf_stack_frame + 80))
#define local_3ff (*(undefined1 *)(pf_stack_frame + 81))
#define local_3fe (*(undefined1 *)(pf_stack_frame + 82))
#define local_3fd (*(undefined1 *)(pf_stack_frame + 83))
#define local_3fc (*(undefined1 *)(pf_stack_frame + 84))
#define local_3fb (*(undefined1 *)(pf_stack_frame + 85))
#define local_3fa (*(undefined1 *)(pf_stack_frame + 86))
#define local_3f9 (*(undefined1 *)(pf_stack_frame + 87))
#define local_3f8 (*(undefined1 *)(pf_stack_frame + 88))
#define local_3f7 (*(undefined1 *)(pf_stack_frame + 89))
#define local_3f6 (*(undefined1 *)(pf_stack_frame + 90))
#define local_3f5 (*(undefined1 *)(pf_stack_frame + 91))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004db0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10004db0(void)

{
  unsigned char pf_stack_frame[1136] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint *puVar8;
  undefined4 *puVar9;
  uint *puVar10;
  float fVar11;
  char cVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined4 uVar16;
  char *pcVar17;
  byte *pbVar18;
  byte *pbVar19;
  int iVar20;
  byte bVar21;
  ushort uVar22;
  uint uVar23;
  byte *pbVar24;
  uint uVar25;
  undefined4 *puVar26;
  uint uVar27;
  int *piVar28;
  uint uVar29;
  undefined1 *puVar30;
  uint uVar31;
  bool bVar32;
  bool bVar33;
  bool bVar34;
  ushort in_FPUControlWord = pf_fpu_control();
  undefined8 uVar35;

  bVar33 = true;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x23 < _DAT_00280808 && (_DAT_00280820 != (code *)0x0)))) {
    iVar13 = (*_DAT_00280820)(0xb1a2c,0xd8e6f2,0x1f);
    bVar33 = iVar13 == 0;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(str_1001e46c);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(&DAT_1001e5a9);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(str_1001e480);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(&DAT_1001e5a9);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
    (*_DAT_00280828)(&DAT_1001e449);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
    (*_DAT_00280828)(&DAT_1001e5a9);
  }
  recovered_10002000((byte *)&local_348,0,0x18);
  local_348 = (undefined4 *)0x18;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))))) {
    (*_DAT_00280968)(&local_348);
  }
  recovered_10009bf0(&local_348,0x18);
  iVar13 = 0x40;
  do {
    recovered_10002000((byte *)&local_348,0,0x18);
    local_348 = (undefined4 *)0x18;
    if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
        ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))) &&
       (iVar14 = (*_DAT_00280968)(&local_348), iVar14 != 0)) {
      local_348 = (undefined4 *)local_338;
    }
    else {
      local_348 = (undefined4 *)0x0;
    }
    local_344 = 0;
    recovered_10009bf0(&local_348,8);
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x9f < _DAT_00280808 && (_DAT_0028089c != (code *)0x0)))))) {
      (*_DAT_0028089c)();
    }
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  recovered_10002000((byte *)&local_348,0,0xa8);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0xfb < _DAT_00280808 && (_DAT_002808f8 != (code *)0x0)) &&
      (iVar13 = (*_DAT_002808f8)(&local_348), iVar13 != 0)))) {
    recovered_10009bf0(&local_348,0xa8);
  }
  recovered_10002000((byte *)&local_348,0,0x18);
  local_348 = (undefined4 *)0x18;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))))) {
    (*_DAT_00280968)(&local_348);
  }
  recovered_10009bf0(&local_348,0x18);
  recovered_10002000((byte *)&local_348,0,0x18);
  local_348 = (undefined4 *)0x18;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)) &&
      (iVar13 = (*_DAT_00280968)(&local_348), iVar13 != 0)))) {
    uVar15 = local_338;
  }
  else {
    uVar15 = 0;
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x177 < _DAT_00280808 && (_DAT_00280974 != (code *)0x0)))))) {
    (*_DAT_00280974)(250000);
  }
  recovered_10002000((byte *)&local_348,0,0x18);
  local_348 = (undefined4 *)0x18;
  if (((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
      ((_DAT_00280808 < 0x16c || (_DAT_00280968 == (code *)0x0)))) ||
     (iVar13 = (*_DAT_00280968)(&local_348), iVar13 == 0)) {
    local_338 = 0;
  }
  uVar23 = (local_338 - uVar15) * 4;
  DAT_100240bc = 0x12;
  if (uVar23 != 0) {
    DAT_100240bc = uVar23;
  }
  DAT_100240cc = 0;
  DAT_100240c8 = 0;
  local_348 = (undefined4 *)local_338;
  local_344 = uVar15;
  DAT_100240c0 = local_338;
  recovered_10009bf0(&local_348,8);
  recovered_10002000((byte *)&DAT_10022738,0,0x23c);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x9b < _DAT_00280808 && (_DAT_00280898 != (code *)0x0)))))) {
    (*_DAT_00280898)(str_1001e6a8,0,0);
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x9b < _DAT_00280808 && (_DAT_00280898 != (code *)0x0)))) {
    (*_DAT_00280898)(str_1001e6df,0,0);
  }
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x9b < _DAT_00280808 && (_DAT_00280898 != (code *)0x0)))))) {
    (*_DAT_00280898)(str_1001e721,0,0);
  }
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x1ff < _DAT_00280808 && (_DAT_002809fc != (code *)0x0)))) &&
     (iVar13 = (*_DAT_002809fc)(str_1001e5ac), iVar13 != 0)) {
    pcVar17 = str_1001e5bc;
  }
  else {
    pcVar17 = str_1001e5dc;
  }
  recovered_10009110(pcVar17,str_1001e5ac);
  local_348 = (undefined4 *)0x0;
  local_344 = 0;
  local_340 = 0.0;
  local_33c = (char *)0x0;
  local_338 = 0;
  local_334 = 0;
  uVar15 = 0x16;
  if ((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) {
    uVar15 = 0x16;
    if (0xb < _DAT_00280808) {
      uVar15 = 0x16;
      if ((0x207 < _DAT_00280808) && (_DAT_00280a04 != (code *)0x0)) {
        iVar13 = (*_DAT_00280a04)(&DAT_1001e607,&local_348);
        uVar15 = 0x16;
        if (iVar13 != 0) {
          if (local_348 == (undefined4 *)0x5) {
            uVar15 = (uint)(local_344 != 0);
          }
          else if (local_348 == (undefined4 *)0x2) {
            local_3de = in_FPUControlWord | 0xc00;
            uVar15 = (uint)ROUND(local_340);
            local_34c = uVar15;
          }
          else {
            uVar15 = 0x16;
            if (local_348 == (undefined4 *)0x1) {
              uVar15 = local_344;
            }
          }
        }
      }
    }
  }
  uVar23 = 0x16;
  if (uVar15 - 1 < 0xffff) {
    uVar23 = uVar15;
  }
  DAT_10022738 = (ushort)uVar23;
  local_434 = &DAT_1002273a;
  recovered_1000a2d0(str_1001e60c,&DAT_1002273a,0x40,&DAT_1001e508);
  recovered_1000a2d0(str_1001e615,&DAT_1002277a,0x80,&DAT_1001e508);
  local_348 = (undefined4 *)0x0;
  local_344 = 0;
  local_340 = 0.0;
  local_33c = (char *)0x0;
  local_338 = 0;
  local_334 = 0;
  bVar34 = true;
  if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
      ((0x207 < _DAT_00280808 && (_DAT_00280a04 != (code *)0x0)))) &&
     (iVar13 = (*_DAT_00280a04)(&DAT_1001e61e,&local_348), iVar13 != 0)) {
    if (((uint)local_348 & 0xfffffffb) == 1) {
      bVar34 = local_344 != 0;
    }
    else if (local_33c != (char *)0x0 && local_348 == (undefined4 *)0x3) {
      switch((uintptr_t)(*local_33c)) {
      case 'T':
      case 'Y':
      case 't':
      case 'y':
        break;
      case 'U':
      case 'V':
      case 'W':
      case 'X':
      case 'Z':
      case '[':
      case '\\':
      case ']':
      case '^':
      case '_':
      case '`':
      case 'a':
      case 'b':
      case 'c':
      case 'd':
      case 'e':
      case 'f':
      case 'g':
      case 'h':
      case 'i':
      case 'j':
      case 'k':
      case 'l':
      case 'm':
      case 'n':
      case 'o':
      case 'p':
      case 'q':
      case 'r':
      case 's':
      case 'u':
      case 'v':
      case 'w':
      case 'x':
switchD_100056ee_caseD_10005b13:
        bVar34 = false;
        break;
      default:
        if (*local_33c != '1') goto switchD_100056ee_caseD_10005b13;
      }
    }
  }
  DAT_100227fa = bVar34;
  recovered_1000a4f0(str_1001e623,&DAT_100227fc);
  recovered_1000a4f0(str_1001e62b,(uint *)&DAT_10022800);
  recovered_1000a4f0(str_1001e633,&DAT_10022804);
  recovered_1000a2d0(str_1001e63b,&DAT_10022808,0x100,&DAT_1001e449);
  recovered_1000a2d0(str_1001e642,&DAT_10022908,0x40,str_1001e64b);
  recovered_1000a2d0(str_1001e656,(char *)&local_348,0x100,&DAT_1001e449);
  uVar15 = recovered_100024c0((int)&local_348);
  if (0x3f < uVar15) {
    uVar16 = recovered_1000a6a0((int)&local_348,(int)&local_3d8);
    if ((char)uVar16 != '\0') {
      recovered_10001d70((undefined4 *)&DAT_10022948,&local_3d8,0x20);
      DAT_10022968 = '\x01';
    }
    local_3c0 = 0;
    local_3bf = 0;
    local_3be = 0;
    local_3bd = 0;
    local_3bc = 0;
    local_3bb = 0;
    local_3ba = 0;
    local_3b9 = 0;
  }
  local_3d8 = 0;
  local_3d4 = 0;
  local_3d0 = 0.0;
  local_3cc = (char *)0x0;
  local_3c8 = 0;
  local_3c4 = 0;
  uVar15 = 4;
  if ((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) {
    uVar15 = 4;
    if (0xb < _DAT_00280808) {
      uVar15 = 4;
      if ((0x207 < _DAT_00280808) && (_DAT_00280a04 != (code *)0x0)) {
        iVar13 = (*_DAT_00280a04)(str_1001e65f,&local_3d8);
        uVar15 = 4;
        if (iVar13 != 0) {
          if (local_3d8 == 5) {
            uVar15 = (uint)(local_3d4 != 0);
          }
          else if (local_3d8 == 2) {
            local_3e0 = in_FPUControlWord | 0xc00;
            uVar15 = (uint)ROUND(local_3d0);
            local_350 = uVar15;
          }
          else {
            uVar15 = 4;
            if (local_3d8 == 1) {
              uVar15 = local_3d4;
            }
          }
        }
      }
    }
  }
  DAT_1002296c = 4;
  if (uVar15 - 1 < 4) {
    DAT_1002296c = uVar15;
  }
  local_3d8 = 0;
  local_3d4 = 0;
  local_3d0 = 0.0;
  local_3cc = (char *)0x0;
  local_3c8 = 0;
  local_3c4 = 0;
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
     (((_DAT_00280808 < 0x208 || (_DAT_00280a04 == (code *)0x0)) ||
      (iVar13 = (*_DAT_00280a04)(str_1001e66c,&local_3d8), iVar13 == 0))))
  goto switchD_10005b08_caseD_10005b1f;
  if ((local_3d8 & 0xfffffffb) == 1) {
    DAT_10022970 = local_3d4 != 0;
    goto switchD_10005b08_caseD_10005b21;
  }
  if (local_3cc == (char *)0x0 || local_3d8 != 3) {
switchD_10005b08_caseD_10005b1f:
    DAT_10022970 = false;
  }
  else {
    DAT_10022970 = true;
    switch((uintptr_t)(*local_3cc)) {
    case 'T':
    case 'Y':
    case 't':
    case 'y':
      break;
    case 'U':
    case 'V':
    case 'W':
    case 'X':
    case 'Z':
    case '[':
    case '\\':
    case ']':
    case '^':
    case '_':
    case '`':
    case 'a':
    case 'b':
    case 'c':
    case 'd':
    case 'e':
    case 'f':
    case 'g':
    case 'h':
    case 'i':
    case 'j':
    case 'k':
    case 'l':
    case 'm':
    case 'n':
    case 'o':
    case 'p':
    case 'q':
    case 'r':
    case 's':
    case 'u':
    case 'v':
    case 'w':
    case 'x':
      goto switchD_10005b08_caseD_10005b1f;
    default:
      if (*local_3cc != '1') goto switchD_10005b08_caseD_10005b1f;
    }
  }
switchD_10005b08_caseD_10005b21:
  if (DAT_1002273a == '\0') {
    recovered_10001d70((undefined4 *)&DAT_1002273a,(undefined4 *)&DAT_1001e508,1);
    DAT_1002273b = 0;
  }
  if (DAT_10022908 == '\0') {
    recovered_10001d70((undefined4 *)&DAT_10022908,(undefined4 *)str_1001e64b,10);
    DAT_10022912 = 0;
  }
  if (DAT_100227fc == 0 && DAT_100227fa == '\0') {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(str_1001e674);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
      (*_DAT_00280828)(&DAT_1001e5a9);
    }
    DAT_100227fa = '\x01';
  }
  if ((DAT_10022800 == 0) && (DAT_100227fc != 0)) {
    DAT_10022800 = -0x100;
  }
  if (DAT_10022968 == '\x01') {
    recovered_10001d70((undefined4 *)&DAT_10023f04,(undefined4 *)&DAT_10022948,0x20);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
      (*_DAT_00280828)(str_1001e76a);
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(&DAT_1001e5a9);
    }
    recovered_10002000((byte *)&local_144,0,0xc);
  }
  else {
    recovered_10002000((byte *)&local_144,0,0xc);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
        (iVar13 = (*_DAT_00280834)(str_1001e78b,&local_144),
        (0x3f < local_140 && local_144 != (undefined4 *)0x0) && iVar13 != 0)))) {
      uVar15 = 0x4f;
      if (local_140 < 0x4f) {
        uVar15 = local_140;
      }
      recovered_10001d70(&local_348,local_144,uVar15);
      *(undefined1 *)((int)local_320 + (uVar15 - 0x28)) = 0;
      uVar16 = recovered_1000a6a0((int)&local_348,((uintptr_t)pf_module_state + 0x63e0U));
      pcVar17 = str_1001e7c3;
      if ((char)uVar16 != '\0') {
        pcVar17 = str_1001e7a8;
      }
      recovered_10009110(pcVar17,str_1001e78b);
      iVar13 = -0x50;
      do {
        auStack_2f8[iVar13] = 0;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0);
      if ((char)uVar16 != '\0') goto LAB_100060b9;
    }
    pbVar24 = &DAT_10023f04;
    recovered_1000a820((undefined4 *)&DAT_10023f04,(undefined4 *)0x20);
    iVar13 = -0x40;
    do {
      bVar21 = *pbVar24;
      *(char *)((int)local_320 + iVar13 + 0x18) = str_1001e85d[bVar21 >> 4];
      *(char *)((int)local_320 + iVar13 + 0x19) = str_1001e85d[bVar21 & 0xf];
      pbVar24 = pbVar24 + 1;
      iVar13 = iVar13 + 2;
    } while (iVar13 != 0);
    local_308 = CONCAT22(PF_PART2(local_308, 2),10);
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        (((0x3b < _DAT_00280808 && (_DAT_00280838 != (code *)0x0)) &&
         (iVar13 = (*_DAT_00280838)(str_1001e78b,&local_348,0x41), iVar13 != 0)))))) {
      pcVar17 = str_1001e7ec;
    }
    else {
      pcVar17 = str_1001e810;
    }
    recovered_10009110(pcVar17,str_1001e78b);
  }
LAB_100060b9:
  local_344 = 0x6a09e667;
  local_348 = (undefined4 *)0xf3bcc908;
  local_33c = (char *)0xbb67ae85;
  local_340 = -4.764355e-36;
  local_334 = 0x3c6ef372;
  local_338 = 0xfe94f82b;
  local_32c = 0xa54ff53a;
  local_330 = 0x5f1d36f1;
  local_324 = 0x510e527f;
  local_328 = 0xade682d1;
  local_320[1] = 0x9b05688c;
  local_320[0] = 0x2b3e6c1f;
  local_320[3] = 0x1f83d9ab;
  local_320[2] = 0xfb41bd6b;
  local_320[5] = 0x5be0cd19;
  local_320[4] = 0x137e2179;
  local_280 = 0;
  local_304 = 0;
  local_308 = 0x20;
  recovered_10001d70(local_300,(undefined4 *)&DAT_10023f04,0x20);
  local_280 = local_280 + 0x20;
  if (local_280 == 0x80) {
    recovered_10009e40(&local_348,(int)local_300);
    local_280 = 0;
  }
  recovered_1000b150(&local_348,(uint *)&local_428);
  local_428 = local_428 & 0xf8;
  local_409 = local_409 & 0x3f | 0x40;
  recovered_1000b7d0(&local_348,(int)&local_428);
  recovered_1000ec90(local_98,local_248);
  recovered_1000c480((longlong *)&local_3d8,(longlong *)&local_348,(longlong *)local_98);
  recovered_1000c480((longlong *)local_118,local_2c8,(longlong *)local_98);
  recovered_1000eec0(&DAT_10023f24,(longlong *)local_118);
  recovered_1000eec0(local_138,(longlong *)&local_3d8);
  DAT_10023f43 = DAT_10023f43 ^ local_138[0] << 7;
  local_428 = 0;
  local_427 = 0;
  local_426 = 0;
  local_425 = 0;
  local_424 = 0;
  local_423 = 0;
  local_422 = 0;
  local_421 = 0;
  local_420 = 0;
  local_41f = 0;
  local_41e = 0;
  local_41d = 0;
  local_41c = 0;
  local_41b = 0;
  local_41a = 0;
  local_419 = 0;
  local_418 = 0;
  local_417 = 0;
  local_416 = 0;
  local_415 = 0;
  local_414 = 0;
  local_413 = 0;
  local_412 = 0;
  local_411 = 0;
  local_410 = 0;
  local_40f = 0;
  local_40e = 0;
  local_40d = 0;
  local_40c = 0;
  local_40b = 0;
  local_40a = 0;
  local_409 = 0;
  local_408 = 0;
  local_407 = 0;
  local_406 = 0;
  local_405 = 0;
  local_404 = 0;
  local_403 = 0;
  local_402 = 0;
  local_401 = 0;
  local_400 = 0;
  local_3ff = 0;
  local_3fe = 0;
  local_3fd = 0;
  local_3fc = 0;
  local_3fb = 0;
  local_3fa = 0;
  local_3f9 = 0;
  local_3f8 = 0;
  local_3f7 = 0;
  local_3f6 = 0;
  local_3f5 = 0;
  local_3f4 = 0;
  local_3f3 = 0;
  local_3f2 = 0;
  local_3f1 = 0;
  local_3f0 = 0;
  local_3ef = 0;
  local_3ee = 0;
  local_3ed = 0;
  local_3ec = 0;
  local_3eb = 0;
  local_3ea = 0;
  local_3e9 = 0;
  uVar15 = recovered_100024c0(((uintptr_t)pf_module_state + 0x324U));
  local_348 = (undefined4 *)
              (uVar15 >> 0x18 | (uVar15 & 0xff0000) >> 8 | (uVar15 & 0xff00) << 8 | uVar15 << 0x18);
  puVar26 = (undefined4 *)&DAT_10023f44;
  recovered_10001d70((undefined4 *)&DAT_10023f44,&local_348,4);
  if (uVar15 < 0x30) {
    if (uVar15 == 0) {
      uVar23 = 4;
    }
    else {
      recovered_10001d70((undefined4 *)&DAT_10023f48,
                         (undefined4 *)(str_1001de3e + 10),uVar15);
      uVar23 = uVar15 + 4;
      if (0x2b < uVar15) goto LAB_100064e5;
    }
    local_348 = (undefined4 *)0x20000000;
    recovered_10001d70((undefined4 *)(&DAT_10023f44 + uVar23),&local_348,4);
    uVar23 = uVar15 + 8;
    if (0x1f < uVar15 - 0xc) {
      recovered_10001d70((undefined4 *)(uVar15 + ((uintptr_t)pf_module_state + 0x6428U)),(undefined4 *)&DAT_10023f24,0x20);
      uVar23 = uVar15 + 0x28;
    }
  }
  else {
    uVar23 = 4;
  }
LAB_100064e5:
  local_348 = (undefined4 *)0x6a09e667;
  local_344 = 0xbb67ae85;
  local_340 = 0.014584409;
  local_33c = (char *)0xa54ff53a;
  local_338 = 0x510e527f;
  local_334 = 0x9b05688c;
  local_330 = 0x1f83d9ab;
  local_32c = 0x5be0cd19;
  local_2e0 = 0;
  local_324 = 0;
  local_328 = uVar23;
  DAT_10023f78 = uVar23;
  do {
    uVar15 = 0x40U - local_2e0;
    if (uVar23 < 0x40U - local_2e0) {
      uVar15 = uVar23;
    }
    recovered_10001d70((undefined4 *)((int)local_320 + local_2e0),puVar26,uVar15);
    local_2e0 = local_2e0 + uVar15;
    if (local_2e0 == 0x40) {
      recovered_1000f5d0(&local_348,(int)local_320);
      local_2e0 = 0;
    }
    puVar26 = (undefined4 *)((int)puVar26 + uVar15);
    uVar23 = uVar23 - uVar15;
  } while (uVar23 != 0);
  recovered_1000b520(&local_348,&local_3d8);
  uVar15 = 0;
  pcVar17 = (char *)((int)&local_348 + 3);
  do {
    uVar23 = 0;
    if (uVar15 < 0x1e) {
      uVar23 = (uint)*(byte *)((int)&local_3d8 + uVar15 + 2);
    }
    cVar12 = '=';
    if (uVar15 < 0x1e) {
      cVar12 = str_1001e878[uVar23 & 0x3f];
    }
    uVar27 = (uint)*(byte *)((int)&local_3d8 + uVar15 + 1) << 8;
    cVar1 = str_1001e878[((uint)*(byte *)((int)&local_3d8 + uVar15) << 0x10 | uVar27) >> 0xc & 0x3f]
    ;
    cVar2 = str_1001e878[(uVar23 | uVar27) >> 6 & 0x3f];
    pcVar17[-3] = str_1001e878[*(byte *)((int)&local_3d8 + uVar15) >> 2];
    pcVar17[-2] = cVar1;
    pcVar17[-1] = cVar2;
    *pcVar17 = cVar12;
    pcVar17 = pcVar17 + 4;
    bVar34 = uVar15 < 0x1d;
    uVar15 = uVar15 + 3;
  } while (bVar34);
  local_320[1] = local_320[1] & 0xffffff00;
  iVar13 = 0x2c;
  do {
    if (*(char *)((int)local_320 + iVar13 + -0x29) != '=') break;
    *(undefined1 *)((int)local_320 + iVar13 + -0x29) = 0;
    iVar13 = iVar13 + -1;
  } while (iVar13 != 0);
  recovered_10004b20(&DAT_10023f7c,0x40,str_1001e86e,&local_348);
  recovered_10009110(str_1001e840,&DAT_10023f7c);
  iVar13 = 0;
  piVar28 = &DAT_1001f04c;
  do {
    *piVar28 = iVar13;
    pbVar24 = (byte *)0x0;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))))) {
      pbVar18 = (byte *)(*_DAT_0028084c)(0x89cc);
      pbVar24 = (byte *)0x0;
      if (pbVar18 != (byte *)0x0) {
        recovered_10002000(pbVar18,0,0x89cc);
        pbVar24 = pbVar18;
      }
    }
    piVar28[0x4c] = (int)pbVar24;
    pbVar18 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
      pbVar19 = (byte *)(*_DAT_0028084c)(0x890c);
      pbVar24 = (byte *)0x0;
      if (pbVar19 != (byte *)0x0) {
        recovered_10002000(pbVar19,0,0x890c);
        pbVar24 = pbVar19;
      }
    }
    piVar28[0x4e] = (int)pbVar24;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))))) {
      pbVar24 = (byte *)(*_DAT_0028084c)(0x2000);
      if (pbVar24 != (byte *)0x0) {
        recovered_10002000(pbVar24,0,0x2000);
        pbVar18 = pbVar24;
      }
    }
    piVar28[0x4f] = (int)pbVar18;
    pbVar18 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
      pbVar19 = (byte *)(*_DAT_0028084c)(0x2000);
      pbVar24 = (byte *)0x0;
      if (pbVar19 != (byte *)0x0) {
        recovered_10002000(pbVar19,0,0x2000);
        pbVar24 = pbVar19;
      }
    }
    piVar28[0x12a] = (int)pbVar24;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))))) {
      pbVar24 = (byte *)(*_DAT_0028084c)(0x2000);
      if (pbVar24 != (byte *)0x0) {
        recovered_10002000(pbVar24,0,0x2000);
        pbVar18 = pbVar24;
      }
    }
    piVar28[300] = (int)pbVar18;
    pbVar18 = (byte *)0x0;
    pbVar24 = (byte *)0x0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
      pbVar19 = (byte *)(*_DAT_0028084c)(0x8000);
      pbVar24 = (byte *)0x0;
      if (pbVar19 != (byte *)0x0) {
        recovered_10002000(pbVar19,0,0x8000);
        pbVar24 = pbVar19;
      }
    }
    piVar28[0x2e0] = (int)pbVar24;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))))) {
      pbVar24 = (byte *)(*_DAT_0028084c)(0x10000);
      if (pbVar24 != (byte *)0x0) {
        recovered_10002000(pbVar24,0,0x10000);
        pbVar18 = pbVar24;
      }
    }
    piVar28[0x364] = (int)pbVar18;
    if ((((((piVar28[0x4c] == 0) || (piVar28[0x4e] == 0)) || (piVar28[0x4f] == 0)) ||
         ((piVar28[0x12a] == 0 || (piVar28[300] == 0)))) || (pbVar18 == (byte *)0x0)) ||
       (piVar28[0x2e0] == 0)) {
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
        (*_DAT_00280828)(str_1001e4ae);
      }
      if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) || (_DAT_00280808 < 0xc)) ||
         ((_DAT_00280808 < 0x2c || (_DAT_00280828 == (code *)0x0)))) goto LAB_10006cb5;
      goto LAB_10006b5d;
    }
    iVar13 = iVar13 + 1;
    piVar28 = piVar28 + 0x36f;
  } while (iVar13 != 4);
  recovered_10002000((byte *)&local_348,0,0x18);
  local_348 = (undefined4 *)0x18;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 &&
      (((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)) &&
       (iVar13 = (*_DAT_00280968)(&local_348), iVar13 != 0)))))) {
    uVar15 = local_338;
  }
  else {
    uVar15 = 0;
  }
  bVar34 = CARRY4(uVar15 - DAT_100240c0,DAT_100240c8);
  DAT_100240c8 = (uVar15 - DAT_100240c0) + DAT_100240c8;
  DAT_100240cc = DAT_100240cc + (uint)bVar34;
  DAT_100240c0 = uVar15;
  uVar35 = recovered_100018c0((uint)((ulonglong)DAT_100240c8 * 1000),
                              DAT_100240cc * 1000 + (int)((ulonglong)DAT_100240c8 * 1000 >> 0x20),
                              DAT_100240bc,0);
  uVar15 = (uint)uVar35;
  recovered_10002000((byte *)&local_348,0,0xc0);
  local_348 = (undefined4 *)0xc0;
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((((0xb < _DAT_00280808 && ((0x127 < _DAT_00280808 && (_DAT_00280924 != (code *)0x0)))) &&
       (iVar13 = (*_DAT_00280924)(&local_348), iVar13 != 0)) && ((local_344 & 1) != 0)))) {
    recovered_10001d70((undefined4 *)&DAT_10022e54,&local_338,6);
    DAT_10022e5a = 1;
    recovered_10009bf0(&local_348,0xc0);
    recovered_10004b20((char *)&local_3d8,0x18,str_1001e8de,local_338 & 0xff,local_338 >> 8 & 0xff,
                       local_338 >> 0x10 & 0xff,local_338 >> 0x18,local_334 & 0xff,
                       local_334 >> 8 & 0xff);
    pcVar17 = (char *)local_2c8;
    if ((char)local_2c8[0] == '\0') {
      pcVar17 = (char *)&local_308;
    }
    recovered_10009110(str_1001e8fc,&local_3d8,pcVar17);
    if ((local_344 & 2) == 0) {
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
        (*_DAT_00280828)(str_1001e911);
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
        (*_DAT_00280828)(&DAT_1001e5a9);
      }
    }
    iVar13 = 0xc;
    puVar26 = &DAT_100229ac;
    do {
      pbVar24 = (byte *)0x0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x4f < _DAT_00280808 && (_DAT_0028084c != (code *)0x0)))) {
        pbVar18 = (byte *)(*_DAT_0028084c)(0x4000);
        if (pbVar18 != (byte *)0x0) {
          recovered_10002000(pbVar18,0,0x4000);
          pbVar24 = pbVar18;
        }
      }
      puVar26[-4] = pbVar24;
      if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
         ((_DAT_00280808 < 0xc ||
          (((_DAT_00280808 < 0x50 || (_DAT_0028084c == (code *)0x0)) ||
           (pbVar24 = (byte *)(*_DAT_0028084c)(0x8000), pbVar24 == (byte *)0x0)))))) {
        *puVar26 = 0;
        puVar26[-0xe] = 0;
LAB_10006fda:
        if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
           ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x2c || (_DAT_00280828 == (code *)0x0))))))
        goto LAB_10006c75;
        pcVar17 = str_1001e93f;
        goto LAB_10006c6f;
      }
      recovered_10002000(pbVar24,0,0x8000);
      *puVar26 = pbVar24;
      puVar26[-0xe] = 0;
      if (puVar26[-4] == 0) goto LAB_10006fda;
      puVar26 = puVar26 + 0x1a;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    if (DAT_100227fa == '\x01') {
      DAT_10022e5b = '\0';
      recovered_1000a820(local_118,(undefined4 *)0x4);
      DAT_10022ed4 = local_118[0] >> 0x18 | (local_118[0] & 0xff0000) >> 8 |
                     (local_118[0] & 0xff00) << 8 | local_118[0] << 0x18;
      DAT_10022ed0 = 1;
      DAT_10022ee4 = 2000;
      DAT_10022ee8 = 0;
      DAT_10022ee0 = uVar15;
      recovered_1000f970(1,0);
    }
    else {
      DAT_10022ed0 = 0;
      recovered_1000f850(DAT_100227fc,DAT_10022800,DAT_10022804);
    }
    uVar23 = (uint)DAT_10022738;
    iVar13 = recovered_10002500(&DAT_1002277a,&DAT_1001e508);
    pcVar17 = &DAT_1001e513;
    if (iVar13 == 0) {
      pcVar17 = str_1001e50a;
    }
    recovered_10009110(str_1001e4d5,uVar23,&DAT_1002273a,pcVar17);
    local_3e8 = 0;
    local_3dc = 0;
    while( true ) {
      if (((((bVar33) || (_DAT_00280800 != 0x50414d57)) || (_DAT_00280804 == 0)) ||
          ((_DAT_00280808 < 0xc || (_DAT_00280808 < 0x30)))) || (_DAT_0028082c == (code *)0x0)) {
        bVar34 = false;
      }
      else {
        cVar12 = (*_DAT_0028082c)();
        bVar34 = cVar12 == '\x1b';
      }
      recovered_10002000((byte *)&local_348,0,0x18);
      local_348 = (undefined4 *)0x18;
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 &&
          (((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)) &&
           (iVar13 = (*_DAT_00280968)(&local_348), iVar13 != 0)))))) {
        uVar23 = local_338;
      }
      else {
        uVar23 = 0;
      }
      bVar32 = CARRY4(uVar23 - DAT_100240c0,DAT_100240c8);
      DAT_100240c8 = (uVar23 - DAT_100240c0) + DAT_100240c8;
      DAT_100240cc = DAT_100240cc + (uint)bVar32;
      DAT_100240c0 = uVar23;
      uVar35 = recovered_100018c0((uint)((ulonglong)DAT_100240c8 * 1000),
                                  DAT_100240cc * 1000 +
                                  (int)((ulonglong)DAT_100240c8 * 1000 >> 0x20),DAT_100240bc,0);
      uVar23 = (uint)uVar35;
      if (bVar34) break;
      local_358 = recovered_100091d0(0x20,uVar23);
      bVar34 = local_358 != 0;
      if (DAT_10022ed0 - 1U < 2) {
LAB_10007204:
        if (uVar23 - DAT_10022ee0 < DAT_10022ee4) goto LAB_100073bd;
        DAT_10022ee8 = DAT_10022ee8 + 1;
        if (DAT_10022ee8 < 4 || DAT_10022ed0 != 2) {
          if ((DAT_10022ed0 == 4) && (DAT_10022eec <= uVar23 - DAT_10022ef0)) {
            if (((_DAT_00280800 == 0x50414d57) &&
                (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x2b < _DAT_00280808)))) &&
               (_DAT_00280828 != (code *)0x0)) {
              (*_DAT_00280828)(str_1001e9b3);
            }
            if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
               ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))
               ) {
              (*_DAT_00280828)(&DAT_1001e5a9);
            }
            DAT_10022e5b = '\0';
            goto LAB_1000723e;
          }
          if (DAT_10022ee4 < 16000) {
            DAT_10022ee4 = DAT_10022ee4 * 2;
          }
          if (DAT_10022ed0 == 2) {
            bVar21 = 3;
            iVar13 = 0;
            DAT_10022ee0 = uVar23;
            goto LAB_100073b8;
          }
          if (DAT_10022ed0 != 1) goto LAB_100073ae;
          DAT_10022ee0 = uVar23;
          if ((DAT_10022ee8 & 3) == 0) {
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
              (*_DAT_00280828)(str_1001e9cb);
            }
            if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
               ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))
               ) {
              (*_DAT_00280828)(&DAT_1001e5a9);
            }
          }
        }
        else {
LAB_1000723e:
          recovered_1000a820(&local_348,(undefined4 *)0x4);
          DAT_10022ed4 = (uint)local_348 >> 0x18 | ((uint)local_348 & 0xff0000) >> 8 |
                         ((uint)local_348 & 0xff00) << 8 | (int)local_348 << 0x18;
          DAT_10022ed0 = 1;
          DAT_10022ee4 = 2000;
          DAT_10022ee8 = 0;
          DAT_10022ee0 = uVar23;
        }
        bVar21 = 1;
        iVar13 = 0;
LAB_100073b8:
        recovered_1000f970(bVar21,iVar13);
      }
      else if (DAT_10022ed0 == 3) {
        if (-1 < (int)(uVar23 - DAT_10022ef4)) {
          DAT_10022ed0 = 4;
          DAT_10022ee4 = 4000;
          DAT_10022ee8 = 0;
LAB_100073ae:
          bVar21 = 3;
          iVar13 = 1;
          DAT_10022ee0 = uVar23;
          goto LAB_100073b8;
        }
      }
      else if (DAT_10022ed0 == 4) goto LAB_10007204;
LAB_100073bd:
      recovered_10009640(&DAT_10022974,uVar23);
      recovered_10009640(&DAT_100229dc,uVar23);
      recovered_10009640(&DAT_10022a44,uVar23);
      recovered_10009640(&DAT_10022aac,uVar23);
      recovered_10009640(&DAT_10022b14,uVar23);
      recovered_10009640(&DAT_10022b7c,uVar23);
      recovered_10009640((uint *)&DAT_10022be4,uVar23);
      recovered_10009640((uint *)&DAT_10022c4c,uVar23);
      recovered_10009640((uint *)&DAT_10022cb4,uVar23);
      recovered_10009640((uint *)&DAT_10022d1c,uVar23);
      recovered_10009640((uint *)&DAT_10022d84,uVar23);
      recovered_10009640((uint *)&DAT_10022dec,uVar23);
      iVar13 = 0;
      do {
        iVar14 = iVar13 * 0x68;
        if ((((&DAT_10022974)[iVar13 * 0x1a] == 2) &&
            (((puVar8 = &DAT_10022974 + iVar13 * 0x1a, DAT_1001f048 != '\x01' ||
              (DAT_1001f050 != puVar8)) || (DAT_1001f054 != (&DAT_10022978)[iVar13 * 0x1a])))) &&
           ((((DAT_1001fe04 != '\x01' || (DAT_1001fe0c != puVar8)) ||
             (DAT_1001fe10 != (&DAT_10022978)[iVar13 * 0x1a])) &&
            ((((DAT_10020bc0 != '\x01' || (DAT_10020bc8 != puVar8)) ||
              (DAT_10020bcc != (&DAT_10022978)[iVar13 * 0x1a])) &&
             (((DAT_1002197c != '\x01' || (DAT_10021984 != puVar8)) ||
              (DAT_10021988 != (&DAT_10022978)[iVar13 * 0x1a])))))))) {
          if (DAT_1002296c != 0) {
            pbVar24 = (byte *)&DAT_1001f048;
            uVar27 = DAT_1002296c;
            do {
              if ((*pbVar24 == 0) && (pbVar24[0xb91] == 0)) {
                uVar16 = *(undefined4 *)(pbVar24 + 4);
                uVar3 = *(undefined4 *)(pbVar24 + 0x134);
                uVar4 = *(undefined4 *)(pbVar24 + 0x13c);
                uVar5 = *(undefined4 *)(pbVar24 + 0x140);
                uVar6 = *(undefined4 *)(pbVar24 + 0x4ac);
                uVar7 = *(undefined4 *)(pbVar24 + 0x4b4);
                local_3e4 = *(uint **)(pbVar24 + 0xb84);
                local_354 = *(undefined4 *)(pbVar24 + 0xd94);
                recovered_10002000(pbVar24,0,0xdbc);
                *(undefined4 *)(pbVar24 + 4) = uVar16;
                *(undefined4 *)(pbVar24 + 0x134) = uVar3;
                *(undefined4 *)(pbVar24 + 0x13c) = uVar4;
                *(undefined4 *)(pbVar24 + 0x140) = uVar5;
                *(undefined4 *)(pbVar24 + 0x4ac) = uVar6;
                *(undefined4 *)(pbVar24 + 0x4b4) = uVar7;
                *(uint **)(pbVar24 + 0xb84) = local_3e4;
                *(undefined4 *)(pbVar24 + 0xd94) = local_354;
                *pbVar24 = 1;
                *(uint **)(pbVar24 + 8) = puVar8;
                *(undefined4 *)(pbVar24 + 0xc) = (&DAT_10022978)[iVar13 * 0x1a];
                pbVar24[0x10] = 0;
                pbVar24[0x11] = 0;
                pbVar24[0x12] = 0;
                pbVar24[0x13] = 0;
                *(uint *)(pbVar24 + 0x14) = uVar23;
                *(uint *)(pbVar24 + 0x18) = uVar23;
                uVar27 = (&DAT_10022984)[iVar13 * 0x1a];
                recovered_10004b20((char *)&local_348,0x14,str_1001ef92,uVar27 >> 0x18,
                                   uVar27 >> 0x10 & 0xff,uVar27 >> 8 & 0xff,uVar27 & 0xff);
                recovered_10004b20((char *)(pbVar24 + 0x11c),0x18,str_1001e9ec,&local_348,
                                   (uint)(ushort)(&DAT_10022988)[iVar13 * 0x34]);
                DAT_10023f00 = DAT_10023f00 + 1;
                recovered_10009110(str_1001ea06,*(uint *)(pbVar24 + 4),pbVar24 + 0x11c,str_1001e9f2)
                ;
                if (((*puVar8 & 0xfffffffe) == 2) &&
                   ((*(char *)(iVar14 + ((uintptr_t)pf_module_state + 0x4e99U)) == '\0' &&
                    (0x23 < (&DAT_100229b4)[iVar13 * 0x1a] - 0x7fdd)))) {
                  puVar26 = (undefined4 *)(&DAT_100229ac)[iVar13 * 0x1a];
                  uVar27 = (&DAT_100229b4)[iVar13 * 0x1a] + *(int *)(iVar14 + ((uintptr_t)pf_module_state + 0x4e8cU)) & 0x7fff;
                  uVar25 = 0x8000 - uVar27;
                  if (0x23 < uVar25) {
                    uVar25 = 0x24;
                  }
                  recovered_10001d70((undefined4 *)((int)puVar26 + uVar27),
                                     (undefined4 *)str_1001e0e4,uVar25);
                  if (0x7fdc < uVar27) {
                    recovered_10001d70(puVar26,(undefined4 *)(str_1001e0e4 + uVar25),0x24 - uVar25);
                  }
                  (&DAT_100229b4)[iVar13 * 0x1a] = (&DAT_100229b4)[iVar13 * 0x1a] + 0x24;
                }
                recovered_10011760((int)pbVar24);
                goto LAB_100077bb;
              }
              pbVar24 = pbVar24 + 0xdbc;
              uVar27 = uVar27 - 1;
            } while (uVar27 != 0);
          }
          if (uVar23 - (&DAT_100229d4)[iVar13 * 0x1a] < 90000) {
LAB_100077bb:
            recovered_10011550(puVar8,uVar23);
          }
          else {
            recovered_10011090((int)puVar8,
                               (uint)(byte)(&DAT_100229be)[iVar14] +
                               (uint)(byte)(&DAT_100229bc)[iVar14] +
                               (&DAT_100229b8)[iVar13 * 0x1a] + (&DAT_10022990)[iVar13 * 0x1a],0,0);
            (&DAT_100229c3)[iVar14] = 1;
            *puVar8 = 0;
            (&DAT_100229a4)[iVar13 * 0x1a] = 0;
            (&DAT_100229b4)[iVar13 * 0x1a] = 0;
            (&DAT_100229cc)[iVar14] = 0;
          }
        }
        iVar13 = iVar13 + 1;
      } while (iVar13 != 0xc);
      iVar13 = 0;
      do {
        iVar14 = iVar13 * 0xdbc;
        puVar30 = &DAT_1001f048 + iVar14;
        if ((&DAT_1001f048)[iVar14] == '\x01') {
          puVar8 = (&DAT_1001f050)[iVar13 * 0x36f];
          if (((puVar8 == (uint *)0x0) || (puVar8[1] != (&DAT_1001f054)[iVar13 * 0x36f])) ||
             (*puVar8 == 0)) {
            if (((&DAT_1001fdfc)[iVar14] == '\0') && ((&DAT_1001fdf4)[iVar14] == '\0')) {
              recovered_10009110(str_1001ea06,(&DAT_1001f04c)[iVar13 * 0x36f],&DAT_1001f164 + iVar14
                                 ,str_1001ea2c);
            }
            if ((&DAT_1001fbd9)[iVar14] == '\x01') {
              *puVar30 = 0;
              (&DAT_1001f050)[iVar13 * 0x36f] = (uint *)0x0;
            }
            else {
LAB_100077cc:
              recovered_10009b20(puVar30);
            }
          }
          else {
            uVar27 = puVar8[0xc];
            if (uVar27 != 0) {
              puVar26 = (undefined4 *)(&DAT_1001f064 + iVar14);
              do {
                uVar25 = (&DAT_1001f180)[iVar13 * 0x36f];
                if ((0x89cb < uVar25) || ((&DAT_1001fdfc)[iVar14] != '\0')) break;
                iVar20 = (&DAT_1001f17c)[iVar13 * 0x36f];
                uVar29 = 0x89cc - uVar25;
                if (uVar27 < 0x89cc - uVar25) {
                  uVar29 = uVar27;
                }
                puVar9 = (undefined4 *)puVar8[10];
                uVar31 = 0x4000 - puVar8[0xb];
                uVar27 = uVar29;
                if (uVar31 < uVar29) {
                  uVar27 = uVar31;
                }
                recovered_10001d70((undefined4 *)(uVar25 + iVar20),
                                   (undefined4 *)(puVar8[0xb] + (int)puVar9),uVar27);
                if (uVar31 < uVar29) {
                  recovered_10001d70((undefined4 *)((int)(uVar25 + iVar20) + uVar27),puVar9,
                                     uVar29 - uVar27);
                }
                puVar8[0xb] = puVar8[0xb] + uVar29 & 0x3fff;
                uVar27 = puVar8[0xc];
                puVar8[0xc] = uVar27 - uVar29;
                if ((puVar8[0xd] < puVar8[9]) && (puVar8[9] * 2 <= 0x4000 - (uVar27 - uVar29))) {
                  *(undefined1 *)((int)puVar8 + 0x4e) = 1;
                }
                uVar29 = uVar29 + (&DAT_1001f180)[iVar13 * 0x36f];
                (&DAT_1001f180)[iVar13 * 0x36f] = uVar29;
                (&DAT_1001f060)[iVar13 * 0x36f] = uVar23;
                if ((&DAT_1001f058)[iVar13 * 0x36f] == 0) {
                  if (uVar29 != 0) {
                    do {
                      puVar10 = (uint *)(&DAT_1001f17c)[iVar13 * 0x36f];
                      uVar27 = 1;
                      while (*(char *)((int)puVar10 + (uVar27 - 1)) != '\n') {
                        iVar20 = (1 - uVar29) + uVar27;
                        uVar27 = uVar27 + 1;
                        if (iVar20 == 1) goto LAB_10007a03;
                      }
                      if (uVar27 - uVar29 == 1) {
LAB_10007a03:
                        if (0xfe < uVar29) {
                          pcVar17 = str_1001ea70;
LAB_10007a18:
                          recovered_100097e0((int)puVar30,2,(undefined4 *)pcVar17);
                        }
                        break;
                      }
                      if (uVar27 != 1) {
                        uVar25 = uVar27 - 1;
                        do {
                          cVar12 = *(char *)((int)puVar10 + (uVar25 - 1));
                          if ((cVar12 != '\r') && (cVar12 != '\n')) {
                            if (3 < uVar25) {
                              iVar20 = recovered_10002230(puVar10,(uint *)&DAT_1001ea8d,4);
                              if (iVar20 == 0) {
                                if (((7 < uVar25) &&
                                    (iVar20 = recovered_10002230((uint *)(&DAT_1001f17c)
                                                                         [iVar13 * 0x36f],
                                                                 (uint *)str_1001ea92,8),
                                    iVar20 != 0)) &&
                                   (iVar20 = recovered_10002230((uint *)(&DAT_1001f17c)
                                                                        [iVar13 * 0x36f],
                                                                (uint *)str_1001ea9b,8), iVar20 != 0
                                   )) {
                                  pcVar17 = str_1001eaa4;
                                  goto LAB_10007a18;
                                }
                                uVar29 = 0xff;
                                if (uVar25 < 0xff) {
                                  uVar29 = uVar25;
                                }
                                recovered_10001d70(puVar26,(undefined4 *)
                                                           (&DAT_1001f17c)[iVar13 * 0x36f],uVar29);
                                (&DAT_1001f064)[uVar29 + iVar14] = 0;
                                iVar20 = 0;
                                uVar29 = (&DAT_1001f180)[iVar13 * 0x36f] - uVar27;
                                if (uVar27 <= (uint)(&DAT_1001f180)[iVar13 * 0x36f] && uVar29 != 0)
                                {
                                  recovered_10001e30((undefined4 *)(&DAT_1001f17c)[iVar13 * 0x36f],
                                                     (undefined4 *)
                                                     ((int)(&DAT_1001f17c)[iVar13 * 0x36f] + uVar27)
                                                     ,uVar29);
                                  iVar20 = (&DAT_1001f180)[iVar13 * 0x36f] - uVar27;
                                }
                                (&DAT_1001f180)[iVar13 * 0x36f] = iVar20;
                                recovered_10009bf0(puVar26,uVar25);
                                recovered_100183f0(puVar30,str_1001eac1,puVar26);
                                (&DAT_1001f058)[iVar13 * 0x36f] = 1;
                                goto LAB_1000785c;
                              }
                              uVar29 = (&DAT_1001f180)[iVar13 * 0x36f];
                            }
                            break;
                          }
                          uVar25 = uVar25 - 1;
                        } while (uVar25 != 0);
                      }
                      if (uVar29 < uVar27 || uVar29 - uVar27 == 0) {
                        (&DAT_1001f180)[iVar13 * 0x36f] = 0;
                        break;
                      }
                      recovered_10001e30((undefined4 *)(&DAT_1001f17c)[iVar13 * 0x36f],
                                         (undefined4 *)
                                         ((int)(&DAT_1001f17c)[iVar13 * 0x36f] + uVar27),
                                         uVar29 - uVar27);
                      uVar29 = (&DAT_1001f180)[iVar13 * 0x36f] - uVar27;
                      (&DAT_1001f180)[iVar13 * 0x36f] = uVar29;
                    } while (uVar29 != 0);
                    if ((&DAT_1001f058)[iVar13 * 0x36f] != 0) goto LAB_1000785c;
                  }
                }
                else {
LAB_1000785c:
                  recovered_100143a0((int)puVar30);
                }
                uVar27 = puVar8[0xc];
              } while (uVar27 != 0);
            }
            if (((&DAT_1001f058)[iVar13 * 0x36f] == 0) &&
               (0x89cb < (uint)(&DAT_1001f180)[iVar13 * 0x36f])) {
              recovered_100097e0((int)puVar30,2,(undefined4 *)str_1001ea3c);
            }
            if ((&DAT_1001fdfc)[iVar14] == '\x01') {
              if (((2999 < uVar23 - (&DAT_1001fe00)[iVar13 * 0x36f]) || (*puVar8 == 3)) &&
                 ((&DAT_1001fbd9)[iVar14] == '\0')) goto LAB_100077cc;
LAB_10008223:
              recovered_10011550(puVar8,uVar23);
            }
            else if ((*puVar8 == 3) && ((&DAT_1001fdf3)[iVar14] == '\0')) {
              (&DAT_1001fdf3)[iVar14] = 1;
              (&DAT_1001fdfc)[iVar14] = 1;
              (&DAT_1001fe00)[iVar13 * 0x36f] = uVar23;
              *(undefined1 *)((int)puVar8 + 0x49) = 1;
              recovered_10011550(puVar8,uVar23);
            }
            else {
              if (((&DAT_1001f058)[iVar13 * 0x36f] == 3) ||
                 (uVar23 - (&DAT_1001f05c)[iVar13 * 0x36f] < 90000)) {
                if (((&DAT_1001f8bc)[iVar13 * 0x36f] == 1) &&
                   ((((&DAT_1001fdf2)[iVar14] == '\x01' && ((&DAT_1001fdf0)[iVar14] == '\0')) &&
                    ((&DAT_1001fbd4)[iVar13 * 0x36f] - 0x8001U < 0xffffffc0)))) {
                  (&DAT_1001fdf2)[iVar14] = 0;
                  recovered_100182a0((int)puVar30);
                  iVar20 = (&DAT_1001fbc8)[iVar13 * 0x36f];
                  if (iVar20 != 0) {
                    do {
                      if ((((&DAT_1001fbd8)[iVar14] != '\0') || ((&DAT_1001fbd9)[iVar14] != '\0'))
                         || (((&DAT_1001fdf0)[iVar14] != '\0' || ((&DAT_1001fdf3)[iVar14] != '\0')))
                         ) break;
                      bVar21 = (&DAT_1001fac6)[iVar14];
                      recovered_10001e30((undefined4 *)(&DAT_1001fac6 + iVar14),
                                         (undefined4 *)(&DAT_1001fac7 + iVar14),iVar20 - 1);
                      (&DAT_1001fbc8)[iVar13 * 0x36f] = (&DAT_1001fbc8)[iVar13 * 0x36f] + -1;
                      recovered_1001d2b0((int)puVar30,(uint)bVar21);
                      iVar20 = (&DAT_1001fbc8)[iVar13 * 0x36f];
                    } while (iVar20 != 0);
                  }
                }
                recovered_1001d890((int)puVar30);
                if ((&DAT_1001f898)[iVar14] == '\x01') {
                  do {
                    if ((((&DAT_1001f899)[iVar14] != '\0') || ((&DAT_1001f4ed)[iVar14] != '\0')) ||
                       ((uVar27 = (&DAT_1001fbd4)[iVar13 * 0x36f], uVar27 == 0 ||
                        ((((uVar25 = (&DAT_1001f8a4)[iVar13 * 0x36f], uVar25 == 0 ||
                           (puVar10 = (&DAT_1001f050)[iVar13 * 0x36f], puVar10 == (uint *)0x0)) ||
                          (puVar10[1] != (&DAT_1001f054)[iVar13 * 0x36f])) ||
                         (((*puVar10 & 0xfffffffe) != 2 || (puVar10[0x10] - 0x6fc1 < 0x1040))))))))
                    break;
                    if (uVar27 < uVar25) {
                      uVar25 = uVar27;
                    }
                    if ((uint)(&DAT_1001f8a8)[iVar13 * 0x36f] <= uVar25) {
                      uVar25 = (&DAT_1001f8a8)[iVar13 * 0x36f];
                    }
                    uVar27 = 0x6fc0 - puVar10[0x10];
                    if (uVar25 < uVar27) {
                      uVar27 = uVar25;
                    }
                    if (0xfff < uVar27) {
                      uVar27 = 0x1000;
                    }
                    puVar26 = (undefined4 *)(&DAT_1001f188)[iVar13 * 0x36f];
                    local_348 = (undefined4 *)CONCAT31(PF_PART3(local_348, 1),0x5e);
                    recovered_10001d70(puVar26,&local_348,1);
                    uVar25 = (&DAT_1001f8a0)[iVar13 * 0x36f];
                    local_348 = (undefined4 *)
                                (uVar25 >> 0x18 | (uVar25 & 0xff0000) >> 8 | (uVar25 & 0xff00) << 8
                                | uVar25 << 0x18);
                    recovered_10001d70((undefined4 *)((int)puVar26 + 1),&local_348,4);
                    local_348 = (undefined4 *)
                                ((uint)CONCAT11((char)uVar27,(char)(uVar27 >> 8)) << 0x10);
                    recovered_10001d70((undefined4 *)((int)puVar26 + 5),&local_348,4);
                    uVar29 = 0x8000 - (&DAT_1001fbd0)[iVar13 * 0x36f];
                    uVar25 = uVar29;
                    if (uVar27 <= uVar29) {
                      uVar25 = uVar27;
                    }
                    puVar9 = (undefined4 *)(&DAT_1001fbcc)[iVar13 * 0x36f];
                    recovered_10001d70((undefined4 *)((int)puVar26 + 9),
                                       (undefined4 *)((&DAT_1001fbd0)[iVar13 * 0x36f] + (int)puVar9)
                                       ,uVar25);
                    if (uVar29 < uVar27) {
                      recovered_10001d70((undefined4 *)((int)puVar26 + 9 + uVar25),puVar9,
                                         uVar27 - uVar25);
                    }
                    uVar16 = recovered_10011d50((int)puVar30,puVar26,uVar27 + 9);
                    if ((char)uVar16 == '\0') break;
                    (&DAT_1001fbd0)[iVar13 * 0x36f] =
                         (&DAT_1001fbd0)[iVar13 * 0x36f] + uVar27 & 0x7fff;
                    (&DAT_1001fbd4)[iVar13 * 0x36f] = (&DAT_1001fbd4)[iVar13 * 0x36f] - uVar27;
                    (&DAT_1001f8a4)[iVar13 * 0x36f] = (&DAT_1001f8a4)[iVar13 * 0x36f] - uVar27;
                    recovered_1001d890((int)puVar30);
                  } while ((&DAT_1001f898)[iVar14] != '\0');
                }
                if (((((&DAT_1001fdf3)[iVar14] == '\x01') && ((&DAT_1001fdf4)[iVar14] == '\0')) &&
                    ((&DAT_1001f4ed)[iVar14] == '\0')) &&
                   ((((((&DAT_1001fbd8)[iVar14] == '\0' && ((&DAT_1001fbd9)[iVar14] == '\0')) &&
                      ((&DAT_1001fdf0)[iVar14] == '\0')) && ((&DAT_1001fbd4)[iVar13 * 0x36f] == 0))
                    || ((&DAT_1001f89b)[iVar14] == '\x01')))) {
                  if ((((&DAT_1001f898)[iVar14] == '\x01') && ((&DAT_1001f89b)[iVar14] == '\0')) &&
                     ((puVar10 = (&DAT_1001f050)[iVar13 * 0x36f], puVar10 != (uint *)0x0 &&
                      ((puVar10[1] == (&DAT_1001f054)[iVar13 * 0x36f] &&
                       ((*puVar10 & 0xfffffffe) == 2)))))) {
                    if (puVar10[0x10] - 0x7f01 < 0x100) goto LAB_100081d8;
                    local_348 = (undefined4 *)(&DAT_1001f188)[iVar13 * 0x36f];
                    local_344 = 0x2000;
                    local_33c = (char *)((uint)local_33c & 0xffffff00);
                    PF_PART1(local_3d8, 0) = 'b';
                    recovered_10001d70(local_348,&local_3d8,1);
                    local_340 = 1.4013e-45;
                    recovered_1000f580(&local_348,(&DAT_1001f8a0)[iVar13 * 0x36f]);
                    recovered_1000b480(&local_348,(undefined4 *)str_1001ef53);
                    fVar11 = local_340;
                    local_3d8 = (uint)PF_PART3(local_3d8, 1) << 8;
                    if (((char)local_33c == '\0') && ((float)local_344 != local_340)) {
                      recovered_10001d70((undefined4 *)((int)local_348 + (int)local_340),&local_3d8,
                                         1);
                      local_340 = (float)((int)fVar11 + 1);
                    }
                    else {
                      local_33c = (char *)CONCAT31(PF_PART3(local_33c, 1),1);
                    }
                    recovered_1000f580(&local_348,(&DAT_1001fdf8)[iVar13 * 0x36f]);
                    recovered_10011d50((int)puVar30,local_348,(uint)local_340);
                    if ((&DAT_1001f899)[iVar14] == '\0') {
                      recovered_10019b60((int)puVar30);
                      (&DAT_1001f899)[iVar14] = 1;
                    }
                    if ((&DAT_1001f89a)[iVar14] == '\0') {
                      recovered_10019b60((int)puVar30);
                      (&DAT_1001f89a)[iVar14] = 1;
                    }
                  }
                  (&DAT_1001fdf4)[iVar14] = 1;
                  (&DAT_1001fe00)[iVar13 * 0x36f] = uVar23;
                  recovered_100183f0(puVar30,str_1001ef5f,(&DAT_1001fdf8)[iVar13 * 0x36f]);
                }
LAB_100081d8:
                if ((((&DAT_1001fdf4)[iVar14] == '\x01') && ((&DAT_1001fdfc)[iVar14] == '\0')) &&
                   (((&DAT_1001f89b)[iVar14] != '\0' ||
                    (2999 < uVar23 - (&DAT_1001fe00)[iVar13 * 0x36f])))) {
                  recovered_100097e0((int)puVar30,0xb,(undefined4 *)str_1001ea61);
                }
                goto LAB_10008223;
              }
              recovered_100097e0((int)puVar30,0xb,(undefined4 *)str_1001ea53);
            }
          }
        }
        else if (((&DAT_1001fbd9)[iVar14] == '\x01') && ((&DAT_1001fde0)[iVar13 * 0x36f] != 0)) {
          __atomic_thread_fence(__ATOMIC_SEQ_CST);
          (&DAT_1001fbd9)[iVar14] = 0;
          DAT_100240d0 = '\0';
          *(undefined1 *)((int)(&DAT_1001fddc)[iVar13 * 0x36f] + 0xffff) = 0;
          (&DAT_1001fdec)[iVar13 * 0x36f] = (&DAT_1001fddc)[iVar13 * 0x36f];
          (&DAT_1001fdf1)[iVar14] = 0;
          if ((&DAT_1001f8bc)[iVar13 * 0x36f] == 2) {
            iVar20 = (&DAT_1001fde4)[iVar13 * 0x36f];
            if ((&DAT_1001fdf3)[iVar14] == '\0') {
              (&DAT_1001fdf3)[iVar14] = 1;
              (&DAT_1001fdf8)[iVar13 * 0x36f] = (uint)(iVar20 == 0);
            }
          }
          else if ((&DAT_1001f8bc)[iVar13 * 0x36f] == 1) {
            (&DAT_1001fdf2)[iVar14] = 1;
          }
          (&DAT_1001fdf0)[iVar14] = 0;
        }
        pcVar17 = DAT_1001fddc;
        iVar13 = iVar13 + 1;
      } while (iVar13 != 4);
      if ((DAT_1001fbd9 != '\0') && (DAT_1001fde0 != 0)) {
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_1001fbd9 = '\0';
        DAT_100240d0 = '\0';
        (&DAT_1001fddc)[0xffff] = '\0';
        DAT_1001fdec = pcVar17;
        _DAT_1001fdf0 = 1;
        if (DAT_1001f8bc == 2) {
          if (DAT_1001fdf3 == '\0') {
            DAT_1001fdf8 = (uint)(DAT_1001fde4 == 0);
            DAT_1001fdf3 = '\x01';
          }
        }
        else if (DAT_1001f8bc == 1) {
          DAT_1001fdf2 = 1;
        }
        if (*pcVar17 == '\0') {
          _DAT_1001fdf0 = 0;
        }
      }
      pcVar17 = DAT_10020b98;
      if ((DAT_10020995 == '\x01') && (DAT_10020b9c != 0)) {
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_10020995 = '\0';
        DAT_100240d0 = '\0';
        DAT_10020b98[0xffff] = '\0';
        DAT_10020ba8 = pcVar17;
        DAT_10020bac = 1;
        if (DAT_10020678 == 1) {
          DAT_10020bae = 1;
        }
        else if ((DAT_10020678 == 2) && (DAT_10020baf == '\0')) {
          DAT_10020bb4 = (uint)(DAT_10020ba0 == 0);
          DAT_10020baf = '\x01';
        }
        if (*pcVar17 == '\0') {
          DAT_10020bac = 0;
        }
      }
      pcVar17 = DAT_10021954;
      if ((DAT_10021751 == '\x01') && (DAT_10021958 != 0)) {
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_10021751 = '\0';
        DAT_100240d0 = '\0';
        DAT_10021954[0xffff] = '\0';
        DAT_10021964 = pcVar17;
        DAT_10021968 = 1;
        if (DAT_10021434 == 1) {
          DAT_1002196a = 1;
        }
        else if ((DAT_10021434 == 2) && (DAT_1002196b == '\0')) {
          DAT_10021970 = (uint)(DAT_1002195c == 0);
          DAT_1002196b = '\x01';
        }
        if (*pcVar17 == '\0') {
          DAT_10021968 = 0;
        }
      }
      pcVar17 = DAT_10022710;
      if ((DAT_1002250d == '\x01') && (DAT_10022714 != 0)) {
        __atomic_thread_fence(__ATOMIC_SEQ_CST);
        DAT_1002250d = '\0';
        DAT_100240d0 = '\0';
        DAT_10022710[0xffff] = '\0';
        DAT_10022720 = pcVar17;
        DAT_10022724 = 1;
        if (DAT_100221f0 == 1) {
          DAT_10022726 = 1;
        }
        else if ((DAT_100221f0 == 2) && (DAT_10022727 == '\0')) {
          DAT_1002272c = (uint)(DAT_10022718 == 0);
          DAT_10022727 = '\x01';
        }
        if (*pcVar17 == '\0') {
          DAT_10022724 = 0;
        }
      }
      if (DAT_100240d0 == '\0') {
        iVar13 = (DAT_100240d4 & 3) * 0xdbc;
        if (((((((&DAT_1001f048)[iVar13] != '\0') &&
               (puVar30 = &DAT_1001f048 + iVar13, (&DAT_1001fbd8)[iVar13] == '\x01')) &&
              ((&DAT_1001fdfc)[iVar13] == '\0')) ||
             (((iVar13 = (DAT_100240d4 + 1 & 3) * 0xdbc, (&DAT_1001f048)[iVar13] == '\x01' &&
               (puVar30 = &DAT_1001f048 + iVar13, (&DAT_1001fbd8)[iVar13] == '\x01')) &&
              ((&DAT_1001fdfc)[iVar13] != '\x01')))) ||
            (((iVar13 = (DAT_100240d4 & 3 ^ 2) * 0xdbc, (&DAT_1001f048)[iVar13] == '\x01' &&
              (puVar30 = &DAT_1001f048 + iVar13, (&DAT_1001fbd8)[iVar13] == '\x01')) &&
             ((&DAT_1001fdfc)[iVar13] != '\x01')))) ||
           (((iVar13 = (DAT_100240d4 - 1 & 3) * 0xdbc, (&DAT_1001f048)[iVar13] == '\x01' &&
             (puVar30 = &DAT_1001f048 + iVar13, (&DAT_1001fbd8)[iVar13] == '\x01')) &&
            ((&DAT_1001fdfc)[iVar13] != '\x01')))) {
          DAT_100240d4 = *(int *)(puVar30 + 4) + 1U & 3;
          *(undefined2 *)(puVar30 + 0xb90) = 0x100;
          *(undefined4 *)(puVar30 + 0xd98) = 0;
          *(undefined4 *)(puVar30 + 0xd9c) = 0;
          *(uint *)(puVar30 + 0xda0) = uVar23;
          **(undefined1 **)(puVar30 + 0xd94) = 0;
          DAT_100240d0 = '\x01';
          if (DAT_10022970 == '\x01') {
            recovered_100183f0(puVar30,str_1001ef7e,puVar30 + 0xb92);
          }
          __atomic_thread_fence(__ATOMIC_SEQ_CST);
          if (((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
             (((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x98 || (_DAT_00280894 == (code *)0x0))))
              || (iVar13 = (*_DAT_00280894)(recovered_1001da90,puVar30,str_1001ef86), iVar13 == 0)))
             ) {
            **(undefined1 **)(puVar30 + 0xd94) = 0;
            uVar16 = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x9b < _DAT_00280808 && (_DAT_00280898 != (code *)0x0)))) {
              uVar16 = (*_DAT_00280898)(puVar30 + 0xb92,*(undefined4 *)(puVar30 + 0xd94),0x10000);
            }
            *(undefined4 *)(puVar30 + 0xd9c) = uVar16;
            __atomic_thread_fence(__ATOMIC_SEQ_CST);
            *(undefined4 *)(puVar30 + 0xd98) = 1;
          }
        }
      }
      cVar12 = DAT_10022e5b;
      if (DAT_1001f048 == '\x01') {
        bVar34 = (DAT_1001fbd4 != 0 || DAT_1001f180 != 0) || local_358 != 0;
      }
      if (DAT_1001fe04 == '\x01') {
        bVar34 = (bool)(bVar34 | (DAT_10020990 != 0 || DAT_1001ff3c != 0));
      }
      if (DAT_10020bc0 == '\x01') {
        bVar34 = (bool)(bVar34 | (DAT_1002174c != 0 || DAT_10020cf8 != 0));
      }
      if (DAT_1002197c == '\x01') {
        bVar34 = (bool)(bVar34 | (DAT_10022508 != 0 || DAT_10021ab4 != 0));
      }
      uVar22 = CONCAT11((char)local_3e8,DAT_1001fe04) & 0x1ff;
      if (DAT_10022e5b != (char)(uVar22 >> 8)) {
        if (DAT_10022e5b == '\0') {
          local_3e8 = local_3e8 & 0xffffff00;
        }
        else {
          recovered_10004b20((char *)&local_348,0x14,str_1001ef92,DAT_10022e5c >> 0x18,
                             DAT_10022e5c >> 0x10 & 0xff,DAT_10022e5c >> 8 & 0xff,
                             DAT_10022e5c & 0xff);
          iVar13 = recovered_10002500((byte *)&DAT_1002273a,&DAT_1001e508);
          pcVar17 = str_1001e542;
          if (iVar13 != 0) {
            pcVar17 = local_434;
          }
          recovered_10009110(str_1001e517,pcVar17,&local_348,(uint)DAT_10022738);
          uVar22 = CONCAT11(cVar12,DAT_1001fe04);
          local_3e8 = CONCAT31(0x1001ef,cVar12);
        }
      }
      uVar27 = (uint)(byte)((char)uVar22 + DAT_1001f048 + DAT_1002197c + DAT_10020bc0);
      if (local_3dc == uVar27) {
        if (59999 < uVar23 - uVar15) {
          if (DAT_10022970 == '\x01') goto LAB_100087ea;
          goto LAB_10008816;
        }
      }
      else {
LAB_100087ea:
        recovered_10009110(str_1001e549,uVar27,DAT_10023f00,DAT_10022ef8,DAT_10022efc);
        local_3dc = uVar27;
LAB_10008816:
        uVar15 = uVar23;
      }
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         ((0xb < _DAT_00280808 && ((0x9f < _DAT_00280808 && (_DAT_0028089c != (code *)0x0)))))) {
        (*_DAT_0028089c)();
      }
      if (((((!bVar34) && (_DAT_00280800 == 0x50414d57)) && (_DAT_00280804 != 0)) &&
          ((0xb < _DAT_00280808 && (0x177 < _DAT_00280808)))) && (_DAT_00280974 != (code *)0x0)) {
        (*_DAT_00280974)(1000);
      }
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      (*_DAT_00280828)(str_1001e586);
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
      (*_DAT_00280828)(&DAT_1001e5a9);
    }
    if (DAT_1001f048 != '\0') {
      recovered_100097e0(((uintptr_t)pf_module_state + 0x1524U),0xb,(undefined4 *)str_1001e594);
    }
    if (DAT_1001fe04 == '\x01') {
      recovered_100097e0(((uintptr_t)pf_module_state + 0x22e0U),0xb,(undefined4 *)str_1001e594);
    }
    if (DAT_10020bc0 == '\x01') {
      recovered_100097e0(((uintptr_t)pf_module_state + 0x309cU),0xb,(undefined4 *)str_1001e594);
    }
    if (DAT_1002197c == '\x01') {
      recovered_100097e0(((uintptr_t)pf_module_state + 0x3e58U),0xb,(undefined4 *)str_1001e594);
    }
    recovered_10002000((byte *)&local_348,0,0x18);
    local_348 = (undefined4 *)0x18;
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 &&
        (((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)) &&
         (iVar13 = (*_DAT_00280968)(&local_348), iVar13 != 0)))))) {
      uVar15 = local_338;
    }
    else {
      uVar15 = 0;
    }
    bVar33 = CARRY4(DAT_100240c8,uVar15 - DAT_100240c0);
    DAT_100240c8 = DAT_100240c8 + (uVar15 - DAT_100240c0);
    DAT_100240cc = DAT_100240cc + (uint)bVar33;
    iVar13 = 200;
    piVar28 = &DAT_10022974;
    local_3e4 = (uint *)&DAT_10022dec;
    DAT_100240c0 = uVar15;
    do {
      recovered_10002000((byte *)&local_348,0,0x18);
      local_348 = (undefined4 *)0x18;
      if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
         (((0xb < _DAT_00280808 && ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))) &&
          (iVar14 = (*_DAT_00280968)(&local_348), iVar14 != 0)))) {
        uVar15 = local_338;
      }
      else {
        uVar15 = 0;
      }
      bVar33 = CARRY4(uVar15 - DAT_100240c0,DAT_100240c8);
      DAT_100240c8 = (uVar15 - DAT_100240c0) + DAT_100240c8;
      DAT_100240cc = DAT_100240cc + (uint)bVar33;
      DAT_100240c0 = uVar15;
      uVar35 = recovered_100018c0((uint)((ulonglong)DAT_100240c8 * 1000),
                                  DAT_100240cc * 1000 +
                                  (int)((ulonglong)DAT_100240c8 * 1000 >> 0x20),DAT_100240bc,0);
      iVar14 = (int)uVar35;
      recovered_100091d0(0x10,iVar14);
      recovered_10009640(&DAT_10022974,iVar14);
      recovered_10009640(&DAT_100229dc,iVar14);
      recovered_10009640(&DAT_10022a44,iVar14);
      recovered_10009640(&DAT_10022aac,iVar14);
      recovered_10009640(&DAT_10022b14,iVar14);
      recovered_10009640(&DAT_10022b7c,iVar14);
      recovered_10009640((uint *)&DAT_10022be4,iVar14);
      recovered_10009640((uint *)&DAT_10022c4c,iVar14);
      recovered_10009640((uint *)&DAT_10022cb4,iVar14);
      recovered_10009640((uint *)&DAT_10022d1c,iVar14);
      recovered_10009640((uint *)&DAT_10022d84,iVar14);
      recovered_10009640(local_3e4,iVar14);
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x177 < _DAT_00280808 && (_DAT_00280974 != (code *)0x0)))) {
        (*_DAT_00280974)(2000);
      }
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    iVar13 = 0xc;
    do {
      if (*piVar28 != 0) {
        if (*piVar28 != 8) {
          recovered_10011090((int)piVar28,
                             (uint)*(byte *)((int)piVar28 + 0x4a) + (uint)*(byte *)(piVar28 + 0x12)
                             + piVar28[0x11] + piVar28[7],0,0);
        }
        *(undefined1 *)((int)piVar28 + 0x4f) = 1;
        *piVar28 = 0;
        piVar28[0xc] = 0;
        piVar28[0x10] = 0;
        *(undefined1 *)(piVar28 + 0x16) = 0;
      }
      piVar28 = piVar28 + 0x1a;
      iVar13 = iVar13 + -1;
    } while (iVar13 != 0);
    recovered_10009b20(&DAT_1001f048);
    recovered_10009b20(&DAT_1001fe04);
    recovered_10009b20(&DAT_10020bc0);
    recovered_10009b20(&DAT_1002197c);
    DAT_10023f04 = 0;
    DAT_10023f05 = 0;
    DAT_10023f06 = 0;
    DAT_10023f07 = 0;
    DAT_10023f08 = 0;
    DAT_10023f09 = 0;
    DAT_10023f0a = 0;
    DAT_10023f0b = 0;
    DAT_10023f0c = 0;
    DAT_10023f0d = 0;
    DAT_10023f0e = 0;
    DAT_10023f0f = 0;
    DAT_10023f10 = 0;
    DAT_10023f11 = 0;
    DAT_10023f12 = 0;
    DAT_10023f13 = 0;
    DAT_10023f14 = 0;
    DAT_10023f15 = 0;
    DAT_10023f16 = 0;
    DAT_10023f17 = 0;
    DAT_10023f18 = 0;
    DAT_10023f19 = 0;
    DAT_10023f1a = 0;
    DAT_10023f1b = 0;
    DAT_10023f1c = 0;
    DAT_10023f1d = 0;
    DAT_10023f1e = 0;
    DAT_10023f1f = 0;
    DAT_10023f20 = 0;
    DAT_10023f21 = 0;
    DAT_10023f22 = 0;
    DAT_10023f23 = 0;
    puVar26 = &DAT_10023fc0;
    iVar13 = -0xfc;
    do {
      *(undefined1 *)puVar26 = 0;
      puVar26 = (undefined4 *)((int)puVar26 + 1);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 0);
    if (_DAT_00280800 != 0x50414d57) {
      return 0;
    }
    if (_DAT_00280804 == 0) {
      return 0;
    }
    if (_DAT_00280808 < 0xc) {
      return 0;
    }
    if (_DAT_00280808 < 0x34) {
      return 0;
    }
    uVar16 = 0;
  }
  else {
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))))) {
      pcVar17 = str_1001e8b9;
LAB_10006c6f:
      (*_DAT_00280828)(pcVar17);
    }
LAB_10006c75:
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x2b < _DAT_00280808 && (_DAT_00280828 != (code *)0x0)))) {
LAB_10006b5d:
      (*_DAT_00280828)(&DAT_1001e5a9);
    }
LAB_10006cb5:
    uVar16 = 1;
    if (_DAT_00280800 != 0x50414d57) {
      return 1;
    }
    if (_DAT_00280804 == 0) {
      return 1;
    }
    if (_DAT_00280808 < 0xc) {
      return 1;
    }
    if (_DAT_00280808 < 0x34) {
      return 1;
    }
  }
  _DAT_00280800 = 0x50414d57;
  if (_DAT_00280830 != (code *)0x0) {
    (*_DAT_00280830)();
  }
  return uVar16;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280820
#undef DAT_00280828
#undef DAT_0028082c
#undef DAT_00280830
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028084c
#undef DAT_00280894
#undef DAT_00280898
#undef DAT_0028089c
#undef DAT_002808f8
#undef DAT_00280924
#undef DAT_00280968
#undef DAT_00280974
#undef DAT_002809fc
#undef DAT_00280a04
#undef DAT_1001e449
#undef DAT_1001e508
#undef DAT_1001e513
#undef DAT_1001e5a9
#undef DAT_1001e607
#undef DAT_1001e61e
#undef DAT_1001ea8d
#undef DAT_1001f048
#undef DAT_1001f04c
#undef DAT_1001f050
#undef DAT_1001f054
#undef DAT_1001f058
#undef DAT_1001f05c
#undef DAT_1001f060
#undef DAT_1001f064
#undef DAT_1001f164
#undef DAT_1001f17c
#undef DAT_1001f180
#undef DAT_1001f188
#undef DAT_1001f4ed
#undef DAT_1001f898
#undef DAT_1001f899
#undef DAT_1001f89a
#undef DAT_1001f89b
#undef DAT_1001f8a0
#undef DAT_1001f8a4
#undef DAT_1001f8a8
#undef DAT_1001f8bc
#undef DAT_1001fac6
#undef DAT_1001fac7
#undef DAT_1001fbc8
#undef DAT_1001fbcc
#undef DAT_1001fbd0
#undef DAT_1001fbd4
#undef DAT_1001fbd8
#undef DAT_1001fbd9
#undef DAT_1001fddc
#undef DAT_1001fde0
#undef DAT_1001fde4
#undef DAT_1001fdec
#undef DAT_1001fdf0
#undef DAT_1001fdf1
#undef DAT_1001fdf2
#undef DAT_1001fdf3
#undef DAT_1001fdf4
#undef DAT_1001fdf8
#undef DAT_1001fdfc
#undef DAT_1001fe00
#undef DAT_1001fe04
#undef DAT_1001fe0c
#undef DAT_1001fe10
#undef DAT_1001ff3c
#undef DAT_10020678
#undef DAT_10020990
#undef DAT_10020995
#undef DAT_10020b98
#undef DAT_10020b9c
#undef DAT_10020ba0
#undef DAT_10020ba8
#undef DAT_10020bac
#undef DAT_10020bae
#undef DAT_10020baf
#undef DAT_10020bb4
#undef DAT_10020bc0
#undef DAT_10020bc8
#undef DAT_10020bcc
#undef DAT_10020cf8
#undef DAT_10021434
#undef DAT_1002174c
#undef DAT_10021751
#undef DAT_10021954
#undef DAT_10021958
#undef DAT_1002195c
#undef DAT_10021964
#undef DAT_10021968
#undef DAT_1002196a
#undef DAT_1002196b
#undef DAT_10021970
#undef DAT_1002197c
#undef DAT_10021984
#undef DAT_10021988
#undef DAT_10021ab4
#undef DAT_100221f0
#undef DAT_10022508
#undef DAT_1002250d
#undef DAT_10022710
#undef DAT_10022714
#undef DAT_10022718
#undef DAT_10022720
#undef DAT_10022724
#undef DAT_10022726
#undef DAT_10022727
#undef DAT_1002272c
#undef DAT_10022738
#undef DAT_1002273a
#undef DAT_1002273b
#undef DAT_1002277a
#undef DAT_100227fa
#undef DAT_100227fc
#undef DAT_10022800
#undef DAT_10022804
#undef DAT_10022808
#undef DAT_10022908
#undef DAT_10022912
#undef DAT_10022948
#undef DAT_10022968
#undef DAT_1002296c
#undef DAT_10022970
#undef DAT_10022974
#undef DAT_10022978
#undef DAT_10022984
#undef DAT_10022988
#undef DAT_10022990
#undef DAT_100229a4
#undef DAT_100229ac
#undef DAT_100229b4
#undef DAT_100229b8
#undef DAT_100229bc
#undef DAT_100229be
#undef DAT_100229c3
#undef DAT_100229cc
#undef DAT_100229d4
#undef DAT_100229dc
#undef DAT_10022a44
#undef DAT_10022aac
#undef DAT_10022b14
#undef DAT_10022b7c
#undef DAT_10022be4
#undef DAT_10022c4c
#undef DAT_10022cb4
#undef DAT_10022d1c
#undef DAT_10022d84
#undef DAT_10022dec
#undef DAT_10022e54
#undef DAT_10022e5a
#undef DAT_10022e5b
#undef DAT_10022e5c
#undef DAT_10022ed0
#undef DAT_10022ed4
#undef DAT_10022ee0
#undef DAT_10022ee4
#undef DAT_10022ee8
#undef DAT_10022eec
#undef DAT_10022ef0
#undef DAT_10022ef4
#undef DAT_10022ef8
#undef DAT_10022efc
#undef DAT_10023f00
#undef DAT_10023f04
#undef DAT_10023f05
#undef DAT_10023f06
#undef DAT_10023f07
#undef DAT_10023f08
#undef DAT_10023f09
#undef DAT_10023f0a
#undef DAT_10023f0b
#undef DAT_10023f0c
#undef DAT_10023f0d
#undef DAT_10023f0e
#undef DAT_10023f0f
#undef DAT_10023f10
#undef DAT_10023f11
#undef DAT_10023f12
#undef DAT_10023f13
#undef DAT_10023f14
#undef DAT_10023f15
#undef DAT_10023f16
#undef DAT_10023f17
#undef DAT_10023f18
#undef DAT_10023f19
#undef DAT_10023f1a
#undef DAT_10023f1b
#undef DAT_10023f1c
#undef DAT_10023f1d
#undef DAT_10023f1e
#undef DAT_10023f1f
#undef DAT_10023f20
#undef DAT_10023f21
#undef DAT_10023f22
#undef DAT_10023f23
#undef DAT_10023f24
#undef DAT_10023f43
#undef DAT_10023f44
#undef DAT_10023f48
#undef DAT_10023f78
#undef DAT_10023f7c
#undef DAT_10023fc0
#undef DAT_100240bc
#undef DAT_100240c0
#undef DAT_100240c8
#undef DAT_100240cc
#undef DAT_100240d0
#undef DAT_100240d4
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280820
#undef _DAT_00280828
#undef _DAT_0028082c
#undef _DAT_00280830
#undef _DAT_00280834
#undef _DAT_00280838
#undef _DAT_0028084c
#undef _DAT_00280894
#undef _DAT_00280898
#undef _DAT_0028089c
#undef _DAT_002808f8
#undef _DAT_00280924
#undef _DAT_00280968
#undef _DAT_00280974
#undef _DAT_002809fc
#undef _DAT_00280a04
#undef _DAT_1001fdf0
#undef str_1001de3e
#undef str_1001e0e4
#undef str_1001e46c
#undef str_1001e480
#undef str_1001e4ae
#undef str_1001e4d5
#undef str_1001e50a
#undef str_1001e517
#undef str_1001e542
#undef str_1001e549
#undef str_1001e586
#undef str_1001e594
#undef str_1001e5ac
#undef str_1001e5bc
#undef str_1001e5dc
#undef str_1001e60c
#undef str_1001e615
#undef str_1001e623
#undef str_1001e62b
#undef str_1001e633
#undef str_1001e63b
#undef str_1001e642
#undef str_1001e64b
#undef str_1001e656
#undef str_1001e65f
#undef str_1001e66c
#undef str_1001e674
#undef str_1001e6a8
#undef str_1001e6df
#undef str_1001e721
#undef str_1001e76a
#undef str_1001e78b
#undef str_1001e7a8
#undef str_1001e7c3
#undef str_1001e7ec
#undef str_1001e810
#undef str_1001e840
#undef str_1001e85d
#undef str_1001e86e
#undef str_1001e878
#undef str_1001e8b9
#undef str_1001e8de
#undef str_1001e8fc
#undef str_1001e911
#undef str_1001e93f
#undef str_1001e9b3
#undef str_1001e9cb
#undef str_1001e9ec
#undef str_1001e9f2
#undef str_1001ea06
#undef str_1001ea2c
#undef str_1001ea3c
#undef str_1001ea53
#undef str_1001ea61
#undef str_1001ea70
#undef str_1001ea92
#undef str_1001ea9b
#undef str_1001eaa4
#undef str_1001eac1
#undef str_1001ef53
#undef str_1001ef5f
#undef str_1001ef7e
#undef str_1001ef86
#undef str_1001ef92
#undef local_3f4
#undef local_3f3
#undef local_3f2
#undef local_3f1
#undef local_3f0
#undef local_3ef
#undef local_3ee
#undef local_3ed
#undef local_3ec
#undef local_3eb
#undef local_3ea
#undef local_3e9
#undef local_3e8
#undef local_3e4
#undef local_3e0
#undef local_3de
#undef local_3dc
#undef local_3d8
#undef local_3d4
#undef local_3d0
#undef local_3cc
#undef local_3c8
#undef local_3c4
#undef local_3c0
#undef local_3bf
#undef local_3be
#undef local_3bd
#undef local_3bc
#undef local_3bb
#undef local_3ba
#undef local_3b9
#undef local_358
#undef local_354
#undef local_350
#undef local_34c
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_338
#undef local_334
#undef local_330
#undef local_32c
#undef local_328
#undef local_324
#undef local_320
#undef local_308
#undef local_304
#undef local_300
#undef local_2e0
#undef local_2c8
#undef local_280
#undef local_248
#undef local_144
#undef local_140
#undef local_138
#undef local_118
#undef local_98
#undef auStack_2f8
#undef local_434
#undef local_428
#undef local_427
#undef local_426
#undef local_425
#undef local_424
#undef local_423
#undef local_422
#undef local_421
#undef local_420
#undef local_41f
#undef local_41e
#undef local_41d
#undef local_41c
#undef local_41b
#undef local_41a
#undef local_419
#undef local_418
#undef local_417
#undef local_416
#undef local_415
#undef local_414
#undef local_413
#undef local_412
#undef local_411
#undef local_410
#undef local_40f
#undef local_40e
#undef local_40d
#undef local_40c
#undef local_40b
#undef local_40a
#undef local_409
#undef local_408
#undef local_407
#undef local_406
#undef local_405
#undef local_404
#undef local_403
#undef local_402
#undef local_401
#undef local_400
#undef local_3ff
#undef local_3fe
#undef local_3fd
#undef local_3fc
#undef local_3fb
#undef local_3fa
#undef local_3f9
#undef local_3f8
#undef local_3f7
#undef local_3f6
#undef local_3f5

/* Recovered kernel console boundary; Pooka's Free Software License. */
void recovered_10009080(char *text) {
    volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800;
    if(api[0]==0x50414d57U && api[1] && api[2]>=0x2cU && api[0x28/4])
        ((void (*)(char *))(uintptr_t)api[0x28/4])(text);
    if(api[0]==0x50414d57U && api[1] && api[2]>=0x2cU && api[0x28/4])
        ((void (*)(char *))(uintptr_t)api[0x28/4])("\r\n");
}


/* Recovered variadic console formatting; Pooka's Free Software License. */
void recovered_10009110(char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_10003dc0(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_10009080(text);
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280928
#define DAT_00280928 (*(uint8_t *)(0x280928U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1001e0d8
#define DAT_1001e0d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4U)))
#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5b
#define DAT_10022e5b (*(char *)(((uintptr_t)pf_module_state + 0x5337U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022ef8
#define DAT_10022ef8 (*(int *)(((uintptr_t)pf_module_state + 0x53d4U)))
#undef DAT_10022f00
#define DAT_10022f00 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53dcU)))
#undef DAT_10022f0c
#define DAT_10022f0c (*(ushort *)(((uintptr_t)pf_module_state + 0x53e8U)))
#undef DAT_10022f0e
#define DAT_10022f0e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53eaU)))
#undef DAT_10022f10
#define DAT_10022f10 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x53ecU)))
#undef DAT_10022f12
#define DAT_10022f12 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53eeU)))
#undef DAT_10022f13
#define DAT_10022f13 (*(char *)(((uintptr_t)pf_module_state + 0x53efU)))
#undef DAT_10022f14
#define DAT_10022f14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53f0U)))
#undef DAT_10022f1a
#define DAT_10022f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53f6U)))
#undef DAT_10022f1e
#define DAT_10022f1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53faU)))
#undef DAT_10022f20
#define DAT_10022f20 (*(ushort *)(((uintptr_t)pf_module_state + 0x53fcU)))
#undef DAT_10022f26
#define DAT_10022f26 (*(uint *)(((uintptr_t)pf_module_state + 0x5402U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280928
#define _DAT_00280928 (*(code * *)(0x280928U))
#undef _DAT_00280968
#define _DAT_00280968 (*(code * *)(0x280968U))
#undef _DAT_10022f1e
#define _DAT_10022f1e (*(ushort *)(((uintptr_t)pf_module_state + 0x53faU)))
#define local_44 (*(uint *)(pf_stack_frame + 28))
#define local_40 (*(int *)(pf_stack_frame + 32))
#define local_3c (*(uint * *)(pf_stack_frame + 36))
#define local_38 (*(int *)(pf_stack_frame + 40))
#define local_34 (*(uint * *)(pf_stack_frame + 44))
#define local_30 (*(uint *)(pf_stack_frame + 48))
#define local_2c (*(undefined4 *)(pf_stack_frame + 52))
#define local_20 (*(undefined4 *)(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int recovered_100091d0(int arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ushort uVar2;
  int iVar3;
  uint uVar4;
  uint arg_edx_00;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (arg_ecx == 0) {
    arg_ecx = 0;
  }
  else {
    iVar5 = 0;
    local_3c = (uint *)&DAT_10022f00;
    local_34 = (uint *)&DAT_10022e54;
    local_38 = arg_edx;
    do {
      local_44 = 0;
      if (_DAT_00280800 != 0x50414d57) {
        return iVar5;
      }
      if (_DAT_00280804 == 0) {
        return iVar5;
      }
      if (_DAT_00280808 < 0xc) {
        return iVar5;
      }
      if (_DAT_00280808 < 300) {
        return iVar5;
      }
      if (_DAT_00280928 == (code *)0x0) {
        return iVar5;
      }
      iVar3 = (*_DAT_00280928)(local_3c,0x800,&local_44);
      if (iVar3 == 0) {
        return iVar5;
      }
      if (local_44 < 0xe) {
        return iVar5;
      }
      DAT_10022ef8 = DAT_10022ef8 + 1;
      recovered_10002000((byte *)&local_30,0,0x18);
      local_30 = 0x18;
      if (((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
          ((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)))) &&
         (iVar3 = (*_DAT_00280968)(&local_30), iVar3 != 0)) {
        local_2c = local_20;
      }
      else {
        local_2c = 0;
      }
      local_30 = local_44;
      recovered_10009bf0(&local_30,8);
      iVar3 = recovered_10002230(local_3c,local_34,6);
      if ((iVar3 == 0) || (iVar3 = recovered_10002230(local_3c,(uint *)&DAT_1001e0d8,6), iVar3 == 0)
         ) {
        uVar1 = DAT_10022f26;
        uVar2 = DAT_10022f0c << 8 | DAT_10022f0c >> 8;
        if (uVar2 == 0x800) {
          if (0x21 < local_44) {
            if (((byte)DAT_10022f0e & 0xfffffff0) == 0x40) {
              uVar1 = (byte)DAT_10022f0e & 0xf;
              uVar4 = uVar1 * 4;
              if (0x13 < uVar4) {
                uVar6 = (uint)(ushort)(DAT_10022f10 << 8 | DAT_10022f10 >> 8);
                arg_edx_00 = uVar6 + uVar1 * -4;
                if ((uVar4 <= uVar6) && (uVar6 + 0xe <= local_44)) {
                  uVar6 = 0;
                  uVar7 = 1;
                  iVar3 = ((uintptr_t)pf_module_state + 0x53ebU);
                  do {
                    uVar6 = uVar6 + (ushort)(*(ushort *)(iVar3 + -1) << 8 |
                                            *(ushort *)(iVar3 + -1) >> 8);
                    uVar7 = uVar7 + 2;
                    iVar3 = iVar3 + 2;
                  } while (uVar7 < uVar4);
                  for (; 0xffff < uVar6; uVar6 = (uVar6 & 0xffff) + (uVar6 >> 0x10)) {
                  }
                  local_40 = arg_ecx;
                  if (uVar6 == 0xffff) {
                    if ((short)((DAT_10022f14 & 0x3f) << 8) == 0 && PF_PART1(DAT_10022f14, 1) == '\0') {
                      if (PF_PART1(DAT_10022f14, 3) == '\x11') {
                        if (7 < arg_edx_00) {
                          uVar2 = *(ushort *)(&DAT_10022f12 + uVar4) << 8 |
                                  *(ushort *)(&DAT_10022f12 + uVar4) >> 8;
                          if (7 < uVar2) {
                            if ((uVar2 <= arg_edx_00) &&
                               ((ushort)((&DAT_10022f10)[uVar1 * 2] << 8 |
                                        (&DAT_10022f10)[uVar1 * 2] >> 8) == 0x44)) {
                              recovered_10010230((char *)((int)&DAT_10022f14 + uVar4 + 2),uVar2 - 8,
                                                 local_38);
                            }
                          }
                        }
                      }
                      else if ((DAT_10022e5b == '\x01') &&
                              (((uint)(DAT_10022f20 >> 8) | (DAT_10022f20 & 0xff) << 8 |
                                (_DAT_10022f1e & 0xff00) << 8 |
                               CONCAT22(DAT_10022f20,_DAT_10022f1e) << 0x18) == DAT_10022e5c)) {
                        if (PF_PART1(DAT_10022f14, 3) == '\x01') {
                          recovered_10010a60(uVar4,arg_edx_00);
                        }
                        else if (PF_PART1(DAT_10022f14, 3) == '\x06') {
                          recovered_10010560(uVar4,arg_edx_00,local_38);
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        else if ((((uVar2 == 0x806) && (0x29 < local_44)) &&
                 ((ushort)(DAT_10022f0e << 8 | DAT_10022f0e >> 8) == 1)) &&
                ((((ushort)(DAT_10022f10 << 8 | DAT_10022f10 >> 8) == 0x800 &&
                  (DAT_10022f12 == '\x06')) && (DAT_10022f13 == '\x04')))) {
          uVar2 = (ushort)DAT_10022f14;
          uVar4 = (uint)(_DAT_10022f1e >> 8) | (_DAT_10022f1e & 0xff) << 8 |
                  (PF_PART2(DAT_10022f1a, 2) & 0xff00) << 8 |
                  CONCAT22(_DAT_10022f1e,PF_PART2(DAT_10022f1a, 2)) << 0x18;
          local_40 = arg_ecx;
          if (uVar4 != 0) {
            recovered_100100f0(uVar4,(undefined4 *)((int)&DAT_10022f14 + 2));
          }
          arg_ecx = local_40;
          if ((((ushort)(uVar2 << 8 | uVar2 >> 8) == 1) && (DAT_10022e5b == '\x01')) &&
             ((uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18) ==
              DAT_10022e5c)) {
            recovered_10001d70(&local_30,(undefined4 *)((int)&DAT_10022f14 + 2),6);
            recovered_1000ffd0(2,&local_30,uVar4,&local_30);
          }
        }
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != arg_ecx);
  }
  return arg_ecx;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280928
#undef DAT_00280968
#undef DAT_1001e0d8
#undef DAT_10022e54
#undef DAT_10022e5b
#undef DAT_10022e5c
#undef DAT_10022ef8
#undef DAT_10022f00
#undef DAT_10022f0c
#undef DAT_10022f0e
#undef DAT_10022f10
#undef DAT_10022f12
#undef DAT_10022f13
#undef DAT_10022f14
#undef DAT_10022f1a
#undef DAT_10022f1e
#undef DAT_10022f20
#undef DAT_10022f26
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280928
#undef _DAT_00280968
#undef _DAT_10022f1e
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009640
 */

void recovered_10009640(uint *arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = *arg_ecx;
  if (uVar1 == 0) {
    return;
  }
  if (uVar1 != 1) {
    if (uVar1 != 8) {
      if (((uVar1 & 0xfffffffc) == 4) && (4999 < arg_edx - arg_ecx[0x18])) goto LAB_10009696;
      goto LAB_100096e0;
    }
    if (arg_edx - arg_ecx[0x18] < 1000) {
      return;
    }
LAB_10009731:
    *arg_ecx = 0;
    arg_ecx[0xc] = 0;
    arg_ecx[0x10] = 0;
LAB_10009745:
    *(undefined1 *)(arg_ecx + 0x16) = 0;
    return;
  }
  if (29999 < arg_edx - arg_ecx[0x18]) {
LAB_10009696:
    recovered_10011090((int)arg_ecx,
                       (uint)*(byte *)((int)arg_ecx + 0x4a) + (uint)(byte)arg_ecx[0x12] +
                       arg_ecx[0x11] + arg_ecx[7],0,0);
    *(undefined1 *)((int)arg_ecx + 0x4f) = 1;
    *arg_ecx = 0;
    arg_ecx[0xc] = 0;
    arg_ecx[0x10] = 0;
    *(undefined1 *)(arg_ecx + 0x16) = 0;
    return;
  }
LAB_100096e0:
  if (((char)arg_ecx[0x16] != '\x01') || ((int)(arg_edx - arg_ecx[0x15]) < 0)) goto LAB_100097b0;
  if (7 < arg_ecx[0x17]) {
    if ((uVar1 & 0xfffffff7) != 0) {
      recovered_10011090((int)arg_ecx,
                         (uint)*(byte *)((int)arg_ecx + 0x4a) + (uint)(byte)arg_ecx[0x12] +
                         arg_ecx[0x11] + arg_ecx[7],0,0);
    }
    *(undefined1 *)((int)arg_ecx + 0x4f) = 1;
    goto LAB_10009731;
  }
  arg_ecx[0x17] = arg_ecx[0x17] + 1;
  if (uVar1 == 1) {
LAB_1000975e:
    uVar2 = 0;
    uVar1 = 0;
  }
  else {
    uVar1 = arg_ecx[0x11];
    if (uVar1 == 0) {
      if (*(char *)((int)arg_ecx + 0x4a) != '\x01') goto LAB_10009745;
      goto LAB_1000975e;
    }
    uVar2 = arg_ecx[9];
    if (uVar1 < arg_ecx[9]) {
      uVar2 = uVar1;
    }
    uVar1 = arg_ecx[0xf];
  }
  recovered_10011090((int)arg_ecx,arg_ecx[7],uVar1,uVar2);
  uVar1 = 8000;
  if (arg_ecx[0x14] * 2 < 8000) {
    uVar1 = arg_ecx[0x14] * 2;
  }
  arg_ecx[0x14] = uVar1;
  arg_ecx[0x15] = uVar1 + arg_edx;
  *(undefined1 *)(arg_ecx + 0x16) = 1;
LAB_100097b0:
  if (*(char *)((int)arg_ecx + 0x4e) == '\x01') {
    recovered_10011550(arg_ecx,arg_edx);
    return;
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1001e449
#define DAT_1001e449 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x925U)))
#undef DAT_100240bc
#define DAT_100240bc (*(uint *)(((uintptr_t)pf_module_state + 0x6598U)))
#undef DAT_100240c0
#define DAT_100240c0 (*(int *)(((uintptr_t)pf_module_state + 0x659cU)))
#undef DAT_100240c8
#define DAT_100240c8 (*(uint *)(((uintptr_t)pf_module_state + 0x65a4U)))
#undef DAT_100240cc
#define DAT_100240cc (*(int *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(code * *)(0x280968U))
#undef str_1001ef9e
#define str_1001ef9e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x147aU)))
#define local_2c (*(uint (*)[11])(pf_stack_frame + 20))
#define local_1c (*(int *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100097e0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100097e0(int arg_ecx,uint arg_edx,undefined4 *param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined4 *arg_edx_00;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;

  if (*(char *)(arg_ecx + 0xdb4) == '\0') {
    recovered_100183f0((void *)arg_ecx,str_1001ef9e,param_3);
  }
  puVar1 = *(uint **)(arg_ecx + 8);
  if ((((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(arg_ecx + 0xc))) &&
      ((*puVar1 & 0xfffffffe) == 2)) && (*(char *)(arg_ecx + 0xdb4) == '\0')) {
    arg_edx_00 = *(undefined4 **)(arg_ecx + 0x140);
    local_2c[0] = CONCAT31(PF_PART3(local_2c[0], 1),1);
    recovered_10001d70(arg_edx_00,local_2c,1);
    local_2c[0] = arg_edx >> 0x18 | (arg_edx & 0xff0000) >> 8 | (arg_edx & 0xff00) << 8 |
                  arg_edx << 0x18;
    recovered_10001d70((undefined4 *)((int)arg_edx_00 + 1),local_2c,4);
    uVar2 = recovered_100024c0((int)param_3);
    local_2c[0] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    recovered_10001d70((undefined4 *)((int)arg_edx_00 + 5),local_2c,4);
    uVar3 = 9;
    if (uVar2 < 0x1ff8) {
      if (uVar2 != 0) {
        recovered_10001d70((undefined4 *)((int)arg_edx_00 + 9),param_3,uVar2);
      }
      uVar3 = uVar2 + 9;
    }
    uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x925U));
    local_2c[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    if (uVar3 < 0x1ffd && uVar2 < 0x1ff8) {
      recovered_10001d70((undefined4 *)((int)arg_edx_00 + uVar3),local_2c,4);
      uVar2 = 0x1ffc - uVar3;
      uVar3 = uVar3 + 4;
      if (uVar4 <= uVar2) {
        if (uVar4 != 0) {
          recovered_10001d70((undefined4 *)((int)arg_edx_00 + uVar3),(undefined4 *)&DAT_1001e449,
                             uVar4);
        }
        uVar3 = uVar3 + uVar4;
      }
    }
    recovered_10011d50(arg_ecx,arg_edx_00,uVar3);
  }
  *(undefined1 *)(arg_ecx + 0xdb4) = 1;
  recovered_10002000((byte *)local_2c,0,0x18);
  local_2c[0] = 0x18;
  if ((((_DAT_00280800 != 0x50414d57) || (_DAT_00280804 == 0)) ||
      ((_DAT_00280808 < 0xc || ((_DAT_00280808 < 0x16c || (_DAT_00280968 == (code *)0x0)))))) ||
     (iVar5 = (*_DAT_00280968)(local_2c), iVar5 == 0)) {
    local_1c = 0;
  }
  bVar6 = CARRY4(local_1c - DAT_100240c0,DAT_100240c8);
  DAT_100240c8 = (local_1c - DAT_100240c0) + DAT_100240c8;
  DAT_100240cc = DAT_100240cc + (uint)bVar6;
  DAT_100240c0 = local_1c;
  uVar7 = recovered_100018c0((uint)((ulonglong)DAT_100240c8 * 1000),
                             DAT_100240cc * 1000 + (int)((ulonglong)DAT_100240c8 * 1000 >> 0x20),
                             DAT_100240bc,0);
  *(uint *)(arg_ecx + 0xdb8) = (uint)uVar7;
  puVar1 = *(uint **)(arg_ecx + 8);
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(arg_ecx + 0xc))) {
    if (*puVar1 - 2 < 2) {
      *(undefined1 *)((int)puVar1 + 0x49) = 1;
      recovered_10011550(puVar1,(uint)uVar7);
    }
    else if (*puVar1 == 1) {
      recovered_10011090((int)puVar1,
                         (uint)*(byte *)((int)puVar1 + 0x4a) + (uint)(byte)puVar1[0x12] +
                         puVar1[0x11] + puVar1[7],0,0);
      *(undefined1 *)((int)puVar1 + 0x4f) = 1;
      *puVar1 = 0;
      puVar1[0xc] = 0;
      puVar1[0x10] = 0;
      *(undefined1 *)(puVar1 + 0x16) = 0;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_1001e449
#undef DAT_100240bc
#undef DAT_100240c0
#undef DAT_100240c8
#undef DAT_100240cc
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef str_1001ef9e
#undef local_2c
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009ac0
 */

void recovered_10009ac0(uint *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if ((*arg_ecx & 0xfffffff7) != 0) {
    recovered_10011090((int)arg_ecx,
                       (uint)*(byte *)((int)arg_ecx + 0x4a) + (uint)(byte)arg_ecx[0x12] +
                       arg_ecx[0x11] + arg_ecx[7],0,0);
  }
  *(undefined1 *)((int)arg_ecx + 0x4f) = 1;
  *arg_ecx = 0;
  arg_ecx[0xc] = 0;
  arg_ecx[0x10] = 0;
  *(undefined1 *)(arg_ecx + 0x16) = 0;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009b20
 */

void recovered_10009b20(undefined1 *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *arg_ecx_00;
  int iVar1;

  arg_ecx_00 = *(int **)(arg_ecx + 8);
  if (((arg_ecx_00 != (int *)0x0) && (arg_ecx_00[1] == *(int *)(arg_ecx + 0xc))) &&
     (*arg_ecx_00 - 1U < 3)) {
    recovered_10011090((int)arg_ecx_00,
                       (uint)*(byte *)((int)arg_ecx_00 + 0x4a) + (uint)*(byte *)(arg_ecx_00 + 0x12)
                       + arg_ecx_00[0x11] + arg_ecx_00[7],0,0);
    *(undefined1 *)((int)arg_ecx_00 + 0x4f) = 1;
    *arg_ecx_00 = 0;
    arg_ecx_00[0xc] = 0;
    arg_ecx_00[0x10] = 0;
    *(undefined1 *)(arg_ecx_00 + 0x16) = 0;
  }
  iVar1 = -0x19c;
  do {
    arg_ecx[iVar1 + 0x2e8] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  iVar1 = -0x19c;
  do {
    arg_ecx[iVar1 + 0x484] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  iVar1 = -0x19c;
  do {
    arg_ecx[iVar1 + 0x658] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  iVar1 = -0x19c;
  do {
    arg_ecx[iVar1 + 0x7f4] = 0;
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0);
  *arg_ecx = 0;
  *(undefined4 *)(arg_ecx + 8) = 0;
  return;
}


#undef DAT_10023fc0
#define DAT_10023fc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x649cU)))
#undef DAT_10023fc4
#define DAT_10023fc4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64a0U)))
#undef DAT_10023fc8
#define DAT_10023fc8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64a4U)))
#undef DAT_10023fcc
#define DAT_10023fcc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64a8U)))
#undef DAT_10023fd0
#define DAT_10023fd0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64acU)))
#undef DAT_10023fd4
#define DAT_10023fd4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64b0U)))
#undef DAT_10023fd8
#define DAT_10023fd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64b4U)))
#undef DAT_10023fdc
#define DAT_10023fdc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64b8U)))
#undef DAT_10023fe0
#define DAT_10023fe0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64bcU)))
#undef DAT_10023fe4
#define DAT_10023fe4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64c0U)))
#undef DAT_10023fe8
#define DAT_10023fe8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64c4U)))
#undef DAT_10023fec
#define DAT_10023fec (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64c8U)))
#undef DAT_10023ff0
#define DAT_10023ff0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64ccU)))
#undef DAT_10023ff4
#define DAT_10023ff4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64d0U)))
#undef DAT_10023ff8
#define DAT_10023ff8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64d4U)))
#undef DAT_10023ffc
#define DAT_10023ffc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x64d8U)))
#undef DAT_10024000
#define DAT_10024000 (*(uint *)(((uintptr_t)pf_module_state + 0x64dcU)))
#undef DAT_10024004
#define DAT_10024004 (*(int *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_10024008
#define DAT_10024008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e4U)))
#undef DAT_10024088
#define DAT_10024088 (*(int *)(((uintptr_t)pf_module_state + 0x6564U)))
#undef DAT_100240b4
#define DAT_100240b4 (*(int *)(((uintptr_t)pf_module_state + 0x6590U)))
#undef DAT_100240b8
#define DAT_100240b8 (*(char *)(((uintptr_t)pf_module_state + 0x6594U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009bf0
 */

void recovered_10009bf0(undefined4 *arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined8 uVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  bool bVar5;

  uVar1 = rdtsc();
  local_1c = (undefined4)((ulonglong)uVar1 >> 0x20);
  local_20 = (undefined4)uVar1;
  if ((DAT_100240b8 == '\0') && (DAT_100240b4 == 0)) {
    DAT_10023fc4 = 0x6a09e667;
    DAT_10023fc0 = 0xf3bcc908;
    DAT_10023fcc = 0xbb67ae85;
    DAT_10023fc8 = 0x84caa73b;
    DAT_10023fd4 = 0x3c6ef372;
    DAT_10023fd0 = 0xfe94f82b;
    DAT_10023fdc = 0xa54ff53a;
    DAT_10023fd8 = 0x5f1d36f1;
    DAT_10023fe4 = 0x510e527f;
    DAT_10023fe0 = 0xade682d1;
    DAT_10023fec = 0x9b05688c;
    DAT_10023fe8 = 0x2b3e6c1f;
    DAT_10023ff4 = 0x1f83d9ab;
    DAT_10023ff0 = 0xfb41bd6b;
    DAT_10023ffc = 0x5be0cd19;
    DAT_10023ff8 = 0x137e2179;
    DAT_10024088 = 0;
    DAT_10024000 = 8;
    DAT_10024004 = 0;
  }
  else {
    bVar5 = 0xfffffff7 < DAT_10024000;
    DAT_10024000 = DAT_10024000 + 8;
    DAT_10024004 = DAT_10024004 + (uint)bVar5;
  }
  puVar2 = &local_20;
  uVar4 = 8;
  do {
    uVar3 = 0x80U - DAT_10024088;
    if (uVar4 < 0x80U - DAT_10024088) {
      uVar3 = uVar4;
    }
    recovered_10001d70((undefined4 *)(&DAT_10024008 + DAT_10024088),puVar2,uVar3);
    DAT_10024088 = DAT_10024088 + uVar3;
    if (DAT_10024088 == 0x80) {
      recovered_10009e40(&DAT_10023fc0,((uintptr_t)pf_module_state + 0x64e4U));
      DAT_10024088 = 0;
    }
    puVar2 = (undefined4 *)((int)puVar2 + uVar3);
    uVar4 = uVar4 - uVar3;
  } while (uVar4 != 0);
  if (arg_edx != 0 && arg_ecx != (undefined4 *)0x0) {
    bVar5 = CARRY4(DAT_10024000,arg_edx);
    DAT_10024000 = DAT_10024000 + arg_edx;
    DAT_10024004 = DAT_10024004 + (uint)bVar5;
    do {
      uVar4 = 0x80U - DAT_10024088;
      if (arg_edx < 0x80U - DAT_10024088) {
        uVar4 = arg_edx;
      }
      recovered_10001d70((undefined4 *)(&DAT_10024008 + DAT_10024088),arg_ecx,uVar4);
      DAT_10024088 = DAT_10024088 + uVar4;
      if (DAT_10024088 == 0x80) {
        recovered_10009e40(&DAT_10023fc0,((uintptr_t)pf_module_state + 0x64e4U));
        DAT_10024088 = 0;
      }
      arg_ecx = (undefined4 *)((int)arg_ecx + uVar4);
      arg_edx = arg_edx - uVar4;
    } while (arg_edx != 0);
  }
  DAT_100240b4 = DAT_100240b4 + 1;
  return;
}

#undef DAT_10023fc0
#undef DAT_10023fc4
#undef DAT_10023fc8
#undef DAT_10023fcc
#undef DAT_10023fd0
#undef DAT_10023fd4
#undef DAT_10023fd8
#undef DAT_10023fdc
#undef DAT_10023fe0
#undef DAT_10023fe4
#undef DAT_10023fe8
#undef DAT_10023fec
#undef DAT_10023ff0
#undef DAT_10023ff4
#undef DAT_10023ff8
#undef DAT_10023ffc
#undef DAT_10024000
#undef DAT_10024004
#undef DAT_10024008
#undef DAT_10024088
#undef DAT_100240b4
#undef DAT_100240b8
#undef local_20
#undef local_1c

#undef DAT_1001dbc0
#define DAT_1001dbc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x9cU)))
#define local_320 (*(uint *)(pf_stack_frame + 16))
#define local_31c (*(uint *)(pf_stack_frame + 20))
#define local_318 (*(uint *)(pf_stack_frame + 24))
#define local_314 (*(uint *)(pf_stack_frame + 28))
#define local_310 (*(uint *)(pf_stack_frame + 32))
#define local_30c (*(uint *)(pf_stack_frame + 36))
#define local_304 (*(uint *)(pf_stack_frame + 44))
#define local_300 (*(uint *)(pf_stack_frame + 48))
#define local_2f4 (*(uint *)(pf_stack_frame + 60))
#define local_2f0 (*(uint *)(pf_stack_frame + 64))
#define local_2ec (*(uint *)(pf_stack_frame + 68))
#define local_2b4 (*(int *)(pf_stack_frame + 124))
#define local_2b0 (*(uint * *)(pf_stack_frame + 128))
#define local_298 (*(uint (*)[166])(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009e40
 */

void recovered_10009e40(uint *arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[848] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10; uint pf_schedule_low, pf_schedule_high;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
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
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;

  iVar10 = -0x80;
  do {
    uVar2 = *(uint *)(arg_edx + 0x80 + iVar10);
    uVar3 = *(uint *)(arg_edx + 0x84 + iVar10);
    *(uint *)((int)local_298 + iVar10 + 0x84) =
         uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
    *(uint *)((int)local_298 + iVar10 + 0x80) =
         uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
    iVar10 = iVar10 + 8;
  } while (iVar10 != 0);
  pf_schedule_low=local_298[0]; pf_schedule_high=local_298[1]; iVar10 = -0x200;
  do {
    uVar2 = *(uint *)((int)local_298 + iVar10 + 0x208);
    uVar3 = *(uint *)((int)local_298 + iVar10 + 0x20c);
    uVar21 = (uVar3 << 0x19 | uVar2 >> 7) ^
             (uVar3 << 0x18 | uVar2 >> 8) ^ (uVar3 << 0x1f | uVar2 >> 1);
    uVar4 = *(uint *)((int)local_298 + iVar10 + 0x274);
    uVar5 = *(uint *)((int)local_298 + iVar10 + 0x270);
    uVar11 = (uVar5 << 3 | uVar4 >> 0x1d) ^ (uVar4 << 0xd | uVar5 >> 0x13) ^
             (uVar4 << 0x1a | uVar5 >> 6);
    uVar22 = uVar21 + pf_schedule_low;
    puVar1 = (uint *)((int)local_298 + iVar10 + 0x248);
    uVar23 = uVar22 + *puVar1;
    *(uint *)((int)local_298 + iVar10 + 0x280) = uVar23 + uVar11;
    *(uint *)((int)local_298 + iVar10 + 0x284) =
         (uVar3 >> 7 ^ (uVar2 << 0x18 | uVar3 >> 8) ^ (uVar2 << 0x1f | uVar3 >> 1)) + pf_schedule_high +
         (uint)CARRY4(uVar21,pf_schedule_low) + *(int *)((int)local_298 + iVar10 + 0x24c) +
         (uint)CARRY4(uVar22,*puVar1) +
         (uVar4 >> 6 ^ (uVar4 << 3 | uVar5 >> 0x1d) ^ (uVar5 << 0xd | uVar4 >> 0x13)) +
         (uint)CARRY4(uVar23,uVar11);
    iVar10 = iVar10 + 8;
    pf_schedule_low = uVar2;
    pf_schedule_high = uVar3;
  } while (iVar10 != 0);
  uVar2 = *arg_ecx;
  uVar3 = arg_ecx[2];
  local_2b0 = &DAT_1001dbc0;
  uVar4 = arg_ecx[4];
  uVar5 = arg_ecx[6];
  uVar11 = arg_ecx[8];
  uVar21 = arg_ecx[10];
  uVar22 = arg_ecx[0xc];
  uVar23 = arg_ecx[0xe];
  local_2b4 = -0x280;
  uVar13 = uVar11;
  uVar15 = arg_ecx[1];
  uVar25 = uVar23;
  uVar26 = uVar2;
  uVar28 = arg_ecx[9];
  uVar14 = arg_ecx[3];
  local_31c = arg_ecx[5];
  local_318 = uVar4;
  local_314 = arg_ecx[7];
  local_310 = uVar5;
  local_30c = arg_ecx[0xd];
  local_304 = uVar22;
  local_300 = arg_ecx[0xf];
  uVar24 = uVar3;
  uVar27 = arg_ecx[0xb];
  uVar12 = uVar21;
  do {
    local_2ec = uVar12;
    local_2f0 = uVar27;
    local_2f4 = uVar24;
    local_320 = uVar14;
    uVar27 = uVar28;
    uVar24 = uVar26;
    uVar14 = uVar15;
    uVar12 = uVar13;
    uVar15 = local_300;
    uVar9 = local_304;
    uVar8 = local_30c;
    uVar28 = local_310;
    uVar26 = local_314;
    uVar7 = local_318;
    uVar6 = local_31c;
    local_300 = local_30c;
    local_30c = local_2f0;
    local_304 = local_2ec;
    uVar13 = (uVar12 << 0x17 | uVar27 >> 9) ^
             (uVar27 << 0xe | uVar12 >> 0x12) ^ (uVar27 << 0x12 | uVar12 >> 0xe);
    uVar16 = (local_2ec ^ uVar9) & uVar12 ^ uVar9;
    uVar17 = uVar16 + uVar25;
    uVar18 = uVar17 + uVar13;
    local_314 = local_31c;
    local_310 = local_318;
    local_31c = local_320;
    local_318 = local_2f4;
    uVar19 = uVar18 + *local_2b0;
    puVar1 = (uint *)((int)local_298 + local_2b4 + 0x280);
    uVar20 = uVar19 + *puVar1;
    iVar10 = ((local_2f0 ^ uVar8) & uVar27 ^ uVar8) + uVar15 + (uint)CARRY4(uVar16,uVar25) +
             ((uVar27 << 0x17 | uVar12 >> 9) ^
             (uVar12 << 0xe | uVar27 >> 0x12) ^ (uVar12 << 0x12 | uVar27 >> 0xe)) +
             (uint)CARRY4(uVar17,uVar13) + local_2b0[1] + (uint)CARRY4(uVar18,*local_2b0) +
             *(int *)((int)local_298 + local_2b4 + 0x284) + (uint)CARRY4(uVar19,*puVar1);
    uVar15 = (uVar24 << 0x19 | uVar14 >> 7) ^
             (uVar24 << 0x1e | uVar14 >> 2) ^ (uVar14 << 4 | uVar24 >> 0x1c);
    uVar25 = local_2f4 & uVar7 ^ (local_2f4 ^ uVar7) & uVar24;
    uVar16 = uVar25 + uVar15;
    uVar13 = uVar28 + uVar20;
    uVar28 = uVar26 + iVar10 + (uint)CARRY4(uVar28,uVar20);
    uVar26 = uVar16 + uVar20;
    uVar15 = (local_320 & uVar6 ^ (local_320 ^ uVar6) & uVar14) +
             ((uVar14 << 0x19 | uVar24 >> 7) ^
             (uVar14 << 0x1e | uVar24 >> 2) ^ (uVar24 << 4 | uVar14 >> 0x1c)) +
             (uint)CARRY4(uVar25,uVar15) + iVar10 + (uint)CARRY4(uVar16,uVar20);
    local_2b0 = local_2b0 + 2;
    local_2b4 = local_2b4 + 8;
    uVar25 = uVar9;
  } while (local_2b4 != 0);
  *arg_ecx = uVar26 + uVar2;
  arg_ecx[1] = uVar15 + arg_ecx[1] + (uint)CARRY4(uVar26,uVar2);
  arg_ecx[2] = uVar24 + uVar3;
  arg_ecx[3] = uVar14 + arg_ecx[3] + (uint)CARRY4(uVar24,uVar3);
  arg_ecx[4] = local_2f4 + uVar4;
  arg_ecx[5] = local_320 + arg_ecx[5] + (uint)CARRY4(local_2f4,uVar4);
  arg_ecx[6] = uVar7 + uVar5;
  arg_ecx[7] = uVar6 + arg_ecx[7] + (uint)CARRY4(uVar7,uVar5);
  arg_ecx[8] = uVar13 + uVar11;
  arg_ecx[9] = uVar28 + arg_ecx[9] + (uint)CARRY4(uVar13,uVar11);
  arg_ecx[10] = uVar12 + uVar21;
  arg_ecx[0xb] = uVar27 + arg_ecx[0xb] + (uint)CARRY4(uVar12,uVar21);
  arg_ecx[0xc] = local_2ec + uVar22;
  arg_ecx[0xd] = local_2f0 + arg_ecx[0xd] + (uint)CARRY4(local_2ec,uVar22);
  arg_ecx[0xe] = uVar9 + uVar23;
  arg_ecx[0xf] = uVar8 + arg_ecx[0xf] + (uint)CARRY4(uVar9,uVar23);
  return;
}

#undef DAT_1001dbc0
#undef local_320
#undef local_31c
#undef local_318
#undef local_314
#undef local_310
#undef local_30c
#undef local_304
#undef local_300
#undef local_2f4
#undef local_2f0
#undef local_2ec
#undef local_2b4
#undef local_2b0
#undef local_298

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280a04
#define DAT_00280a04 (*(uint8_t *)(0x280a04U))
#undef DAT_1001e449
#define DAT_1001e449 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x925U)))
#undef DAT_1001e75f
#define DAT_1001e75f (*(uint8_t *)(((uintptr_t)pf_module_state + 0xc3bU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280a04
#define _DAT_00280a04 (*(code * *)(0x280a04U))
#undef str_1001e764
#define str_1001e764 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xc40U)))
#define local_38 (*(int *)(pf_stack_frame + 24))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define abStack_20 (*(byte (*)[32])(pf_stack_frame + 48))
#define local_28 (*(undefined4 *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a2d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000a2d0(char *name,char *output,uint capacity,char *fallback)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  uint uVar7;

  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  if (output == (char *)0x0) {
    return;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x207 < _DAT_00280808 && (_DAT_00280a04 != (code *)0x0)))) {
    iVar3 = (*_DAT_00280a04)(name,&local_38);
    if ((local_2c != 0 && local_38 == 3) && iVar3 != 0) {
      iVar3 = 0;
      if (1 < capacity) {
        iVar3 = 0;
        do {
          if (*(char *)(local_2c + iVar3) == '\0') break;
          output[iVar3] = *(char *)(local_2c + iVar3);
          iVar3 = iVar3 + 1;
        } while (capacity - 1 != iVar3);
      }
      output[iVar3] = '\0';
      return;
    }
    if (local_38 == 1 && iVar3 != 0) {
      uVar4 = -local_34;
      if ((int)-local_34 < 0) {
        uVar4 = local_34;
      }
      uVar7 = 0;
      do {
        abStack_20[uVar7] = (char)uVar4 + (char)(uVar4 / 10) * -10 | 0x30;
        uVar1 = uVar7 + 1;
        if (10 < uVar7) break;
        bVar2 = 9 < uVar4;
        uVar7 = uVar1;
        uVar4 = uVar4 / 10;
      } while (bVar2);
      if ((int)local_34 < 0) {
        *output = '-';
      }
      uVar4 = (uint)((int)local_34 < 0);
      if (capacity <= uVar4 + 1) {
        output[uVar4] = '\0';
        return;
      }
      do {
        output[uVar4] = abStack_20[uVar1 - 1];
        uVar7 = uVar4 + 1;
        if (uVar1 - 1 == 0) break;
        uVar5 = uVar4 + 2;
        uVar4 = uVar7;
        uVar1 = uVar1 - 1;
      } while (uVar5 < capacity);
      output[uVar7] = '\0';
      return;
    }
    if (local_38 == 5 && iVar3 != 0) {
      pcVar6 = &DAT_1001e75f;
      if (local_34 == 0) {
        pcVar6 = str_1001e764;
      }
      iVar3 = 0;
      if (1 < capacity) {
        iVar3 = 0;
        do {
          if (pcVar6[iVar3] == '\0') break;
          output[iVar3] = pcVar6[iVar3];
          iVar3 = iVar3 + 1;
        } while (capacity - 1 != iVar3);
      }
      goto LAB_1000a4d0;
    }
  }
  pcVar6 = &DAT_1001e449;
  if (fallback != (char *)0x0) {
    pcVar6 = fallback;
  }
  iVar3 = 0;
  if (1 < capacity) {
    iVar3 = 0;
    do {
      if (pcVar6[iVar3] == '\0') break;
      output[iVar3] = pcVar6[iVar3];
      iVar3 = iVar3 + 1;
    } while (capacity - 1 != iVar3);
  }
LAB_1000a4d0:
  output[iVar3] = '\0';
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280a04
#undef DAT_1001e449
#undef DAT_1001e75f
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280a04
#undef str_1001e764
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef abStack_20
#undef local_28
#undef local_24

#undef DAT_1001e449
#define DAT_1001e449 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x925U)))
#define local_120 (*(uint *)(pf_stack_frame + 16))
#define local_114 (*(char *)(pf_stack_frame + 28))
#define local_113 (*(char (*)[275])(pf_stack_frame + 29))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a4f0
 */

void recovered_1000a4f0(char *name,uint *output)

{
  unsigned char pf_stack_frame[336] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  uint uVar2;
  char *pcVar3;
  uint uVar4;
  char cVar5;
  int iVar6;
  uint uVar7;

  recovered_1000a2d0(name,&local_114,0x100,&DAT_1001e449);
  if ((byte)(local_114 - 0x30U) < 10) {
    iVar6 = 0;
    uVar2 = 0;
    pcVar1 = local_113 + 2;
    do {
      pcVar3 = pcVar1;
      uVar2 = (uint)(byte)(local_114 - 0x30) + uVar2 * 10;
      if (0xff < uVar2) {
        return;
      }
      local_114 = pcVar3[-2];
      iVar6 = iVar6 + -1;
      pcVar1 = pcVar3 + 1;
    } while ((byte)(local_114 - 0x30U) < 10);
    if (((iVar6 != 0) && (local_114 == '.')) && (cVar5 = pcVar3[-1], (byte)(cVar5 - 0x30U) < 10)) {
      iVar6 = 0;
      uVar4 = 0;
      do {
        pcVar3 = pcVar1;
        uVar4 = (uint)(byte)(cVar5 - 0x30) + uVar4 * 10;
        if (0xff < uVar4) {
          return;
        }
        cVar5 = pcVar3[-1];
        iVar6 = iVar6 + -1;
        pcVar1 = pcVar3 + 1;
      } while ((byte)(cVar5 - 0x30U) < 10);
      if (((iVar6 != 0) && (cVar5 == '.')) && (cVar5 = *pcVar3, (byte)(cVar5 - 0x30U) < 10)) {
        iVar6 = 0;
        uVar7 = 0;
        do {
          pcVar3 = pcVar1;
          uVar7 = (uint)(byte)(cVar5 - 0x30) + uVar7 * 10;
          if (0xff < uVar7) {
            return;
          }
          cVar5 = *pcVar3;
          iVar6 = iVar6 + -1;
          pcVar1 = pcVar3 + 1;
        } while ((byte)(cVar5 - 0x30U) < 10);
        if (((iVar6 != 0) && (cVar5 == '.')) && (cVar5 = pcVar3[1], (byte)(cVar5 - 0x30U) < 10)) {
          iVar6 = 0;
          local_120 = 0;
          do {
            local_120 = (uint)(byte)(cVar5 - 0x30) + local_120 * 10;
            if (0xff < local_120) {
              return;
            }
            cVar5 = pcVar3[iVar6 + 2];
            iVar6 = iVar6 + 1;
          } while ((byte)(cVar5 - 0x30U) < 10);
          if ((iVar6 != 0) && (cVar5 == '\0')) {
            *output = local_120 | uVar7 * 0x100 | uVar4 * 0x10000 | uVar2 * 0x1000000;
          }
        }
      }
    }
  }
  return;
}

#undef DAT_1001e449
#undef local_120
#undef local_114
#undef local_113

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a6a0
 */

undefined4 recovered_1000a6a0(int arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;

  iVar5 = -0x20;
  while( true ) {
    cVar1 = *(char *)(arg_ecx + 0x40 + iVar5 * 2);
    iVar4 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      iVar4 = iVar4 + -0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      iVar4 = iVar4 + -0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) {
        return 0;
      }
      iVar4 = iVar4 + -0x37;
    }
    if (iVar4 < 0) {
      return 0;
    }
    cVar1 = *(char *)(arg_ecx + 0x41 + iVar5 * 2);
    iVar2 = (int)cVar1;
    if ((byte)(cVar1 - 0x30U) < 10) {
      uVar3 = iVar2 - 0x30;
    }
    else if ((byte)(cVar1 + 0x9fU) < 6) {
      uVar3 = iVar2 - 0x57;
    }
    else {
      if (5 < (byte)(cVar1 + 0xbfU)) {
        return 0;
      }
      uVar3 = iVar2 - 0x37;
    }
    if ((int)uVar3 < 0) break;
    uVar3 = uVar3 | iVar4 << 4;
    *(char *)(arg_edx + 0x20 + iVar5) = (char)uVar3;
    iVar5 = iVar5 + 1;
    if (iVar5 == 0) {
      if (*(byte *)(arg_ecx + 0x40) < 0x21) {
        switch((uintptr_t)(*(byte *)(arg_ecx + 0x40))) {
        case 0:
        case 9:
        case 10:
        case 0xd:
        case 0x20:
          return CONCAT31((int3)(uVar3 >> 8),1);
        }
      }
      return 0;
    }
  }
  return 0;
}


#undef DAT_10023fc0
#define DAT_10023fc0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x649cU)))
#undef DAT_10024000
#define DAT_10024000 (*(uint *)(((uintptr_t)pf_module_state + 0x64dcU)))
#undef DAT_10024004
#define DAT_10024004 (*(int *)(((uintptr_t)pf_module_state + 0x64e0U)))
#undef DAT_10024008
#define DAT_10024008 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x64e4U)))
#undef DAT_10024088
#define DAT_10024088 (*(int *)(((uintptr_t)pf_module_state + 0x6564U)))
#undef DAT_1002408c
#define DAT_1002408c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6568U)))
#undef DAT_100240b4
#define DAT_100240b4 (*(uint *)(((uintptr_t)pf_module_state + 0x6590U)))
#undef DAT_100240b8
#define DAT_100240b8 (*(char *)(((uintptr_t)pf_module_state + 0x6594U)))
#define local_50 (*(undefined1 *)(pf_stack_frame + 48))
#define local_4f (*(undefined1 *)(pf_stack_frame + 49))
#define local_4e (*(undefined1 *)(pf_stack_frame + 50))
#define local_4d (*(undefined1 *)(pf_stack_frame + 51))
#define local_4c (*(undefined1 *)(pf_stack_frame + 52))
#define local_4b (*(undefined1 *)(pf_stack_frame + 53))
#define local_4a (*(undefined1 *)(pf_stack_frame + 54))
#define local_49 (*(undefined1 *)(pf_stack_frame + 55))
#define local_48 (*(undefined1 *)(pf_stack_frame + 56))
#define local_47 (*(undefined1 *)(pf_stack_frame + 57))
#define local_46 (*(undefined1 *)(pf_stack_frame + 58))
#define local_45 (*(undefined1 *)(pf_stack_frame + 59))
#define local_44 (*(undefined1 *)(pf_stack_frame + 60))
#define local_43 (*(undefined1 *)(pf_stack_frame + 61))
#define local_42 (*(undefined1 *)(pf_stack_frame + 62))
#define local_41 (*(undefined1 *)(pf_stack_frame + 63))
#define local_40 (*(undefined1 *)(pf_stack_frame + 64))
#define local_3f (*(undefined1 *)(pf_stack_frame + 65))
#define local_3e (*(undefined1 *)(pf_stack_frame + 66))
#define local_3d (*(undefined1 *)(pf_stack_frame + 67))
#define local_3c (*(undefined1 *)(pf_stack_frame + 68))
#define local_3b (*(undefined1 *)(pf_stack_frame + 69))
#define local_3a (*(undefined1 *)(pf_stack_frame + 70))
#define local_39 (*(undefined1 *)(pf_stack_frame + 71))
#define local_38 (*(undefined1 *)(pf_stack_frame + 72))
#define local_37 (*(undefined1 *)(pf_stack_frame + 73))
#define local_36 (*(undefined1 *)(pf_stack_frame + 74))
#define local_35 (*(undefined1 *)(pf_stack_frame + 75))
#define local_34 (*(undefined1 *)(pf_stack_frame + 76))
#define local_33 (*(undefined1 *)(pf_stack_frame + 77))
#define local_32 (*(undefined1 *)(pf_stack_frame + 78))
#define local_31 (*(undefined1 *)(pf_stack_frame + 79))
#define local_30 (*(undefined1 *)(pf_stack_frame + 80))
#define local_2f (*(undefined1 *)(pf_stack_frame + 81))
#define local_2e (*(undefined1 *)(pf_stack_frame + 82))
#define local_2d (*(undefined1 *)(pf_stack_frame + 83))
#define local_2c (*(int *)(pf_stack_frame + 84))
#define local_28 (*(undefined4 * *)(pf_stack_frame + 88))
#define local_24 (*(uint * *)(pf_stack_frame + 92))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 96))
#define local_1c (*(undefined4 * *)(pf_stack_frame + 100))
#define local_18 (*(undefined4 * *)(pf_stack_frame + 104))
#define local_6c (*(undefined1 *)(pf_stack_frame + 20))
#define local_6b (*(undefined1 *)(pf_stack_frame + 21))
#define local_6a (*(undefined1 *)(pf_stack_frame + 22))
#define local_69 (*(undefined1 *)(pf_stack_frame + 23))
#define local_68 (*(undefined1 *)(pf_stack_frame + 24))
#define local_67 (*(undefined1 *)(pf_stack_frame + 25))
#define local_66 (*(undefined1 *)(pf_stack_frame + 26))
#define local_65 (*(undefined1 *)(pf_stack_frame + 27))
#define local_64 (*(undefined1 *)(pf_stack_frame + 28))
#define local_63 (*(undefined1 *)(pf_stack_frame + 29))
#define local_62 (*(undefined1 *)(pf_stack_frame + 30))
#define local_61 (*(undefined1 *)(pf_stack_frame + 31))
#define local_60 (*(undefined1 *)(pf_stack_frame + 32))
#define local_5f (*(undefined1 *)(pf_stack_frame + 33))
#define local_5e (*(undefined1 *)(pf_stack_frame + 34))
#define local_5d (*(undefined1 *)(pf_stack_frame + 35))
#define local_5c (*(undefined1 *)(pf_stack_frame + 36))
#define local_5b (*(undefined1 *)(pf_stack_frame + 37))
#define local_5a (*(undefined1 *)(pf_stack_frame + 38))
#define local_59 (*(undefined1 *)(pf_stack_frame + 39))
#define local_58 (*(undefined1 *)(pf_stack_frame + 40))
#define local_57 (*(undefined1 *)(pf_stack_frame + 41))
#define local_56 (*(undefined1 *)(pf_stack_frame + 42))
#define local_55 (*(undefined1 *)(pf_stack_frame + 43))
#define local_54 (*(undefined1 *)(pf_stack_frame + 44))
#define local_53 (*(undefined1 *)(pf_stack_frame + 45))
#define local_52 (*(undefined1 *)(pf_stack_frame + 46))
#define local_51 (*(undefined1 *)(pf_stack_frame + 47))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a820
 */

void recovered_1000a820(undefined4 *arg_ecx,undefined4 *arg_edx)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  uint *arg_ecx_00;
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  local_2c = 0x1000a833;
  if ((DAT_100240b8 != '\x01') || (0x3f < DAT_100240b4)) {
    bVar6 = 0xffffffdf < DAT_10024000;
    DAT_10024000 = DAT_10024000 + 0x20;
    DAT_10024004 = DAT_10024004 + (uint)bVar6;
    puVar3 = (undefined4 *)&DAT_1002408c;
    uVar4 = 0x20;
    local_24 = &DAT_10023fc0;
    local_1c = (undefined4 *)&DAT_10024008;
    iVar1 = DAT_10024088;
    local_28 = arg_edx;
    local_18 = arg_ecx;
    do {
      iVar2 = local_2c;
      uVar5 = 0x80U - iVar1;
      if (uVar4 < 0x80U - iVar1) {
        uVar5 = uVar4;
      }
      local_20 = puVar3;
      recovered_10001d70((undefined4 *)(((uintptr_t)pf_module_state+0x64e4U) + iVar1),puVar3,uVar5);
      iVar1 = *(int *)(((uintptr_t)pf_module_state+0x6564U)) + uVar5;
      *(int *)(((uintptr_t)pf_module_state+0x6564U)) = iVar1;
      if (iVar1 == 0x80) {
        recovered_10009e40(local_24,(int)local_1c);
        *(undefined4 *)(((uintptr_t)pf_module_state+0x6564U)) = 0;
        iVar1 = 0;
      }
      arg_ecx_00 = local_24;
      puVar3 = (undefined4 *)((int)local_20 + uVar5);
      uVar4 = uVar4 - uVar5;
    } while (uVar4 != 0);
    recovered_1000b150(local_24,(uint *)&local_6c);
    iVar1 = local_2c;
    recovered_10001d70((undefined4 *)(((uintptr_t)pf_module_state+0x6568U)),(undefined4 *)&local_6c,0x20);
    puVar3 = local_1c;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64a0U)) = 0x6a09e667;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x649cU)) = 0xf3bcc908;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64a8U)) = 0xbb67ae85;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64a4U)) = 0x84caa73b;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64b0U)) = 0x3c6ef372;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64acU)) = 0xfe94f82b;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64b8U)) = 0xa54ff53a;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64b4U)) = 0x5f1d36f1;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64c0U)) = 0x510e527f;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64bcU)) = 0xade682d1;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64c8U)) = 0x9b05688c;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64c4U)) = 0x2b3e6c1f;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64d0U)) = 0x1f83d9ab;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64ccU)) = 0xfb41bd6b;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64d8U)) = 0x5be0cd19;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64d4U)) = 0x137e2179;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x6564U)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64e0U)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x64dcU)) = 0x20;
    recovered_10001d70(local_1c,(undefined4 *)&local_4c,0x20);
    iVar2 = *(int *)(((uintptr_t)pf_module_state+0x6564U)) + 0x20;
    *(int *)(((uintptr_t)pf_module_state+0x6564U)) = iVar2;
    if (iVar2 == 0x80) {
      recovered_10009e40(arg_ecx_00,(int)puVar3);
      *(undefined4 *)(((uintptr_t)pf_module_state+0x6564U)) = 0;
    }
    *(undefined4 *)(((uintptr_t)pf_module_state+0x658cU)) = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x6588U)) = 0;
    *(undefined1 *)(((uintptr_t)pf_module_state+0x6594U)) = 1;
    local_6c = 0;
    local_6b = 0;
    local_6a = 0;
    local_69 = 0;
    local_68 = 0;
    local_67 = 0;
    local_66 = 0;
    local_65 = 0;
    local_64 = 0;
    local_63 = 0;
    local_62 = 0;
    local_61 = 0;
    local_60 = 0;
    local_5f = 0;
    local_5e = 0;
    local_5d = 0;
    local_5c = 0;
    local_5b = 0;
    local_5a = 0;
    local_59 = 0;
    local_58 = 0;
    local_57 = 0;
    local_56 = 0;
    local_55 = 0;
    local_54 = 0;
    local_53 = 0;
    local_52 = 0;
    local_51 = 0;
    local_50 = 0;
    local_4f = 0;
    local_4e = 0;
    local_4d = 0;
    local_4c = 0;
    local_4b = 0;
    local_4a = 0;
    local_49 = 0;
    local_48 = 0;
    local_47 = 0;
    local_46 = 0;
    local_45 = 0;
    local_44 = 0;
    local_43 = 0;
    local_42 = 0;
    local_41 = 0;
    local_40 = 0;
    local_3f = 0;
    local_3e = 0;
    local_3d = 0;
    local_3c = 0;
    local_3b = 0;
    local_3a = 0;
    local_39 = 0;
    local_38 = 0;
    local_37 = 0;
    local_36 = 0;
    local_35 = 0;
    local_34 = 0;
    local_33 = 0;
    local_32 = 0;
    local_31 = 0;
    local_30 = 0;
    local_2f = 0;
    local_2e = 0;
    local_2d = 0;
    *(undefined4 *)(((uintptr_t)pf_module_state+0x6590U)) = 0;
    arg_edx = local_28;
    arg_ecx = local_18;
  }
  if (arg_edx != (undefined4 *)0x0) {
    local_20 = (undefined4 *)(((uintptr_t)pf_module_state+0x31cU));
    local_24 = (uint *)(((uintptr_t)pf_module_state+0x6568U));
    do {
      puVar3 = (undefined4 *)0x40;
      if (arg_edx < (undefined4 *)0x40) {
        puVar3 = arg_edx;
      }
      uVar4 = *(uint *)(((uintptr_t)pf_module_state+0x658cU));
      uVar5 = *(uint *)(((uintptr_t)pf_module_state+0x6588U));
      *(uint *)(((uintptr_t)pf_module_state+0x6588U)) = uVar5 + 1;
      *(uint *)(((uintptr_t)pf_module_state+0x658cU)) = uVar4 + (0xfffffffe < uVar5);
      local_28 = arg_edx;
      recovered_1000adc0(local_24,uVar5,uVar4,local_20,&local_6c);
      recovered_10001d70(arg_ecx,(undefined4 *)&local_6c,(uint)puVar3);
      arg_ecx = (undefined4 *)((int)arg_ecx + (int)puVar3);
      arg_edx = (undefined4 *)((int)local_28 - (int)puVar3);
    } while (arg_edx != (undefined4 *)0x0);
  }
  uVar4 = *(uint *)(((uintptr_t)pf_module_state+0x658cU));
  uVar5 = *(uint *)(((uintptr_t)pf_module_state+0x6588U));
  *(uint *)(((uintptr_t)pf_module_state+0x6588U)) = uVar5 + 1;
  *(uint *)(((uintptr_t)pf_module_state+0x658cU)) = uVar4 + (0xfffffffe < uVar5);
  local_28 = (undefined4 *)(((uintptr_t)pf_module_state+0x31cU));
  puVar3 = (undefined4 *)(((uintptr_t)pf_module_state+0x6568U));
  recovered_1000adc0(puVar3,uVar5,uVar4,local_28,&local_6c);
  recovered_10001d70(puVar3,(undefined4 *)&local_6c,0x20);
  return;
}

#undef DAT_10023fc0
#undef DAT_10024000
#undef DAT_10024004
#undef DAT_10024008
#undef DAT_10024088
#undef DAT_1002408c
#undef DAT_100240b4
#undef DAT_100240b8
#undef local_50
#undef local_4f
#undef local_4e
#undef local_4d
#undef local_4c
#undef local_4b
#undef local_4a
#undef local_49
#undef local_48
#undef local_47
#undef local_46
#undef local_45
#undef local_44
#undef local_43
#undef local_42
#undef local_41
#undef local_40
#undef local_3f
#undef local_3e
#undef local_3d
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_38
#undef local_37
#undef local_36
#undef local_35
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_67
#undef local_66
#undef local_65
#undef local_64
#undef local_63
#undef local_62
#undef local_61
#undef local_60
#undef local_5f
#undef local_5e
#undef local_5d
#undef local_5c
#undef local_5b
#undef local_5a
#undef local_59
#undef local_58
#undef local_57
#undef local_56
#undef local_55
#undef local_54
#undef local_53
#undef local_52
#undef local_51

#define local_d0 (*(uint *)(pf_stack_frame + 16))
#define local_cc (*(uint *)(pf_stack_frame + 20))
#define local_c8 (*(uint *)(pf_stack_frame + 24))
#define local_c4 (*(uint *)(pf_stack_frame + 28))
#define local_c0 (*(uint *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(uint *)(pf_stack_frame + 40))
#define local_b4 (*(uint *)(pf_stack_frame + 44))
#define local_b0 (*(uint *)(pf_stack_frame + 48))
#define local_ac (*(uint *)(pf_stack_frame + 52))
#define local_a8 (*(uint *)(pf_stack_frame + 56))
#define local_a4 (*(uint *)(pf_stack_frame + 60))
#define local_a0 (*(uint (*)[40])(pf_stack_frame + 64))
#define iStack_14 (*(int *)(pf_stack_frame + 204))
#define local_60 (*(int (*)[24])(pf_stack_frame + 128))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000adc0
 */

void recovered_1000adc0(void *key,uint low,uint high,void *nonce,void *out)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  local_60[3] = 0x61707865;
  local_60[4] = 0x3320646e;
  local_60[5] = 0x79622d32;
  local_60[6] = 0x6b206574;
  local_60[7] = *(int *)key;
  local_60[8] = *(undefined4 *)((int)key + 4);
  local_60[9] = *(undefined4 *)((int)key + 8);
  local_60[10] = *(undefined4 *)((int)key + 0xc);
  local_60[0xb] = *(undefined4 *)((int)key + 0x10);
  local_60[0xc] = *(undefined4 *)((int)key + 0x14);
  local_60[0xd] = *(undefined4 *)((int)key + 0x18);
  local_60[0xe] = *(undefined4 *)((int)key + 0x1c);
  local_60[0x10] = high;
  local_60[0x11] = *(int *)nonce;
  local_60[0x12] = *(undefined4 *)((int)nonce + 4);
  local_60[0xf] = low;
  recovered_10001d70(local_a0,local_60 + 3,0x40);
  local_b4 = local_a0[4];
  local_cc = local_a0[0];
  local_b0 = local_a0[1];
  local_c0 = local_a0[8];
  local_b8 = local_a0[9];
  local_ac = local_a0[6];
  local_c4 = local_a0[2];
  local_bc = local_a0[0xe];
  local_a4 = local_a0[10];
  local_a8 = local_a0[7];
  local_d0 = local_a0[3];
  iVar4 = 10;
  local_c8 = local_a0[0xb];
  do {
    local_a0[0xc] = local_a0[0xc] ^ local_cc + local_b4;
    uVar1 = local_a0[0xc] << 0x10 | local_a0[0xc] >> 0x10;
    local_c0 = local_c0 + uVar1;
    uVar2 = local_b4 ^ local_c0;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_cc = local_cc + local_b4 + uVar2;
    uVar1 = uVar1 ^ local_cc;
    uVar1 = uVar1 << 8 | uVar1 >> 0x18;
    local_c0 = local_c0 + uVar1;
    uVar2 = uVar2 ^ local_c0;
    uVar3 = uVar2 << 7 | uVar2 >> 0x19;
    local_a0[0xd] = local_a0[0xd] ^ local_b0 + local_a0[5];
    uVar5 = local_a0[0xd] << 0x10 | local_a0[0xd] >> 0x10;
    local_b8 = local_b8 + uVar5;
    uVar2 = local_a0[5] ^ local_b8;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_b0 = local_b0 + local_a0[5] + uVar2;
    uVar5 = uVar5 ^ local_b0;
    uVar6 = uVar5 << 8 | uVar5 >> 0x18;
    local_b8 = local_b8 + uVar6;
    uVar2 = uVar2 ^ local_b8;
    uVar2 = uVar2 << 7 | uVar2 >> 0x19;
    local_bc = local_bc ^ local_c4 + local_ac;
    uVar5 = local_bc << 0x10 | local_bc >> 0x10;
    local_a4 = local_a4 + uVar5;
    uVar7 = local_ac ^ local_a4;
    uVar8 = uVar7 << 0xc | uVar7 >> 0x14;
    local_c4 = local_c4 + local_ac + uVar8;
    uVar5 = uVar5 ^ local_c4;
    uVar7 = uVar5 << 8 | uVar5 >> 0x18;
    local_a4 = local_a4 + uVar7;
    uVar8 = uVar8 ^ local_a4;
    uVar9 = uVar8 << 7 | uVar8 >> 0x19;
    local_a0[0xf] = local_a0[0xf] ^ local_d0 + local_a8;
    uVar5 = local_a0[0xf] << 0x10 | local_a0[0xf] >> 0x10;
    local_c8 = local_c8 + uVar5;
    uVar8 = local_a8 ^ local_c8;
    uVar8 = uVar8 << 0xc | uVar8 >> 0x14;
    local_d0 = local_d0 + local_a8 + uVar8;
    uVar5 = uVar5 ^ local_d0;
    uVar5 = uVar5 << 8 | uVar5 >> 0x18;
    local_c8 = local_c8 + uVar5;
    uVar8 = uVar8 ^ local_c8;
    uVar8 = uVar8 << 7 | uVar8 >> 0x19;
    local_cc = local_cc + uVar2;
    uVar5 = uVar5 ^ local_cc;
    uVar5 = uVar5 << 0x10 | uVar5 >> 0x10;
    local_a4 = local_a4 + uVar5;
    uVar2 = uVar2 ^ local_a4;
    uVar2 = uVar2 << 0xc | uVar2 >> 0x14;
    local_cc = local_cc + uVar2;
    uVar5 = uVar5 ^ local_cc;
    local_a0[0xf] = uVar5 << 8 | uVar5 >> 0x18;
    local_a4 = local_a4 + local_a0[0xf];
    uVar2 = uVar2 ^ local_a4;
    local_a0[5] = uVar2 << 7 | uVar2 >> 0x19;
    local_b0 = local_b0 + uVar9;
    uVar1 = uVar1 ^ local_b0;
    uVar1 = uVar1 << 0x10 | uVar1 >> 0x10;
    local_c8 = local_c8 + uVar1;
    uVar9 = uVar9 ^ local_c8;
    uVar2 = uVar9 << 0xc | uVar9 >> 0x14;
    local_b0 = local_b0 + uVar2;
    uVar1 = uVar1 ^ local_b0;
    local_a0[0xc] = uVar1 << 8 | uVar1 >> 0x18;
    local_c8 = local_c8 + local_a0[0xc];
    uVar2 = uVar2 ^ local_c8;
    local_ac = uVar2 << 7 | uVar2 >> 0x19;
    local_c4 = local_c4 + uVar8;
    uVar6 = uVar6 ^ local_c4;
    uVar2 = uVar6 << 0x10 | uVar6 >> 0x10;
    local_c0 = local_c0 + uVar2;
    uVar8 = uVar8 ^ local_c0;
    uVar1 = uVar8 << 0xc | uVar8 >> 0x14;
    local_c4 = local_c4 + uVar1;
    uVar2 = uVar2 ^ local_c4;
    local_a0[0xd] = uVar2 << 8 | uVar2 >> 0x18;
    local_c0 = local_c0 + local_a0[0xd];
    uVar1 = uVar1 ^ local_c0;
    local_a8 = uVar1 << 7 | uVar1 >> 0x19;
    local_d0 = local_d0 + uVar3;
    uVar7 = uVar7 ^ local_d0;
    uVar2 = uVar7 << 0x10 | uVar7 >> 0x10;
    local_b8 = local_b8 + uVar2;
    uVar3 = uVar3 ^ local_b8;
    uVar1 = uVar3 << 0xc | uVar3 >> 0x14;
    local_d0 = local_d0 + uVar1;
    uVar2 = uVar2 ^ local_d0;
    local_bc = uVar2 << 8 | uVar2 >> 0x18;
    local_b8 = local_b8 + local_bc;
    uVar1 = uVar1 ^ local_b8;
    local_b4 = uVar1 << 7 | uVar1 >> 0x19;
    iVar4 = iVar4 + -1;
  } while (iVar4 != 0);
  local_a0[4] = local_b4;
  local_a0[0] = local_cc;
  local_a0[8] = local_c0;
  local_a0[1] = local_b0;
  local_a0[9] = local_b8;
  local_a0[6] = local_ac;
  local_a0[2] = local_c4;
  local_a0[0xe] = local_bc;
  local_a0[10] = local_a4;
  local_a0[7] = local_a8;
  local_a0[3] = local_d0;
  local_a0[0xb] = local_c8;
  iVar4 = -0x40;
  do {
    *(int *)((int)out + iVar4 + 0x40) =
         *(int *)((int)local_60 + iVar4 + 0x4c) + *(int *)((int)local_60 + iVar4);
    iVar4 = iVar4 + 4;
  } while (iVar4 != 0);
  return;
}

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
#undef iStack_14
#undef local_60

#define local_24 (*(uint *)(pf_stack_frame + 60))
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(uint * *)(pf_stack_frame + 72))
#define local_41 (*(undefined1 *)(pf_stack_frame + 31))
#define local_40 (*(uint * *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(undefined4 * *)(pf_stack_frame + 40))
#define local_34 (*(uint *)(pf_stack_frame + 44))
#define local_30 (*(uint * *)(pf_stack_frame + 48))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b150
 */

void recovered_1000b150(uint *arg_ecx,uint *arg_edx)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  uint uVar7;

  local_3c = arg_ecx[0x10];
  local_34 = arg_ecx[0x11];
  local_41 = 0x80;
  arg_ecx[0x11] = local_34 + (0xfffffffe < local_3c);
  arg_ecx[0x10] = local_3c + 1;
  puVar4 = arg_ecx + 0x12;
  uVar2 = arg_ecx[0x32];
  local_38 = (undefined4 *)&local_41;
  uVar7 = 1;
  local_40 = arg_ecx;
  local_30 = puVar4;
  local_18 = arg_edx;
  do {
    while( true ) {
      puVar5 = local_38;
      uVar6 = 0x80 - uVar2;
      if (uVar7 < 0x80 - uVar2) {
        uVar6 = uVar7;
      }
      recovered_10001d70((undefined4 *)(uVar2 + (int)puVar4),local_38,uVar6);
      puVar4 = local_30;
      puVar1 = local_40;
      uVar2 = local_40[0x32] + uVar6;
      local_40[0x32] = uVar2;
      local_38 = (undefined4 *)((int)puVar5 + uVar6);
      uVar7 = uVar7 - uVar6;
      if (uVar2 == 0x80) break;
      if (uVar7 == 0) {
        local_38 = (undefined4 *)(local_3c * 8);
        local_41 = 0;
        local_1c = local_3c >> 5;
        local_20 = local_3c >> 0xd;
        local_24 = local_34 << 3 | local_3c >> 0x1d;
        local_3c = local_3c >> 0x15;
        local_28 = local_34 >> 5;
        local_2c = local_34 >> 0xd;
        uVar7 = local_34 >> 0x15;
        if (uVar2 != 0x70) {
LAB_1000b2d1:
          local_41 = 0;
          local_34 = uVar7;
          do {
            puVar1 = local_40 + 0x10;
            uVar7 = *puVar1;
            *puVar1 = *puVar1 + 1;
            local_40[0x11] = local_40[0x11] + (uint)(0xfffffffe < uVar7);
            uVar7 = 1;
            puVar5 = (undefined4 *)&local_41;
            do {
              uVar6 = 0x80 - uVar2;
              if (uVar7 < 0x80 - uVar2) {
                uVar6 = uVar7;
              }
              recovered_10001d70((undefined4 *)(uVar2 + (int)puVar4),puVar5,uVar6);
              uVar2 = local_40[0x32] + uVar6;
              local_40[0x32] = uVar2;
              if (uVar2 == 0x80) {
                recovered_10009e40(local_40,(int)local_30);
                local_40[0x32] = 0;
                uVar2 = 0;
              }
              puVar5 = (undefined4 *)((int)puVar5 + uVar6);
              uVar7 = uVar7 - uVar6;
              puVar4 = local_30;
            } while (uVar7 != 0);
          } while (uVar2 != 0x70);
          uVar7 = local_34;
        }
        puVar1 = local_30;
        puVar4 = local_40;
        recovered_10002000((byte *)(local_40 + 0x2e),0,8);
        *(char *)(puVar4 + 0x30) = (char)uVar7;
        *(char *)((int)puVar4 + 0xc1) = (char)local_2c;
        *(char *)((int)puVar4 + 0xc2) = (char)local_28;
        *(char *)((int)puVar4 + 0xc3) = (char)local_24;
        *(char *)(puVar4 + 0x31) = (char)local_3c;
        *(char *)((int)puVar4 + 0xc5) = (char)local_20;
        *(char *)((int)puVar4 + 0xc6) = (char)local_1c;
        *(char *)((int)puVar4 + 199) = (char)local_38;
        recovered_10009e40(puVar4,(int)puVar1);
        uVar2 = *puVar4;
        uVar7 = puVar4[1];
        local_18[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        *local_18 = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar2 = puVar4[2];
        uVar7 = puVar4[3];
        local_18[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        local_18[2] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18;
        uVar2 = puVar4[4];
        uVar7 = puVar4[5];
        local_18[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        local_18[4] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18;
        uVar2 = puVar4[6];
        uVar7 = puVar4[7];
        local_18[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        local_18[6] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18;
        uVar2 = puVar4[8];
        uVar7 = puVar4[9];
        local_18[9] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        local_18[8] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                      uVar7 << 0x18;
        uVar2 = puVar4[10];
        uVar7 = puVar4[0xb];
        local_18[0xb] =
             uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        local_18[10] = uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 |
                       uVar7 << 0x18;
        uVar2 = puVar4[0xc];
        uVar7 = puVar4[0xd];
        local_18[0xd] =
             uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        local_18[0xc] =
             uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        uVar2 = puVar4[0xe];
        uVar7 = puVar4[0xf];
        local_18[0xf] =
             uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        local_18[0xe] =
             uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
        iVar3 = -0xcc;
        do {
          *(undefined1 *)((int)puVar4 + iVar3 + 0xcc) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
        return;
      }
    }
    recovered_10009e40(local_40,(int)local_30);
    puVar1[0x32] = 0;
    uVar2 = 0;
  } while (uVar7 != 0);
  local_38 = (undefined4 *)(local_3c * 8);
  local_1c = local_3c >> 5;
  local_20 = local_3c >> 0xd;
  local_24 = local_34 << 3 | local_3c >> 0x1d;
  local_3c = local_3c >> 0x15;
  local_28 = local_34 >> 5;
  local_2c = local_34 >> 0xd;
  uVar7 = local_34 >> 0x15;
  uVar2 = 0;
  goto LAB_1000b2d1;
}

#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_41
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2c
#undef local_28

#define local_18 (*(uint (*)[6])(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b480
 */

void recovered_1000b480(int *arg_ecx,undefined4 *arg_edx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;

  uVar1 = recovered_100024c0((int)arg_edx);
  local_18[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  if (((char)arg_ecx[3] == '\0') && (3 < (uint)(arg_ecx[1] - arg_ecx[2]))) {
    recovered_10001d70((undefined4 *)(arg_ecx[2] + *arg_ecx),local_18,4);
    iVar2 = arg_ecx[2] + 4;
    arg_ecx[2] = iVar2;
    if (((*(byte *)(arg_ecx + 3) & 1) == 0) && (uVar1 <= (uint)(arg_ecx[1] - iVar2))) {
      if (uVar1 != 0) {
        recovered_10001d70((undefined4 *)(iVar2 + *arg_ecx),arg_edx,uVar1);
        iVar2 = arg_ecx[2];
      }
      arg_ecx[2] = iVar2 + uVar1;
      return;
    }
  }
  *(undefined1 *)(arg_ecx + 3) = 1;
  return;
}

#undef local_18

#define local_49 (*(undefined1 *)(pf_stack_frame + 23))
#define local_48 (*(uint * *)(pf_stack_frame + 24))
#define local_44 (*(undefined4 * *)(pf_stack_frame + 28))
#define local_40 (*(uint *)(pf_stack_frame + 32))
#define local_3c (*(uint *)(pf_stack_frame + 36))
#define local_38 (*(uint * *)(pf_stack_frame + 40))
#define local_34 (*(undefined1 *)(pf_stack_frame + 44))
#define local_33 (*(undefined1 *)(pf_stack_frame + 45))
#define local_32 (*(undefined1 *)(pf_stack_frame + 46))
#define local_31 (*(undefined1 *)(pf_stack_frame + 47))
#define local_30 (*(undefined1 *)(pf_stack_frame + 48))
#define local_2f (*(undefined1 *)(pf_stack_frame + 49))
#define local_2e (*(undefined1 *)(pf_stack_frame + 50))
#define local_2d (*(undefined1 *)(pf_stack_frame + 51))
#define local_2c (*(uint *)(pf_stack_frame + 52))
#define local_28 (*(uint *)(pf_stack_frame + 56))
#define local_24 (*(uint *)(pf_stack_frame + 60))
#define local_20 (*(uint *)(pf_stack_frame + 64))
#define local_1c (*(uint *)(pf_stack_frame + 68))
#define local_18 (*(uint * *)(pf_stack_frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b520
 */

void recovered_1000b520(uint *arg_ecx,uint *arg_edx)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;

  local_3c = arg_ecx[8];
  local_40 = arg_ecx[9];
  local_49 = 0x80;
  arg_ecx[9] = local_40 + (0xfffffffe < local_3c);
  arg_ecx[8] = local_3c + 1;
  puVar4 = arg_ecx + 10;
  uVar2 = arg_ecx[0x1a];
  local_44 = (undefined4 *)&local_49;
  uVar7 = 1;
  local_48 = arg_ecx;
  local_38 = puVar4;
  local_18 = arg_edx;
  do {
    while( true ) {
      puVar6 = local_44;
      uVar5 = 0x40 - uVar2;
      if (uVar7 < 0x40 - uVar2) {
        uVar5 = uVar7;
      }
      recovered_10001d70((undefined4 *)(uVar2 + (int)puVar4),local_44,uVar5);
      puVar4 = local_38;
      puVar1 = local_48;
      uVar2 = local_48[0x1a] + uVar5;
      local_48[0x1a] = uVar2;
      local_44 = (undefined4 *)((int)puVar6 + uVar5);
      uVar7 = uVar7 - uVar5;
      if (uVar2 == 0x40) break;
      if (uVar7 == 0) {
        local_44 = (undefined4 *)(local_3c * 8);
        local_49 = 0;
        local_1c = local_3c >> 5;
        local_20 = local_3c >> 0xd;
        local_24 = local_40 << 3 | local_3c >> 0x1d;
        uVar7 = local_3c >> 0x15;
        local_28 = local_40 >> 5;
        local_2c = local_40 >> 0xd;
        uVar5 = local_40 >> 0x15;
        if (uVar2 != 0x38) {
LAB_1000b67e:
          local_49 = 0;
          local_40 = uVar5;
          local_3c = uVar7;
          do {
            puVar1 = local_48 + 8;
            uVar7 = *puVar1;
            *puVar1 = *puVar1 + 1;
            local_48[9] = local_48[9] + (uint)(0xfffffffe < uVar7);
            uVar7 = 1;
            puVar6 = (undefined4 *)&local_49;
            do {
              uVar5 = 0x40 - uVar2;
              if (uVar7 < 0x40 - uVar2) {
                uVar5 = uVar7;
              }
              recovered_10001d70((undefined4 *)(uVar2 + (int)puVar4),puVar6,uVar5);
              uVar2 = local_48[0x1a] + uVar5;
              local_48[0x1a] = uVar2;
              if (uVar2 == 0x40) {
                recovered_1000f5d0(local_48,(int)local_38);
                local_48[0x1a] = 0;
                uVar2 = 0;
              }
              puVar6 = (undefined4 *)((int)puVar6 + uVar5);
              uVar7 = uVar7 - uVar5;
              puVar4 = local_38;
            } while (uVar7 != 0);
          } while (uVar2 != 0x38);
          uVar7 = local_3c;
          uVar5 = local_40;
        }
        puVar1 = local_38;
        puVar4 = local_48;
        local_34 = (undefined1)uVar5;
        local_33 = (undefined1)local_2c;
        local_32 = (undefined1)local_28;
        local_31 = (undefined1)local_24;
        local_30 = (undefined1)uVar7;
        local_2f = (undefined1)local_20;
        local_2e = (undefined1)local_1c;
        local_2d = SUB41(local_44,0);
        recovered_10001d70(local_48 + 0x18,(undefined4 *)&local_34,8);
        recovered_1000f5d0(puVar4,(int)puVar1);
        puVar4[0x1a] = 0;
        uVar2 = *puVar4;
        *local_18 = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 | uVar2 << 0x18;
        uVar2 = puVar4[1];
        local_18[1] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = puVar4[2];
        local_18[2] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = puVar4[3];
        local_18[3] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = puVar4[4];
        local_18[4] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = puVar4[5];
        local_18[5] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = puVar4[6];
        local_18[6] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        uVar2 = puVar4[7];
        local_18[7] = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                      uVar2 << 0x18;
        iVar3 = -0x6c;
        do {
          *(undefined1 *)((int)puVar4 + iVar3 + 0x6c) = 0;
          iVar3 = iVar3 + 1;
        } while (iVar3 != 0);
        return;
      }
    }
    recovered_1000f5d0(local_48,(int)local_38);
    puVar1[0x1a] = 0;
    uVar2 = 0;
  } while (uVar7 != 0);
  local_44 = (undefined4 *)(local_3c * 8);
  local_1c = local_3c >> 5;
  local_20 = local_3c >> 0xd;
  local_24 = local_40 << 3 | local_3c >> 0x1d;
  uVar7 = local_3c >> 0x15;
  local_28 = local_40 >> 5;
  local_2c = local_40 >> 0xd;
  uVar5 = local_40 >> 0x15;
  uVar2 = 0;
  goto LAB_1000b67e;
}

#undef local_49
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_33
#undef local_32
#undef local_31
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2d
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1001de58
#define DAT_1001de58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x334U)))
#undef DAT_1001ded8
#define DAT_1001ded8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b4U)))
#define local_218 (*(uint (*)[134])(pf_stack_frame + 24))
#define local_98 (*(undefined8 *)(pf_stack_frame + 408))
#define auStack_18 (*(uint (*)[6])(pf_stack_frame + 536))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000b7d0
 */

void recovered_1000b7d0(undefined4 *arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;

  local_218[1] = 0;
  local_218[0] = 0xd51a;
  local_218[0x21] = 0;
  local_218[0x20] = 0x6658;
  local_218[3] = 0;
  local_218[2] = 0x8f25;
  local_218[0x23] = 0;
  local_218[0x22] = 0x6666;
  local_218[0x43] = 0;
  local_218[0x42] = 0;
  local_218[5] = 0;
  local_218[4] = 0x2d60;
  local_218[0x25] = 0;
  local_218[0x24] = 0x6666;
  local_218[0x45] = 0;
  local_218[0x44] = 0;
  local_218[7] = 0;
  local_218[6] = 0xc956;
  local_218[0x27] = 0;
  local_218[0x26] = 0x6666;
  local_218[0x47] = 0;
  local_218[0x46] = 0;
  local_218[9] = 0;
  local_218[8] = 0xa7b2;
  local_218[0x29] = 0;
  local_218[0x28] = 0x6666;
  local_218[0x49] = 0;
  local_218[0x48] = 0;
  local_218[0xb] = 0;
  local_218[10] = 0x9525;
  local_218[0x2b] = 0;
  local_218[0x2a] = 0x6666;
  local_218[0x4b] = 0;
  local_218[0x4a] = 0;
  local_218[0xd] = 0;
  local_218[0xc] = 0xc760;
  local_218[0x2d] = 0;
  local_218[0x2c] = 0x6666;
  local_218[0x4d] = 0;
  local_218[0x4c] = 0;
  local_218[0xf] = 0;
  local_218[0xe] = 0x692c;
  local_218[0x2f] = 0;
  local_218[0x2e] = 0x6666;
  local_218[0x4f] = 0;
  local_218[0x4e] = 0;
  local_218[0x10] = 0xdc5c;
  local_218[0x11] = 0;
  local_218[0x30] = 0x6666;
  local_218[0x31] = 0;
  local_218[0x50] = 0;
  local_218[0x51] = 0;
  local_218[0x12] = 0xfdd6;
  local_218[0x13] = 0;
  local_218[0x32] = 0x6666;
  local_218[0x33] = 0;
  local_218[0x52] = 0;
  local_218[0x53] = 0;
  local_218[0x15] = 0;
  local_218[0x14] = 0xe231;
  local_218[0x35] = 0;
  local_218[0x34] = 0x6666;
  local_218[0x55] = 0;
  local_218[0x54] = 0;
  local_218[0x16] = 0xc0a4;
  local_218[0x17] = 0;
  local_218[0x36] = 0x6666;
  local_218[0x37] = 0;
  local_218[0x56] = 0;
  local_218[0x57] = 0;
  local_218[0x18] = 0x53fe;
  local_218[0x19] = 0;
  local_218[0x38] = 0x6666;
  local_218[0x39] = 0;
  local_218[0x58] = 0;
  local_218[0x59] = 0;
  local_218[0x1b] = 0;
  local_218[0x1a] = 0xcd6e;
  local_218[0x3b] = 0;
  local_218[0x3a] = 0x6666;
  local_218[0x5b] = 0;
  local_218[0x5a] = 0;
  local_218[0x1c] = 0x36d3;
  local_218[0x1d] = 0;
  local_218[0x3c] = 0x6666;
  local_218[0x3d] = 0;
  local_218[0x5c] = 0;
  local_218[0x5d] = 0;
  local_218[0x1e] = 0x2169;
  local_218[0x1f] = 0;
  local_218[0x3e] = 0x6666;
  local_218[0x3f] = 0;
  local_218[0x5e] = 0;
  local_218[0x5f] = 0;
  local_218[0x41] = 0;
  local_218[0x40] = 1;
  recovered_1000c480(&local_98,(longlong *)&DAT_1001de58,(longlong *)&DAT_1001ded8);
  arg_ecx[1] = 0;
  *arg_ecx = 0;
  arg_ecx[0x61] = 0;
  arg_ecx[0x60] = 0;
  arg_ecx[3] = 0;
  arg_ecx[2] = 0;
  arg_ecx[0x23] = 0;
  arg_ecx[0x22] = 0;
  arg_ecx[0x43] = 0;
  arg_ecx[0x42] = 0;
  arg_ecx[99] = 0;
  arg_ecx[0x62] = 0;
  arg_ecx[5] = 0;
  arg_ecx[4] = 0;
  arg_ecx[0x25] = 0;
  arg_ecx[0x24] = 0;
  arg_ecx[0x45] = 0;
  arg_ecx[0x44] = 0;
  arg_ecx[0x65] = 0;
  arg_ecx[100] = 0;
  arg_ecx[7] = 0;
  arg_ecx[6] = 0;
  arg_ecx[0x27] = 0;
  arg_ecx[0x26] = 0;
  arg_ecx[0x47] = 0;
  arg_ecx[0x46] = 0;
  arg_ecx[0x67] = 0;
  arg_ecx[0x66] = 0;
  arg_ecx[9] = 0;
  arg_ecx[8] = 0;
  arg_ecx[0x29] = 0;
  arg_ecx[0x28] = 0;
  arg_ecx[0x49] = 0;
  arg_ecx[0x48] = 0;
  arg_ecx[0x69] = 0;
  arg_ecx[0x68] = 0;
  arg_ecx[0xb] = 0;
  arg_ecx[10] = 0;
  arg_ecx[0x2b] = 0;
  arg_ecx[0x2a] = 0;
  arg_ecx[0x4b] = 0;
  arg_ecx[0x4a] = 0;
  arg_ecx[0x6b] = 0;
  arg_ecx[0x6a] = 0;
  arg_ecx[0xd] = 0;
  arg_ecx[0xc] = 0;
  arg_ecx[0x2d] = 0;
  arg_ecx[0x2c] = 0;
  arg_ecx[0x4d] = 0;
  arg_ecx[0x4c] = 0;
  arg_ecx[0x6d] = 0;
  arg_ecx[0x6c] = 0;
  arg_ecx[0xe] = 0;
  arg_ecx[0xf] = 0;
  arg_ecx[0x2e] = 0;
  arg_ecx[0x2f] = 0;
  arg_ecx[0x4e] = 0;
  arg_ecx[0x4f] = 0;
  arg_ecx[0x6e] = 0;
  arg_ecx[0x6f] = 0;
  arg_ecx[0x10] = 0;
  arg_ecx[0x11] = 0;
  arg_ecx[0x30] = 0;
  arg_ecx[0x31] = 0;
  arg_ecx[0x50] = 0;
  arg_ecx[0x51] = 0;
  arg_ecx[0x70] = 0;
  arg_ecx[0x71] = 0;
  arg_ecx[0x13] = 0;
  arg_ecx[0x12] = 0;
  arg_ecx[0x33] = 0;
  arg_ecx[0x32] = 0;
  arg_ecx[0x53] = 0;
  arg_ecx[0x52] = 0;
  arg_ecx[0x73] = 0;
  arg_ecx[0x72] = 0;
  arg_ecx[0x14] = 0;
  arg_ecx[0x15] = 0;
  arg_ecx[0x34] = 0;
  arg_ecx[0x35] = 0;
  arg_ecx[0x54] = 0;
  arg_ecx[0x55] = 0;
  arg_ecx[0x74] = 0;
  arg_ecx[0x75] = 0;
  arg_ecx[0x16] = 0;
  arg_ecx[0x17] = 0;
  arg_ecx[0x36] = 0;
  arg_ecx[0x37] = 0;
  arg_ecx[0x56] = 0;
  arg_ecx[0x57] = 0;
  arg_ecx[0x76] = 0;
  arg_ecx[0x77] = 0;
  arg_ecx[0x19] = 0;
  arg_ecx[0x18] = 0;
  arg_ecx[0x39] = 0;
  arg_ecx[0x38] = 0;
  arg_ecx[0x59] = 0;
  arg_ecx[0x58] = 0;
  arg_ecx[0x79] = 0;
  arg_ecx[0x78] = 0;
  arg_ecx[0x1a] = 0;
  arg_ecx[0x1b] = 0;
  arg_ecx[0x3a] = 0;
  arg_ecx[0x3b] = 0;
  arg_ecx[0x5a] = 0;
  arg_ecx[0x5b] = 0;
  arg_ecx[0x7a] = 0;
  arg_ecx[0x7b] = 0;
  arg_ecx[0x1c] = 0;
  arg_ecx[0x1d] = 0;
  arg_ecx[0x3c] = 0;
  arg_ecx[0x3d] = 0;
  arg_ecx[0x5c] = 0;
  arg_ecx[0x5d] = 0;
  arg_ecx[0x7c] = 0;
  arg_ecx[0x7d] = 0;
  arg_ecx[0x1f] = 0;
  arg_ecx[0x1e] = 0;
  arg_ecx[0x3f] = 0;
  arg_ecx[0x3e] = 0;
  arg_ecx[0x5f] = 0;
  arg_ecx[0x5e] = 0;
  arg_ecx[0x7f] = 0;
  arg_ecx[0x7e] = 0;
  arg_ecx[0x20] = 1;
  arg_ecx[0x21] = 0;
  arg_ecx[0x40] = 1;
  arg_ecx[0x41] = 0;
  uVar7 = 0xff;
  do {
    uVar4 = (uint)((*(byte *)(arg_edx + (uVar7 >> 3)) >> (uVar7 & 7) & 1) != 0);
    uVar5 = -uVar4;
    uVar4 = -(uint)(uVar4 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x80);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x84);
      uVar2 = *(uint *)((int)local_218 + iVar6 + 0x80);
      uVar3 = *(uint *)((int)local_218 + iVar6 + 0x84);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x80) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x84) = uVar1 ^ uVar9;
      *(uint *)((int)local_218 + iVar6 + 0x84) = uVar9 ^ uVar3;
      *(uint *)((int)local_218 + iVar6 + 0x80) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x100);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x104);
      uVar2 = *(uint *)((int)local_218 + iVar6 + 0x100);
      uVar3 = *(uint *)((int)local_218 + iVar6 + 0x104);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x100) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x104) = uVar1 ^ uVar9;
      *(uint *)((int)local_218 + iVar6 + 0x104) = uVar9 ^ uVar3;
      *(uint *)((int)local_218 + iVar6 + 0x100) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x180);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x184);
      uVar2 = *(uint *)((int)local_218 + iVar6 + 0x180);
      uVar3 = *(uint *)((int)local_218 + iVar6 + 0x184);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x180) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x184) = uVar1 ^ uVar9;
      *(uint *)((int)local_218 + iVar6 + 0x184) = uVar9 ^ uVar3;
      *(uint *)((int)local_218 + iVar6 + 0x180) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x200);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x204);
      uVar2 = *(uint *)((int)auStack_18 + iVar6);
      uVar3 = *(uint *)((int)auStack_18 + iVar6 + 4);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x200) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x204) = uVar1 ^ uVar9;
      *(uint *)((int)auStack_18 + iVar6 + 4) = uVar9 ^ uVar3;
      *(uint *)((int)auStack_18 + iVar6) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    recovered_1000d010(local_218,arg_ecx);
    recovered_1000d010(arg_ecx,arg_ecx);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x80);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x84);
      uVar2 = *(uint *)((int)local_218 + iVar6 + 0x80);
      uVar3 = *(uint *)((int)local_218 + iVar6 + 0x84);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x80) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x84) = uVar1 ^ uVar9;
      *(uint *)((int)local_218 + iVar6 + 0x84) = uVar9 ^ uVar3;
      *(uint *)((int)local_218 + iVar6 + 0x80) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x100);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x104);
      uVar2 = *(uint *)((int)local_218 + iVar6 + 0x100);
      uVar3 = *(uint *)((int)local_218 + iVar6 + 0x104);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x100) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x104) = uVar1 ^ uVar9;
      *(uint *)((int)local_218 + iVar6 + 0x104) = uVar9 ^ uVar3;
      *(uint *)((int)local_218 + iVar6 + 0x100) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x180);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x184);
      uVar2 = *(uint *)((int)local_218 + iVar6 + 0x180);
      uVar3 = *(uint *)((int)local_218 + iVar6 + 0x184);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x180) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x184) = uVar1 ^ uVar9;
      *(uint *)((int)local_218 + iVar6 + 0x184) = uVar9 ^ uVar3;
      *(uint *)((int)local_218 + iVar6 + 0x180) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    iVar6 = -0x80;
    do {
      uVar9 = *(uint *)((int)arg_ecx + iVar6 + 0x200);
      uVar1 = *(uint *)((int)arg_ecx + iVar6 + 0x204);
      uVar2 = *(uint *)((int)auStack_18 + iVar6);
      uVar3 = *(uint *)((int)auStack_18 + iVar6 + 4);
      uVar8 = (uVar2 ^ uVar9) & uVar5;
      *(uint *)((int)arg_ecx + iVar6 + 0x200) = uVar9 ^ uVar8;
      uVar9 = (uVar3 ^ uVar1) & uVar4;
      *(uint *)((int)arg_ecx + iVar6 + 0x204) = uVar1 ^ uVar9;
      *(uint *)((int)auStack_18 + iVar6 + 4) = uVar9 ^ uVar3;
      *(uint *)((int)auStack_18 + iVar6) = uVar8 ^ uVar2;
      iVar6 = iVar6 + 8;
    } while (iVar6 != 0);
    bVar10 = uVar7 != 0;
    uVar7 = uVar7 - 1;
  } while (bVar10);
  return;
}

#undef DAT_1001de58
#undef DAT_1001ded8
#undef local_218
#undef local_98
#undef auStack_18

/* Recovered field convolution, reduction and two carry passes.
 * Pooka's Free Software License. */
void recovered_1000c480(longlong *output,const longlong *left,const longlong *right) {
    const int64_t *a=left;
    const int64_t *b=right;
    int64_t products[31]={0};
    for(unsigned i=0;i<16;i++)
        for(unsigned j=0;j<16;j++)products[i+j]+=a[i]*b[j];
    for(unsigned i=0;i<15;i++)products[i]+=38*products[i+16];
    int64_t *value=(int64_t *)output;
    for(unsigned i=0;i<16;i++)value[i]=products[i];
    for(unsigned round=0;round<2;round++) {
        for(unsigned i=0;i<16;i++) {
            value[i]+=0x10000;
            int64_t carry=value[i]>>16;
            value[i]-=carry*0x10000;
            if(i<15)value[i+1]+=carry-1;
            else value[0]+=38*(carry-1);
        }
    }
}


#undef LAB_1001df58
#define LAB_1001df58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x434U)))
#define local_4a0 (*(int *)(pf_stack_frame + 16))
#define local_49c (*(int *)(pf_stack_frame + 20))
#define local_498 (*(int *)(pf_stack_frame + 24))
#define local_494 (*(int *)(pf_stack_frame + 28))
#define local_490 (*(int *)(pf_stack_frame + 32))
#define local_48c (*(int *)(pf_stack_frame + 36))
#define local_488 (*(int *)(pf_stack_frame + 40))
#define local_484 (*(int *)(pf_stack_frame + 44))
#define local_480 (*(int *)(pf_stack_frame + 48))
#define local_47c (*(int *)(pf_stack_frame + 52))
#define local_478 (*(int *)(pf_stack_frame + 56))
#define local_474 (*(int *)(pf_stack_frame + 60))
#define local_470 (*(int *)(pf_stack_frame + 64))
#define local_46c (*(int *)(pf_stack_frame + 68))
#define local_468 (*(int *)(pf_stack_frame + 72))
#define local_464 (*(int *)(pf_stack_frame + 76))
#define local_460 (*(int *)(pf_stack_frame + 80))
#define local_45c (*(int *)(pf_stack_frame + 84))
#define local_458 (*(int *)(pf_stack_frame + 88))
#define local_454 (*(int *)(pf_stack_frame + 92))
#define local_450 (*(int *)(pf_stack_frame + 96))
#define local_44c (*(int *)(pf_stack_frame + 100))
#define local_448 (*(int *)(pf_stack_frame + 104))
#define local_444 (*(int *)(pf_stack_frame + 108))
#define local_440 (*(int *)(pf_stack_frame + 112))
#define local_43c (*(int *)(pf_stack_frame + 116))
#define local_438 (*(int *)(pf_stack_frame + 120))
#define local_434 (*(int *)(pf_stack_frame + 124))
#define local_430 (*(int *)(pf_stack_frame + 128))
#define local_42c (*(int *)(pf_stack_frame + 132))
#define local_428 (*(int *)(pf_stack_frame + 136))
#define local_424 (*(int *)(pf_stack_frame + 140))
#define local_420 (*(uint *)(pf_stack_frame + 144))
#define local_41c (*(int *)(pf_stack_frame + 148))
#define local_418 (*(uint *)(pf_stack_frame + 152))
#define local_414 (*(int *)(pf_stack_frame + 156))
#define local_410 (*(uint *)(pf_stack_frame + 160))
#define local_40c (*(int *)(pf_stack_frame + 164))
#define local_408 (*(uint *)(pf_stack_frame + 168))
#define local_404 (*(int *)(pf_stack_frame + 172))
#define local_400 (*(uint *)(pf_stack_frame + 176))
#define local_3fc (*(int *)(pf_stack_frame + 180))
#define local_3f8 (*(uint *)(pf_stack_frame + 184))
#define local_3f4 (*(int *)(pf_stack_frame + 188))
#define local_3f0 (*(uint *)(pf_stack_frame + 192))
#define local_3ec (*(int *)(pf_stack_frame + 196))
#define local_3e8 (*(uint *)(pf_stack_frame + 200))
#define local_3e4 (*(int *)(pf_stack_frame + 204))
#define local_3e0 (*(uint *)(pf_stack_frame + 208))
#define local_3dc (*(int *)(pf_stack_frame + 212))
#define local_3d8 (*(uint *)(pf_stack_frame + 216))
#define local_3d4 (*(int *)(pf_stack_frame + 220))
#define local_3d0 (*(uint *)(pf_stack_frame + 224))
#define local_3cc (*(int *)(pf_stack_frame + 228))
#define local_3c8 (*(uint *)(pf_stack_frame + 232))
#define local_3c4 (*(int *)(pf_stack_frame + 236))
#define local_3c0 (*(uint *)(pf_stack_frame + 240))
#define local_3bc (*(int *)(pf_stack_frame + 244))
#define local_3b8 (*(uint *)(pf_stack_frame + 248))
#define local_3b4 (*(int *)(pf_stack_frame + 252))
#define local_3b0 (*(uint *)(pf_stack_frame + 256))
#define local_3ac (*(int *)(pf_stack_frame + 260))
#define local_3a8 (*(uint *)(pf_stack_frame + 264))
#define local_3a4 (*(int *)(pf_stack_frame + 268))
#define local_3a0 (*(uint *)(pf_stack_frame + 272))
#define local_39c (*(int *)(pf_stack_frame + 276))
#define local_398 (*(uint *)(pf_stack_frame + 280))
#define local_394 (*(int *)(pf_stack_frame + 284))
#define local_390 (*(uint *)(pf_stack_frame + 288))
#define local_38c (*(int *)(pf_stack_frame + 292))
#define local_388 (*(uint *)(pf_stack_frame + 296))
#define local_384 (*(int *)(pf_stack_frame + 300))
#define local_380 (*(uint *)(pf_stack_frame + 304))
#define local_37c (*(int *)(pf_stack_frame + 308))
#define local_378 (*(uint *)(pf_stack_frame + 312))
#define local_374 (*(int *)(pf_stack_frame + 316))
#define local_370 (*(uint *)(pf_stack_frame + 320))
#define local_36c (*(int *)(pf_stack_frame + 324))
#define local_368 (*(uint *)(pf_stack_frame + 328))
#define local_364 (*(int *)(pf_stack_frame + 332))
#define local_360 (*(uint *)(pf_stack_frame + 336))
#define local_35c (*(int *)(pf_stack_frame + 340))
#define local_358 (*(uint *)(pf_stack_frame + 344))
#define local_354 (*(int *)(pf_stack_frame + 348))
#define local_350 (*(uint *)(pf_stack_frame + 352))
#define local_34c (*(int *)(pf_stack_frame + 356))
#define local_348 (*(uint *)(pf_stack_frame + 360))
#define local_344 (*(int *)(pf_stack_frame + 364))
#define local_340 (*(uint *)(pf_stack_frame + 368))
#define local_33c (*(int *)(pf_stack_frame + 372))
#define local_338 (*(uint *)(pf_stack_frame + 376))
#define local_334 (*(int *)(pf_stack_frame + 380))
#define local_330 (*(uint *)(pf_stack_frame + 384))
#define local_32c (*(int *)(pf_stack_frame + 388))
#define local_328 (*(uint *)(pf_stack_frame + 392))
#define local_324 (*(int *)(pf_stack_frame + 396))
#define local_31c (*(uint * *)(pf_stack_frame + 404))
#define local_318 (*(int *)(pf_stack_frame + 408))
#define local_314 (*(int *)(pf_stack_frame + 412))
#define local_310 (*(int *)(pf_stack_frame + 416))
#define local_30c (*(int *)(pf_stack_frame + 420))
#define local_308 (*(int *)(pf_stack_frame + 424))
#define local_304 (*(int *)(pf_stack_frame + 428))
#define local_300 (*(int *)(pf_stack_frame + 432))
#define local_2fc (*(int *)(pf_stack_frame + 436))
#define local_2f8 (*(int *)(pf_stack_frame + 440))
#define local_2f4 (*(int *)(pf_stack_frame + 444))
#define local_2f0 (*(int *)(pf_stack_frame + 448))
#define local_2ec (*(int *)(pf_stack_frame + 452))
#define local_2e8 (*(int *)(pf_stack_frame + 456))
#define local_2e4 (*(int *)(pf_stack_frame + 460))
#define local_2e0 (*(int *)(pf_stack_frame + 464))
#define local_2dc (*(int *)(pf_stack_frame + 468))
#define local_2d8 (*(int *)(pf_stack_frame + 472))
#define local_2d4 (*(int *)(pf_stack_frame + 476))
#define local_2d0 (*(int *)(pf_stack_frame + 480))
#define local_2cc (*(int *)(pf_stack_frame + 484))
#define local_2c8 (*(int *)(pf_stack_frame + 488))
#define local_2c4 (*(int *)(pf_stack_frame + 492))
#define local_2c0 (*(int *)(pf_stack_frame + 496))
#define local_2bc (*(int *)(pf_stack_frame + 500))
#define local_2b8 (*(int *)(pf_stack_frame + 504))
#define local_2b4 (*(int *)(pf_stack_frame + 508))
#define local_2b0 (*(int *)(pf_stack_frame + 512))
#define local_2ac (*(int *)(pf_stack_frame + 516))
#define local_2a8 (*(int *)(pf_stack_frame + 520))
#define local_2a4 (*(int *)(pf_stack_frame + 524))
#define local_2a0 (*(int *)(pf_stack_frame + 528))
#define local_29c (*(int *)(pf_stack_frame + 532))
#define local_298 (*(int *)(pf_stack_frame + 536))
#define local_294 (*(int *)(pf_stack_frame + 540))
#define local_290 (*(int *)(pf_stack_frame + 544))
#define local_28c (*(int *)(pf_stack_frame + 548))
#define local_288 (*(int *)(pf_stack_frame + 552))
#define local_284 (*(int *)(pf_stack_frame + 556))
#define local_280 (*(int *)(pf_stack_frame + 560))
#define local_27c (*(int *)(pf_stack_frame + 564))
#define local_278 (*(int *)(pf_stack_frame + 568))
#define local_274 (*(int *)(pf_stack_frame + 572))
#define local_270 (*(int *)(pf_stack_frame + 576))
#define local_26c (*(int *)(pf_stack_frame + 580))
#define local_268 (*(int *)(pf_stack_frame + 584))
#define local_264 (*(int *)(pf_stack_frame + 588))
#define local_260 (*(int *)(pf_stack_frame + 592))
#define local_25c (*(int *)(pf_stack_frame + 596))
#define local_258 (*(int *)(pf_stack_frame + 600))
#define local_254 (*(int *)(pf_stack_frame + 604))
#define local_250 (*(int *)(pf_stack_frame + 608))
#define local_24c (*(int *)(pf_stack_frame + 612))
#define local_248 (*(int *)(pf_stack_frame + 616))
#define local_244 (*(int *)(pf_stack_frame + 620))
#define local_240 (*(int *)(pf_stack_frame + 624))
#define local_23c (*(int *)(pf_stack_frame + 628))
#define local_238 (*(int *)(pf_stack_frame + 632))
#define local_234 (*(int *)(pf_stack_frame + 636))
#define local_230 (*(int *)(pf_stack_frame + 640))
#define local_22c (*(int *)(pf_stack_frame + 644))
#define local_228 (*(int *)(pf_stack_frame + 648))
#define local_224 (*(int *)(pf_stack_frame + 652))
#define local_220 (*(int *)(pf_stack_frame + 656))
#define local_21c (*(int *)(pf_stack_frame + 660))
#define local_218 (*(int *)(pf_stack_frame + 664))
#define local_214 (*(int *)(pf_stack_frame + 668))
#define local_210 (*(int *)(pf_stack_frame + 672))
#define local_20c (*(int *)(pf_stack_frame + 676))
#define local_208 (*(int *)(pf_stack_frame + 680))
#define local_204 (*(int *)(pf_stack_frame + 684))
#define local_200 (*(int *)(pf_stack_frame + 688))
#define local_1fc (*(int *)(pf_stack_frame + 692))
#define local_1f8 (*(int *)(pf_stack_frame + 696))
#define local_1f4 (*(int *)(pf_stack_frame + 700))
#define local_1f0 (*(int *)(pf_stack_frame + 704))
#define local_1ec (*(int *)(pf_stack_frame + 708))
#define local_1e8 (*(int *)(pf_stack_frame + 712))
#define local_1e4 (*(int *)(pf_stack_frame + 716))
#define local_1e0 (*(int *)(pf_stack_frame + 720))
#define local_1dc (*(int *)(pf_stack_frame + 724))
#define local_1d8 (*(int *)(pf_stack_frame + 728))
#define local_1d4 (*(int *)(pf_stack_frame + 732))
#define local_1d0 (*(int *)(pf_stack_frame + 736))
#define local_1cc (*(int *)(pf_stack_frame + 740))
#define local_1c8 (*(int *)(pf_stack_frame + 744))
#define local_1c4 (*(int *)(pf_stack_frame + 748))
#define local_1c0 (*(int *)(pf_stack_frame + 752))
#define local_1bc (*(int *)(pf_stack_frame + 756))
#define local_1b8 (*(int *)(pf_stack_frame + 760))
#define local_1b4 (*(int *)(pf_stack_frame + 764))
#define local_1b0 (*(int *)(pf_stack_frame + 768))
#define local_1ac (*(int *)(pf_stack_frame + 772))
#define local_1a8 (*(int *)(pf_stack_frame + 776))
#define local_1a4 (*(int *)(pf_stack_frame + 780))
#define local_1a0 (*(int *)(pf_stack_frame + 784))
#define local_19c (*(int *)(pf_stack_frame + 788))
#define local_198 (*(int *)(pf_stack_frame + 792))
#define local_194 (*(int *)(pf_stack_frame + 796))
#define local_190 (*(int *)(pf_stack_frame + 800))
#define local_18c (*(int *)(pf_stack_frame + 804))
#define local_188 (*(int *)(pf_stack_frame + 808))
#define local_184 (*(int *)(pf_stack_frame + 812))
#define local_180 (*(int *)(pf_stack_frame + 816))
#define local_17c (*(int *)(pf_stack_frame + 820))
#define local_178 (*(int *)(pf_stack_frame + 824))
#define local_174 (*(int *)(pf_stack_frame + 828))
#define local_170 (*(int *)(pf_stack_frame + 832))
#define local_16c (*(int *)(pf_stack_frame + 836))
#define local_168 (*(int *)(pf_stack_frame + 840))
#define local_164 (*(int *)(pf_stack_frame + 844))
#define local_160 (*(int *)(pf_stack_frame + 848))
#define local_15c (*(int *)(pf_stack_frame + 852))
#define local_158 (*(int *)(pf_stack_frame + 856))
#define local_154 (*(int *)(pf_stack_frame + 860))
#define local_150 (*(int *)(pf_stack_frame + 864))
#define local_14c (*(int *)(pf_stack_frame + 868))
#define local_148 (*(int *)(pf_stack_frame + 872))
#define local_144 (*(int *)(pf_stack_frame + 876))
#define local_140 (*(int *)(pf_stack_frame + 880))
#define local_13c (*(int *)(pf_stack_frame + 884))
#define local_138 (*(int *)(pf_stack_frame + 888))
#define local_134 (*(int *)(pf_stack_frame + 892))
#define local_130 (*(int *)(pf_stack_frame + 896))
#define local_12c (*(int *)(pf_stack_frame + 900))
#define local_128 (*(int *)(pf_stack_frame + 904))
#define local_124 (*(int *)(pf_stack_frame + 908))
#define local_120 (*(int *)(pf_stack_frame + 912))
#define local_11c (*(int *)(pf_stack_frame + 916))
#define local_118 (*(uint *)(pf_stack_frame + 920))
#define local_114 (*(int *)(pf_stack_frame + 924))
#define local_110 (*(uint *)(pf_stack_frame + 928))
#define local_10c (*(int *)(pf_stack_frame + 932))
#define local_108 (*(uint *)(pf_stack_frame + 936))
#define local_104 (*(int *)(pf_stack_frame + 940))
#define local_100 (*(uint *)(pf_stack_frame + 944))
#define local_fc (*(int *)(pf_stack_frame + 948))
#define local_f8 (*(uint *)(pf_stack_frame + 952))
#define local_f4 (*(int *)(pf_stack_frame + 956))
#define local_f0 (*(uint *)(pf_stack_frame + 960))
#define local_ec (*(int *)(pf_stack_frame + 964))
#define local_e8 (*(uint *)(pf_stack_frame + 968))
#define local_e4 (*(int *)(pf_stack_frame + 972))
#define local_e0 (*(uint *)(pf_stack_frame + 976))
#define local_dc (*(int *)(pf_stack_frame + 980))
#define local_d8 (*(uint *)(pf_stack_frame + 984))
#define local_d4 (*(int *)(pf_stack_frame + 988))
#define local_d0 (*(uint *)(pf_stack_frame + 992))
#define local_cc (*(int *)(pf_stack_frame + 996))
#define local_c8 (*(uint *)(pf_stack_frame + 1000))
#define local_c4 (*(int *)(pf_stack_frame + 1004))
#define local_c0 (*(uint *)(pf_stack_frame + 1008))
#define local_bc (*(int *)(pf_stack_frame + 1012))
#define local_b8 (*(uint *)(pf_stack_frame + 1016))
#define local_b4 (*(int *)(pf_stack_frame + 1020))
#define local_b0 (*(uint *)(pf_stack_frame + 1024))
#define local_ac (*(int *)(pf_stack_frame + 1028))
#define local_a8 (*(uint *)(pf_stack_frame + 1032))
#define local_a4 (*(int *)(pf_stack_frame + 1036))
#define local_a0 (*(uint *)(pf_stack_frame + 1040))
#define local_9c (*(int *)(pf_stack_frame + 1044))
#define local_98 (*(uint *)(pf_stack_frame + 1048))
#define local_94 (*(int *)(pf_stack_frame + 1052))
#define local_90 (*(uint *)(pf_stack_frame + 1056))
#define local_8c (*(int *)(pf_stack_frame + 1060))
#define local_88 (*(uint *)(pf_stack_frame + 1064))
#define local_84 (*(int *)(pf_stack_frame + 1068))
#define local_80 (*(uint *)(pf_stack_frame + 1072))
#define local_7c (*(int *)(pf_stack_frame + 1076))
#define local_78 (*(uint *)(pf_stack_frame + 1080))
#define local_74 (*(int *)(pf_stack_frame + 1084))
#define local_70 (*(uint *)(pf_stack_frame + 1088))
#define local_6c (*(int *)(pf_stack_frame + 1092))
#define local_68 (*(uint *)(pf_stack_frame + 1096))
#define local_64 (*(int *)(pf_stack_frame + 1100))
#define local_60 (*(uint *)(pf_stack_frame + 1104))
#define local_5c (*(int *)(pf_stack_frame + 1108))
#define local_58 (*(uint *)(pf_stack_frame + 1112))
#define local_54 (*(int *)(pf_stack_frame + 1116))
#define local_50 (*(uint *)(pf_stack_frame + 1120))
#define local_4c (*(int *)(pf_stack_frame + 1124))
#define local_48 (*(uint *)(pf_stack_frame + 1128))
#define local_44 (*(int *)(pf_stack_frame + 1132))
#define local_40 (*(uint *)(pf_stack_frame + 1136))
#define local_3c (*(int *)(pf_stack_frame + 1140))
#define local_38 (*(uint *)(pf_stack_frame + 1144))
#define local_34 (*(int *)(pf_stack_frame + 1148))
#define local_30 (*(uint *)(pf_stack_frame + 1152))
#define local_2c (*(int *)(pf_stack_frame + 1156))
#define local_28 (*(uint *)(pf_stack_frame + 1160))
#define local_24 (*(int *)(pf_stack_frame + 1164))
#define local_20 (*(uint *)(pf_stack_frame + 1168))
#define local_1c (*(int *)(pf_stack_frame + 1172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000d010
 */

void recovered_1000d010(uint *arg_ecx,uint *arg_edx)

{
  unsigned char pf_stack_frame[1232] __attribute__((aligned(16))) = {0};

  uint uVar1;
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
  uint uVar14;
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
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  uint uVar49;
  uint uVar50;
  uint uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  uint uVar55;
  uint uVar56;
  uint uVar57;
  uint uVar58;
  uint uVar59;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  uint uVar64;
  uint uVar65;
  uint uVar66;
  uint uVar67;
  uint uVar68;
  uint uVar69;
  uint uVar70;
  uint uVar71;
  uint uVar72;
  uint uVar73;
  uint uVar74;
  uint uVar75;
  uint uVar76;
  uint uVar77;
  uint uVar78;
  uint uVar79;
  uint uVar80;
  uint uVar81;
  uint uVar82;
  uint uVar83;
  uint uVar84;
  uint uVar85;
  uint uVar86;
  uint uVar87;
  uint uVar88;
  uint uVar89;
  uint uVar90;
  uint uVar91;
  uint uVar92;
  uint uVar93;
  uint uVar94;
  uint uVar95;
  uint uVar96;
  uint uVar97;
  uint uVar98;
  uint uVar99;
  uint uVar100;
  uint uVar101;
  uint uVar102;
  uint uVar103;
  uint uVar104;
  uint uVar105;
  uint uVar106;
  uint uVar107;
  uint uVar108;
  uint uVar109;
  uint uVar110;
  uint uVar111;
  uint uVar112;
  uint uVar113;
  uint uVar114;
  uint uVar115;
  uint uVar116;
  uint uVar117;
  uint uVar118;
  uint uVar119;
  uint uVar120;
  uint uVar121;
  uint uVar122;
  uint uVar123;
  uint uVar124;
  uint uVar125;
  uint uVar126;
  uint uVar127;
  uint uVar128;

  uVar113 = arg_ecx[0x20];
  uVar114 = *arg_ecx;
  local_3a0 = uVar113 - uVar114;
  uVar115 = arg_ecx[0x21];
  uVar116 = arg_ecx[1];
  local_39c = (uVar115 - uVar116) - (uint)(uVar113 < uVar114);
  uVar117 = arg_ecx[0x22];
  uVar118 = arg_ecx[2];
  local_398 = uVar117 - uVar118;
  uVar119 = arg_ecx[0x23];
  uVar120 = arg_ecx[3];
  local_394 = (uVar119 - uVar120) - (uint)(uVar117 < uVar118);
  uVar121 = arg_ecx[0x24];
  uVar122 = arg_ecx[4];
  local_390 = uVar121 - uVar122;
  uVar123 = arg_ecx[0x25];
  uVar124 = arg_ecx[5];
  local_38c = (uVar123 - uVar124) - (uint)(uVar121 < uVar122);
  uVar125 = arg_ecx[0x26];
  uVar126 = arg_ecx[6];
  local_388 = uVar125 - uVar126;
  uVar127 = arg_ecx[0x27];
  uVar128 = arg_ecx[7];
  local_384 = (uVar127 - uVar128) - (uint)(uVar125 < uVar126);
  uVar1 = arg_ecx[0x28];
  uVar2 = arg_ecx[8];
  local_380 = uVar1 - uVar2;
  uVar3 = arg_ecx[0x29];
  uVar4 = arg_ecx[9];
  local_37c = (uVar3 - uVar4) - (uint)(uVar1 < uVar2);
  uVar5 = arg_ecx[0x2a];
  uVar6 = arg_ecx[10];
  local_378 = uVar5 - uVar6;
  uVar7 = arg_ecx[0x2b];
  uVar8 = arg_ecx[0xb];
  local_374 = (uVar7 - uVar8) - (uint)(uVar5 < uVar6);
  uVar9 = arg_ecx[0x2c];
  uVar10 = arg_ecx[0xc];
  local_370 = uVar9 - uVar10;
  uVar11 = arg_ecx[0x2d];
  uVar12 = arg_ecx[0xd];
  local_36c = (uVar11 - uVar12) - (uint)(uVar9 < uVar10);
  uVar13 = arg_ecx[0x2e];
  uVar14 = arg_ecx[0xe];
  local_368 = uVar13 - uVar14;
  uVar15 = arg_ecx[0x2f];
  uVar16 = arg_ecx[0xf];
  local_364 = (uVar15 - uVar16) - (uint)(uVar13 < uVar14);
  uVar17 = arg_ecx[0x30];
  uVar18 = arg_ecx[0x10];
  local_360 = uVar17 - uVar18;
  uVar19 = arg_ecx[0x31];
  uVar20 = arg_ecx[0x11];
  local_35c = (uVar19 - uVar20) - (uint)(uVar17 < uVar18);
  uVar21 = arg_ecx[0x32];
  uVar22 = arg_ecx[0x12];
  local_358 = uVar21 - uVar22;
  uVar23 = arg_ecx[0x33];
  uVar24 = arg_ecx[0x13];
  local_354 = (uVar23 - uVar24) - (uint)(uVar21 < uVar22);
  uVar25 = arg_ecx[0x34];
  uVar26 = arg_ecx[0x14];
  local_350 = uVar25 - uVar26;
  uVar27 = arg_ecx[0x35];
  uVar28 = arg_ecx[0x15];
  local_34c = (uVar27 - uVar28) - (uint)(uVar25 < uVar26);
  uVar29 = arg_ecx[0x36];
  uVar30 = arg_ecx[0x16];
  local_348 = uVar29 - uVar30;
  uVar31 = arg_ecx[0x37];
  uVar32 = arg_ecx[0x17];
  local_344 = (uVar31 - uVar32) - (uint)(uVar29 < uVar30);
  uVar33 = arg_ecx[0x38];
  uVar34 = arg_ecx[0x18];
  local_340 = uVar33 - uVar34;
  uVar35 = arg_ecx[0x39];
  uVar36 = arg_ecx[0x19];
  local_33c = (uVar35 - uVar36) - (uint)(uVar33 < uVar34);
  uVar37 = arg_ecx[0x3a];
  uVar38 = arg_ecx[0x1a];
  local_338 = uVar37 - uVar38;
  uVar39 = arg_ecx[0x3b];
  uVar40 = arg_ecx[0x1b];
  local_334 = (uVar39 - uVar40) - (uint)(uVar37 < uVar38);
  uVar41 = arg_ecx[0x3c];
  uVar42 = arg_ecx[0x1c];
  local_330 = uVar41 - uVar42;
  uVar43 = arg_ecx[0x3d];
  uVar44 = arg_ecx[0x1d];
  local_32c = (uVar43 - uVar44) - (uint)(uVar41 < uVar42);
  uVar45 = arg_ecx[0x3e];
  uVar46 = arg_ecx[0x1e];
  local_328 = uVar45 - uVar46;
  uVar47 = arg_ecx[0x3f];
  uVar48 = arg_ecx[0x1f];
  local_324 = (uVar47 - uVar48) - (uint)(uVar45 < uVar46);
  uVar49 = arg_edx[0x20];
  uVar50 = *arg_edx;
  local_4a0 = uVar49 - uVar50;
  uVar51 = arg_edx[0x21];
  uVar52 = arg_edx[1];
  local_49c = (uVar51 - uVar52) - (uint)(uVar49 < uVar50);
  uVar53 = arg_edx[0x22];
  uVar54 = arg_edx[2];
  local_498 = uVar53 - uVar54;
  uVar55 = arg_edx[0x23];
  uVar56 = arg_edx[3];
  local_494 = (uVar55 - uVar56) - (uint)(uVar53 < uVar54);
  uVar57 = arg_edx[0x24];
  uVar58 = arg_edx[4];
  local_490 = uVar57 - uVar58;
  uVar59 = arg_edx[0x25];
  uVar60 = arg_edx[5];
  local_48c = (uVar59 - uVar60) - (uint)(uVar57 < uVar58);
  uVar61 = arg_edx[0x26];
  uVar62 = arg_edx[6];
  local_488 = uVar61 - uVar62;
  uVar63 = arg_edx[0x27];
  uVar64 = arg_edx[7];
  local_484 = (uVar63 - uVar64) - (uint)(uVar61 < uVar62);
  uVar65 = arg_edx[0x28];
  uVar66 = arg_edx[8];
  local_480 = uVar65 - uVar66;
  uVar67 = arg_edx[0x29];
  uVar68 = arg_edx[9];
  local_47c = (uVar67 - uVar68) - (uint)(uVar65 < uVar66);
  uVar69 = arg_edx[0x2a];
  uVar70 = arg_edx[10];
  local_478 = uVar69 - uVar70;
  uVar71 = arg_edx[0x2b];
  uVar72 = arg_edx[0xb];
  local_474 = (uVar71 - uVar72) - (uint)(uVar69 < uVar70);
  uVar73 = arg_edx[0x2c];
  uVar74 = arg_edx[0xc];
  local_470 = uVar73 - uVar74;
  uVar75 = arg_edx[0x2d];
  uVar76 = arg_edx[0xd];
  local_46c = (uVar75 - uVar76) - (uint)(uVar73 < uVar74);
  uVar77 = arg_edx[0x2e];
  uVar78 = arg_edx[0xe];
  local_468 = uVar77 - uVar78;
  uVar79 = arg_edx[0x2f];
  uVar80 = arg_edx[0xf];
  local_464 = (uVar79 - uVar80) - (uint)(uVar77 < uVar78);
  uVar81 = arg_edx[0x30];
  uVar82 = arg_edx[0x10];
  local_460 = uVar81 - uVar82;
  uVar83 = arg_edx[0x31];
  uVar84 = arg_edx[0x11];
  local_45c = (uVar83 - uVar84) - (uint)(uVar81 < uVar82);
  uVar85 = arg_edx[0x32];
  uVar86 = arg_edx[0x12];
  local_458 = uVar85 - uVar86;
  uVar87 = arg_edx[0x33];
  uVar88 = arg_edx[0x13];
  local_454 = (uVar87 - uVar88) - (uint)(uVar85 < uVar86);
  uVar89 = arg_edx[0x34];
  uVar90 = arg_edx[0x14];
  local_450 = uVar89 - uVar90;
  uVar91 = arg_edx[0x35];
  uVar92 = arg_edx[0x15];
  local_44c = (uVar91 - uVar92) - (uint)(uVar89 < uVar90);
  uVar93 = arg_edx[0x36];
  uVar94 = arg_edx[0x16];
  local_448 = uVar93 - uVar94;
  uVar95 = arg_edx[0x37];
  uVar96 = arg_edx[0x17];
  local_444 = (uVar95 - uVar96) - (uint)(uVar93 < uVar94);
  uVar97 = arg_edx[0x38];
  uVar98 = arg_edx[0x18];
  local_440 = uVar97 - uVar98;
  uVar99 = arg_edx[0x39];
  uVar100 = arg_edx[0x19];
  local_43c = (uVar99 - uVar100) - (uint)(uVar97 < uVar98);
  uVar101 = arg_edx[0x3a];
  uVar102 = arg_edx[0x1a];
  local_438 = uVar101 - uVar102;
  uVar103 = arg_edx[0x3b];
  uVar104 = arg_edx[0x1b];
  local_434 = (uVar103 - uVar104) - (uint)(uVar101 < uVar102);
  uVar105 = arg_edx[0x3c];
  uVar106 = arg_edx[0x1c];
  local_430 = uVar105 - uVar106;
  uVar107 = arg_edx[0x3d];
  uVar108 = arg_edx[0x1d];
  local_42c = (uVar107 - uVar108) - (uint)(uVar105 < uVar106);
  uVar109 = arg_edx[0x3e];
  uVar110 = arg_edx[0x1e];
  local_428 = uVar109 - uVar110;
  uVar111 = arg_edx[0x3f];
  uVar112 = arg_edx[0x1f];
  local_424 = (uVar111 - uVar112) - (uint)(uVar109 < uVar110);
  local_31c = arg_ecx + 0x20;
  recovered_1000c480((longlong *)&local_3a0,(longlong *)&local_3a0,(longlong *)&local_4a0);
  local_420 = uVar113 + uVar114;
  local_41c = uVar116 + uVar115 + (uint)CARRY4(uVar113,uVar114);
  local_418 = uVar118 + uVar117;
  local_414 = uVar120 + uVar119 + (uint)CARRY4(uVar118,uVar117);
  local_410 = uVar122 + uVar121;
  local_40c = uVar124 + uVar123 + (uint)CARRY4(uVar122,uVar121);
  local_408 = uVar126 + uVar125;
  local_404 = uVar128 + uVar127 + (uint)CARRY4(uVar126,uVar125);
  local_400 = uVar2 + uVar1;
  local_3fc = uVar4 + uVar3 + (uint)CARRY4(uVar2,uVar1);
  local_3f8 = uVar6 + uVar5;
  local_3f4 = uVar8 + uVar7 + (uint)CARRY4(uVar6,uVar5);
  local_3f0 = uVar10 + uVar9;
  local_3ec = uVar12 + uVar11 + (uint)CARRY4(uVar10,uVar9);
  local_3e8 = uVar14 + uVar13;
  local_3e4 = uVar16 + uVar15 + (uint)CARRY4(uVar14,uVar13);
  local_3e0 = uVar18 + uVar17;
  local_3dc = uVar20 + uVar19 + (uint)CARRY4(uVar18,uVar17);
  local_3d8 = uVar22 + uVar21;
  local_3d4 = uVar24 + uVar23 + (uint)CARRY4(uVar22,uVar21);
  local_3d0 = uVar26 + uVar25;
  local_3cc = uVar28 + uVar27 + (uint)CARRY4(uVar26,uVar25);
  local_3c8 = uVar30 + uVar29;
  local_3c4 = uVar32 + uVar31 + (uint)CARRY4(uVar30,uVar29);
  local_3c0 = uVar34 + uVar33;
  local_3bc = uVar36 + uVar35 + (uint)CARRY4(uVar34,uVar33);
  local_3b8 = uVar38 + uVar37;
  local_3b4 = uVar40 + uVar39 + (uint)CARRY4(uVar38,uVar37);
  local_3b0 = uVar42 + uVar41;
  local_3ac = uVar44 + uVar43 + (uint)CARRY4(uVar42,uVar41);
  local_3a8 = uVar46 + uVar45;
  local_3a4 = uVar48 + uVar47 + (uint)CARRY4(uVar46,uVar45);
  local_4a0 = uVar50 + uVar49;
  local_49c = uVar52 + uVar51 + (uint)CARRY4(uVar50,uVar49);
  local_498 = uVar54 + uVar53;
  local_494 = uVar56 + uVar55 + (uint)CARRY4(uVar54,uVar53);
  local_490 = uVar58 + uVar57;
  local_48c = uVar60 + uVar59 + (uint)CARRY4(uVar58,uVar57);
  local_488 = uVar62 + uVar61;
  local_484 = uVar64 + uVar63 + (uint)CARRY4(uVar62,uVar61);
  local_480 = uVar66 + uVar65;
  local_47c = uVar68 + uVar67 + (uint)CARRY4(uVar66,uVar65);
  local_478 = uVar70 + uVar69;
  local_474 = uVar72 + uVar71 + (uint)CARRY4(uVar70,uVar69);
  local_470 = uVar74 + uVar73;
  local_46c = uVar76 + uVar75 + (uint)CARRY4(uVar74,uVar73);
  local_468 = uVar78 + uVar77;
  local_464 = uVar80 + uVar79 + (uint)CARRY4(uVar78,uVar77);
  local_460 = uVar82 + uVar81;
  local_45c = uVar84 + uVar83 + (uint)CARRY4(uVar82,uVar81);
  local_458 = uVar86 + uVar85;
  local_454 = uVar88 + uVar87 + (uint)CARRY4(uVar86,uVar85);
  local_450 = uVar90 + uVar89;
  local_44c = uVar92 + uVar91 + (uint)CARRY4(uVar90,uVar89);
  local_448 = uVar94 + uVar93;
  local_444 = uVar96 + uVar95 + (uint)CARRY4(uVar94,uVar93);
  local_440 = uVar98 + uVar97;
  local_43c = uVar100 + uVar99 + (uint)CARRY4(uVar98,uVar97);
  local_438 = uVar102 + uVar101;
  local_434 = uVar104 + uVar103 + (uint)CARRY4(uVar102,uVar101);
  local_430 = uVar106 + uVar105;
  local_42c = uVar108 + uVar107 + (uint)CARRY4(uVar106,uVar105);
  local_428 = uVar110 + uVar109;
  local_424 = uVar112 + uVar111 + (uint)CARRY4(uVar110,uVar109);
  recovered_1000c480((longlong *)&local_420,(longlong *)&local_420,(longlong *)&local_4a0);
  recovered_1000c480((longlong *)&local_98,(longlong *)(arg_ecx + 0x60),(longlong *)(arg_edx + 0x60)
                    );
  recovered_1000c480((longlong *)&local_98,(longlong *)&local_98,(longlong *)&LAB_1001df58);
  recovered_1000c480((longlong *)&local_118,(longlong *)(arg_ecx + 0x40),
                     (longlong *)(arg_edx + 0x40));
  uVar128 = local_114 << 1 | local_118 >> 0x1f;
  local_118 = local_118 * 2;
  uVar113 = local_10c << 1 | local_110 >> 0x1f;
  local_110 = local_110 * 2;
  uVar114 = local_104 << 1 | local_108 >> 0x1f;
  local_108 = local_108 * 2;
  uVar115 = local_fc << 1 | local_100 >> 0x1f;
  local_100 = local_100 * 2;
  uVar116 = local_f4 << 1 | local_f8 >> 0x1f;
  local_f8 = local_f8 * 2;
  uVar117 = local_ec << 1 | local_f0 >> 0x1f;
  local_f0 = local_f0 * 2;
  uVar118 = local_e4 << 1 | local_e8 >> 0x1f;
  local_e8 = local_e8 * 2;
  uVar119 = local_dc << 1 | local_e0 >> 0x1f;
  local_e0 = local_e0 * 2;
  uVar120 = local_d4 << 1 | local_d8 >> 0x1f;
  local_d8 = local_d8 * 2;
  uVar121 = local_cc << 1 | local_d0 >> 0x1f;
  local_d0 = local_d0 * 2;
  uVar122 = local_c4 << 1 | local_c8 >> 0x1f;
  local_c8 = local_c8 * 2;
  uVar123 = local_bc << 1 | local_c0 >> 0x1f;
  local_c0 = local_c0 * 2;
  uVar124 = local_b4 << 1 | local_b8 >> 0x1f;
  local_b8 = local_b8 * 2;
  uVar125 = local_ac << 1 | local_b0 >> 0x1f;
  local_b0 = local_b0 * 2;
  uVar126 = local_a4 << 1 | local_a8 >> 0x1f;
  local_a8 = local_a8 * 2;
  uVar127 = local_9c << 1 | local_a0 >> 0x1f;
  local_a0 = local_a0 * 2;
  local_318 = local_420 - local_3a0;
  local_314 = (local_41c - local_39c) - (uint)(local_420 < local_3a0);
  local_310 = local_418 - local_398;
  local_30c = (local_414 - local_394) - (uint)(local_418 < local_398);
  local_308 = local_410 - local_390;
  local_304 = (local_40c - local_38c) - (uint)(local_410 < local_390);
  local_300 = local_408 - local_388;
  local_2fc = (local_404 - local_384) - (uint)(local_408 < local_388);
  local_2f8 = local_400 - local_380;
  local_2f4 = (local_3fc - local_37c) - (uint)(local_400 < local_380);
  local_2f0 = local_3f8 - local_378;
  local_2ec = (local_3f4 - local_374) - (uint)(local_3f8 < local_378);
  local_2e8 = local_3f0 - local_370;
  local_2e4 = (local_3ec - local_36c) - (uint)(local_3f0 < local_370);
  local_2e0 = local_3e8 - local_368;
  local_2dc = (local_3e4 - local_364) - (uint)(local_3e8 < local_368);
  local_2d8 = local_3e0 - local_360;
  local_2d4 = (local_3dc - local_35c) - (uint)(local_3e0 < local_360);
  local_2d0 = local_3d8 - local_358;
  local_2cc = (local_3d4 - local_354) - (uint)(local_3d8 < local_358);
  local_2c8 = local_3d0 - local_350;
  local_2c4 = (local_3cc - local_34c) - (uint)(local_3d0 < local_350);
  local_2c0 = local_3c8 - local_348;
  local_2bc = (local_3c4 - local_344) - (uint)(local_3c8 < local_348);
  local_2b8 = local_3c0 - local_340;
  local_2b4 = (local_3bc - local_33c) - (uint)(local_3c0 < local_340);
  local_2b0 = local_3b8 - local_338;
  local_2ac = (local_3b4 - local_334) - (uint)(local_3b8 < local_338);
  local_2a8 = local_3b0 - local_330;
  local_2a4 = (local_3ac - local_32c) - (uint)(local_3b0 < local_330);
  local_2a0 = local_3a8 - local_328;
  local_29c = (local_3a4 - local_324) - (uint)(local_3a8 < local_328);
  local_198 = local_118 - local_98;
  local_194 = (uVar128 - local_94) - (uint)(local_118 < local_98);
  local_190 = local_110 - local_90;
  local_18c = (uVar113 - local_8c) - (uint)(local_110 < local_90);
  local_188 = local_108 - local_88;
  local_184 = (uVar114 - local_84) - (uint)(local_108 < local_88);
  local_180 = local_100 - local_80;
  local_17c = (uVar115 - local_7c) - (uint)(local_100 < local_80);
  local_178 = local_f8 - local_78;
  local_174 = (uVar116 - local_74) - (uint)(local_f8 < local_78);
  local_170 = local_f0 - local_70;
  local_16c = (uVar117 - local_6c) - (uint)(local_f0 < local_70);
  local_168 = local_e8 - local_68;
  local_164 = (uVar118 - local_64) - (uint)(local_e8 < local_68);
  local_160 = local_e0 - local_60;
  local_15c = (uVar119 - local_5c) - (uint)(local_e0 < local_60);
  local_158 = local_d8 - local_58;
  local_154 = (uVar120 - local_54) - (uint)(local_d8 < local_58);
  local_150 = local_d0 - local_50;
  local_14c = (uVar121 - local_4c) - (uint)(local_d0 < local_50);
  local_148 = local_c8 - local_48;
  local_144 = (uVar122 - local_44) - (uint)(local_c8 < local_48);
  local_140 = local_c0 - local_40;
  local_13c = (uVar123 - local_3c) - (uint)(local_c0 < local_40);
  local_138 = local_b8 - local_38;
  local_134 = (uVar124 - local_34) - (uint)(local_b8 < local_38);
  local_130 = local_b0 - local_30;
  local_12c = (uVar125 - local_2c) - (uint)(local_b0 < local_30);
  local_128 = local_a8 - local_28;
  local_124 = (uVar126 - local_24) - (uint)(local_a8 < local_28);
  local_120 = local_a0 - local_20;
  local_11c = (uVar127 - local_1c) - (uint)(local_a0 < local_20);
  local_218 = local_118 + local_98;
  local_214 = uVar128 + local_94 + (uint)CARRY4(local_118,local_98);
  local_210 = local_110 + local_90;
  local_20c = uVar113 + local_8c + (uint)CARRY4(local_110,local_90);
  local_208 = local_108 + local_88;
  local_204 = uVar114 + local_84 + (uint)CARRY4(local_108,local_88);
  local_200 = local_100 + local_80;
  local_1fc = uVar115 + local_7c + (uint)CARRY4(local_100,local_80);
  local_1f8 = local_f8 + local_78;
  local_1f4 = uVar116 + local_74 + (uint)CARRY4(local_f8,local_78);
  local_1f0 = local_f0 + local_70;
  local_1ec = uVar117 + local_6c + (uint)CARRY4(local_f0,local_70);
  local_1e8 = local_e8 + local_68;
  local_1e4 = uVar118 + local_64 + (uint)CARRY4(local_e8,local_68);
  local_1e0 = local_e0 + local_60;
  local_1dc = uVar119 + local_5c + (uint)CARRY4(local_e0,local_60);
  local_1d8 = local_d8 + local_58;
  local_1d4 = uVar120 + local_54 + (uint)CARRY4(local_d8,local_58);
  local_1d0 = local_d0 + local_50;
  local_1cc = uVar121 + local_4c + (uint)CARRY4(local_d0,local_50);
  local_1c8 = local_c8 + local_48;
  local_1c4 = uVar122 + local_44 + (uint)CARRY4(local_c8,local_48);
  local_1c0 = local_c0 + local_40;
  local_1bc = uVar123 + local_3c + (uint)CARRY4(local_c0,local_40);
  local_1b8 = local_b8 + local_38;
  local_1b4 = uVar124 + local_34 + (uint)CARRY4(local_b8,local_38);
  local_1b0 = local_b0 + local_30;
  local_1ac = uVar125 + local_2c + (uint)CARRY4(local_b0,local_30);
  local_1a8 = local_a8 + local_28;
  local_1a4 = uVar126 + local_24 + (uint)CARRY4(local_a8,local_28);
  local_1a0 = local_a0 + local_20;
  local_19c = uVar127 + local_1c + (uint)CARRY4(local_a0,local_20);
  local_298 = local_3a0 + local_420;
  local_294 = local_39c + local_41c + (uint)CARRY4(local_3a0,local_420);
  local_290 = local_398 + local_418;
  local_28c = local_394 + local_414 + (uint)CARRY4(local_398,local_418);
  local_288 = local_390 + local_410;
  local_284 = local_38c + local_40c + (uint)CARRY4(local_390,local_410);
  local_280 = local_388 + local_408;
  local_27c = local_384 + local_404 + (uint)CARRY4(local_388,local_408);
  local_278 = local_380 + local_400;
  local_274 = local_37c + local_3fc + (uint)CARRY4(local_380,local_400);
  local_270 = local_378 + local_3f8;
  local_26c = local_374 + local_3f4 + (uint)CARRY4(local_378,local_3f8);
  local_268 = local_370 + local_3f0;
  local_264 = local_36c + local_3ec + (uint)CARRY4(local_370,local_3f0);
  local_260 = local_368 + local_3e8;
  local_25c = local_364 + local_3e4 + (uint)CARRY4(local_368,local_3e8);
  local_258 = local_360 + local_3e0;
  local_254 = local_35c + local_3dc + (uint)CARRY4(local_360,local_3e0);
  local_250 = local_358 + local_3d8;
  local_24c = local_354 + local_3d4 + (uint)CARRY4(local_358,local_3d8);
  local_248 = local_350 + local_3d0;
  local_244 = local_34c + local_3cc + (uint)CARRY4(local_350,local_3d0);
  local_240 = local_348 + local_3c8;
  local_23c = local_344 + local_3c4 + (uint)CARRY4(local_348,local_3c8);
  local_238 = local_340 + local_3c0;
  local_234 = local_33c + local_3bc + (uint)CARRY4(local_340,local_3c0);
  local_230 = local_338 + local_3b8;
  local_22c = local_334 + local_3b4 + (uint)CARRY4(local_338,local_3b8);
  local_228 = local_330 + local_3b0;
  local_224 = local_32c + local_3ac + (uint)CARRY4(local_330,local_3b0);
  local_220 = local_328 + local_3a8;
  local_21c = local_324 + local_3a4 + (uint)CARRY4(local_328,local_3a8);
  recovered_1000c480((longlong *)arg_ecx,(longlong *)&local_318,(longlong *)&local_198);
  recovered_1000c480((longlong *)local_31c,(longlong *)&local_298,(longlong *)&local_218);
  recovered_1000c480((longlong *)(arg_ecx + 0x40),(longlong *)&local_218,(longlong *)&local_198);
  recovered_1000c480((longlong *)(arg_ecx + 0x60),(longlong *)&local_318,(longlong *)&local_298);
  return;
}

#undef LAB_1001df58
#undef local_4a0
#undef local_49c
#undef local_498
#undef local_494
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_43c
#undef local_438
#undef local_434
#undef local_430
#undef local_42c
#undef local_428
#undef local_424
#undef local_420
#undef local_41c
#undef local_418
#undef local_414
#undef local_410
#undef local_40c
#undef local_408
#undef local_404
#undef local_400
#undef local_3fc
#undef local_3f8
#undef local_3f4
#undef local_3f0
#undef local_3ec
#undef local_3e8
#undef local_3e4
#undef local_3e0
#undef local_3dc
#undef local_3d8
#undef local_3d4
#undef local_3d0
#undef local_3cc
#undef local_3c8
#undef local_3c4
#undef local_3c0
#undef local_3bc
#undef local_3b8
#undef local_3b4
#undef local_3b0
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_398
#undef local_394
#undef local_390
#undef local_38c
#undef local_388
#undef local_384
#undef local_380
#undef local_37c
#undef local_378
#undef local_374
#undef local_370
#undef local_36c
#undef local_368
#undef local_364
#undef local_360
#undef local_35c
#undef local_358
#undef local_354
#undef local_350
#undef local_34c
#undef local_348
#undef local_344
#undef local_340
#undef local_33c
#undef local_338
#undef local_334
#undef local_330
#undef local_32c
#undef local_328
#undef local_324
#undef local_31c
#undef local_318
#undef local_314
#undef local_310
#undef local_30c
#undef local_308
#undef local_304
#undef local_300
#undef local_2fc
#undef local_2f8
#undef local_2f4
#undef local_2f0
#undef local_2ec
#undef local_2e8
#undef local_2e4
#undef local_2e0
#undef local_2dc
#undef local_2d8
#undef local_2d4
#undef local_2d0
#undef local_2cc
#undef local_2c8
#undef local_2c4
#undef local_2c0
#undef local_2bc
#undef local_2b8
#undef local_2b4
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
#undef local_288
#undef local_284
#undef local_280
#undef local_27c
#undef local_278
#undef local_274
#undef local_270
#undef local_26c
#undef local_268
#undef local_264
#undef local_260
#undef local_25c
#undef local_258
#undef local_254
#undef local_250
#undef local_24c
#undef local_248
#undef local_244
#undef local_240
#undef local_23c
#undef local_238
#undef local_234
#undef local_230
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_218
#undef local_214
#undef local_210
#undef local_20c
#undef local_208
#undef local_204
#undef local_200
#undef local_1fc
#undef local_1f8
#undef local_1f4
#undef local_1f0
#undef local_1ec
#undef local_1e8
#undef local_1e4
#undef local_1e0
#undef local_1dc
#undef local_1d8
#undef local_1d4
#undef local_1d0
#undef local_1cc
#undef local_1c8
#undef local_1c4
#undef local_1c0
#undef local_1bc
#undef local_1b8
#undef local_1b4
#undef local_1b0
#undef local_1ac
#undef local_1a8
#undef local_1a4
#undef local_1a0
#undef local_19c
#undef local_198
#undef local_194
#undef local_190
#undef local_18c
#undef local_188
#undef local_184
#undef local_180
#undef local_17c
#undef local_178
#undef local_174
#undef local_170
#undef local_16c
#undef local_168
#undef local_164
#undef local_160
#undef local_15c
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
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
#undef local_e0
#undef local_dc
#undef local_d8
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
#undef local_9c
#undef local_98
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

#define local_98 (*(uint *)(pf_stack_frame + 24))
#define local_94 (*(uint *)(pf_stack_frame + 28))
#define local_90 (*(uint *)(pf_stack_frame + 32))
#define local_8c (*(uint *)(pf_stack_frame + 36))
#define local_88 (*(uint *)(pf_stack_frame + 40))
#define local_84 (*(uint *)(pf_stack_frame + 44))
#define local_80 (*(uint *)(pf_stack_frame + 48))
#define local_7c (*(uint *)(pf_stack_frame + 52))
#define local_78 (*(uint *)(pf_stack_frame + 56))
#define local_74 (*(uint *)(pf_stack_frame + 60))
#define local_70 (*(uint *)(pf_stack_frame + 64))
#define local_6c (*(uint *)(pf_stack_frame + 68))
#define local_68 (*(uint *)(pf_stack_frame + 72))
#define local_64 (*(uint *)(pf_stack_frame + 76))
#define local_60 (*(uint *)(pf_stack_frame + 80))
#define local_5c (*(uint *)(pf_stack_frame + 84))
#define local_58 (*(uint *)(pf_stack_frame + 88))
#define local_54 (*(uint *)(pf_stack_frame + 92))
#define local_50 (*(uint *)(pf_stack_frame + 96))
#define local_4c (*(uint *)(pf_stack_frame + 100))
#define local_48 (*(uint *)(pf_stack_frame + 104))
#define local_44 (*(uint *)(pf_stack_frame + 108))
#define local_40 (*(uint *)(pf_stack_frame + 112))
#define local_3c (*(uint *)(pf_stack_frame + 116))
#define local_38 (*(uint *)(pf_stack_frame + 120))
#define local_34 (*(uint *)(pf_stack_frame + 124))
#define local_30 (*(uint *)(pf_stack_frame + 128))
#define local_2c (*(uint *)(pf_stack_frame + 132))
#define local_28 (*(uint *)(pf_stack_frame + 136))
#define local_24 (*(uint *)(pf_stack_frame + 140))
#define local_20 (*(uint *)(pf_stack_frame + 144))
#define local_1c (*(uint *)(pf_stack_frame + 148))
#define local_18 (*(uint * *)(pf_stack_frame + 152))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ec90
 */

void recovered_1000ec90(uint *arg_ecx,uint *arg_edx)

{
  unsigned char pf_stack_frame[208] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  local_98 = *arg_edx;
  local_94 = arg_edx[1];
  local_90 = arg_edx[2];
  local_8c = arg_edx[3];
  local_88 = arg_edx[4];
  local_84 = arg_edx[5];
  local_80 = arg_edx[6];
  local_7c = arg_edx[7];
  local_78 = arg_edx[8];
  local_74 = arg_edx[9];
  local_70 = arg_edx[10];
  local_6c = arg_edx[0xb];
  local_68 = arg_edx[0xc];
  local_64 = arg_edx[0xd];
  local_60 = arg_edx[0xe];
  local_5c = arg_edx[0xf];
  local_58 = arg_edx[0x10];
  local_54 = arg_edx[0x11];
  local_50 = arg_edx[0x12];
  local_4c = arg_edx[0x13];
  local_48 = arg_edx[0x14];
  local_44 = arg_edx[0x15];
  local_40 = arg_edx[0x16];
  local_3c = arg_edx[0x17];
  local_38 = arg_edx[0x18];
  local_34 = arg_edx[0x19];
  local_30 = arg_edx[0x1a];
  local_2c = arg_edx[0x1b];
  local_28 = arg_edx[0x1c];
  local_24 = arg_edx[0x1d];
  local_20 = arg_edx[0x1e];
  local_1c = arg_edx[0x1f];
  iVar1 = 0xfd;
  local_18 = arg_ecx;
  do {
    recovered_1000c480((longlong *)&local_98,(longlong *)&local_98,(longlong *)&local_98);
    if ((iVar1 != 2) && (iVar1 != 4)) {
      recovered_1000c480((longlong *)&local_98,(longlong *)&local_98,(longlong *)arg_edx);
    }
    bVar2 = iVar1 != 0;
    iVar1 = iVar1 + -1;
  } while (bVar2);
  local_18[1] = local_94;
  *local_18 = local_98;
  local_18[3] = local_8c;
  local_18[2] = local_90;
  local_18[5] = local_84;
  local_18[4] = local_88;
  local_18[7] = local_7c;
  local_18[6] = local_80;
  local_18[9] = local_74;
  local_18[8] = local_78;
  local_18[0xb] = local_6c;
  local_18[10] = local_70;
  local_18[0xd] = local_64;
  local_18[0xc] = local_68;
  local_18[0xf] = local_5c;
  local_18[0xe] = local_60;
  local_18[0x11] = local_54;
  local_18[0x10] = local_58;
  local_18[0x13] = local_4c;
  local_18[0x12] = local_50;
  local_18[0x15] = local_44;
  local_18[0x14] = local_48;
  local_18[0x17] = local_3c;
  local_18[0x16] = local_40;
  local_18[0x19] = local_34;
  local_18[0x18] = local_38;
  local_18[0x1b] = local_2c;
  local_18[0x1a] = local_30;
  local_18[0x1d] = local_24;
  local_18[0x1c] = local_28;
  local_18[0x1f] = local_1c;
  local_18[0x1e] = local_20;
  return;
}

#undef local_98
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

/* Recovered field packing, including native carries and conditional reduction.
 * Pooka's Free Software License. */
void recovered_1000eec0(uint8_t *output,const longlong *input) {
    int64_t value[16], reduced[16];
    for(unsigned i=0;i<16;i++)value[i]=input[i];
    for(unsigned round=0;round<3;round++) {
        for(unsigned i=0;i<16;i++) {
            value[i]+=0x10000;
            int64_t carry=value[i]>>16;
            value[i]-=carry*0x10000;
            if(i<15)value[i+1]+=carry-1;
            else value[0]+=38*(carry-1);
        }
    }
    for(unsigned round=0;round<2;round++) {
        reduced[0]=value[0]-0xffed;
        for(unsigned i=1;i<15;i++) {
            reduced[i]=value[i]-0xffff-((reduced[i-1]>>16)&1);
            reduced[i-1]&=0xffff;
        }
        reduced[15]=value[15]-0x7fff-((reduced[14]>>16)&1);
        int64_t select=-((~(reduced[15]>>16))&1);
        reduced[14]&=0xffff;
        for(unsigned i=0;i<16;i++)value[i]^=(value[i]^reduced[i])&select;
    }
    for(unsigned i=0;i<16;i++) {
        output[2*i]=(uint8_t)value[i];
        output[2*i+1]=(uint8_t)(value[i]>>8);
    }
}


#define local_20 (*(uint (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f580
 */

void recovered_1000f580(int *arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  local_20[0] = arg_edx >> 0x18 | (arg_edx & 0xff0000) >> 8 | (arg_edx & 0xff00) << 8 |
                arg_edx << 0x18;
  if (((char)arg_ecx[3] == '\0') && (3 < (uint)(arg_ecx[1] - arg_ecx[2]))) {
    recovered_10001d70((undefined4 *)(arg_ecx[2] + *arg_ecx),local_20,4);
    arg_ecx[2] = arg_ecx[2] + 4;
  }
  else {
    *(undefined1 *)(arg_ecx + 3) = 1;
  }
  return;
}

#undef local_20

#undef DAT_1001dfd8
#define DAT_1001dfd8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4b4U)))
#define local_158 (*(uint *)(pf_stack_frame + 24))
#define local_154 (*(uint *)(pf_stack_frame + 28))
#define local_150 (*(uint *)(pf_stack_frame + 32))
#define local_14c (*(uint *)(pf_stack_frame + 36))
#define local_138 (*(int *)(pf_stack_frame + 56))
#define local_134 (*(int * *)(pf_stack_frame + 60))
#define local_110 (*(uint (*)[68])(pf_stack_frame + 96))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f5d0
 */

void recovered_1000f5d0(uint *arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[400] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5; uint pf_schedule_word;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  iVar5 = -0x40;
  do {
    uVar7 = *(uint *)(arg_edx + 0x40 + iVar5);
    *(uint *)((int)local_110 + iVar5 + 0x40) =
         uVar7 >> 0x18 | (uVar7 & 0xff0000) >> 8 | (uVar7 & 0xff00) << 8 | uVar7 << 0x18;
    iVar5 = iVar5 + 4;
  } while (iVar5 != 0);
  pf_schedule_word=local_110[0]; iVar5 = -0xc0;
  do {
    uVar7 = *(uint *)((int)local_110 + iVar5 + 0xc4);
    uVar4 = *(uint *)((int)local_110 + iVar5 + 0xf8);
    *(uint *)((int)local_110 + iVar5 + 0x100) =
         (uVar7 >> 3 ^ (uVar7 << 0xe | uVar7 >> 0x12) ^ (uVar7 << 0x19 | uVar7 >> 7)) + pf_schedule_word
         + *(int *)((int)local_110 + iVar5 + 0xe4) +
         (uVar4 >> 10 ^ (uVar4 << 0xd | uVar4 >> 0x13) ^ (uVar4 << 0xf | uVar4 >> 0x11));
    iVar5 = iVar5 + 4;
    pf_schedule_word = uVar7;
  } while (iVar5 != 0);
  local_134 = &DAT_1001dfd8;
  local_138 = -0x100;
  uVar4 = *arg_ecx;
  uVar7 = arg_ecx[4];
  uVar8 = arg_ecx[7];
  uVar2 = arg_ecx[6];
  local_158 = arg_ecx[2];
  local_154 = arg_ecx[3];
  uVar3 = arg_ecx[1];
  uVar6 = arg_ecx[5];
  do {
    local_14c = uVar6;
    local_150 = uVar3;
    uVar9 = uVar2;
    uVar6 = uVar7;
    uVar3 = uVar4;
    uVar7 = local_154;
    uVar1 = local_158;
    local_154 = local_158;
    local_158 = local_150;
    iVar5 = ((local_14c ^ uVar9) & uVar6 ^ uVar9) + uVar8 +
            ((uVar6 << 7 | uVar6 >> 0x19) ^
            (uVar6 << 0x15 | uVar6 >> 0xb) ^ (uVar6 << 0x1a | uVar6 >> 6)) + *local_134 +
            *(int *)((int)local_110 + local_138 + 0x100);
    uVar7 = uVar7 + iVar5;
    uVar4 = (local_150 & uVar1 ^ (local_150 ^ uVar1) & uVar3) +
            ((uVar3 << 10 | uVar3 >> 0x16) ^
            (uVar3 << 0x13 | uVar3 >> 0xd) ^ (uVar3 << 0x1e | uVar3 >> 2)) + iVar5;
    local_134 = local_134 + 1;
    local_138 = local_138 + 4;
    uVar8 = uVar9;
    uVar2 = local_14c;
  } while (local_138 != 0);
  *arg_ecx = uVar4 + *arg_ecx;
  arg_ecx[1] = uVar3 + arg_ecx[1];
  arg_ecx[2] = local_150 + arg_ecx[2];
  arg_ecx[3] = uVar1 + arg_ecx[3];
  arg_ecx[4] = uVar7 + arg_ecx[4];
  arg_ecx[5] = uVar6 + arg_ecx[5];
  arg_ecx[6] = local_14c + arg_ecx[6];
  arg_ecx[7] = uVar9 + arg_ecx[7];
  return;
}

#undef DAT_1001dfd8
#undef local_158
#undef local_154
#undef local_150
#undef local_14c
#undef local_138
#undef local_134
#undef local_110

#undef DAT_10022ed0
#define DAT_10022ed0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53acU)))
#undef DAT_10022ed4
#define DAT_10022ed4 (*(uint *)(((uintptr_t)pf_module_state + 0x53b0U)))
#undef DAT_10022ee0
#define DAT_10022ee0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53bcU)))
#undef DAT_10022ee4
#define DAT_10022ee4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c0U)))
#undef DAT_10022ee8
#define DAT_10022ee8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c4U)))
#define local_14 (*(uint (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f7e0
 */

void recovered_1000f7e0(undefined4 arg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};


  recovered_1000a820(local_14,(undefined4 *)0x4);
  DAT_10022ed4 = local_14[0] >> 0x18 | (local_14[0] & 0xff0000) >> 8 | (local_14[0] & 0xff00) << 8 |
                 local_14[0] << 0x18;
  DAT_10022ed0 = 1;
  DAT_10022ee4 = 2000;
  DAT_10022ee8 = 0;
  DAT_10022ee0 = arg_ecx;
  recovered_1000f970(1,0);
  return;
}

#undef DAT_10022ed0
#undef DAT_10022ed4
#undef DAT_10022ee0
#undef DAT_10022ee4
#undef DAT_10022ee8
#undef local_14

#undef DAT_1001e0d8
#define DAT_1001e0d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4U)))
#undef DAT_1001e0de
#define DAT_1001e0de (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5baU)))
#undef DAT_10022e5b
#define DAT_10022e5b (*(char *)(((uintptr_t)pf_module_state + 0x5337U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022e60
#define DAT_10022e60 (*(uint *)(((uintptr_t)pf_module_state + 0x533cU)))
#undef DAT_10022e64
#define DAT_10022e64 (*(uint *)(((uintptr_t)pf_module_state + 0x5340U)))
#undef str_1001e969
#define str_1001e969 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe45U)))
#undef str_1001ef92
#define str_1001ef92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x146eU)))
#define local_50 (*(char (*)[80])(pf_stack_frame + 16))
#define local_3c (*(char (*)[60])(pf_stack_frame + 36))
#define local_28 (*(char (*)[40])(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f850
 */

void recovered_1000f850(uint arg_ecx,uint arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};


  DAT_10022e64 = param_3;
  DAT_10022e5b = arg_ecx != 0;
  DAT_10022e5c = arg_ecx;
  DAT_10022e60 = arg_edx;
  recovered_10004b20(local_3c,0x14,str_1001ef92,arg_ecx >> 0x18,arg_ecx >> 0x10 & 0xff,
                     arg_ecx >> 8 & 0xff,arg_ecx & 0xff);
  recovered_10004b20(local_50,0x14,str_1001ef92,arg_edx >> 0x18,arg_edx >> 0x10 & 0xff,
                     arg_edx >> 8 & 0xff,arg_edx & 0xff);
  recovered_10004b20(local_28,0x14,str_1001ef92,param_3 >> 0x18,param_3 >> 0x10 & 0xff,
                     param_3 >> 8 & 0xff,param_3 & 0xff);
  recovered_10009110(str_1001e969,local_3c,local_50,local_28);
  if (DAT_10022e5b == '\x01') {
    recovered_1000ffd0(1,(undefined4 *)&DAT_1001e0d8,DAT_10022e5c,(undefined4 *)&DAT_1001e0de);
  }
  return;
}

#undef DAT_1001e0d8
#undef DAT_1001e0de
#undef DAT_10022e5b
#undef DAT_10022e5c
#undef DAT_10022e60
#undef DAT_10022e64
#undef str_1001e969
#undef str_1001ef92
#undef local_50
#undef local_3c
#undef local_28

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_1001e0d8
#define DAT_1001e0d8 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5b4U)))
#undef DAT_10022908
#define DAT_10022908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de4U)))
#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022ed4
#define DAT_10022ed4 (*(uint *)(((uintptr_t)pf_module_state + 0x53b0U)))
#undef DAT_10022ed8
#define DAT_10022ed8 (*(uint *)(((uintptr_t)pf_module_state + 0x53b4U)))
#undef DAT_10022edc
#define DAT_10022edc (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53b8U)))
#undef DAT_10022efc
#define DAT_10022efc (*(int *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef DAT_10023700
#define DAT_10023700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdcU)))
#undef DAT_10023706
#define DAT_10023706 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be2U)))
#undef DAT_1002370c
#define DAT_1002370c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef DAT_10023722
#define DAT_10023722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfeU)))
#undef DAT_10023723
#define DAT_10023723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bffU)))
#undef DAT_10023726
#define DAT_10023726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c02U)))
#undef DAT_1002372a
#define DAT_1002372a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c06U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(code * *)(0x28092cU))
#undef _DAT_10023722
#define _DAT_10023722 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5bfeU)))
#define local_1a4 (*(byte (*)[420])(pf_stack_frame + 28))
#define local_1a0 (*(uint *)(pf_stack_frame + 32))
#define local_19a (*(undefined1 *)(pf_stack_frame + 38))
#define local_199 (*(undefined1 *)(pf_stack_frame + 39))
#define uStack_b0 (*(undefined2 *)(pf_stack_frame + 272))
#define local_198 (*(undefined1 *)(pf_stack_frame + 40))
#define local_197 (*(undefined1 *)(pf_stack_frame + 41))
#define local_196 (*(undefined1 *)(pf_stack_frame + 42))
#define local_195 (*(undefined1 (*)[405])(pf_stack_frame + 43))
#define local_188 (*(undefined4 (*)[98])(pf_stack_frame + 56))
#define local_b8 (*(undefined4 *)(pf_stack_frame + 264))
#define local_b4 (*(undefined1 (*)[180])(pf_stack_frame + 268))
#define local_ae (*(undefined1 (*)[174])(pf_stack_frame + 274))
#define local_a8 (*(undefined2 *)(pf_stack_frame + 280))
#define local_a6 (*(undefined1 *)(pf_stack_frame + 282))
#define local_a5 (*(undefined1 *)(pf_stack_frame + 283))
#define local_a4 (*(undefined1 *)(pf_stack_frame + 284))
#define local_a3 (*(undefined1 *)(pf_stack_frame + 285))
#define local_a2 (*(undefined2 *)(pf_stack_frame + 286))
#define local_a0 (*(uint *)(pf_stack_frame + 288))
#define stack0xffffff4f (*(uint16_t *)(pf_stack_frame + 271))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000f970
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000f970(byte message_type,int renewal)

{
  unsigned char pf_stack_frame[480] __attribute__((aligned(16))) = {0};

  uint uVar1;
  ushort uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined1 *puVar8;

  recovered_10002000(local_1a4,0,400);
  local_1a4[0] = 1;
  local_1a4[1] = 1;
  local_1a4[2] = 6;
  local_1a0 = DAT_10022ed4 >> 0x18 | (DAT_10022ed4 & 0xff0000) >> 8 | (DAT_10022ed4 & 0xff00) << 8 |
              DAT_10022ed4 << 0x18;
  if (renewal == 0) {
    puVar8 = &local_199;
    local_19a = 0x80;
    uVar1 = 0;
  }
  else {
    puVar8 = local_195;
    local_198 = (undefined1)(DAT_10022e5c >> 0x18);
    local_197 = (undefined1)(DAT_10022e5c >> 0x10);
    local_196 = (undefined1)(DAT_10022e5c >> 8);
    uVar1 = DAT_10022e5c;
  }
  *puVar8 = (char)uVar1;
  recovered_10001d70(local_188,(undefined4 *)&DAT_10022e54,6);
  local_b8 = 0x63538263;
  PF_PART2(local_b4, 0) = 0x135;
  stack0xffffff4f = 0x73d;
  PF_PART1(uStack_b0, 1) = 1;
  local_b4[2] = message_type;
  recovered_10001d70((undefined4 *)local_ae,(undefined4 *)&DAT_10022e54,6);
  iVar7 = 0xc;
  if (message_type == 3 && (char)renewal == '\0') {
    local_a8 = 0x432;
    local_a6 = (undefined1)((uint)DAT_10022edc >> 0x18);
    local_a5 = (undefined1)((uint)DAT_10022edc >> 0x10);
    local_a4 = (undefined1)((uint)DAT_10022edc >> 8);
    local_a3 = (undefined1)DAT_10022edc;
    local_a2 = 0x436;
    local_a0 = DAT_10022ed8 >> 0x18 | (DAT_10022ed8 & 0xff0000) >> 8 | (DAT_10022ed8 & 0xff00) << 8
               | DAT_10022ed8 << 0x18;
    iVar7 = 0x18;
  }
  *(undefined4 *)(local_b4 + iVar7) = 0x3010437;
  *(undefined2 *)(local_b4 + iVar7 + 4) = 0x3633;
  uVar1 = recovered_100024c0(((uintptr_t)pf_module_state + 0x4de4U));
  if (uVar1 - 1 < 0x3f) {
    local_ae[iVar7] = 0xc;
    local_ae[iVar7 + 1] = (char)uVar1;
    recovered_10001d70((undefined4 *)(local_ae + iVar7 + 2),(undefined4 *)&DAT_10022908,uVar1);
    uVar1 = uVar1 + 8 + iVar7;
  }
  else {
    uVar1 = iVar7 + 6;
  }
  local_b4[uVar1] = 0xff;
  uVar5 = 0;
  if ((char)renewal != '\0') {
    uVar5 = DAT_10022e5c;
  }
  uVar3 = 300;
  if (0x3a < uVar1) {
    uVar3 = uVar1 + 0xf1;
  }
  uVar4 = uVar3 + 8;
  recovered_10001d70((undefined4 *)&DAT_10023700,(undefined4 *)&DAT_1001e0d8,6);
  recovered_10001d70((undefined4 *)&DAT_10023706,(undefined4 *)&DAT_10022e54,6);
  PF_PART2(DAT_1002370c, 0) = 8;
  recovered_1000fd60(uVar3 + 0x1c & 0xffff,0x11,uVar5,0xffffffff);
  _DAT_10023722 = 0x43004400;
  puVar8 = &DAT_10023723;
  uVar6 = uVar4 & 0xffff;
  PF_PART1(DAT_10023726, 0) = (undefined1)(uVar6 >> 8);
  PF_PART1(DAT_10023726, 1) = (undefined1)uVar4;
  PF_PART2(DAT_10023726, 2) = 0;
  recovered_10001d70((undefined4 *)&DAT_1002372a,(undefined4 *)local_1a4,uVar3 & 0xffff);
  uVar1 = uVar6 + 0x2000f + (uVar5 & 0xffff) + (uVar5 >> 0x10);
  uVar5 = 1;
  do {
    uVar1 = uVar1 + (ushort)(*(ushort *)(puVar8 + -1) << 8 | *(ushort *)(puVar8 + -1) >> 8);
    uVar5 = uVar5 + 2;
    puVar8 = puVar8 + 2;
  } while (uVar5 < uVar6);
  if ((uVar4 & 0x7ffe) != uVar6) {
    uVar1 = uVar1 + (uint)(byte)(&DAT_10023722)[uVar4 & 0x7ffe] * 0x100;
  }
  for (; 0xffff < uVar1; uVar1 = (uVar1 & 0xffff) + (uVar1 >> 0x10)) {
  }
  uVar2 = ~(ushort)uVar1;
  if (uVar1 == 0xffff) {
    uVar2 = 0xffff;
  }
  PF_PART2(DAT_10023726, 2) = uVar2 << 8 | uVar2 >> 8;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     (((0x12f < _DAT_00280808 && (_DAT_0028092c != (code *)0x0)) &&
      (iVar7 = (*_DAT_0028092c)(&DAT_10023700,(uVar3 & 0xffff) + 0x2a), iVar7 != 0)))) {
    DAT_10022efc = DAT_10022efc + 1;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_1001e0d8
#undef DAT_10022908
#undef DAT_10022e54
#undef DAT_10022e5c
#undef DAT_10022ed4
#undef DAT_10022ed8
#undef DAT_10022edc
#undef DAT_10022efc
#undef DAT_10023700
#undef DAT_10023706
#undef DAT_1002370c
#undef DAT_10023722
#undef DAT_10023723
#undef DAT_10023726
#undef DAT_1002372a
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef _DAT_10023722
#undef local_1a4
#undef local_1a0
#undef local_19a
#undef local_199
#undef uStack_b0
#undef local_198
#undef local_197
#undef local_196
#undef local_195
#undef local_188
#undef local_b8
#undef local_b4
#undef local_ae
#undef local_a8
#undef local_a6
#undef local_a5
#undef local_a4
#undef local_a3
#undef local_a2
#undef local_a0
#undef stack0xffffff4f

#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10023700
#define DAT_10023700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdcU)))
#undef DAT_10023706
#define DAT_10023706 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be2U)))
#undef DAT_1002370c
#define DAT_1002370c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd00
 */

void recovered_1000fd00(undefined4 *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort in_DX;

  recovered_10001d70((undefined4 *)&DAT_10023700,arg_ecx,6);
  recovered_10001d70((undefined4 *)&DAT_10023706,(undefined4 *)&DAT_10022e54,6);
  PF_PART2(DAT_1002370c, 0) = in_DX << 8 | in_DX >> 8;
  return;
}

#undef DAT_10022e54
#undef DAT_10023700
#undef DAT_10023706
#undef DAT_1002370c

#undef DAT_10022e68
#define DAT_10022e68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5344U)))
#undef DAT_1002370c
#define DAT_1002370c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef DAT_10023710
#define DAT_10023710 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5becU)))
#undef DAT_10023714
#define DAT_10023714 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef DAT_10023716
#define DAT_10023716 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf2U)))
#undef DAT_10023717
#define DAT_10023717 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf3U)))
#undef DAT_10023718
#define DAT_10023718 (*(ushort *)(((uintptr_t)pf_module_state + 0x5bf4U)))
#undef DAT_1002371a
#define DAT_1002371a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf6U)))
#undef DAT_1002371b
#define DAT_1002371b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf7U)))
#undef DAT_1002371c
#define DAT_1002371c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf8U)))
#undef DAT_10023720
#define DAT_10023720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfcU)))
#undef DAT_10023721
#define DAT_10023721 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfdU)))
#undef UNK_10022e6a
#define UNK_10022e6a (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5346U)))
#undef _DAT_10022e68
#define _DAT_10022e68 (*(int *)(((uintptr_t)pf_module_state + 0x5344U)))
#undef _DAT_10023714
#define _DAT_10023714 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fd60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000fd60(int arg_ecx,int arg_edx,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  int iVar3;

  recovered_10002000((byte *)((int)&DAT_1002370c + 2),0,0x14);
  PF_PART1(DAT_1002370c, 2) = 0x45;
  PF_PART1(DAT_10023710, 0) = (char)((uint)arg_ecx >> 8);
  PF_PART1(DAT_10023710, 1) = (char)arg_ecx;
  uVar2 = _DAT_10022e68 + 1;
  _DAT_10022e68 = CONCAT22((*(uint16_t *)((uintptr_t)pf_module_state+0x5346U)),(short)uVar2);
  PF_PART1(DAT_10023710, 2) = (char)((uVar2 & 0xffff) >> 8);
  PF_PART1(DAT_10023710, 3) = (char)uVar2;
  _DAT_10023714 = 0x40;
  DAT_10023716 = 0x40;
  DAT_10023717 = (char)arg_edx;
  DAT_1002371a = (char)(param_3 >> 0x18);
  DAT_1002371b = (char)(param_3 >> 0x10);
  PF_PART1(DAT_1002371c, 0) = (char)(param_3 >> 8);
  PF_PART1(DAT_1002371c, 1) = (char)param_3;
  PF_PART1(DAT_1002371c, 2) = (char)(param_4 >> 0x18);
  PF_PART1(DAT_1002371c, 3) = (byte)(param_4 >> 0x10);
  DAT_10023720 = (char)(param_4 >> 8);
  DAT_10023721 = (char)param_4;
  iVar3 = ((uint)PF_PART1(DAT_1002371c, 3) | (param_4 >> 0x18) << 8) + (param_3 & 0xffff) +
          (param_3 >> 0x10 & 0xff | (param_3 >> 0x18) << 8) +
          (uint)(ushort)(DAT_10023718 << 8 | DAT_10023718 >> 8) +
          (uint)PF_PART1(DAT_1002370c, 3) + arg_ecx + arg_edx + (uVar2 & 0xffff);
  iVar1 = (param_4 & 0xffff) + 0x4500 + iVar3;
  uVar2 = (param_4 & 0xffff) + 0xc500 + iVar3;
  if ((short)iVar1 != iVar1) {
    do {
      uVar2 = (uVar2 & 0xffff) + (uVar2 >> 0x10);
    } while (0xffff < uVar2);
  }
  DAT_10023718 = ~(ushort)uVar2 << 8 | (ushort)~(ushort)uVar2 >> 8;
  return;
}

#undef DAT_10022e68
#undef DAT_1002370c
#undef DAT_10023710
#undef DAT_10023714
#undef DAT_10023716
#undef DAT_10023717
#undef DAT_10023718
#undef DAT_1002371a
#undef DAT_1002371b
#undef DAT_1002371c
#undef DAT_10023720
#undef DAT_10023721
#undef UNK_10022e6a
#undef _DAT_10022e68
#undef _DAT_10023714

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10022efc
#define DAT_10022efc (*(int *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef DAT_10023700
#define DAT_10023700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdcU)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(code * *)(0x28092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000fec0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000fec0(uint arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (arg_ecx < 0x3c) {
    recovered_10002000(&DAT_10023700 + arg_ecx,0,0x3c - arg_ecx);
    arg_ecx = 0x3c;
  }
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x12f < _DAT_00280808 && (_DAT_0028092c != (code *)0x0)))) {
    iVar1 = (*_DAT_0028092c)(&DAT_10023700,arg_ecx);
    if (iVar1 != 0) {
      DAT_10022efc = DAT_10022efc + 1;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10022efc
#undef DAT_10023700
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ff50
 */

uint recovered_1000ff50(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  uVar3 = 0;
  uVar4 = 0;
  if (arg_edx < 2) {
    if (arg_edx == 0) goto joined_r0x1000ff6d;
  }
  else {
    uVar3 = 0;
    uVar2 = 1;
    do {
      uVar4 = uVar2;
      uVar1 = *(ushort *)(arg_ecx + -1 + uVar4);
      uVar3 = uVar3 + (ushort)(uVar1 << 8 | uVar1 >> 8);
      uVar2 = uVar4 + 2;
    } while (uVar4 + 2 < arg_edx);
    uVar4 = uVar4 + 1;
    if (arg_edx <= uVar4) goto joined_r0x1000ff6d;
  }
  uVar3 = uVar3 + (uint)*(byte *)(arg_ecx + uVar4) * 0x100;
joined_r0x1000ff6d:
  for (; 0xffff < uVar3; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
  }
  return ~uVar3 & 0xffff;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022efc
#define DAT_10022efc (*(int *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef DAT_10023700
#define DAT_10023700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdcU)))
#undef DAT_10023706
#define DAT_10023706 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be2U)))
#undef DAT_1002370c
#define DAT_1002370c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef DAT_10023710
#define DAT_10023710 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5becU)))
#undef DAT_10023714
#define DAT_10023714 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf0U)))
#undef DAT_10023715
#define DAT_10023715 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf1U)))
#undef DAT_10023716
#define DAT_10023716 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bf2U)))
#undef DAT_1002371c
#define DAT_1002371c (*(uint *)(((uintptr_t)pf_module_state + 0x5bf8U)))
#undef DAT_10023720
#define DAT_10023720 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfcU)))
#undef DAT_10023726
#define DAT_10023726 (*(uint *)(((uintptr_t)pf_module_state + 0x5c02U)))
#undef DAT_1002372a
#define DAT_1002372a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c06U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(code * *)(0x28092cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ffd0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_1000ffd0(undefined4 arg_ecx,undefined4 *arg_edx,uint param_3,undefined4 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  recovered_10001d70((undefined4 *)&DAT_10023700,arg_edx,6);
  recovered_10001d70((undefined4 *)&DAT_10023706,(undefined4 *)&DAT_10022e54,6);
  DAT_1002370c = 0x1000608;
  DAT_10023710 = 0x4060008;
  DAT_10023714 = (undefined1)((uint)arg_ecx >> 8);
  DAT_10023715 = (undefined1)arg_ecx;
  recovered_10001d70((undefined4 *)&DAT_10023716,(undefined4 *)&DAT_10022e54,6);
  DAT_1002371c = DAT_10022e5c >> 0x18 | (DAT_10022e5c & 0xff0000) >> 8 |
                 (DAT_10022e5c & 0xff00) << 8 | DAT_10022e5c << 0x18;
  recovered_10001d70((undefined4 *)&DAT_10023720,param_4,6);
  DAT_10023726 = param_3 >> 0x18 | (param_3 & 0xff0000) >> 8 | (param_3 & 0xff00) << 8 |
                 param_3 << 0x18;
  recovered_10002000(&DAT_1002372a,0,0x12);
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x12f < _DAT_00280808 && (_DAT_0028092c != (code *)0x0)))) {
    iVar1 = (*_DAT_0028092c)(&DAT_10023700,0x3c);
    if (iVar1 != 0) {
      DAT_10022efc = DAT_10022efc + 1;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10022e54
#undef DAT_10022e5c
#undef DAT_10022efc
#undef DAT_10023700
#undef DAT_10023706
#undef DAT_1002370c
#undef DAT_10023710
#undef DAT_10023714
#undef DAT_10023715
#undef DAT_10023716
#undef DAT_1002371c
#undef DAT_10023720
#undef DAT_10023726
#undef DAT_1002372a
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c

#undef DAT_10022e6c
#define DAT_10022e6c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5348U)))
#undef DAT_10022e70
#define DAT_10022e70 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x534cU)))
#undef DAT_10022e76
#define DAT_10022e76 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5352U)))
#undef DAT_10022e78
#define DAT_10022e78 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5354U)))
#undef DAT_10022e82
#define DAT_10022e82 (*(char *)(((uintptr_t)pf_module_state + 0x535eU)))
#undef DAT_10022e84
#define DAT_10022e84 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5360U)))
#undef DAT_10022e8e
#define DAT_10022e8e (*(char *)(((uintptr_t)pf_module_state + 0x536aU)))
#undef DAT_10022e90
#define DAT_10022e90 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x536cU)))
#undef DAT_10022e9a
#define DAT_10022e9a (*(char *)(((uintptr_t)pf_module_state + 0x5376U)))
#undef DAT_10022e9c
#define DAT_10022e9c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5378U)))
#undef DAT_10022ea6
#define DAT_10022ea6 (*(char *)(((uintptr_t)pf_module_state + 0x5382U)))
#undef DAT_10022ea8
#define DAT_10022ea8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5384U)))
#undef DAT_10022eb2
#define DAT_10022eb2 (*(char *)(((uintptr_t)pf_module_state + 0x538eU)))
#undef DAT_10022eb4
#define DAT_10022eb4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5390U)))
#undef DAT_10022ebe
#define DAT_10022ebe (*(char *)(((uintptr_t)pf_module_state + 0x539aU)))
#undef DAT_10022ec0
#define DAT_10022ec0 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x539cU)))
#undef DAT_10022eca
#define DAT_10022eca (*(char *)(((uintptr_t)pf_module_state + 0x53a6U)))
#undef DAT_10022ecc
#define DAT_10022ecc (*(uint *)(((uintptr_t)pf_module_state + 0x53a8U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100100f0
 */

void recovered_100100f0(int arg_ecx,undefined4 *arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 *puVar2;

  iVar1 = DAT_10022ecc;
  if ((DAT_10022e76 == '\x01') && (DAT_10022e6c == arg_ecx)) {
    puVar2 = &DAT_10022e6c;
  }
  else if ((DAT_10022e82 == '\x01') && (DAT_10022e78 == arg_ecx)) {
    puVar2 = &DAT_10022e78;
  }
  else if ((DAT_10022e8e == '\x01') && (DAT_10022e84 == arg_ecx)) {
    puVar2 = &DAT_10022e84;
  }
  else if ((DAT_10022e9a == '\x01') && (DAT_10022e90 == arg_ecx)) {
    puVar2 = &DAT_10022e90;
  }
  else if ((DAT_10022ea6 == '\x01') && (DAT_10022e9c == arg_ecx)) {
    puVar2 = &DAT_10022e9c;
  }
  else if ((DAT_10022eb2 == '\x01') && (DAT_10022ea8 == arg_ecx)) {
    puVar2 = &DAT_10022ea8;
  }
  else if ((DAT_10022ebe == '\x01') && (DAT_10022eb4 == arg_ecx)) {
    puVar2 = &DAT_10022eb4;
  }
  else {
    if ((DAT_10022eca != '\x01') || (DAT_10022ec0 != arg_ecx)) {
      (&DAT_10022e6c)[DAT_10022ecc * 3] = arg_ecx;
      recovered_10001d70((undefined4 *)(&DAT_10022e70 + iVar1 * 0xc),arg_edx,6);
      (&DAT_10022e76)[DAT_10022ecc * 0xc] = 1;
      DAT_10022ecc = DAT_10022ecc + 1 & 7;
      return;
    }
    puVar2 = &DAT_10022ec0;
  }
  recovered_10001d70(puVar2 + 1,arg_edx,6);
  return;
}

#undef DAT_10022e6c
#undef DAT_10022e70
#undef DAT_10022e76
#undef DAT_10022e78
#undef DAT_10022e82
#undef DAT_10022e84
#undef DAT_10022e8e
#undef DAT_10022e90
#undef DAT_10022e9a
#undef DAT_10022e9c
#undef DAT_10022ea6
#undef DAT_10022ea8
#undef DAT_10022eb2
#undef DAT_10022eb4
#undef DAT_10022ebe
#undef DAT_10022ec0
#undef DAT_10022eca
#undef DAT_10022ecc

#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5b
#define DAT_10022e5b (*(char *)(((uintptr_t)pf_module_state + 0x5337U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022e60
#define DAT_10022e60 (*(uint *)(((uintptr_t)pf_module_state + 0x533cU)))
#undef DAT_10022e64
#define DAT_10022e64 (*(uint *)(((uintptr_t)pf_module_state + 0x5340U)))
#undef DAT_10022ed0
#define DAT_10022ed0 (*(int *)(((uintptr_t)pf_module_state + 0x53acU)))
#undef DAT_10022ed4
#define DAT_10022ed4 (*(uint *)(((uintptr_t)pf_module_state + 0x53b0U)))
#undef DAT_10022ed8
#define DAT_10022ed8 (*(uint *)(((uintptr_t)pf_module_state + 0x53b4U)))
#undef DAT_10022edc
#define DAT_10022edc (*(uint *)(((uintptr_t)pf_module_state + 0x53b8U)))
#undef DAT_10022ee0
#define DAT_10022ee0 (*(int *)(((uintptr_t)pf_module_state + 0x53bcU)))
#undef DAT_10022ee4
#define DAT_10022ee4 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c0U)))
#undef DAT_10022ee8
#define DAT_10022ee8 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53c4U)))
#undef DAT_10022eec
#define DAT_10022eec (*(uint *)(((uintptr_t)pf_module_state + 0x53c8U)))
#undef DAT_10022ef0
#define DAT_10022ef0 (*(int *)(((uintptr_t)pf_module_state + 0x53ccU)))
#undef DAT_10022ef4
#define DAT_10022ef4 (*(int *)(((uintptr_t)pf_module_state + 0x53d0U)))
#undef str_1001e98f
#define str_1001e98f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe6bU)))
#define local_2c (*(uint *)(pf_stack_frame + 20))
#define local_28 (*(uint *)(pf_stack_frame + 24))
#define local_20 (*(uint *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010230
 */

void recovered_10010230(char *arg_ecx,uint arg_edx,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  int iVar5;
  uint arg_ecx_00;
  uint uVar6;
  uint arg_edx_00;

  if (((((DAT_10022ed0 != 0) && (DAT_10022ed0 != 3)) && (0xf3 < arg_edx)) &&
      ((*arg_ecx == '\x02' &&
       (uVar6 = *(uint *)(arg_ecx + 4),
       (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ==
       DAT_10022ed4)))) &&
     ((iVar5 = recovered_10002230((uint *)(arg_ecx + 0x1c),(uint *)&DAT_10022e54,6), iVar5 == 0 &&
      (uVar6 = *(uint *)(arg_ecx + 0xec),
      (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) ==
      0x63825363)))) {
    uVar6 = *(uint *)(arg_ecx + 0x10);
    arg_ecx_00 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18;
    arg_edx_00 = arg_edx - 0xf0;
    uVar6 = 0;
    cVar4 = '\0';
    local_20 = 0;
    local_2c = 0;
    local_1c = 0;
    local_28 = 0;
    do {
      bVar2 = arg_ecx[uVar6 + 0xf0];
      if (bVar2 == 0) {
        uVar6 = uVar6 + 1;
      }
      else {
        if ((bVar2 == 0xff) || (arg_edx_00 <= uVar6 + 1)) break;
        bVar3 = arg_ecx[uVar6 + 0xf1];
        uVar1 = uVar6 + 2 + (uint)bVar3;
        if (arg_edx_00 < uVar1) break;
        if (bVar2 < 0x33) {
          if (bVar2 == 1) {
            if (bVar3 == 4) {
              uVar6 = *(uint *)(arg_ecx + uVar6 + 0xf2);
              local_1c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                         uVar6 << 0x18;
            }
          }
          else if ((bVar2 == 3) && (3 < bVar3)) {
            uVar6 = *(uint *)(arg_ecx + uVar6 + 0xf2);
            local_2c = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                       uVar6 << 0x18;
          }
        }
        else if (bVar2 == 0x33) {
          if (bVar3 == 4) {
            uVar6 = *(uint *)(arg_ecx + uVar6 + 0xf2);
            local_20 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                       uVar6 << 0x18;
          }
        }
        else if (bVar2 == 0x35) {
          if (bVar3 == 1) {
            cVar4 = arg_ecx[uVar6 + 0xf2];
          }
        }
        else if ((bVar2 == 0x36) && (bVar3 == 4)) {
          uVar6 = *(uint *)(arg_ecx + uVar6 + 0xf2);
          local_28 = uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18
          ;
        }
        uVar6 = uVar1;
      }
    } while (uVar6 < arg_edx_00);
    recovered_10009bf0((undefined4 *)arg_ecx,arg_edx_00);
    if (((DAT_10022ed0 == 1) && (cVar4 == '\x02')) && (arg_ecx_00 != 0)) {
      DAT_10022ed8 = local_28;
      DAT_10022ed0 = 2;
      DAT_10022ee4 = 2000;
      DAT_10022ee8 = 0;
      DAT_10022ee0 = param_3;
      DAT_10022edc = arg_ecx_00;
      recovered_1000f970(3,0);
    }
    else if ((((DAT_10022ed0 - 2U & 0xfffffffd) == 0) && (cVar4 == '\x05')) && (arg_ecx_00 != 0)) {
      DAT_10022eec = 0xf9fffc18;
      if (0xffc00000 < local_20 - 0x400000) {
        DAT_10022eec = local_20 * 1000;
      }
      DAT_10022ef0 = param_3;
      DAT_10022ef4 = (DAT_10022eec >> 1) + param_3;
      if (local_28 != 0) {
        DAT_10022ed8 = local_28;
      }
      uVar6 = 0xffffff00;
      if (local_1c != 0) {
        uVar6 = local_1c;
      }
      DAT_10022ed0 = 3;
      if (((DAT_10022e5b != '\x01') || (DAT_10022e5c != arg_ecx_00)) ||
         ((DAT_10022e60 != uVar6 || (DAT_10022e64 != local_2c)))) {
        recovered_1000f850(arg_ecx_00,uVar6,local_2c);
      }
    }
    else if (cVar4 == '\x06') {
      recovered_10009080(str_1001e98f);
      if (DAT_10022ed0 == 4) {
        DAT_10022e5b = '\0';
      }
      recovered_1000f7e0(param_3);
    }
  }
  return;
}

#undef DAT_10022e54
#undef DAT_10022e5b
#undef DAT_10022e5c
#undef DAT_10022e60
#undef DAT_10022e64
#undef DAT_10022ed0
#undef DAT_10022ed4
#undef DAT_10022ed8
#undef DAT_10022edc
#undef DAT_10022ee0
#undef DAT_10022ee4
#undef DAT_10022ee8
#undef DAT_10022eec
#undef DAT_10022ef0
#undef DAT_10022ef4
#undef str_1001e98f
#undef local_2c
#undef local_28
#undef local_20
#undef local_1c

#undef DAT_10022738
#define DAT_10022738 (*(ushort *)(((uintptr_t)pf_module_state + 0x4c14U)))
#undef DAT_10022974
#define DAT_10022974 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e50U)))
#undef DAT_10022f0e
#define DAT_10022f0e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x53eaU)))
#undef DAT_10022f10
#define DAT_10022f10 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x53ecU)))
#undef DAT_10022f12
#define DAT_10022f12 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53eeU)))
#undef DAT_10022f14
#define DAT_10022f14 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53f0U)))
#undef DAT_10022f1a
#define DAT_10022f1a (*(uint32_t *)(((uintptr_t)pf_module_state + 0x53f6U)))
#undef DAT_10022f1e
#define DAT_10022f1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53faU)))
#undef DAT_10022f20
#define DAT_10022f20 (*(ushort *)(((uintptr_t)pf_module_state + 0x53fcU)))
#undef _DAT_10022f1e
#define _DAT_10022f1e (*(ushort *)(((uintptr_t)pf_module_state + 0x53faU)))
#define local_20 (*(int *)(pf_stack_frame + 16))
#define local_1c (*(uint *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010560
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10010560(int arg_ecx,uint arg_edx,int param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  ushort *arg_ecx_00;
  byte bVar1;
  ushort uVar2;
  ushort uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint *arg_ecx_01;
  uint arg_edx_00;
  uint uVar10;
  int iVar11;

  if (0x13 < arg_edx) {
    arg_ecx_00 = (ushort *)((int)&DAT_10022f0e + arg_ecx);
    arg_edx_00 = *(byte *)((int)&DAT_10022f1a + arg_ecx) >> 2 & 0x3c;
    uVar9 = arg_edx - arg_edx_00;
    if (arg_edx_00 <= arg_edx && 0x4f < *(byte *)((int)&DAT_10022f1a + arg_ecx)) {
      uVar7 = (uint)PF_PART1(DAT_10022f1a, 1) << 0x10 | (uint)(byte)DAT_10022f1a << 0x18;
      uVar5 = (uint)(ushort)(PF_PART2(DAT_10022f1a, 2) << 8 | PF_PART2(DAT_10022f1a, 2) >> 8);
      uVar10 = arg_edx & 0xffff;
      uVar8 = (ushort)(DAT_10022f20 << 8 | DAT_10022f20 >> 8) + 6 +
              (uVar7 >> 0x10) + uVar5 + uVar10 +
              (uint)(ushort)(_DAT_10022f1e << 8 | _DAT_10022f1e >> 8);
      uVar6 = arg_edx & 0xfffe;
      if (uVar6 != 0) {
        iVar11 = 0xbb;
        do {
          uVar2 = *(ushort *)(arg_ecx + ((uintptr_t)pf_module_state + 0x532fU) + iVar11);
          uVar8 = uVar8 + (ushort)(uVar2 << 8 | uVar2 >> 8);
          uVar4 = iVar11 - 0xb8;
          iVar11 = iVar11 + 2;
        } while (uVar4 < uVar10);
      }
      if (uVar6 < uVar10) {
        uVar8 = uVar8 + (uint)*(byte *)((int)arg_ecx_00 + uVar6) * 0x100;
      }
      for (; 0xffff < uVar8; uVar8 = (uVar8 & 0xffff) + (uVar8 >> 0x10)) {
      }
      if (uVar8 == 0xffff) {
        uVar3 = *(ushort *)((int)&DAT_10022f10 + arg_ecx) << 8 |
                *(ushort *)((int)&DAT_10022f10 + arg_ecx) >> 8;
        uVar8 = *(uint *)(&DAT_10022f12 + arg_ecx);
        uVar6 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar8 = *(uint *)((int)&DAT_10022f14 + arg_ecx + 2);
        uVar8 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18;
        uVar2 = *(ushort *)((int)&DAT_10022f1a + arg_ecx + 2);
        uVar10 = (uint)(ushort)(uVar2 << 8 | uVar2 >> 8);
        bVar1 = *(byte *)((int)&DAT_10022f1a + arg_ecx + 1);
        iVar11 = 0xc;
        arg_ecx_01 = &DAT_10022974;
        do {
          if ((((*arg_ecx_01 != 0) && (arg_ecx_01[4] == uVar5 + uVar7)) &&
              ((ushort)arg_ecx_01[5] == (ushort)(*arg_ecx_00 << 8 | *arg_ecx_00 >> 8))) &&
             (*(ushort *)((int)arg_ecx_01 + 0x16) == uVar3)) {
            if (((*arg_ecx_01 == 8) && ((bVar1 & 0x16) == 2)) && ((int)(arg_ecx_01[6] - uVar6) < 0))
            {
              *arg_ecx_01 = 0;
              arg_ecx_01[0xc] = 0;
              arg_ecx_01[0x10] = 0;
              *(undefined1 *)(arg_ecx_01 + 0x16) = 0;
              goto LAB_100107fc;
            }
            arg_ecx_01[0x19] = param_3;
            local_20 = param_3;
            local_1c = uVar6;
            recovered_10009bf0(&local_20,8);
            if ((bVar1 & 4) != 0) {
              if (0 < (int)(arg_ecx_01[6] - uVar6)) {
                return;
              }
              if ((int)((uVar6 - arg_ecx_01[6]) + -0x4001) < 0) {
                *(bool *)((int)arg_ecx_01 + 0x4f) = *arg_ecx_01 != 8 && *arg_ecx_01 != 1;
                *arg_ecx_01 = 0;
                arg_ecx_01[0xc] = 0;
                arg_ecx_01[0x10] = 0;
                *(undefined1 *)(arg_ecx_01 + 0x16) = 0;
                return;
              }
              return;
            }
            if (*arg_ecx_01 == 8) {
              *(undefined1 *)((int)arg_ecx_01 + 0x4e) = 1;
              uVar9 = (uint)*(byte *)((int)arg_ecx_01 + 0x4a) + (uint)(byte)arg_ecx_01[0x12] +
                      arg_ecx_01[0x11] + arg_ecx_01[7];
LAB_10010941:
              recovered_10011090((int)arg_ecx_01,uVar9,0,0);
              return;
            }
            if (*arg_ecx_01 == 1) {
              if ((bVar1 & 2) != 0) {
                if (((bVar1 & 0x10) != 0) || (uVar6 + 1 == arg_ecx_01[6])) {
                  uVar9 = arg_ecx_01[7];
                  goto LAB_10010941;
                }
                *arg_ecx_01 = 0;
                arg_ecx_01[0xc] = 0;
                arg_ecx_01[0x10] = 0;
                *(undefined1 *)(arg_ecx_01 + 0x16) = 0;
                goto LAB_10010815;
              }
              if ((bVar1 & 0x10) == 0) {
                return;
              }
              if (uVar8 != arg_ecx_01[7] + 1) {
                return;
              }
              *(undefined1 *)(arg_ecx_01 + 0x12) = 0;
              arg_ecx_01[7] = uVar8;
              arg_ecx_01[8] = uVar10;
              *(undefined1 *)(arg_ecx_01 + 0x16) = 0;
              arg_ecx_01[0x17] = 0;
              arg_ecx_01[0x14] = 400;
              *arg_ecx_01 = 2;
              arg_ecx_01[0x18] = param_3;
            }
            else if ((bVar1 & 2) != 0) {
              recovered_10009ac0(arg_ecx_01);
              return;
            }
            if ((bVar1 & 0x10) == 0) {
              return;
            }
            recovered_100113c0((int *)arg_ecx_01,uVar8,uVar10,param_3);
            if (*arg_ecx_01 == 0) {
              return;
            }
            uVar8 = arg_ecx_01[6];
            uVar6 = uVar8 - uVar6;
            if (((int)uVar6 < 0) || (uVar9 < uVar6)) {
              if ((arg_edx != arg_edx_00) || ((bVar1 & 1) != 0)) {
                *(undefined1 *)((int)arg_ecx_01 + 0x4e) = 1;
              }
            }
            else {
              uVar9 = uVar9 - uVar6;
              if (uVar9 == 0) {
                if ((bVar1 & 1) == 0) goto LAB_10010915;
              }
              else {
                uVar7 = 0x4000 - arg_ecx_01[0xc];
                uVar5 = uVar7;
                if (uVar9 < uVar7) {
                  uVar5 = uVar9;
                }
                if ((uVar5 != 0) && (*(char *)((int)arg_ecx_01 + 0x4d) == '\0')) {
                  recovered_100114f0((undefined4 *)arg_ecx_01[10],0x4000,
                                     arg_ecx_01[0xc] + arg_ecx_01[0xb] & 0x3fff,
                                     (int)arg_ecx_00 + uVar6 + arg_edx_00,uVar5);
                  arg_ecx_01[0xc] = arg_ecx_01[0xc] + uVar5;
                  uVar8 = uVar5 + arg_ecx_01[6];
                  arg_ecx_01[6] = uVar8;
                }
                *(undefined1 *)((int)arg_ecx_01 + 0x4e) = 1;
                if (((bVar1 & 1) == 0) || (uVar7 < uVar9)) goto LAB_10010915;
              }
              if (*(char *)((int)arg_ecx_01 + 0x4d) == '\0') {
                arg_ecx_01[6] = uVar8 + 1;
                *(undefined2 *)((int)arg_ecx_01 + 0x4d) = 0x101;
                uVar9 = *arg_ecx_01;
                if (uVar9 == 6) {
                  *arg_ecx_01 = 8;
                }
                else if (uVar9 == 5) {
                  *arg_ecx_01 = (byte)arg_ecx_01[0x13] + 7;
                }
                else {
                  if (uVar9 != 2) goto LAB_10010915;
                  *arg_ecx_01 = 3;
                }
                arg_ecx_01[0x18] = param_3;
              }
            }
LAB_10010915:
            recovered_10011550(arg_ecx_01,param_3);
            return;
          }
          arg_ecx_01 = arg_ecx_01 + 0x1a;
          iVar11 = iVar11 + -1;
        } while (iVar11 != 0);
        if ((bVar1 & 0x16) == 2) {
LAB_100107fc:
          if (uVar3 == DAT_10022738) {
LAB_10010815:
            recovered_10010bb0(arg_ecx_00,arg_edx_00,param_3);
            return;
          }
        }
        recovered_10010df0((undefined1 *)arg_ecx_00,uVar9);
      }
    }
  }
  return;
}

#undef DAT_10022738
#undef DAT_10022974
#undef DAT_10022f0e
#undef DAT_10022f10
#undef DAT_10022f12
#undef DAT_10022f14
#undef DAT_10022f1a
#undef DAT_10022f1e
#undef DAT_10022f20
#undef _DAT_10022f1e
#undef local_20
#undef local_1c

#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022f06
#define DAT_10022f06 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53e2U)))
#undef DAT_10022f0e
#define DAT_10022f0e (*(uint16_t *)(((uintptr_t)pf_module_state + 0x53eaU)))
#undef DAT_10022f10
#define DAT_10022f10 (*(uint16_t *)(((uintptr_t)pf_module_state + 0x53ecU)))
#undef DAT_10022f1a
#define DAT_10022f1a (*(uint *)(((uintptr_t)pf_module_state + 0x53f6U)))
#undef DAT_10023722
#define DAT_10023722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfeU)))
#undef DAT_10023724
#define DAT_10023724 (*(ushort *)(((uintptr_t)pf_module_state + 0x5c00U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010a60
 */

void recovered_10010a60(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ushort uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if ((((7 < arg_edx) && (*(char *)((int)&DAT_10022f0e + arg_ecx) == '\b')) &&
      (*(char *)((int)&DAT_10022f0e + arg_ecx + 1) == '\0')) && (arg_edx + 0x22 < 0x801)) {
    uVar3 = 0;
    uVar2 = 0;
    do {
      uVar4 = uVar2;
      uVar1 = *(ushort *)((int)&DAT_10022f0e + uVar4 + arg_ecx);
      uVar3 = uVar3 + (ushort)(uVar1 << 8 | uVar1 >> 8);
      uVar2 = uVar4 + 2;
    } while (uVar4 + 3 < arg_edx);
    if (uVar4 + 2 < arg_edx) {
      uVar3 = uVar3 + (uint)*(byte *)((int)&DAT_10022f10 + uVar4 + arg_ecx) * 0x100;
    }
    for (; 0xffff < uVar3; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
    }
    if (uVar3 == 0xffff) {
      recovered_1000fd00((undefined4 *)&DAT_10022f06);
      recovered_1000fd60(arg_edx + 0x14 & 0xffff,1,DAT_10022e5c,
                         DAT_10022f1a >> 0x18 | (DAT_10022f1a & 0xff0000) >> 8 |
                         (DAT_10022f1a & 0xff00) << 8 | DAT_10022f1a << 0x18);
      recovered_10001d70((undefined4 *)&DAT_10023722,(undefined4 *)((int)&DAT_10022f0e + arg_ecx),
                         arg_edx);
      DAT_10023722 = 0;
      DAT_10023724 = 0;
      uVar3 = recovered_1000ff50(((uintptr_t)pf_module_state + 0x5bfeU),arg_edx);
      DAT_10023724 = (ushort)uVar3 << 8 | (ushort)uVar3 >> 8;
      recovered_1000fec0(arg_edx + 0x22);
    }
  }
  return;
}

#undef DAT_10022e5c
#undef DAT_10022f06
#undef DAT_10022f0e
#undef DAT_10022f10
#undef DAT_10022f1a
#undef DAT_10023722
#undef DAT_10023724

#undef DAT_1001f030
#define DAT_1001f030 (*(int *)(((uintptr_t)pf_module_state + 0x150cU)))
#undef DAT_10022974
#define DAT_10022974 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x4e50U)))
#undef DAT_10022f06
#define DAT_10022f06 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53e2U)))
#undef DAT_10022f1a
#define DAT_10022f1a (*(uint *)(((uintptr_t)pf_module_state + 0x53f6U)))
#define local_24 (*(uint *)(pf_stack_frame + 28))
#define local_18 (*(uint (*)[6])(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010bb0
 */

void recovered_10010bb0(ushort *arg_ecx,uint arg_edx,int param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte *arg_edx_00;
  char cVar1;
  byte bVar2;
  ushort uVar3;
  int *arg_ecx_00;
  uint uVar4;
  int iVar5;
  uint uVar6;
  int *piVar7;

  piVar7 = (int *)0x0;
  iVar5 = 0xc;
  arg_ecx_00 = &DAT_10022974;
  do {
    if ((arg_ecx_00[10] != 0) && (arg_ecx_00[0xe] != 0)) {
      if (*arg_ecx_00 - 4U < 5) {
        if ((piVar7 == (int *)0x0) || (arg_ecx_00[0x18] - piVar7[0x18] < 0)) {
          piVar7 = arg_ecx_00;
        }
      }
      else if (*arg_ecx_00 == 0) goto LAB_10010c32;
    }
    arg_ecx_00 = arg_ecx_00 + 0x1a;
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (piVar7 == (int *)0x0) {
    recovered_10010df0((undefined1 *)arg_ecx,0);
  }
  else {
    *piVar7 = 0;
    piVar7[0xc] = 0;
    piVar7[0x10] = 0;
    *(undefined1 *)(piVar7 + 0x16) = 0;
    arg_ecx_00 = piVar7;
LAB_10010c32:
    local_24 = 0x218;
    if (0x14 < arg_edx) {
      local_24 = 0x218;
      uVar6 = 0x14;
      do {
        cVar1 = *(char *)((int)arg_ecx + uVar6);
        if (cVar1 == '\x01') {
          uVar4 = 1;
        }
        else {
          if ((cVar1 == '\0') || (arg_edx <= uVar6 + 1)) break;
          bVar2 = *(byte *)((int)arg_ecx + uVar6 + 1);
          uVar4 = (uint)bVar2;
          if (uVar4 < 2) break;
          if (((cVar1 == '\x02') && (bVar2 == 4)) && (uVar6 + 4 <= arg_edx)) {
            uVar3 = *(ushort *)((int)arg_ecx + uVar6 + 2);
            local_24 = (uint)(ushort)(uVar3 << 8 | uVar3 >> 8);
          }
        }
        uVar6 = uVar6 + uVar4;
      } while (uVar6 < arg_edx);
    }
    uVar6 = 0x5b4;
    if (local_24 < 0x5b4) {
      uVar6 = local_24;
    }
    uVar4 = 0x100;
    if (0x100 < uVar6) {
      uVar4 = uVar6;
    }
    arg_edx_00 = (byte *)(arg_ecx_00 + 2);
    recovered_10002000(arg_edx_00,0,6);
    recovered_10001d70((undefined4 *)arg_edx_00,(undefined4 *)&DAT_10022f06,6);
    iVar5 = DAT_1001f030 + 1;
    arg_ecx_00[1] = DAT_1001f030;
    DAT_1001f030 = iVar5;
    arg_ecx_00[4] =
         DAT_10022f1a >> 0x18 | (DAT_10022f1a & 0xff0000) >> 8 | (DAT_10022f1a & 0xff00) << 8 |
         DAT_10022f1a << 0x18;
    *(ushort *)(arg_ecx_00 + 5) = *arg_ecx << 8 | *arg_ecx >> 8;
    *(ushort *)((int)arg_ecx_00 + 0x16) = arg_ecx[1] << 8 | arg_ecx[1] >> 8;
    uVar6 = *(uint *)(arg_ecx + 2);
    arg_ecx_00[6] =
         (uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 | uVar6 << 0x18) + 1;
    recovered_1000a820(local_18,(undefined4 *)0x4);
    uVar6 = local_18[0] >> 0x18 | (local_18[0] & 0xff0000) >> 8 | (local_18[0] & 0xff00) << 8 |
            local_18[0] << 0x18;
    arg_ecx_00[7] = uVar6;
    arg_ecx_00[8] = (uint)(ushort)(arg_ecx[7] << 8 | arg_ecx[7] >> 8);
    arg_ecx_00[9] = uVar4;
    arg_ecx_00[0xb] = 0;
    arg_ecx_00[0xc] = 0;
    arg_ecx_00[0xf] = 0;
    arg_ecx_00[0x10] = 0;
    arg_ecx_00[0x11] = 0;
    arg_ecx_00[0x12] = 1;
    arg_ecx_00[0x13] = 0;
    arg_ecx_00[0x14] = 800;
    arg_ecx_00[0x17] = 0;
    arg_ecx_00[0x19] = param_3;
    *arg_ecx_00 = 1;
    arg_ecx_00[0x18] = param_3;
    recovered_10011090((int)arg_ecx_00,uVar6,0,0);
    arg_ecx_00[0x15] = param_3 + arg_ecx_00[0x14];
    *(undefined1 *)(arg_ecx_00 + 0x16) = 1;
    recovered_100100f0(arg_ecx_00[4],(undefined4 *)arg_edx_00);
  }
  return;
}

#undef DAT_1001f030
#undef DAT_10022974
#undef DAT_10022f06
#undef DAT_10022f1a
#undef local_24
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022efc
#define DAT_10022efc (*(int *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef DAT_10022f06
#define DAT_10022f06 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53e2U)))
#undef DAT_10022f1a
#define DAT_10022f1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x53f6U)))
#undef DAT_10023700
#define DAT_10023700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdcU)))
#undef DAT_10023706
#define DAT_10023706 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be2U)))
#undef DAT_1002370c
#define DAT_1002370c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef DAT_10023722
#define DAT_10023722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfeU)))
#undef DAT_10023723
#define DAT_10023723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bffU)))
#undef DAT_10023724
#define DAT_10023724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c00U)))
#undef DAT_10023726
#define DAT_10023726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c02U)))
#undef DAT_1002372a
#define DAT_1002372a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c06U)))
#undef DAT_1002372b
#define DAT_1002372b (*(byte *)(((uintptr_t)pf_module_state + 0x5c07U)))
#undef DAT_1002372c
#define DAT_1002372c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c08U)))
#undef DAT_1002372d
#define DAT_1002372d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c09U)))
#undef DAT_1002372e
#define DAT_1002372e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0aU)))
#undef DAT_1002372f
#define DAT_1002372f (*(byte *)(((uintptr_t)pf_module_state + 0x5c0bU)))
#undef DAT_10023730
#define DAT_10023730 (*(ushort *)(((uintptr_t)pf_module_state + 0x5c0cU)))
#undef DAT_10023732
#define DAT_10023732 (*(ushort *)(((uintptr_t)pf_module_state + 0x5c0eU)))
#undef DAT_10023734
#define DAT_10023734 (*(ushort *)(((uintptr_t)pf_module_state + 0x5c10U)))
#undef DAT_10023736
#define DAT_10023736 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c12U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(code * *)(0x28092cU))
#define local_25 (*(byte *)(pf_stack_frame + 27))
#define local_24 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10010df0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10010df0(undefined1 *arg_ecx,int arg_edx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  uint uVar3;

  bVar1 = arg_ecx[0xd];
  if ((bVar1 & 4) == 0) {
    if ((bVar1 & 0x10) == 0) {
      uVar3 = *(uint *)(arg_ecx + 4);
      local_24 = (bVar1 & 1) + arg_edx + (uint)((bVar1 >> 1 & 1) != 0) +
                 (uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18);
      local_25 = 0x14;
      uVar3 = 0;
    }
    else {
      uVar3 = *(uint *)(arg_ecx + 8);
      uVar3 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 | uVar3 << 0x18;
      local_25 = 4;
      local_24 = 0;
    }
    recovered_10001d70((undefined4 *)&DAT_10023700,(undefined4 *)&DAT_10022f06,6);
    recovered_10001d70((undefined4 *)&DAT_10023706,(undefined4 *)&DAT_10022e54,6);
    PF_PART2(DAT_1002370c, 0) = 8;
    recovered_1000fd60(0x28,6,DAT_10022e5c,
                       DAT_10022f1a >> 0x18 | (DAT_10022f1a & 0xff0000) >> 8 |
                       (DAT_10022f1a & 0xff00) << 8 | DAT_10022f1a << 0x18);
    recovered_10002000(&DAT_10023722,0,0x14);
    DAT_10023722 = arg_ecx[2];
    DAT_10023723 = arg_ecx[3];
    PF_PART1(DAT_10023724, 0) = *arg_ecx;
    PF_PART1(DAT_10023724, 1) = arg_ecx[1];
    PF_PART1(DAT_10023726, 0) = (undefined1)(uVar3 >> 0x18);
    PF_PART1(DAT_10023726, 1) = (byte)(uVar3 >> 0x10);
    PF_PART1(DAT_10023726, 2) = (undefined1)(uVar3 >> 8);
    PF_PART1(DAT_10023726, 3) = (undefined1)uVar3;
    DAT_1002372a = (undefined1)(local_24 >> 0x18);
    DAT_1002372b = (byte)(local_24 >> 0x10);
    DAT_1002372c = (undefined1)(local_24 >> 8);
    DAT_1002372d = (undefined1)local_24;
    DAT_1002372e = 0x50;
    DAT_1002372f = local_25;
    for (uVar3 = (ushort)(DAT_10023734 << 8 | DAT_10023734 >> 8) + 0x501a +
                 (uint)(ushort)(DAT_10023732 << 8 | DAT_10023732 >> 8) +
                 (uint)(ushort)(DAT_10023730 << 8 | DAT_10023730 >> 8) +
                 (uint)local_25 +
                 (local_24 & 0xffff) +
                 ((uint)DAT_1002372b | (local_24 >> 0x18) << 8) + (uVar3 & 0xffff) +
                 ((uint)PF_PART1(DAT_10023726, 1) | (uVar3 >> 0x18) << 8) +
                 (uint)CONCAT11((undefined1)DAT_10023724,PF_PART1(DAT_10023724, 1)) +
                 (uint)CONCAT11(DAT_10023722,DAT_10023723) +
                 (uint)(ushort)(PF_PART2(DAT_10022f1a, 2) << 8 | PF_PART2(DAT_10022f1a, 2) >> 8) +
                 (DAT_10022e5c & 0xffff) + (DAT_10022e5c >> 0x10) +
                 (uint)(ushort)((ushort)DAT_10022f1a << 8 | (ushort)DAT_10022f1a >> 8);
        0xffff < uVar3; uVar3 = (uVar3 & 0xffff) + (uVar3 >> 0x10)) {
    }
    DAT_10023732 = ~(ushort)uVar3 << 8 | (ushort)~(ushort)uVar3 >> 8;
    recovered_10002000((byte *)&DAT_10023736,0,6);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x12f < _DAT_00280808 && (_DAT_0028092c != (code *)0x0)) &&
        (iVar2 = (*_DAT_0028092c)(&DAT_10023700,0x3c), iVar2 != 0)))) {
      DAT_10022efc = DAT_10022efc + 1;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10022e54
#undef DAT_10022e5c
#undef DAT_10022efc
#undef DAT_10022f06
#undef DAT_10022f1a
#undef DAT_10023700
#undef DAT_10023706
#undef DAT_1002370c
#undef DAT_10023722
#undef DAT_10023723
#undef DAT_10023724
#undef DAT_10023726
#undef DAT_1002372a
#undef DAT_1002372b
#undef DAT_1002372c
#undef DAT_1002372d
#undef DAT_1002372e
#undef DAT_1002372f
#undef DAT_10023730
#undef DAT_10023732
#undef DAT_10023734
#undef DAT_10023736
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef local_25
#undef local_24

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_0028092c
#define DAT_0028092c (*(uint8_t *)(0x28092cU))
#undef DAT_10022e54
#define DAT_10022e54 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5330U)))
#undef DAT_10022e5c
#define DAT_10022e5c (*(uint *)(((uintptr_t)pf_module_state + 0x5338U)))
#undef DAT_10022efc
#define DAT_10022efc (*(int *)(((uintptr_t)pf_module_state + 0x53d8U)))
#undef DAT_10023700
#define DAT_10023700 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bdcU)))
#undef DAT_10023706
#define DAT_10023706 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be2U)))
#undef DAT_1002370c
#define DAT_1002370c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5be8U)))
#undef DAT_10023722
#define DAT_10023722 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bfeU)))
#undef DAT_10023723
#define DAT_10023723 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5bffU)))
#undef DAT_10023724
#define DAT_10023724 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c00U)))
#undef DAT_10023726
#define DAT_10023726 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c02U)))
#undef DAT_1002372a
#define DAT_1002372a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c06U)))
#undef DAT_1002372b
#define DAT_1002372b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c07U)))
#undef DAT_1002372c
#define DAT_1002372c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c08U)))
#undef DAT_1002372d
#define DAT_1002372d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c09U)))
#undef DAT_1002372e
#define DAT_1002372e (*(char *)(((uintptr_t)pf_module_state + 0x5c0aU)))
#undef DAT_1002372f
#define DAT_1002372f (*(byte *)(((uintptr_t)pf_module_state + 0x5c0bU)))
#undef DAT_10023730
#define DAT_10023730 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x5c0cU)))
#undef DAT_10023732
#define DAT_10023732 (*(ushort *)(((uintptr_t)pf_module_state + 0x5c0eU)))
#undef DAT_10023736
#define DAT_10023736 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x5c12U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028092c
#define _DAT_0028092c (*(code * *)(0x28092cU))
#undef _DAT_10023722
#define _DAT_10023722 (*(ushort *)(((uintptr_t)pf_module_state + 0x5bfeU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011090
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10011090(int arg_ecx,undefined4 param_2,int param_3,uint param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  byte in_DL;
  undefined1 *puVar10;

  uVar4 = (uint)((in_DL & 2) >> 1);
  uVar9 = param_4 + 0x36 + uVar4 * 4;
  if (uVar9 < 0x801) {
    uVar8 = uVar4 * 4 + 0x14;
    uVar1 = param_4 + 0x14 + uVar4 * 4;
    uVar5 = 0x4000 - *(int *)(arg_ecx + 0x30);
    uVar7 = 0xffff;
    if (uVar5 < 0xffff) {
      uVar7 = uVar5;
    }
    recovered_10001d70((undefined4 *)&DAT_10023700,(undefined4 *)(arg_ecx + 8),6);
    recovered_10001d70((undefined4 *)&DAT_10023706,(undefined4 *)&DAT_10022e54,6);
    PF_PART2(DAT_1002370c, 0) = 8;
    recovered_1000fd60(uVar1 + 0x14 & 0xffff,6,DAT_10022e5c,*(uint *)(arg_ecx + 0x10));
    recovered_10002000(&DAT_10023722,0,uVar8);
    _DAT_10023722 = *(ushort *)(arg_ecx + 0x16) << 8 | *(ushort *)(arg_ecx + 0x16) >> 8;
    PF_PART1(DAT_10023724, 0) = (undefined1)((ushort)*(undefined2 *)(arg_ecx + 0x14) >> 8);
    PF_PART1(DAT_10023724, 1) = (undefined1)*(undefined2 *)(arg_ecx + 0x14);
    PF_PART1(DAT_10023726, 0) = (undefined1)((uint)param_2 >> 0x18);
    PF_PART1(DAT_10023726, 1) = (undefined1)((uint)param_2 >> 0x10);
    PF_PART1(DAT_10023726, 2) = (undefined1)((uint)param_2 >> 8);
    PF_PART1(DAT_10023726, 3) = (undefined1)param_2;
    uVar2 = *(undefined4 *)(arg_ecx + 0x18);
    DAT_1002372a = (undefined1)((uint)uVar2 >> 0x18);
    DAT_1002372b = (undefined1)((uint)uVar2 >> 0x10);
    DAT_1002372c = (undefined1)((uint)uVar2 >> 8);
    DAT_1002372d = (undefined1)uVar2;
    DAT_1002372e = (char)uVar8 << 2;
    PF_PART1(DAT_10023730, 0) = (undefined1)(uVar7 >> 8);
    PF_PART1(DAT_10023730, 1) = (undefined1)uVar7;
    if ((in_DL & 2) != 0) {
      DAT_10023736 = 0xb4050402;
    }
    DAT_1002372f = in_DL;
    if (param_4 != 0) {
      puVar3 = *(undefined4 **)(arg_ecx + 0x38);
      uVar5 = 0x8000 - param_3;
      uVar8 = param_4;
      if (uVar5 < param_4) {
        uVar8 = uVar5;
      }
      recovered_10001d70(&DAT_10023736 + uVar4,(undefined4 *)(param_3 + (int)puVar3),uVar8);
      if (uVar5 < param_4) {
        recovered_10001d70((undefined4 *)((int)(&DAT_10023736 + uVar4) + uVar8),puVar3,
                           param_4 - uVar8);
      }
    }
    uVar8 = uVar1 & 0xffff;
    uVar4 = (*(uint *)(arg_ecx + 0x10) & 0xffff) + 6 +
            (DAT_10022e5c >> 0x10) + uVar8 +
            (DAT_10022e5c & 0xffff) + (*(uint *)(arg_ecx + 0x10) >> 0x10);
    uVar5 = 0;
    if (1 < (ushort)uVar1) {
      uVar5 = 1;
      puVar10 = &DAT_10023723;
      do {
        uVar4 = uVar4 + (ushort)(*(ushort *)(puVar10 + -1) << 8 | *(ushort *)(puVar10 + -1) >> 8);
        uVar5 = uVar5 + 2;
        puVar10 = puVar10 + 2;
      } while (uVar5 < uVar8);
      uVar5 = uVar1 & 0xfffe;
    }
    if (uVar5 < uVar8) {
      uVar4 = uVar4 + (uint)(byte)(&DAT_10023722)[uVar5] * 0x100;
    }
    for (; 0xffff < uVar4; uVar4 = (uVar4 & 0xffff) + (uVar4 >> 0x10)) {
    }
    DAT_10023732 = ~(ushort)uVar4 << 8 | (ushort)~(ushort)uVar4 >> 8;
    *(uint *)(arg_ecx + 0x34) = uVar7;
    *(undefined1 *)(arg_ecx + 0x4e) = 0;
    if (uVar9 < 0x3c) {
      recovered_10002000(&DAT_10023700 + uVar9,0,0x1a - uVar1);
      uVar9 = 0x3c;
    }
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x12f < _DAT_00280808 && (_DAT_0028092c != (code *)0x0)) &&
        (iVar6 = (*_DAT_0028092c)(&DAT_10023700,uVar9), iVar6 != 0)))) {
      DAT_10022efc = DAT_10022efc + 1;
      return CONCAT31((int3)((uint)iVar6 >> 8),1);
    }
  }
  return 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028092c
#undef DAT_10022e54
#undef DAT_10022e5c
#undef DAT_10022efc
#undef DAT_10023700
#undef DAT_10023706
#undef DAT_1002370c
#undef DAT_10023722
#undef DAT_10023723
#undef DAT_10023724
#undef DAT_10023726
#undef DAT_1002372a
#undef DAT_1002372b
#undef DAT_1002372c
#undef DAT_1002372d
#undef DAT_1002372e
#undef DAT_1002372f
#undef DAT_10023730
#undef DAT_10023732
#undef DAT_10023736
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028092c
#undef _DAT_10023722

#define local_1c (*(byte *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100113c0
 */

void recovered_100113c0(int *arg_ecx,int arg_edx,int param_3,int param_4)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined1 uVar3;
  uint uVar4;
  int iVar5;

  iVar1 = arg_ecx[7];
  uVar2 = arg_ecx[0x11];
  local_1c = *(byte *)((int)arg_ecx + 0x4a);
  iVar5 = (uint)*(byte *)(arg_ecx + 0x12) + (uint)local_1c + uVar2 + iVar1;
  if (iVar5 - arg_edx < 0) {
    *(undefined1 *)((int)arg_ecx + 0x4e) = 1;
  }
  else {
    if (iVar1 - arg_edx < 0) {
      uVar4 = arg_edx - iVar1;
      if (*(byte *)(arg_ecx + 0x12) != 0) {
        *(undefined1 *)(arg_ecx + 0x12) = 0;
        uVar4 = uVar4 - 1;
      }
      if ((uVar2 < uVar4) && (uVar4 = uVar2, iVar5 == arg_edx && local_1c == 1)) {
        *(undefined1 *)((int)arg_ecx + 0x4a) = 0;
        *(undefined1 *)(arg_ecx + 0x13) = 1;
        local_1c = 0;
      }
      arg_ecx[0xf] = arg_ecx[0xf] + uVar4 & 0x7fff;
      arg_ecx[0x10] = arg_ecx[0x10] - uVar4;
      arg_ecx[0x11] = uVar2 - uVar4;
      arg_ecx[7] = arg_edx;
      arg_ecx[0x17] = 0;
      arg_ecx[0x14] = 400;
      if ((uVar2 - uVar4 == 0) && (local_1c == 0)) {
        uVar3 = 0;
      }
      else {
        arg_ecx[0x15] = param_4 + 400;
        uVar3 = 1;
      }
      *(undefined1 *)(arg_ecx + 0x16) = uVar3;
      arg_ecx[0x19] = param_4;
    }
    arg_ecx[8] = param_3;
    if ((char)arg_ecx[0x13] == '\x01') {
      iVar1 = *arg_ecx;
      if (iVar1 == 4) {
        *arg_ecx = 0;
        arg_ecx[0xc] = 0;
        arg_ecx[0x10] = 0;
        *(undefined1 *)(arg_ecx + 0x16) = 0;
      }
      else {
        if (iVar1 == 7) {
          *arg_ecx = 8;
        }
        else {
          if (iVar1 != 5) {
            return;
          }
          *arg_ecx = (uint)*(byte *)((int)arg_ecx + 0x4d) * 2 + 6;
        }
        arg_ecx[0x18] = param_4;
      }
    }
  }
  return;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100114f0
 */

void recovered_100114f0(undefined4 *arg_ecx,int arg_edx,int param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar2 = arg_edx - param_3;
  uVar1 = param_5;
  if (uVar2 < param_5) {
    uVar1 = uVar2;
  }
  recovered_10001d70((undefined4 *)(param_3 + (int)arg_ecx),(undefined4 *)param_4,uVar1);
  if (uVar2 < param_5) {
    recovered_10001d70(arg_ecx,(undefined4 *)(param_4 + uVar1),param_5 - uVar1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011550
 */

void recovered_10011550(uint *arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = *arg_ecx;
  if ((uVar3 < 9) && ((0x103U >> (uVar3 & 0x1f) & 1) != 0)) {
    if ((uVar3 == 1) && (*(char *)((int)arg_ecx + 0x4e) != '\0')) {
      *(undefined1 *)((int)arg_ecx + 0x4e) = 0;
    }
  }
  else {
    bVar1 = false;
    if (*(char *)((int)arg_ecx + 0x4b) == '\0') {
      uVar3 = arg_ecx[0x11];
      uVar4 = arg_ecx[8] - uVar3;
      if (arg_ecx[8] < uVar3) {
        uVar4 = 0;
      }
      uVar5 = 0x2da0 - uVar3;
      if (0x2da0 < uVar3) {
        uVar5 = 0;
      }
      if (uVar4 <= 0x2da0 - uVar3) {
        uVar5 = uVar4;
      }
      if (arg_ecx[0x10] - uVar3 < uVar5) {
        uVar5 = arg_ecx[0x10] - uVar3;
      }
      if (arg_ecx[9] <= uVar5) {
        uVar5 = arg_ecx[9];
      }
      if ((uVar5 == 0) ||
         (uVar2 = recovered_10011090((int)arg_ecx,arg_ecx[7] + uVar3,uVar3 + arg_ecx[0xf] & 0x7fff,
                                     uVar5), (char)uVar2 == '\0')) {
        bVar1 = false;
      }
      else {
        uVar5 = uVar5 + arg_ecx[0x11];
        arg_ecx[0x11] = uVar5;
        if ((char)arg_ecx[0x16] == '\0') goto LAB_100116c3;
        while( true ) {
          uVar3 = 0;
          if (uVar5 <= arg_ecx[8]) {
            uVar3 = arg_ecx[8] - uVar5;
          }
          uVar4 = 0;
          if (uVar5 < 0x2da1) {
            uVar4 = 0x2da0 - uVar5;
          }
          if (uVar3 <= 0x2da0 - uVar5) {
            uVar4 = uVar3;
          }
          if (arg_ecx[0x10] - uVar5 < uVar4) {
            uVar4 = arg_ecx[0x10] - uVar5;
          }
          if (arg_ecx[9] <= uVar4) {
            uVar4 = arg_ecx[9];
          }
          bVar1 = true;
          if ((uVar4 == 0) ||
             (uVar2 = recovered_10011090((int)arg_ecx,arg_ecx[7] + uVar5,
                                         uVar5 + arg_ecx[0xf] & 0x7fff,uVar4), (char)uVar2 == '\0'))
          break;
          uVar5 = uVar4 + arg_ecx[0x11];
          arg_ecx[0x11] = uVar5;
          if ((char)arg_ecx[0x16] == '\0') {
LAB_100116c3:
            arg_ecx[0x15] = arg_ecx[0x14] + arg_edx;
            *(undefined1 *)(arg_ecx + 0x16) = 1;
          }
        }
      }
      if ((*(char *)((int)arg_ecx + 0x49) == '\x01') && (arg_ecx[0x10] == arg_ecx[0x11])) {
        *(undefined2 *)((int)arg_ecx + 0x4a) = 0x101;
        recovered_10011090((int)arg_ecx,arg_ecx[0x10] + arg_ecx[7],0,0);
        if ((char)arg_ecx[0x16] == '\0') {
          arg_ecx[0x15] = arg_ecx[0x14] + arg_edx;
          *(undefined1 *)(arg_ecx + 0x16) = 1;
        }
        if (*arg_ecx == 3) {
          *arg_ecx = 4;
        }
        else {
          if (*arg_ecx != 2) {
            return;
          }
          *arg_ecx = 5;
        }
        arg_ecx[0x18] = arg_edx;
        return;
      }
    }
    if ((!bVar1) && (*(char *)((int)arg_ecx + 0x4e) != '\0')) {
      recovered_10011090((int)arg_ecx,
                         (uint)*(byte *)((int)arg_ecx + 0x4a) + (uint)(byte)arg_ecx[0x12] +
                         arg_ecx[0x11] + arg_ecx[7],0,0);
    }
  }
  return;
}


#undef str_1001e109
#define str_1001e109 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x5e5U)))
#define local_2c (*(int *)(pf_stack_frame + 36))
#define local_28 (*(int *)(pf_stack_frame + 40))
#define local_24 (*(undefined4 (*)[9])(pf_stack_frame + 44))
#define local_38 (*(uint *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 * *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011760
 */

void recovered_10011760(int arg_ecx)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  int arg_ecx_00;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;

  puVar1 = *(undefined4 **)(arg_ecx + 0x4b4);
  local_28 = arg_ecx;
  recovered_1000a820(local_24,(undefined4 *)0x10);
  local_38 = CONCAT31(PF_PART3(local_38, 1),0x14);
  recovered_10001d70(puVar1,&local_38,1);
  recovered_10001d70((undefined4 *)((int)puVar1 + 1),local_24,0x10);
  local_2c = 0x10011771;
  uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x5e5U));
  local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  local_34 = puVar1;
  recovered_10001d70((undefined4 *)((int)puVar1 + 0x11),&local_38,4);
  uVar7 = 0x15;
  if (uVar4 < 0x1fec) {
    if (uVar4 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + 0x15),(undefined4 *)str_1001e109,uVar4);
    }
    uVar7 = uVar4 + 0x15;
  }
  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state+0x324U));
  uVar5 = recovered_100024c0((int)puVar1);
  puVar3 = local_34;
  local_38 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  if (uVar7 - 0x1ffd < 4 || 0x1feb < uVar4) {
LAB_10011880:
    bVar2 = true;
  }
  else {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar4 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar4 < uVar5) goto LAB_10011880;
    if (uVar5 != 0) {
      recovered_10001d70((undefined4 *)((int)puVar3 + uVar7),puVar1,uVar5);
    }
    uVar7 = uVar7 + uVar5;
    bVar2 = false;
  }
  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state+0x614U));
  uVar4 = recovered_100024c0((int)puVar1);
  local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
LAB_10011903:
    bVar2 = true;
  }
  else {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar5 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar5 < uVar4) goto LAB_10011903;
    if (uVar4 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar4);
    }
    uVar7 = uVar7 + uVar4;
    bVar2 = false;
  }
  uVar4 = recovered_100024c0((int)puVar1);
  local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
LAB_1001197a:
    bVar2 = true;
  }
  else {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar5 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar5 < uVar4) goto LAB_1001197a;
    if (uVar4 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar4);
    }
    uVar7 = uVar7 + uVar4;
    bVar2 = false;
  }
  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state+0x648U));
  uVar4 = recovered_100024c0((int)puVar1);
  local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if ((bVar2) || (uVar7 - 0x1ffd < 4)) {
LAB_100119fd:
    bVar2 = true;
  }
  else {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar5 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar5 < uVar4) goto LAB_100119fd;
    if (uVar4 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar4);
    }
    uVar7 = uVar7 + uVar4;
    bVar2 = false;
  }
  uVar5 = recovered_100024c0((int)puVar1);
  local_38 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar4 = local_38;
  if ((bVar2) || (uVar4 = uVar7 - 0x1ffd, uVar4 < 4)) {
LAB_10011a74:
    local_30 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  else {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar4 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar4 < uVar5) goto LAB_10011a74;
    if (uVar5 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar5);
    }
    uVar7 = uVar7 + uVar5;
    local_30 = 0;
  }
  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state+0x764U));
  uVar5 = recovered_100024c0((int)puVar1);
  local_38 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar4 = local_38;
  if (((char)local_30 == '\0') && (uVar4 = uVar7 - 0x1ffd, 3 < uVar4)) {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar4 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar4 < uVar5) goto LAB_10011af9;
    if (uVar5 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar5);
    }
    uVar7 = uVar7 + uVar5;
    local_30 = 0;
  }
  else {
LAB_10011af9:
    local_30 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  uVar5 = recovered_100024c0((int)puVar1);
  local_38 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 | uVar5 << 0x18;
  uVar4 = local_38;
  if (((char)local_30 == '\0') && (uVar4 = uVar7 - 0x1ffd, 3 < uVar4)) {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar4 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar4 < uVar5) goto LAB_10011b76;
    if (uVar5 != 0) {
      recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar5);
    }
    uVar7 = uVar7 + uVar5;
    local_30 = 0;
  }
  else {
LAB_10011b76:
    local_30 = CONCAT31((int3)(uVar4 >> 8),1);
  }
  puVar1 = (undefined4 *)(((uintptr_t)pf_module_state+0x925U));
  uVar4 = recovered_100024c0((int)puVar1);
  local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if (((char)local_30 == '\0') && (3 < uVar7 - 0x1ffd)) {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar5 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar4 <= uVar5) {
      if (uVar4 != 0) {
        recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar4);
      }
      uVar7 = uVar7 + uVar4;
      bVar2 = false;
      goto LAB_10011c21;
    }
  }
  bVar2 = true;
LAB_10011c21:
  uVar4 = recovered_100024c0((int)puVar1);
  local_38 = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  if ((!bVar2) && (3 < uVar7 - 0x1ffd)) {
    recovered_10001d70((undefined4 *)((int)local_34 + uVar7),&local_38,4);
    uVar5 = 0x1ffc - uVar7;
    uVar7 = uVar7 + 4;
    if (uVar4 <= uVar5) {
      if (uVar4 != 0) {
        recovered_10001d70((undefined4 *)((int)local_34 + uVar7),puVar1,uVar4);
      }
      puVar1 = local_34;
      uVar4 = uVar4 + uVar7;
      local_38 = local_38 & 0xffffff00;
      uVar7 = 0x2000;
      if (uVar4 != 0x2000) {
        recovered_10001d70((undefined4 *)((int)local_34 + uVar4),&local_38,1);
        uVar7 = uVar4 + 1;
        local_38 = 0;
        if ((uVar4 & 0xfffffffc) != 0x1ffc) {
          recovered_10001d70((undefined4 *)(uVar7 + (int)puVar1),&local_38,4);
          uVar7 = uVar4 + 5;
        }
      }
    }
  }
  arg_ecx_00 = local_28;
  *(uint *)(local_28 + 0x4b8) = uVar7;
  *(undefined2 *)(local_28 + 0x4a5) = 0x101;
  *(undefined2 *)(local_28 + 0x808) = 0;
  *(undefined1 *)(local_28 + 0x7f4) = 0;
  uVar6 = recovered_10011d50(local_28,local_34,uVar7);
  if ((char)uVar6 == '\0') {
    recovered_100097e0(arg_ecx_00,2,(undefined4 *)(((uintptr_t)pf_module_state+0xef1U)));
  }
  return;
}

#undef str_1001e109
#undef local_2c
#undef local_28
#undef local_24
#undef local_38
#undef local_34
#undef local_30

#define local_3d (*(undefined1 *)(pf_stack_frame + 147))
#define local_3c (*(undefined1 *)(pf_stack_frame + 148))
#define local_3b (*(undefined1 *)(pf_stack_frame + 149))
#define local_3a (*(undefined1 *)(pf_stack_frame + 150))
#define local_39 (*(undefined1 *)(pf_stack_frame + 151))
#define local_30 (*(undefined4 *)(pf_stack_frame + 160))
#define local_2c (*(uint *)(pf_stack_frame + 164))
#define local_28 (*(uint *)(pf_stack_frame + 168))
#define local_24 (*(uint *)(pf_stack_frame + 172))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 176))
#define local_1c (*(undefined4 *)(pf_stack_frame + 180))
#define local_18 (*(undefined1 *)(pf_stack_frame + 184))
#define local_17 (*(undefined1 *)(pf_stack_frame + 185))
#define local_16 (*(undefined1 *)(pf_stack_frame + 186))
#define local_15 (*(undefined1 *)(pf_stack_frame + 187))
#define local_c0 (*(uint *)(pf_stack_frame + 16))
#define local_b8 (*(undefined1 *)(pf_stack_frame + 24))
#define local_b4 (*(undefined1 *)(pf_stack_frame + 28))
#define local_b3 (*(undefined1 *)(pf_stack_frame + 29))
#define local_b2 (*(undefined1 *)(pf_stack_frame + 30))
#define local_ae (*(undefined1 *)(pf_stack_frame + 34))
#define local_ad (*(undefined1 *)(pf_stack_frame + 35))
#define local_ac (*(undefined1 *)(pf_stack_frame + 36))
#define local_a8 (*(undefined4 *)(pf_stack_frame + 40))
#define local_a4 (*(undefined4 *)(pf_stack_frame + 44))
#define local_a0 (*(undefined4 *)(pf_stack_frame + 48))
#define local_9c (*(undefined4 *)(pf_stack_frame + 52))
#define local_98 (*(undefined1 *)(pf_stack_frame + 56))
#define local_97 (*(undefined1 *)(pf_stack_frame + 57))
#define local_96 (*(undefined1 *)(pf_stack_frame + 58))
#define local_95 (*(undefined1 *)(pf_stack_frame + 59))
#define local_94 (*(undefined1 *)(pf_stack_frame + 60))
#define local_93 (*(undefined1 *)(pf_stack_frame + 61))
#define local_92 (*(undefined1 *)(pf_stack_frame + 62))
#define local_91 (*(undefined1 *)(pf_stack_frame + 63))
#define local_90 (*(undefined1 *)(pf_stack_frame + 64))
#define local_8f (*(undefined1 *)(pf_stack_frame + 65))
#define local_8e (*(undefined1 *)(pf_stack_frame + 66))
#define local_8d (*(undefined1 *)(pf_stack_frame + 67))
#define local_8c (*(undefined1 *)(pf_stack_frame + 68))
#define local_8b (*(undefined1 *)(pf_stack_frame + 69))
#define local_8a (*(undefined1 *)(pf_stack_frame + 70))
#define local_89 (*(undefined1 *)(pf_stack_frame + 71))
#define local_88 (*(undefined1 *)(pf_stack_frame + 72))
#define local_87 (*(undefined1 *)(pf_stack_frame + 73))
#define local_86 (*(undefined1 *)(pf_stack_frame + 74))
#define local_85 (*(undefined1 *)(pf_stack_frame + 75))
#define local_84 (*(undefined1 *)(pf_stack_frame + 76))
#define local_83 (*(undefined1 *)(pf_stack_frame + 77))
#define local_82 (*(undefined1 *)(pf_stack_frame + 78))
#define local_81 (*(undefined1 *)(pf_stack_frame + 79))
#define uStack_b7 (*(undefined1 *)(pf_stack_frame + 25))
#define local_80 (*(undefined1 *)(pf_stack_frame + 80))
#define uStack_b6 (*(undefined1 *)(pf_stack_frame + 26))
#define local_7f (*(undefined1 *)(pf_stack_frame + 81))
#define uStack_b5 (*(undefined1 *)(pf_stack_frame + 27))
#define local_7e (*(undefined1 *)(pf_stack_frame + 82))
#define local_7d (*(undefined1 *)(pf_stack_frame + 83))
#define local_7c (*(undefined1 *)(pf_stack_frame + 84))
#define local_7b (*(undefined1 *)(pf_stack_frame + 85))
#define uStack_b1 (*(undefined1 *)(pf_stack_frame + 31))
#define local_7a (*(undefined1 *)(pf_stack_frame + 86))
#define uStack_b0 (*(undefined1 *)(pf_stack_frame + 32))
#define local_79 (*(undefined1 *)(pf_stack_frame + 87))
#define uStack_af (*(undefined1 *)(pf_stack_frame + 33))
#define local_78 (*(uint *)(pf_stack_frame + 88))
#define local_74 (*(uint *)(pf_stack_frame + 92))
#define local_70 (*(uint *)(pf_stack_frame + 96))
#define local_6c (*(uint *)(pf_stack_frame + 100))
#define uStack_ab (*(undefined1 *)(pf_stack_frame + 37))
#define local_68 (*(uint *)(pf_stack_frame + 104))
#define uStack_aa (*(undefined1 *)(pf_stack_frame + 38))
#define local_64 (*(byte (*)[100])(pf_stack_frame + 108))
#define uStack_a9 (*(undefined1 *)(pf_stack_frame + 39))
#define local_50 (*(undefined4 *)(pf_stack_frame + 128))
#define local_4c (*(undefined4 *)(pf_stack_frame + 132))
#define local_48 (*(undefined4 *)(pf_stack_frame + 136))
#define local_44 (*(undefined4 *)(pf_stack_frame + 140))
#define local_40 (*(undefined1 *)(pf_stack_frame + 144))
#define local_3f (*(undefined1 *)(pf_stack_frame + 145))
#define local_3e (*(undefined1 *)(pf_stack_frame + 146))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10011d50
 */

undefined4 recovered_10011d50(int arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[240] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  undefined4 *arg_edx_00;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;

  puVar1 = *(uint **)(arg_ecx + 8);
  if ((puVar1 != (uint *)0x0) && (puVar1[1] == *(uint *)(arg_ecx + 0xc))) {
    if (0x8898 < param_3) {
      return 0;
    }
    if ((*puVar1 & 0xfffffffe) != 2) {
      return 0;
    }
    if (*(int *)(arg_ecx + 0x2e8) - 2U < 2) {
      local_c0 = *(uint *)(arg_ecx + 0x47c);
      uVar5 = 0x10;
      uVar4 = 0xf;
      iVar3 = 5;
    }
    else {
      uVar5 = 8;
      if (*(int *)(arg_ecx + 0x2e8) == 1) {
        local_c0 = 0x10;
        iVar3 = 1;
      }
      else {
        local_c0 = 0;
        iVar3 = 5;
      }
      uVar4 = 7;
    }
    uVar4 = uVar5 - (iVar3 + param_3 & uVar4);
    if (3 < uVar4) {
      uVar5 = 0;
    }
    puVar6 = (undefined4 *)(uVar5 | uVar4);
    local_24 = (int)puVar6 + local_c0 + 5 + param_3;
    if (0x8000 - puVar1[0x10] < local_24) {
      return 0;
    }
    arg_edx_00 = *(undefined4 **)(arg_ecx + 0x13c);
    local_28 = param_3 + 1 + (int)puVar6;
    local_2c = param_3 + 5 + (int)puVar6;
    *(undefined1 *)arg_edx_00 = 0;
    *(char *)((int)arg_edx_00 + 1) = (char)(local_28 >> 0x10);
    *(char *)((int)arg_edx_00 + 2) = (char)(local_28 >> 8);
    *(char *)((int)arg_edx_00 + 3) = (char)local_28;
    local_20 = arg_edx_00 + 1;
    *(char *)(arg_edx_00 + 1) = (char)puVar6;
    recovered_10001d70((undefined4 *)((int)arg_edx_00 + 5),arg_edx,param_3);
    recovered_1000a820((undefined4 *)((int)arg_edx_00 + param_3 + 5),puVar6);
    uVar5 = local_2c;
    if (*(int *)(arg_ecx + 0x2e8) - 2U < 2) {
      uVar2 = *(undefined4 *)(arg_ecx + 0x148);
      uStack_b7 = (undefined1)((uint)uVar2 >> 0x10);
      uStack_b6 = (undefined1)((uint)uVar2 >> 8);
      local_b8 = (undefined1)((uint)uVar2 >> 0x18);
      uStack_b5 = (undefined1)uVar2;
      if (*(int *)(arg_ecx + 0x2ec) == 2) {
        recovered_100128d0((void *)(arg_ecx + 0x438),*(uint *)(arg_ecx + 0x478),&local_b8,arg_edx_00
                           ,local_2c,&local_78);
      }
      else {
        recovered_100131b0((void *)(arg_ecx + 0x438),*(uint *)(arg_ecx + 0x478),&local_b8,arg_edx_00
                           ,local_2c,&local_78);
      }
      recovered_10013910((byte *)(arg_ecx + 0x334),(char *)(arg_ecx + 0x428),(int)arg_edx_00,
                         (int)arg_edx_00,uVar5);
      recovered_10001d70((undefined4 *)((int)local_20 + local_28),&local_78,local_c0);
      local_78 = 0;
      local_74 = 0;
      local_70 = 0;
      local_6c = 0;
      local_68 = 0;
      local_64[0] = 0;
      local_64[1] = 0;
      local_64[2] = 0;
      local_64[3] = 0;
      local_64[4] = 0;
      local_64[5] = 0;
      local_64[6] = 0;
      local_64[7] = 0;
      local_64[8] = 0;
      local_64[9] = 0;
      local_64[10] = 0;
      local_64[0xb] = 0;
      local_64[0xc] = 0;
      local_64[0xd] = 0;
      local_64[0xe] = 0;
      local_64[0xf] = 0;
      local_64[0x10] = 0;
      local_64[0x11] = 0;
      local_64[0x12] = 0;
      local_64[0x13] = 0;
      local_50 = 0;
      local_4c = 0;
      local_48 = 0;
      local_44 = 0;
      local_40 = 0;
      local_3f = 0;
      local_3e = 0;
      local_3d = 0;
      local_3c = 0;
      local_3b = 0;
      local_3a = 0;
      local_39 = 0;
    }
    else if (*(int *)(arg_ecx + 0x2e8) == 1) {
      uVar2 = *(undefined4 *)(arg_ecx + 0x148);
      local_1c = 0;
      local_18 = (undefined1)((uint)uVar2 >> 0x18);
      local_17 = (undefined1)((uint)uVar2 >> 0x10);
      local_16 = (undefined1)((uint)uVar2 >> 8);
      local_15 = (undefined1)uVar2;
      recovered_1000adc0((void *)(arg_ecx + 0x2f1),0,0,&local_1c,&local_b8);
      recovered_10012420(0,0,&local_1c,(int)arg_edx_00,(int)arg_edx_00,4);
      puVar6 = local_20;
      recovered_10012420(1,0,&local_1c,(int)local_20,(int)local_20,local_28);
      local_78 = CONCAT13(uStack_b5,CONCAT12(uStack_b6,CONCAT11(uStack_b7,local_b8))) & 0x3ffffff;
      local_74 = CONCAT13(local_b2,CONCAT12(local_b3,CONCAT11(local_b4,uStack_b5))) >> 2 & 0x3ffff03
      ;
      local_70 = CONCAT13(uStack_af,CONCAT12(uStack_b0,CONCAT11(uStack_b1,local_b2))) >> 4 &
                 0x3ffc0ff;
      local_6c = CONCAT13(local_ac,CONCAT12(local_ad,CONCAT11(local_ae,uStack_af))) >> 6 & 0x3f03fff
      ;
      local_68 = CONCAT13(uStack_a9,CONCAT12(uStack_aa,CONCAT11(uStack_ab,local_ac))) >> 8 & 0xfffff
      ;
      recovered_10002000(local_64,0,0x14);
      local_50 = local_a8;
      local_4c = local_a4;
      local_48 = local_a0;
      local_44 = local_9c;
      local_30 = 0;
      recovered_10012620((int)&local_78,arg_edx_00,local_2c);
      recovered_100126e0((int)&local_78,(undefined1 *)((int)puVar6 + local_28));
      local_b8 = 0;
      uStack_b7 = 0;
      uStack_b6 = 0;
      uStack_b5 = 0;
      local_b4 = 0;
      local_b3 = 0;
      local_b2 = 0;
      uStack_b1 = 0;
      uStack_b0 = 0;
      uStack_af = 0;
      local_ae = 0;
      local_ad = 0;
      local_ac = 0;
      uStack_ab = 0;
      uStack_aa = 0;
      uStack_a9 = 0;
      local_a8 = 0;
      local_a4 = 0;
      local_a0 = 0;
      local_9c = 0;
      local_98 = 0;
      local_97 = 0;
      local_96 = 0;
      local_95 = 0;
      local_94 = 0;
      local_93 = 0;
      local_92 = 0;
      local_91 = 0;
      local_90 = 0;
      local_8f = 0;
      local_8e = 0;
      local_8d = 0;
      local_8c = 0;
      local_8b = 0;
      local_8a = 0;
      local_89 = 0;
      local_88 = 0;
      local_87 = 0;
      local_86 = 0;
      local_85 = 0;
      local_84 = 0;
      local_83 = 0;
      local_82 = 0;
      local_81 = 0;
      local_80 = 0;
      local_7f = 0;
      local_7e = 0;
      local_7d = 0;
      local_7c = 0;
      local_7b = 0;
      local_7a = 0;
      local_79 = 0;
    }
    puVar1 = *(uint **)(arg_ecx + 8);
    if ((((*puVar1 & 0xfffffffe) == 2) && (*(char *)((int)puVar1 + 0x49) == '\0')) &&
       (local_24 <= 0x8000 - puVar1[0x10])) {
      puVar6 = (undefined4 *)puVar1[0xe];
      uVar4 = puVar1[0x10] + puVar1[0xf] & 0x7fff;
      uVar7 = 0x8000 - uVar4;
      uVar5 = local_24;
      if (uVar7 < local_24) {
        uVar5 = uVar7;
      }
      recovered_10001d70((undefined4 *)(uVar4 + (int)puVar6),arg_edx_00,uVar5);
      uVar4 = local_24;
      if (uVar7 < local_24) {
        recovered_10001d70(puVar6,(undefined4 *)((int)arg_edx_00 + uVar5),local_24 - uVar5);
      }
      puVar1[0x10] = puVar1[0x10] + uVar4;
      *(int *)(arg_ecx + 0x148) = *(int *)(arg_ecx + 0x148) + 1;
      return CONCAT31((int3)((uint)arg_ecx >> 8),1);
    }
  }
  return 0;
}

#undef local_3d
#undef local_3c
#undef local_3b
#undef local_3a
#undef local_39
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_17
#undef local_16
#undef local_15
#undef local_c0
#undef local_b8
#undef local_b4
#undef local_b3
#undef local_b2
#undef local_ae
#undef local_ad
#undef local_ac
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_97
#undef local_96
#undef local_95
#undef local_94
#undef local_93
#undef local_92
#undef local_91
#undef local_90
#undef local_8f
#undef local_8e
#undef local_8d
#undef local_8c
#undef local_8b
#undef local_8a
#undef local_89
#undef local_88
#undef local_87
#undef local_86
#undef local_85
#undef local_84
#undef local_83
#undef local_82
#undef local_81
#undef uStack_b7
#undef local_80
#undef uStack_b6
#undef local_7f
#undef uStack_b5
#undef local_7e
#undef local_7d
#undef local_7c
#undef local_7b
#undef uStack_b1
#undef local_7a
#undef uStack_b0
#undef local_79
#undef uStack_af
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef uStack_ab
#undef local_68
#undef uStack_aa
#undef local_64
#undef uStack_a9
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3f
#undef local_3e

#define local_24 (*(uint *)(pf_stack_frame + 92))
#define local_64 (*(byte (*)[100])(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 96))
#define local_1c (*(uint *)(pf_stack_frame + 100))
#define local_18 (*(uint *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012420
 */

void recovered_10012420(uint arg_edx,int param_2,undefined4 *param_3,int param_4,int param_5,
                       uint param_6)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  void *in_ECX;
  uint uVar1;
  uint uVar2;
  int iVar3;

  if (param_6 != 0) {
    uVar1 = 0;
    local_20 = in_ECX;
    do {
      uVar2 = param_6 - uVar1;
      if (0x3f < uVar2) {
        uVar2 = 0x40;
      }
      local_1c = param_2;
      local_18 = arg_edx;
      recovered_1000adc0(local_20,arg_edx,param_2,param_3,local_64);
      local_24 = uVar1;
      if (param_6 != uVar1) {
        iVar3 = 0;
        do {
          *(byte *)(param_5 + uVar1 + iVar3) = local_64[iVar3] ^ *(byte *)(param_4 + uVar1 + iVar3);
          iVar3 = iVar3 + 1;
        } while (uVar2 + (uVar2 == 0) != iVar3);
      }
      arg_edx = local_18 + 1;
      param_2 = local_1c + (0xfffffffe < local_18);
      uVar1 = uVar1 + uVar2;
    } while (uVar1 < param_6);
  }
  return;
}

#undef local_24
#undef local_64
#undef local_20
#undef local_1c
#undef local_18

#define local_1c (*(uint * *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10012620
 */

void recovered_10012620(int arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  uint uVar3;

  iVar1 = *(int *)(arg_ecx + 0x48);
  local_1c = arg_edx;
  if (iVar1 != 0) {
    uVar3 = 0x10U - iVar1;
    if (param_3 <= 0x10U - iVar1) {
      uVar3 = param_3;
    }
    recovered_10001d70((undefined4 *)(arg_ecx + 0x38 + iVar1),arg_edx,uVar3);
    uVar2 = *(int *)(arg_ecx + 0x48) + uVar3;
    *(uint *)(arg_ecx + 0x48) = uVar2;
    if (uVar2 < 0x10) {
      return;
    }
    param_3 = param_3 - uVar3;
    local_1c = (uint *)((int)arg_edx + uVar3);
    recovered_10014070((uint *)arg_ecx,(uint *)(arg_ecx + 0x38),0x10,0x1000000);
    *(undefined4 *)(arg_ecx + 0x48) = 0;
  }
  if (0xf < param_3) {
    recovered_10014070((uint *)arg_ecx,local_1c,param_3 & 0xfffffff0,0x1000000);
    local_1c = (uint *)((int)local_1c + (param_3 & 0xfffffff0));
    param_3 = param_3 & 0xf;
  }
  if (param_3 != 0) {
    recovered_10001d70((undefined4 *)(arg_ecx + 0x38),local_1c,param_3);
    *(uint *)(arg_ecx + 0x48) = param_3;
  }
  return;
}

#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100126e0
 */

void recovered_100126e0(int arg_ecx,undefined1 *arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;

  iVar2 = *(int *)(arg_ecx + 0x48);
  if (iVar2 != 0) {
    *(undefined1 *)(arg_ecx + 0x38 + iVar2) = 1;
    if (iVar2 + 1U < 0x10) {
      do {
        *(undefined1 *)(arg_ecx + 0x39 + iVar2) = 0;
        iVar2 = iVar2 + 1;
      } while (iVar2 != 0xf);
    }
    recovered_10014070((uint *)arg_ecx,(uint *)(arg_ecx + 0x38),0x10,0);
  }
  uVar4 = (*(uint *)(arg_ecx + 0x18) >> 0x1a) + *(int *)(arg_ecx + 0x1c);
  uVar11 = (uVar4 >> 0x1a) + *(int *)(arg_ecx + 0x20);
  uVar5 = (uVar11 >> 0x1a) + *(int *)(arg_ecx + 0x24);
  uVar6 = (uVar5 >> 0x1a) * 5 + *(int *)(arg_ecx + 0x14);
  uVar16 = (uVar6 >> 0x1a) + (*(uint *)(arg_ecx + 0x18) & 0x3ffffff);
  uVar4 = uVar4 & 0x3ffffff;
  uVar11 = uVar11 & 0x3ffffff;
  uVar6 = uVar6 & 0x3ffffff;
  uVar3 = uVar6 + 5;
  uVar7 = (uVar3 >> 0x1a) + uVar16;
  uVar8 = (uVar7 >> 0x1a) + uVar4;
  uVar9 = (uVar8 >> 0x1a) + uVar11;
  uVar14 = uVar9 >> 0x1a;
  uVar1 = (int)(uVar14 + 0xfc000000 + (uVar5 & 0x3ffffff)) >> 0x1f;
  uVar12 = 0xffffffff - uVar1 & 0x3ffffff;
  uVar16 = uVar16 & uVar1 | uVar7 & uVar12;
  uVar4 = uVar4 & uVar1 | uVar8 & uVar12;
  uVar7 = uVar11 & uVar1 | uVar12 & uVar9;
  uVar3 = uVar16 * 0x4000000 + (uVar6 & uVar1 | uVar3 & uVar12);
  uVar6 = uVar4 << 0x14 | uVar16 >> 6;
  uVar8 = uVar7 << 0xe | uVar4 >> 0xc;
  iVar2 = uVar3 + *(uint *)(arg_ecx + 0x28);
  uVar3 = (uint)CARRY4(uVar3,*(uint *)(arg_ecx + 0x28));
  uVar4 = uVar6 + *(uint *)(arg_ecx + 0x2c);
  iVar10 = uVar4 + uVar3;
  uVar3 = (uint)(CARRY4(uVar6,*(uint *)(arg_ecx + 0x2c)) || CARRY4(uVar4,uVar3));
  uVar4 = uVar8 + *(uint *)(arg_ecx + 0x30);
  iVar13 = uVar4 + uVar3;
  iVar15 = ((uVar1 & uVar5 | 0xffffffff - uVar1 & (uVar5 & 0x3ffffff) + uVar14) << 8 | uVar7 >> 0x12
           ) + *(int *)(arg_ecx + 0x34) +
           (uint)(CARRY4(uVar8,*(uint *)(arg_ecx + 0x30)) || CARRY4(uVar4,uVar3));
  *arg_edx = (char)iVar2;
  arg_edx[1] = (char)((uint)iVar2 >> 8);
  arg_edx[2] = (char)((uint)iVar2 >> 0x10);
  arg_edx[3] = (char)((uint)iVar2 >> 0x18);
  arg_edx[4] = (char)iVar10;
  arg_edx[5] = (char)((uint)iVar10 >> 8);
  arg_edx[6] = (char)((uint)iVar10 >> 0x10);
  arg_edx[7] = (char)((uint)iVar10 >> 0x18);
  arg_edx[8] = (char)iVar13;
  arg_edx[9] = (char)((uint)iVar13 >> 8);
  arg_edx[10] = (char)((uint)iVar13 >> 0x10);
  arg_edx[0xb] = (char)((uint)iVar13 >> 0x18);
  arg_edx[0xc] = (char)iVar15;
  arg_edx[0xd] = (char)((uint)iVar15 >> 8);
  arg_edx[0xe] = (char)((uint)iVar15 >> 0x10);
  arg_edx[0xf] = (char)((uint)iVar15 >> 0x18);
  iVar2 = -0x4c;
  do {
    *(undefined1 *)(arg_ecx + 0x4c + iVar2) = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  return;
}


#define local_150 (*(undefined4 *)(pf_stack_frame + 176))
#define local_14c (*(undefined4 *)(pf_stack_frame + 180))
#define local_148 (*(undefined4 *)(pf_stack_frame + 184))
#define local_144 (*(undefined4 *)(pf_stack_frame + 188))
#define local_140 (*(undefined4 *)(pf_stack_frame + 192))
#define local_13c (*(undefined4 *)(pf_stack_frame + 196))
#define local_138 (*(undefined4 *)(pf_stack_frame + 200))
#define local_134 (*(undefined4 *)(pf_stack_frame + 204))
#define local_130 (*(undefined4 *)(pf_stack_frame + 208))
#define local_12c (*(undefined4 *)(pf_stack_frame + 212))
#define local_128 (*(undefined4 *)(pf_stack_frame + 216))
#define local_124 (*(undefined4 *)(pf_stack_frame + 220))
#define local_120 (*(uint *)(pf_stack_frame + 224))
#define local_11c (*(int *)(pf_stack_frame + 228))
#define local_118 (*(undefined4 (*)[70])(pf_stack_frame + 232))
#define local_98 (*(int *)(pf_stack_frame + 360))
#define local_94 (*(byte (*)[148])(pf_stack_frame + 364))
#define local_168 (*(uint * *)(pf_stack_frame + 152))
#define local_1a8 (*(uint (*)[106])(pf_stack_frame + 88))
#define local_1e8 (*(uint (*)[122])(pf_stack_frame + 24))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 492))
#define local_164 (*(uint *)(pf_stack_frame + 156))
#define local_160 (*(uint *)(pf_stack_frame + 160))
#define local_15c (*(undefined4 *)(pf_stack_frame + 164))
#define local_158 (*(undefined4 *)(pf_stack_frame + 168))
#define local_154 (*(undefined4 *)(pf_stack_frame + 172))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100128d0
 */

void recovered_100128d0(void *key,uint key_size,void *prefix,void *data,uint size,void *out)

{
  unsigned char pf_stack_frame[544] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  byte bVar3;
  uint uVar4;
  uint *arg_edx;
  bool bVar5;

  if (key_size < 0x81) {
    local_168 = key;
    local_164 = key_size;
  }
  else {
    local_160 = 0xf3bcc908;
    local_15c = 0x6a09e667;
    local_158 = 0x84caa73b;
    local_154 = 0xbb67ae85;
    local_150 = 0xfe94f82b;
    local_14c = 0x3c6ef372;
    local_148 = 0x5f1d36f1;
    local_144 = 0xa54ff53a;
    local_140 = 0xade682d1;
    local_13c = 0x510e527f;
    local_138 = 0x2b3e6c1f;
    local_134 = 0x9b05688c;
    local_130 = 0xfb41bd6b;
    local_12c = 0x1f83d9ab;
    local_128 = 0x137e2179;
    local_124 = 0x5be0cd19;
    local_98 = 0;
    local_11c = 0;
    local_120 = key_size;
    do {
      uVar1 = 0x80U - local_98;
      if (key_size < 0x80U - local_98) {
        uVar1 = key_size;
      }
      recovered_10001d70((undefined4 *)((int)local_118 + local_98),key,uVar1);
      local_98 = local_98 + uVar1;
      if (local_98 == 0x80) {
        recovered_10009e40(&local_160,(int)local_118);
        local_98 = 0;
      }
      key = (void *)((int)key + uVar1);
      key_size = key_size - uVar1;
    } while (key_size != 0);
    local_168 = local_1e8;
    recovered_1000b150(&local_160,local_168);
    local_164 = 0x40;
  }
  uVar1 = 0;
  do {
    bVar3 = 0x36;
    if (uVar1 < local_164) {
      bVar3 = *(byte *)((int)local_168 + uVar1) ^ 0x36;
    }
    local_94[uVar1] = bVar3;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x80);
  local_160 = 0xf3bcc908;
  local_15c = 0x6a09e667;
  local_158 = 0x84caa73b;
  local_154 = 0xbb67ae85;
  local_150 = 0xfe94f82b;
  local_14c = 0x3c6ef372;
  local_148 = 0x5f1d36f1;
  local_144 = 0xa54ff53a;
  local_140 = 0xade682d1;
  local_13c = 0x510e527f;
  local_138 = 0x2b3e6c1f;
  local_134 = 0x9b05688c;
  local_130 = 0xfb41bd6b;
  local_12c = 0x1f83d9ab;
  local_128 = 0x137e2179;
  local_124 = 0x5be0cd19;
  local_98 = 0;
  local_11c = 0;
  local_120 = 0x80;
  recovered_10001d70(local_118,(undefined4 *)local_94,0x80);
  iVar2 = local_98 + 0x80;
  bVar5 = local_98 == 0;
  local_98 = iVar2;
  if (bVar5) {
    recovered_10009e40(&local_160,(int)local_118);
    local_98 = 0;
  }
  bVar5 = 0xfffffffb < local_120;
  local_120 = local_120 + 4;
  local_11c = local_11c + (uint)bVar5;
  uVar1 = 4;
  do {
    uVar4 = 0x80U - local_98;
    if (uVar1 < 0x80U - local_98) {
      uVar4 = uVar1;
    }
    recovered_10001d70((undefined4 *)((int)local_118 + local_98),prefix,uVar4);
    local_98 = local_98 + uVar4;
    if (local_98 == 0x80) {
      recovered_10009e40(&local_160,(int)local_118);
      local_98 = 0;
    }
    prefix = (void *)((int)prefix + uVar4);
    uVar1 = uVar1 - uVar4;
  } while (uVar1 != 0);
  bVar5 = CARRY4(local_120,size);
  local_120 = local_120 + size;
  local_11c = local_11c + (uint)bVar5;
  for (; size != 0; size = size - uVar1) {
    uVar1 = 0x80U - local_98;
    if (size < 0x80U - local_98) {
      uVar1 = size;
    }
    recovered_10001d70((undefined4 *)((int)local_118 + local_98),data,uVar1);
    local_98 = local_98 + uVar1;
    if (local_98 == 0x80) {
      recovered_10009e40(&local_160,(int)local_118);
      local_98 = 0;
    }
    data = (void *)((int)data + uVar1);
  }
  arg_edx = local_1a8;
  recovered_1000b150(&local_160,arg_edx);
  uVar1 = 0;
  do {
    bVar3 = 0x5c;
    if (uVar1 < local_164) {
      bVar3 = *(byte *)((int)local_168 + uVar1) ^ 0x5c;
    }
    local_94[uVar1] = bVar3;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 0x80);
  local_160 = 0xf3bcc908;
  local_15c = 0x6a09e667;
  local_158 = 0x84caa73b;
  local_154 = 0xbb67ae85;
  local_150 = 0xfe94f82b;
  local_14c = 0x3c6ef372;
  local_148 = 0x5f1d36f1;
  local_144 = 0xa54ff53a;
  local_140 = 0xade682d1;
  local_13c = 0x510e527f;
  local_138 = 0x2b3e6c1f;
  local_134 = 0x9b05688c;
  local_130 = 0xfb41bd6b;
  local_12c = 0x1f83d9ab;
  local_128 = 0x137e2179;
  local_124 = 0x5be0cd19;
  local_98 = 0;
  local_11c = 0;
  local_120 = 0x80;
  recovered_10001d70(local_118,(undefined4 *)local_94,0x80);
  iVar2 = local_98 + 0x80;
  bVar5 = local_98 == 0;
  local_98 = iVar2;
  if (bVar5) {
    recovered_10009e40(&local_160,(int)local_118);
    local_98 = 0;
  }
  bVar5 = 0xffffffbf < local_120;
  local_120 = local_120 + 0x40;
  local_11c = local_11c + (uint)bVar5;
  uVar1 = 0x40;
  do {
    uVar4 = 0x80U - local_98;
    if (uVar1 < 0x80U - local_98) {
      uVar4 = uVar1;
    }
    recovered_10001d70((undefined4 *)((int)local_118 + local_98),arg_edx,uVar4);
    local_98 = local_98 + uVar4;
    if (local_98 == 0x80) {
      recovered_10009e40(&local_160,(int)local_118);
      local_98 = 0;
    }
    arg_edx = (uint *)((int)arg_edx + uVar4);
    uVar1 = uVar1 - uVar4;
  } while (uVar1 != 0);
  recovered_1000b150(&local_160,out);
  iVar2 = -0x80;
  do {
    auStack_14[iVar2] = 0;
    iVar2 = iVar2 + 1;
  } while (iVar2 != 0);
  return;
}

#undef local_150
#undef local_14c
#undef local_148
#undef local_144
#undef local_140
#undef local_13c
#undef local_138
#undef local_134
#undef local_130
#undef local_12c
#undef local_128
#undef local_124
#undef local_120
#undef local_11c
#undef local_118
#undef local_98
#undef local_94
#undef local_168
#undef local_1a8
#undef local_1e8
#undef auStack_14
#undef local_164
#undef local_160
#undef local_15c
#undef local_158
#undef local_154

#define local_60 (*(int *)(pf_stack_frame + 192))
#define local_5c (*(undefined4 (*)[23])(pf_stack_frame + 196))
#define local_1c (*(int *)(pf_stack_frame + 260))
#define local_18 (*(uint *)(pf_stack_frame + 264))
#define local_a8 (*(uint (*)[42])(pf_stack_frame + 120))
#define local_108 (*(byte (*)[264])(pf_stack_frame + 24))
#define local_88 (*(uint * *)(pf_stack_frame + 152))
#define local_c8 (*(uint (*)[50])(pf_stack_frame + 88))
#define local_84 (*(uint *)(pf_stack_frame + 156))
#define local_80 (*(undefined4 *)(pf_stack_frame + 160))
#define local_7c (*(undefined4 *)(pf_stack_frame + 164))
#define local_78 (*(undefined4 *)(pf_stack_frame + 168))
#define local_74 (*(undefined4 *)(pf_stack_frame + 172))
#define local_70 (*(undefined4 *)(pf_stack_frame + 176))
#define local_6c (*(undefined4 *)(pf_stack_frame + 180))
#define local_68 (*(undefined4 *)(pf_stack_frame + 184))
#define local_64 (*(uint *)(pf_stack_frame + 188))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100131b0
 */

void recovered_100131b0(void *key,uint key_size,void *prefix,void *data,uint size,void *out)

{
  unsigned char pf_stack_frame[320] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint *arg_edx;
  bool bVar5;

  if (key_size < 0x41) {
    local_88 = key;
  }
  else {
    local_84 = 0x6a09e667;
    local_80 = 0xbb67ae85;
    local_7c = 0x3c6ef372;
    local_78 = 0xa54ff53a;
    local_74 = 0x510e527f;
    local_70 = 0x9b05688c;
    local_6c = 0x1f83d9ab;
    local_68 = 0x5be0cd19;
    local_1c = 0;
    local_60 = 0;
    local_64 = key_size;
    do {
      uVar2 = 0x40U - local_1c;
      if (key_size < 0x40U - local_1c) {
        uVar2 = key_size;
      }
      recovered_10001d70((undefined4 *)((int)local_5c + local_1c),key,uVar2);
      local_1c = local_1c + uVar2;
      if (local_1c == 0x40) {
        recovered_1000f5d0(&local_84,(int)local_5c);
        local_1c = 0;
      }
      key = (void *)((int)key + uVar2);
      key_size = key_size - uVar2;
    } while (key_size != 0);
    local_88 = local_c8;
    recovered_1000b520(&local_84,local_88);
    key_size = 0x20;
  }
  uVar2 = 0;
  do {
    bVar3 = 0x36;
    if (uVar2 < key_size) {
      bVar3 = *(byte *)((int)local_88 + uVar2) ^ 0x36;
    }
    local_108[uVar2] = bVar3;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x40);
  local_84 = 0x6a09e667;
  local_80 = 0xbb67ae85;
  local_7c = 0x3c6ef372;
  local_78 = 0xa54ff53a;
  local_74 = 0x510e527f;
  local_70 = 0x9b05688c;
  local_6c = 0x1f83d9ab;
  local_68 = 0x5be0cd19;
  local_1c = 0;
  local_60 = 0;
  local_64 = 0x40;
  local_18 = key_size;
  recovered_10001d70(local_5c,(undefined4 *)local_108,0x40);
  iVar1 = local_1c + 0x40;
  bVar5 = local_1c == 0;
  local_1c = iVar1;
  if (bVar5) {
    recovered_1000f5d0(&local_84,(int)local_5c);
    local_1c = 0;
  }
  bVar5 = 0xfffffffb < local_64;
  local_64 = local_64 + 4;
  local_60 = local_60 + (uint)bVar5;
  uVar2 = 4;
  do {
    uVar4 = 0x40U - local_1c;
    if (uVar2 < 0x40U - local_1c) {
      uVar4 = uVar2;
    }
    recovered_10001d70((undefined4 *)((int)local_5c + local_1c),prefix,uVar4);
    local_1c = local_1c + uVar4;
    if (local_1c == 0x40) {
      recovered_1000f5d0(&local_84,(int)local_5c);
      local_1c = 0;
    }
    prefix = (void *)((int)prefix + uVar4);
    uVar2 = uVar2 - uVar4;
  } while (uVar2 != 0);
  bVar5 = CARRY4(local_64,size);
  local_64 = local_64 + size;
  local_60 = local_60 + (uint)bVar5;
  for (; size != 0; size = size - uVar2) {
    uVar2 = 0x40U - local_1c;
    if (size < 0x40U - local_1c) {
      uVar2 = size;
    }
    recovered_10001d70((undefined4 *)((int)local_5c + local_1c),data,uVar2);
    local_1c = local_1c + uVar2;
    if (local_1c == 0x40) {
      recovered_1000f5d0(&local_84,(int)local_5c);
      local_1c = 0;
    }
    data = (void *)((int)data + uVar2);
  }
  arg_edx = local_a8;
  recovered_1000b520(&local_84,arg_edx);
  uVar2 = 0;
  do {
    bVar3 = 0x5c;
    if (uVar2 < local_18) {
      bVar3 = *(byte *)((int)local_88 + uVar2) ^ 0x5c;
    }
    local_108[uVar2] = bVar3;
    uVar2 = uVar2 + 1;
  } while (uVar2 != 0x40);
  local_84 = 0x6a09e667;
  local_80 = 0xbb67ae85;
  local_7c = 0x3c6ef372;
  local_78 = 0xa54ff53a;
  local_74 = 0x510e527f;
  local_70 = 0x9b05688c;
  local_6c = 0x1f83d9ab;
  local_68 = 0x5be0cd19;
  local_1c = 0;
  local_60 = 0;
  local_64 = 0x40;
  recovered_10001d70(local_5c,(undefined4 *)local_108,0x40);
  iVar1 = local_1c + 0x40;
  bVar5 = local_1c == 0;
  local_1c = iVar1;
  if (bVar5) {
    recovered_1000f5d0(&local_84,(int)local_5c);
    local_1c = 0;
  }
  bVar5 = 0xffffffdf < local_64;
  local_64 = local_64 + 0x20;
  local_60 = local_60 + (uint)bVar5;
  uVar2 = 0x20;
  do {
    uVar4 = 0x40U - local_1c;
    if (uVar2 < 0x40U - local_1c) {
      uVar4 = uVar2;
    }
    recovered_10001d70((undefined4 *)((int)local_5c + local_1c),arg_edx,uVar4);
    local_1c = local_1c + uVar4;
    if (local_1c == 0x40) {
      recovered_1000f5d0(&local_84,(int)local_5c);
      local_1c = 0;
    }
    arg_edx = (uint *)((int)arg_edx + uVar4);
    uVar2 = uVar2 - uVar4;
  } while (uVar2 != 0);
  recovered_1000b520(&local_84,out);
  return;
}

#undef local_60
#undef local_5c
#undef local_1c
#undef local_18
#undef local_a8
#undef local_108
#undef local_88
#undef local_c8
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64

#define local_80 (*(byte *)(pf_stack_frame + 32))
#define local_7f (*(byte *)(pf_stack_frame + 33))
#define local_7e (*(byte *)(pf_stack_frame + 34))
#define local_7d (*(byte *)(pf_stack_frame + 35))
#define local_7c (*(byte *)(pf_stack_frame + 36))
#define local_7b (*(byte *)(pf_stack_frame + 37))
#define local_7a (*(byte *)(pf_stack_frame + 38))
#define local_79 (*(byte *)(pf_stack_frame + 39))
#define local_78 (*(byte *)(pf_stack_frame + 40))
#define local_77 (*(byte *)(pf_stack_frame + 41))
#define local_76 (*(byte *)(pf_stack_frame + 42))
#define local_75 (*(byte *)(pf_stack_frame + 43))
#define local_74 (*(uint *)(pf_stack_frame + 44))
#define local_6d (*(byte *)(pf_stack_frame + 51))
#define local_6c (*(uint *)(pf_stack_frame + 52))
#define local_68 (*(uint *)(pf_stack_frame + 56))
#define local_64 (*(uint *)(pf_stack_frame + 60))
#define local_60 (*(uint *)(pf_stack_frame + 64))
#define local_5c (*(uint *)(pf_stack_frame + 68))
#define local_58 (*(uint *)(pf_stack_frame + 72))
#define local_54 (*(uint *)(pf_stack_frame + 76))
#define local_50 (*(uint *)(pf_stack_frame + 80))
#define local_4c (*(uint *)(pf_stack_frame + 84))
#define local_48 (*(uint *)(pf_stack_frame + 88))
#define local_44 (*(uint *)(pf_stack_frame + 92))
#define local_40 (*(uint *)(pf_stack_frame + 96))
#define local_3c (*(uint *)(pf_stack_frame + 100))
#define local_38 (*(uint *)(pf_stack_frame + 104))
#define local_34 (*(byte * *)(pf_stack_frame + 108))
#define local_30 (*(uint *)(pf_stack_frame + 112))
#define local_2c (*(byte * *)(pf_stack_frame + 116))
#define local_28 (*(uint *)(pf_stack_frame + 120))
#define local_24 (*(byte * *)(pf_stack_frame + 124))
#define local_20 (*(char * *)(pf_stack_frame + 128))
#define local_1c (*(int *)(pf_stack_frame + 132))
#define local_18 (*(uint *)(pf_stack_frame + 136))
#define local_86 (*(byte *)(pf_stack_frame + 26))
#define local_84 (*(byte (*)[132])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10013910
 */

void recovered_10013910(byte *arg_ecx,char *arg_edx,int param_3,int param_4,uint param_5)

{
  unsigned char pf_stack_frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  ushort uVar8;
  byte bVar11;
  byte bVar12;
  uint uVar9;
  uint uVar10;
  byte bVar13;
  byte bVar14;
  byte bVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  ushort uVar21;
  byte bVar22;
  byte bVar23;
  byte bVar24;
  byte bVar25;
  ushort uVar26;
  byte bVar27;
  uint uVar28;
  int iVar29;
  byte *pbVar30;
  byte *pbVar31;

  local_1c = 0x10013928;
  if (param_5 != 0) {
    local_24 = arg_ecx + 0x1f;
    local_3c = 0;
    local_34 = arg_ecx;
    local_20 = arg_edx;
    do {
      local_30 = param_5 - local_3c;
      if (0xf < local_30) {
        local_30 = 0x10;
      }
      recovered_10001d70((undefined4 *)local_84,(undefined4 *)arg_edx,0x10);
      local_6c = CONCAT31(PF_PART3(local_6c, 1),local_84[0] ^ *local_34);
      local_84[0] = local_84[0] ^ *local_34;
      local_74 = CONCAT31(PF_PART3(local_74, 1),local_84[1] ^ local_34[1]);
      local_84[1] = local_84[1] ^ local_34[1];
      local_84[2] = local_84[2] ^ local_34[2];
      local_84[3] = local_84[3] ^ local_34[3];
      local_64 = CONCAT31(PF_PART3(local_64, 1),local_80 ^ local_34[4]);
      local_80 = local_80 ^ local_34[4];
      local_68 = CONCAT31(PF_PART3(local_68, 1),local_7f ^ local_34[5]);
      local_7f = local_7f ^ local_34[5];
      uVar21 = CONCAT11(local_7e ^ local_34[6],local_84[2]);
      local_7e = local_7e ^ local_34[6];
      local_7d = local_7d ^ local_34[7];
      local_86 = local_7c ^ local_34[8];
      local_7c = local_86;
      local_60 = CONCAT31(PF_PART3(local_60, 1),local_7b ^ local_34[9]);
      local_7b = local_7b ^ local_34[9];
      local_54 = CONCAT31(PF_PART3(local_54, 1),local_7a ^ local_34[10]);
      local_7a = local_7a ^ local_34[10];
      uVar8 = CONCAT11(local_84[3],local_79 ^ local_34[0xb]);
      local_79 = local_79 ^ local_34[0xb];
      local_50 = CONCAT31(PF_PART3(local_50, 1),local_78 ^ local_34[0xc]);
      local_78 = local_78 ^ local_34[0xc];
      local_5c = CONCAT31(PF_PART3(local_5c, 1),local_77 ^ local_34[0xd]);
      local_77 = local_77 ^ local_34[0xd];
      local_58 = CONCAT31(PF_PART3(local_58, 1),local_76 ^ local_34[0xe]);
      local_76 = local_76 ^ local_34[0xe];
      uVar26 = CONCAT11(local_75 ^ local_34[0xf],local_7d);
      local_75 = local_75 ^ local_34[0xf];
      uVar3 = *(uint *)(local_34 + 0xf0);
      if (uVar3 != 0) {
        uVar28 = 1;
        local_18 = uVar3;
        pbVar31 = local_24;
        do {
          local_28 = uVar28;
          local_2c = pbVar31;
          bVar5 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_6c & 0xff));
          bVar25 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_68 & 0xff));
          bVar22 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_54 & 0xff));
          bVar11 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uint)(uVar26 >> 8));
          bVar19 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_64 & 0xff));
          local_38 = CONCAT11(bVar5,(char)uVar26) & 0xff;
          bVar23 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_60 & 0xff));
          bVar12 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_58 & 0xff));
          local_6d = bVar12;
          bVar14 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uint)(uVar8 >> 8));
          local_86 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uint)local_86);
          bVar18 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_5c & 0xff));
          bVar20 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uVar21 & 0xff));
          bVar15 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + local_38);
          bVar2 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_50 & 0xff));
          bVar24 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (local_74 & 0xff));
          bVar6 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uint)(byte)(uVar21 >> 8));
          bVar7 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (CONCAT11(local_86,(char)uVar8) & 0xff));
          if (uVar3 == uVar28) {
            pbVar30 = pbVar31;
            bVar17 = bVar5;
            bVar4 = bVar19;
            bVar5 = bVar2;
          }
          else {
            uVar9 = CONCAT11(bVar11,(char)(bVar22 ^ bVar25) >> 7) & 0xffffff1b;
            bVar16 = bVar25 ^ bVar5;
            bVar13 = bVar22 ^ bVar16;
            uVar10 = CONCAT31((int3)(uVar9 >> 8),(char)bVar16 >> 7) & 0xffffff1b;
            bVar27 = (byte)(uVar10 >> 8);
            bVar4 = bVar13 ^ bVar27;
            bVar17 = bVar16 * '\x02' ^ bVar5 ^ (byte)uVar10 ^ bVar4;
            bVar25 = (bVar22 ^ bVar25) * '\x02' ^ bVar25 ^ (byte)uVar9 ^ bVar4;
            local_38 = (uint)bVar25;
            uVar9 = CONCAT11((bVar11 ^ bVar22) * '\x02' ^ bVar16,(char)(bVar11 ^ bVar22) >> 7) &
                    0xffffff1b;
            bVar22 = (byte)(uVar9 >> 8) ^ (byte)uVar9 ^ bVar27;
            uVar8 = CONCAT11((char)(bVar27 ^ bVar5) >> 7,(bVar27 ^ bVar5) * '\x02' ^ bVar13) &
                    0x1bff;
            bVar11 = (byte)(uVar8 >> 8) ^ (byte)uVar8;
            uVar9 = CONCAT11(bVar14 ^ bVar12,(char)(bVar12 ^ bVar23) >> 7) & 0xffffff1b;
            bVar27 = bVar23 ^ bVar19;
            uVar10 = CONCAT31((int3)(uVar9 >> 8),(char)bVar27 >> 7) & 0xffffff1b;
            bVar5 = bVar12 ^ bVar27 ^ bVar14;
            bVar4 = bVar27 * '\x02' ^ bVar19 ^ (byte)uVar10 ^ bVar5;
            bVar23 = (bVar12 ^ bVar23) * '\x02' ^ bVar23 ^ (byte)uVar9 ^ bVar5;
            local_6d = (char)(uVar9 >> 8) * '\x02' ^ bVar27 ^ (char)(uVar10 >> 8) >> 7 & 0x1bU ^
                       bVar14;
            bVar14 = (char)(bVar14 ^ bVar19) >> 7 & 0x1bU ^
                     (bVar14 ^ bVar19) * '\x02' ^ bVar12 ^ bVar27;
            uVar9 = CONCAT11(bVar18,(char)(bVar20 ^ bVar18) >> 7) & 0xffffff1b;
            bVar19 = (byte)(uVar9 >> 8);
            bVar12 = bVar19 ^ local_86;
            bVar27 = bVar20 ^ bVar12;
            bVar5 = bVar27 ^ bVar15;
            bVar18 = (bVar20 ^ bVar18) * '\x02' ^ bVar19 ^ (byte)uVar9 ^ bVar5;
            uVar9 = CONCAT11(bVar12 * '\x02' ^ local_86 ^ (char)bVar12 >> 7 & 0x1bU ^ bVar5,
                             (char)(bVar15 ^ bVar20) >> 7) & 0xffffff1b;
            bVar20 = (bVar15 ^ bVar20) * '\x02' ^ bVar12 ^ (byte)uVar9 ^ bVar15;
            bVar15 = (char)(bVar15 ^ local_86) >> 7 & 0x1bU ^ (bVar15 ^ local_86) * '\x02' ^ bVar27;
            bVar12 = bVar24 ^ bVar2;
            bVar27 = bVar6 ^ bVar12;
            local_86 = (byte)(uVar9 >> 8);
            uVar8 = CONCAT11((char)bVar12 >> 7,bVar7 ^ bVar6) & 0x1bff;
            bVar19 = bVar27 ^ bVar7;
            bVar5 = bVar12 * '\x02' ^ bVar2 ^ (byte)(uVar8 >> 8) ^ bVar19;
            bVar24 = (bVar6 ^ bVar24) * '\x02' ^ bVar24 ^ (char)(bVar6 ^ bVar24) >> 7 & 0x1bU ^
                     bVar19;
            bVar6 = (bVar7 ^ bVar6) * '\x02' ^ bVar12 ^ (char)uVar8 >> 7 & 0x1bU ^ bVar7;
            bVar7 = (char)(bVar7 ^ bVar2) >> 7 & 0x1bU ^ (bVar7 ^ bVar2) * '\x02' ^ bVar27;
            pbVar30 = local_2c;
          }
          local_40 = (uint)bVar11;
          local_44 = (uint)bVar14;
          local_48 = (uint)bVar22;
          local_4c = (uint)bVar15;
          local_6c = (uint)(bVar17 ^ pbVar30[-0xf]);
          local_74 = (uint)(bVar25 ^ pbVar30[-0xe]);
          local_64 = (uint)(bVar4 ^ pbVar30[-0xb]);
          local_68 = (uint)(bVar23 ^ pbVar30[-10]);
          uVar21 = CONCAT11(local_6d ^ pbVar30[-9],bVar22 ^ pbVar30[-0xd]);
          local_86 = local_86 ^ pbVar30[-7];
          local_60 = (uint)(bVar18 ^ pbVar30[-6]);
          local_54 = (uint)(bVar20 ^ pbVar30[-5]);
          uVar8 = CONCAT11(bVar11 ^ pbVar30[-0xc],bVar15 ^ pbVar30[-4]);
          local_50 = (uint)(bVar5 ^ pbVar30[-3]);
          local_5c = (uint)(bVar24 ^ pbVar30[-2]);
          local_58 = (uint)(bVar6 ^ pbVar30[-1]);
          uVar28 = uVar28 + 1;
          pbVar31 = pbVar30 + 0x10;
          uVar26 = CONCAT11(bVar7 ^ *pbVar30,bVar14 ^ pbVar30[-8]);
        } while (uVar28 <= uVar3);
        local_84[0] = bVar17 ^ pbVar30[-0xf];
        local_84[1] = bVar25 ^ pbVar30[-0xe];
        local_84[2] = bVar22 ^ pbVar30[-0xd];
        local_84[3] = bVar11 ^ pbVar30[-0xc];
        local_80 = bVar4 ^ pbVar30[-0xb];
        local_7f = bVar23 ^ pbVar30[-10];
        local_7e = local_6d ^ pbVar30[-9];
        local_7d = bVar14 ^ pbVar30[-8];
        local_7c = local_86;
        local_7b = bVar18 ^ pbVar30[-6];
        local_7a = bVar20 ^ pbVar30[-5];
        local_79 = bVar15 ^ pbVar30[-4];
        local_78 = bVar5 ^ pbVar30[-3];
        local_77 = bVar24 ^ pbVar30[-2];
        local_76 = bVar6 ^ pbVar30[-1];
        local_75 = bVar7 ^ *pbVar30;
        arg_edx = local_20;
      }
      if (param_5 != local_3c) {
        iVar29 = 0;
        do {
          *(byte *)(param_4 + local_3c + iVar29) =
               local_84[iVar29] ^ *(byte *)(param_3 + local_3c + iVar29);
          iVar29 = iVar29 + 1;
        } while (local_30 + (local_30 == 0) != iVar29);
      }
      pcVar1 = arg_edx + 0xf;
      *pcVar1 = *pcVar1 + '\x01';
      if (*pcVar1 == '\0') {
        pcVar1 = arg_edx + 0xe;
        *pcVar1 = *pcVar1 + '\x01';
        if (*pcVar1 == '\0') {
          pcVar1 = arg_edx + 0xd;
          *pcVar1 = *pcVar1 + '\x01';
          if (*pcVar1 == '\0') {
            pcVar1 = arg_edx + 0xc;
            *pcVar1 = *pcVar1 + '\x01';
            if (*pcVar1 == '\0') {
              pcVar1 = arg_edx + 0xb;
              *pcVar1 = *pcVar1 + '\x01';
              if (*pcVar1 == '\0') {
                pcVar1 = arg_edx + 10;
                *pcVar1 = *pcVar1 + '\x01';
                if (*pcVar1 == '\0') {
                  pcVar1 = arg_edx + 9;
                  *pcVar1 = *pcVar1 + '\x01';
                  if (*pcVar1 == '\0') {
                    pcVar1 = arg_edx + 8;
                    *pcVar1 = *pcVar1 + '\x01';
                    if (*pcVar1 == '\0') {
                      pcVar1 = arg_edx + 7;
                      *pcVar1 = *pcVar1 + '\x01';
                      if (*pcVar1 == '\0') {
                        pcVar1 = arg_edx + 6;
                        *pcVar1 = *pcVar1 + '\x01';
                        if (*pcVar1 == '\0') {
                          pcVar1 = arg_edx + 5;
                          *pcVar1 = *pcVar1 + '\x01';
                          if (*pcVar1 == '\0') {
                            pcVar1 = arg_edx + 4;
                            *pcVar1 = *pcVar1 + '\x01';
                            if (*pcVar1 == '\0') {
                              pcVar1 = arg_edx + 3;
                              *pcVar1 = *pcVar1 + '\x01';
                              if (*pcVar1 == '\0') {
                                pcVar1 = arg_edx + 2;
                                *pcVar1 = *pcVar1 + '\x01';
                                if (*pcVar1 == '\0') {
                                  pcVar1 = arg_edx + 1;
                                  *pcVar1 = *pcVar1 + '\x01';
                                  if (*pcVar1 == '\0') {
                                    *arg_edx = *arg_edx + '\x01';
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
      local_3c = local_3c + local_30;
      local_7c = local_86;
    } while (local_3c < param_5);
  }
  return;
}

#undef local_80
#undef local_7f
#undef local_7e
#undef local_7d
#undef local_7c
#undef local_7b
#undef local_7a
#undef local_79
#undef local_78
#undef local_77
#undef local_76
#undef local_75
#undef local_74
#undef local_6d
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
#undef local_86
#undef local_84

#define local_3c (*(uint * *)(pf_stack_frame + 20))
#define local_34 (*(uint *)(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10014070
 */

void recovered_10014070(uint *arg_ecx,uint *arg_edx,uint param_3,uint param_4)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;

  uVar14 = arg_ecx[5];
  uVar12 = arg_ecx[6];
  uVar17 = arg_ecx[7];
  uVar16 = arg_ecx[8];
  uVar10 = arg_ecx[9];
  if (0xf < param_3) {
    uVar5 = arg_ecx[4] * 5;
    uVar1 = arg_ecx[3];
    uVar6 = uVar1 * 5;
    uVar2 = arg_ecx[2];
    uVar3 = *arg_ecx;
    uVar4 = arg_ecx[1];
    local_34 = param_3;
    local_3c = arg_edx;
    do {
      uVar14 = (*local_3c & 0x3ffffff) + uVar14;
      uVar12 = (*(uint *)((int)local_3c + 3) >> 2 & 0x3ffffff) + uVar12;
      uVar8 = (*(uint *)((int)local_3c + 6) >> 4 & 0x3ffffff) + uVar17;
      uVar9 = (*(uint *)((int)local_3c + 9) >> 6) + uVar16;
      uVar10 = (local_3c[3] >> 8 | param_4) + uVar10;
      lVar7 = (ulonglong)uVar10 * (ulonglong)(uVar4 * 5) +
              (ulonglong)uVar8 * (ulonglong)uVar6 +
              (ulonglong)uVar12 * (ulonglong)uVar5 + (ulonglong)uVar14 * (ulonglong)uVar3 +
              (ulonglong)uVar9 * (ulonglong)(uVar2 * 5);
      uVar11 = (uint)lVar7;
      lVar7 = (ulonglong)uVar10 * (ulonglong)(uVar2 * 5) +
              (ulonglong)uVar14 * (ulonglong)uVar4 + (ulonglong)uVar12 * (ulonglong)uVar3 +
              (ulonglong)uVar8 * (ulonglong)uVar5 + (ulonglong)uVar9 * (ulonglong)uVar6 +
              (ulonglong)((int)((ulonglong)lVar7 >> 0x20) << 6 | uVar11 >> 0x1a);
      uVar13 = (uint)lVar7;
      lVar7 = (ulonglong)uVar10 * (ulonglong)uVar6 +
              (ulonglong)uVar14 * (ulonglong)uVar2 + (ulonglong)uVar12 * (ulonglong)uVar4 +
              (ulonglong)uVar8 * (ulonglong)uVar3 + (ulonglong)uVar9 * (ulonglong)uVar5 +
              (ulonglong)((int)((ulonglong)lVar7 >> 0x20) * 0x40 | uVar13 >> 0x1a);
      uVar16 = (uint)lVar7;
      uVar17 = uVar16 & 0x3ffffff;
      lVar7 = (ulonglong)uVar8 * (ulonglong)uVar4 +
              (ulonglong)uVar12 * (ulonglong)uVar2 + (ulonglong)uVar14 * (ulonglong)uVar1 +
              (ulonglong)uVar9 * (ulonglong)uVar3 + (ulonglong)uVar10 * (ulonglong)uVar5 +
              (ulonglong)((int)((ulonglong)lVar7 >> 0x20) * 0x40 | uVar16 >> 0x1a);
      uVar15 = (uint)lVar7;
      uVar16 = uVar15 & 0x3ffffff;
      lVar7 = (ulonglong)uVar10 * (ulonglong)uVar3 +
              (ulonglong)uVar8 * (ulonglong)uVar2 +
              (ulonglong)uVar14 * (ulonglong)arg_ecx[4] + (ulonglong)uVar12 * (ulonglong)uVar1 +
              (ulonglong)uVar9 * (ulonglong)uVar4 +
              (ulonglong)((int)((ulonglong)lVar7 >> 0x20) * 0x40 | uVar15 >> 0x1a);
      uVar10 = (uint)lVar7;
      uVar14 = ((int)((ulonglong)lVar7 >> 0x20) * 0x40 | uVar10 >> 0x1a) * 5 + (uVar11 & 0x3ffffff);
      uVar12 = (uVar14 >> 0x1a) + (uVar13 & 0x3ffffff);
      uVar10 = uVar10 & 0x3ffffff;
      uVar14 = uVar14 & 0x3ffffff;
      local_3c = local_3c + 4;
      local_34 = local_34 - 0x10;
    } while (0xf < local_34);
  }
  arg_ecx[5] = uVar14;
  arg_ecx[6] = uVar12;
  arg_ecx[7] = uVar17;
  arg_ecx[8] = uVar16;
  arg_ecx[9] = uVar10;
  return;
}

#undef local_3c
#undef local_34

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280968
#define DAT_00280968 (*(uint8_t *)(0x280968U))
#undef DAT_1001e288
#define DAT_1001e288 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x764U)))
#undef DAT_1001e28d
#define DAT_1001e28d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x769U)))
#undef DAT_10023f04
#define DAT_10023f04 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x63e0U)))
#undef DAT_10023f24
#define DAT_10023f24 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6400U)))
#undef DAT_10023f44
#define DAT_10023f44 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x6420U)))
#undef DAT_10023f78
#define DAT_10023f78 (*(uint *)(((uintptr_t)pf_module_state + 0x6454U)))
#undef DAT_100240bc
#define DAT_100240bc (*(uint *)(((uintptr_t)pf_module_state + 0x6598U)))
#undef DAT_100240c0
#define DAT_100240c0 (*(uint *)(((uintptr_t)pf_module_state + 0x659cU)))
#undef DAT_100240c8
#define DAT_100240c8 (*(uint *)(((uintptr_t)pf_module_state + 0x65a4U)))
#undef DAT_100240cc
#define DAT_100240cc (*(int *)(((uintptr_t)pf_module_state + 0x65a8U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280968
#define _DAT_00280968 (*(code * *)(0x280968U))
#undef str_1001de3e
#define str_1001de3e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x31aU)))
#undef str_1001eacb
#define str_1001eacb (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfa7U)))
#undef str_1001eadd
#define str_1001eadd (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfb9U)))
#undef str_1001eaf6
#define str_1001eaf6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfd2U)))
#undef str_1001eb13
#define str_1001eb13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfefU)))
#undef str_1001eb1f
#define str_1001eb1f (*(char (*)[1])(((uintptr_t)pf_module_state + 0xffbU)))
#undef str_1001eb37
#define str_1001eb37 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1013U)))
#undef str_1001eb5b
#define str_1001eb5b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1037U)))
#undef str_1001eb68
#define str_1001eb68 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1044U)))
#undef str_1001eb78
#define str_1001eb78 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1054U)))
#undef str_1001eb9b
#define str_1001eb9b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1077U)))
#undef str_1001ebbe
#define str_1001ebbe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x109aU)))
#undef str_1001ebd0
#define str_1001ebd0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10acU)))
#undef str_1001ebe2
#define str_1001ebe2 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10beU)))
#undef str_1001ebf4
#define str_1001ebf4 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10d0U)))
#undef str_1001ec11
#define str_1001ec11 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x10edU)))
#undef str_1001ec41
#define str_1001ec41 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x111dU)))
#undef str_1001ec6e
#define str_1001ec6e (*(char (*)[1])(((uintptr_t)pf_module_state + 0x114aU)))
#undef str_1001ec81
#define str_1001ec81 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x115dU)))
#undef str_1001ec91
#define str_1001ec91 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x116dU)))
#undef str_1001ecfd
#define str_1001ecfd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11d9U)))
#undef str_1001ed10
#define str_1001ed10 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11ecU)))
#undef str_1001ed33
#define str_1001ed33 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x120fU)))
#undef str_1001ed4c
#define str_1001ed4c (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1228U)))
#undef str_1001ed65
#define str_1001ed65 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1241U)))
#undef str_1001ed88
#define str_1001ed88 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1264U)))
#undef str_1001eda1
#define str_1001eda1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x127dU)))
#define abStack_d8 (*(byte (*)[216])(pf_stack_frame + 1944))
#define local_860 (*(int *)(pf_stack_frame + 16))
#define local_858 (*(uint *)(pf_stack_frame + 24))
#define local_848 (*(uint *)(pf_stack_frame + 40))
#define local_844 (*(byte (*)[2116])(pf_stack_frame + 44))
#define local_824 (*(uint * *)(pf_stack_frame + 76))
#define local_820 (*(uint * *)(pf_stack_frame + 80))
#define local_81b (*(byte (*)[2075])(pf_stack_frame + 85))
#define local_7fa (*(char *)(pf_stack_frame + 118))
#define local_7f9 (*(char *)(pf_stack_frame + 119))
#define local_7f8 (*(char *)(pf_stack_frame + 120))
#define local_7f7 (*(char *)(pf_stack_frame + 121))
#define local_7f6 (*(char *)(pf_stack_frame + 122))
#define local_7f5 (*(char *)(pf_stack_frame + 123))
#define local_7f4 (*(char *)(pf_stack_frame + 124))
#define local_7f3 (*(char *)(pf_stack_frame + 125))
#define local_7f2 (*(char *)(pf_stack_frame + 126))
#define local_7f1 (*(char *)(pf_stack_frame + 127))
#define local_7f0 (*(char *)(pf_stack_frame + 128))
#define local_7ef (*(char *)(pf_stack_frame + 129))
#define local_7ee (*(char *)(pf_stack_frame + 130))
#define local_7ed (*(char *)(pf_stack_frame + 131))
#define local_7ec (*(char *)(pf_stack_frame + 132))
#define local_7eb (*(char *)(pf_stack_frame + 133))
#define local_7ea (*(char *)(pf_stack_frame + 134))
#define local_7e9 (*(char *)(pf_stack_frame + 135))
#define local_7e8 (*(uint *)(pf_stack_frame + 136))
#define local_7e4 (*(uint (*)[505])(pf_stack_frame + 140))
#define local_7c4 (*(char * *)(pf_stack_frame + 172))
#define local_7c0 (*(int *)(pf_stack_frame + 176))
#define local_7bc (*(char (*)[1980])(pf_stack_frame + 180))
#define local_77c (*(int *)(pf_stack_frame + 244))
#define local_778 (*(uint * *)(pf_stack_frame + 248))
#define local_774 (*(uint * *)(pf_stack_frame + 252))
#define local_770 (*(uint * *)(pf_stack_frame + 256))
#define local_76c (*(byte * *)(pf_stack_frame + 260))
#define local_768 (*(char (*)[1896])(pf_stack_frame + 264))
#define local_764 (*(undefined1 (*)[1892])(pf_stack_frame + 268))
#define local_762 (*(undefined1 *)(pf_stack_frame + 270))
#define local_761 (*(undefined1 *)(pf_stack_frame + 271))
#define local_760 (*(undefined1 *)(pf_stack_frame + 272))
#define local_75f (*(undefined1 *)(pf_stack_frame + 273))
#define local_75e (*(undefined1 *)(pf_stack_frame + 274))
#define local_75d (*(undefined1 *)(pf_stack_frame + 275))
#define local_75c (*(undefined1 *)(pf_stack_frame + 276))
#define local_75b (*(undefined1 *)(pf_stack_frame + 277))
#define local_75a (*(undefined1 *)(pf_stack_frame + 278))
#define local_759 (*(undefined1 *)(pf_stack_frame + 279))
#define local_758 (*(undefined1 *)(pf_stack_frame + 280))
#define local_757 (*(undefined1 *)(pf_stack_frame + 281))
#define local_756 (*(undefined1 *)(pf_stack_frame + 282))
#define local_755 (*(undefined1 *)(pf_stack_frame + 283))
#define local_754 (*(undefined1 *)(pf_stack_frame + 284))
#define local_753 (*(undefined1 *)(pf_stack_frame + 285))
#define local_752 (*(undefined1 *)(pf_stack_frame + 286))
#define local_751 (*(undefined1 *)(pf_stack_frame + 287))
#define local_750 (*(undefined1 *)(pf_stack_frame + 288))
#define local_74f (*(undefined1 *)(pf_stack_frame + 289))
#define local_74e (*(undefined1 *)(pf_stack_frame + 290))
#define local_74d (*(undefined1 *)(pf_stack_frame + 291))
#define local_74c (*(undefined1 *)(pf_stack_frame + 292))
#define local_74b (*(undefined1 *)(pf_stack_frame + 293))
#define local_74a (*(undefined1 *)(pf_stack_frame + 294))
#define local_749 (*(undefined1 *)(pf_stack_frame + 295))
#define local_748 (*(undefined1 *)(pf_stack_frame + 296))
#define local_747 (*(undefined1 *)(pf_stack_frame + 297))
#define local_746 (*(undefined1 *)(pf_stack_frame + 298))
#define local_745 (*(undefined1 *)(pf_stack_frame + 299))
#define local_744 (*(undefined1 *)(pf_stack_frame + 300))
#define local_743 (*(undefined1 *)(pf_stack_frame + 301))
#define local_742 (*(undefined1 *)(pf_stack_frame + 302))
#define local_741 (*(undefined1 *)(pf_stack_frame + 303))
#define local_740 (*(undefined4 *)(pf_stack_frame + 304))
#define local_73c (*(undefined1 *)(pf_stack_frame + 308))
#define local_73b (*(undefined1 *)(pf_stack_frame + 309))
#define local_73a (*(undefined1 *)(pf_stack_frame + 310))
#define local_739 (*(undefined1 *)(pf_stack_frame + 311))
#define local_738 (*(undefined1 *)(pf_stack_frame + 312))
#define local_737 (*(undefined1 *)(pf_stack_frame + 313))
#define local_736 (*(undefined1 *)(pf_stack_frame + 314))
#define local_735 (*(undefined1 *)(pf_stack_frame + 315))
#define local_734 (*(undefined1 *)(pf_stack_frame + 316))
#define local_733 (*(undefined1 *)(pf_stack_frame + 317))
#define local_732 (*(undefined1 *)(pf_stack_frame + 318))
#define local_731 (*(undefined1 *)(pf_stack_frame + 319))
#define local_730 (*(undefined1 *)(pf_stack_frame + 320))
#define local_72f (*(undefined1 *)(pf_stack_frame + 321))
#define local_72e (*(undefined1 *)(pf_stack_frame + 322))
#define local_72d (*(undefined1 *)(pf_stack_frame + 323))
#define local_72c (*(undefined1 *)(pf_stack_frame + 324))
#define local_72b (*(undefined1 *)(pf_stack_frame + 325))
#define local_72a (*(undefined1 *)(pf_stack_frame + 326))
#define local_729 (*(undefined1 *)(pf_stack_frame + 327))
#define local_728 (*(undefined1 *)(pf_stack_frame + 328))
#define local_727 (*(undefined1 *)(pf_stack_frame + 329))
#define local_726 (*(undefined1 *)(pf_stack_frame + 330))
#define local_725 (*(undefined1 *)(pf_stack_frame + 331))
#define local_724 (*(undefined1 *)(pf_stack_frame + 332))
#define local_723 (*(undefined1 *)(pf_stack_frame + 333))
#define local_722 (*(undefined1 *)(pf_stack_frame + 334))
#define local_721 (*(byte *)(pf_stack_frame + 335))
#define local_720 (*(byte (*)[1824])(pf_stack_frame + 336))
#define local_700 (*(undefined4 *)(pf_stack_frame + 368))
#define local_6fc (*(undefined1 *)(pf_stack_frame + 372))
#define local_6fb (*(undefined1 *)(pf_stack_frame + 373))
#define local_6fa (*(undefined1 *)(pf_stack_frame + 374))
#define local_6f9 (*(undefined1 *)(pf_stack_frame + 375))
#define local_6f8 (*(undefined1 *)(pf_stack_frame + 376))
#define local_6f7 (*(undefined1 *)(pf_stack_frame + 377))
#define local_6f6 (*(undefined1 *)(pf_stack_frame + 378))
#define local_6f5 (*(undefined1 *)(pf_stack_frame + 379))
#define local_6f4 (*(undefined1 *)(pf_stack_frame + 380))
#define local_6f3 (*(undefined1 *)(pf_stack_frame + 381))
#define local_6f2 (*(undefined1 *)(pf_stack_frame + 382))
#define local_6f1 (*(undefined1 *)(pf_stack_frame + 383))
#define local_6f0 (*(undefined1 *)(pf_stack_frame + 384))
#define local_6ef (*(undefined1 *)(pf_stack_frame + 385))
#define local_6ee (*(undefined1 *)(pf_stack_frame + 386))
#define local_6ed (*(undefined1 *)(pf_stack_frame + 387))
#define local_6ec (*(undefined1 *)(pf_stack_frame + 388))
#define local_6eb (*(undefined1 *)(pf_stack_frame + 389))
#define local_6ea (*(undefined1 *)(pf_stack_frame + 390))
#define local_6e9 (*(undefined1 *)(pf_stack_frame + 391))
#define local_6e8 (*(undefined1 *)(pf_stack_frame + 392))
#define local_6e7 (*(undefined1 *)(pf_stack_frame + 393))
#define local_6e6 (*(undefined1 *)(pf_stack_frame + 394))
#define local_6e5 (*(undefined1 *)(pf_stack_frame + 395))
#define local_6e4 (*(undefined1 *)(pf_stack_frame + 396))
#define local_6e3 (*(undefined1 *)(pf_stack_frame + 397))
#define local_6e2 (*(undefined1 *)(pf_stack_frame + 398))
#define local_6e1 (*(undefined1 *)(pf_stack_frame + 399))
#define local_6e0 (*(byte (*)[1760])(pf_stack_frame + 400))
#define local_6c0 (*(uint *)(pf_stack_frame + 432))
#define local_6bc (*(undefined4 * *)(pf_stack_frame + 436))
#define local_6b8 (*(byte * *)(pf_stack_frame + 440))
#define local_6b4 (*(undefined4 *)(pf_stack_frame + 444))
#define local_6b0 (*(undefined1 *)(pf_stack_frame + 448))
#define local_6af (*(undefined1 *)(pf_stack_frame + 449))
#define local_6ae (*(undefined1 *)(pf_stack_frame + 450))
#define local_6ad (*(undefined1 *)(pf_stack_frame + 451))
#define local_6ac (*(void * *)(pf_stack_frame + 452))
#define local_6a8 (*(void * *)(pf_stack_frame + 456))
#define local_6a4 (*(byte * *)(pf_stack_frame + 460))
#define local_6a0 (*(char * *)(pf_stack_frame + 464))
#define local_69c (*(uint * *)(pf_stack_frame + 468))
#define local_698 (*(uint * (*)[422])(pf_stack_frame + 472))
#define local_690 (*(uint (*)[420])(pf_stack_frame + 480))
#define local_684 (*(int *)(pf_stack_frame + 492))
#define local_680 (*(int *)(pf_stack_frame + 496))
#define local_67c (*(int *)(pf_stack_frame + 500))
#define local_678 (*(undefined4 *)(pf_stack_frame + 504))
#define local_674 (*(undefined4 *)(pf_stack_frame + 508))
#define local_670 (*(uint (*)[412])(pf_stack_frame + 512))
#define local_5d0 (*(int *)(pf_stack_frame + 672))
#define local_498 (*(undefined4 * (*)[294])(pf_stack_frame + 984))
#define local_490 (*(int *)(pf_stack_frame + 992))
#define local_48c (*(uint *)(pf_stack_frame + 996))
#define local_488 (*(undefined4 *)(pf_stack_frame + 1000))
#define local_484 (*(undefined4 *)(pf_stack_frame + 1004))
#define local_480 (*(undefined4 *)(pf_stack_frame + 1008))
#define local_47c (*(undefined4 *)(pf_stack_frame + 1012))
#define local_478 (*(undefined4 *)(pf_stack_frame + 1016))
#define local_474 (*(undefined4 *)(pf_stack_frame + 1020))
#define local_470 (*(undefined4 *)(pf_stack_frame + 1024))
#define local_46c (*(undefined4 *)(pf_stack_frame + 1028))
#define local_468 (*(undefined4 *)(pf_stack_frame + 1032))
#define local_464 (*(undefined4 *)(pf_stack_frame + 1036))
#define local_460 (*(undefined4 *)(pf_stack_frame + 1040))
#define local_45c (*(undefined4 *)(pf_stack_frame + 1044))
#define local_458 (*(undefined4 *)(pf_stack_frame + 1048))
#define local_454 (*(undefined4 *)(pf_stack_frame + 1052))
#define local_450 (*(undefined4 *)(pf_stack_frame + 1056))
#define local_44c (*(undefined4 *)(pf_stack_frame + 1060))
#define local_448 (*(uint *)(pf_stack_frame + 1064))
#define local_444 (*(int *)(pf_stack_frame + 1068))
#define local_440 (*(undefined4 (*)[272])(pf_stack_frame + 1072))
#define local_3c0 (*(int *)(pf_stack_frame + 1200))
#define local_3b8 (*(undefined4 *)(pf_stack_frame + 1208))
#define local_3b4 (*(undefined1 *)(pf_stack_frame + 1212))
#define local_3ac (*(undefined1 *)(pf_stack_frame + 1220))
#define local_3a8 (*(uint *)(pf_stack_frame + 1224))
#define local_3a4 (*(uint *)(pf_stack_frame + 1228))
#define local_3a0 (*(uint *)(pf_stack_frame + 1232))
#define local_39c (*(uint *)(pf_stack_frame + 1236))
#define local_398 (*(undefined1 *)(pf_stack_frame + 1240))
#define local_397 (*(undefined1 *)(pf_stack_frame + 1241))
#define local_396 (*(undefined1 *)(pf_stack_frame + 1242))
#define local_395 (*(undefined1 *)(pf_stack_frame + 1243))
#define local_394 (*(undefined1 *)(pf_stack_frame + 1244))
#define local_393 (*(undefined1 *)(pf_stack_frame + 1245))
#define local_392 (*(undefined1 *)(pf_stack_frame + 1246))
#define local_391 (*(undefined1 *)(pf_stack_frame + 1247))
#define local_390 (*(undefined1 *)(pf_stack_frame + 1248))
#define local_38f (*(undefined1 *)(pf_stack_frame + 1249))
#define local_38e (*(undefined1 *)(pf_stack_frame + 1250))
#define local_38d (*(undefined1 *)(pf_stack_frame + 1251))
#define local_38c (*(undefined1 *)(pf_stack_frame + 1252))
#define local_38b (*(undefined1 *)(pf_stack_frame + 1253))
#define local_38a (*(undefined1 *)(pf_stack_frame + 1254))
#define local_389 (*(undefined1 *)(pf_stack_frame + 1255))
#define local_388 (*(undefined1 *)(pf_stack_frame + 1256))
#define local_387 (*(undefined1 *)(pf_stack_frame + 1257))
#define local_386 (*(undefined1 *)(pf_stack_frame + 1258))
#define local_385 (*(undefined1 *)(pf_stack_frame + 1259))
#define local_384 (*(undefined1 *)(pf_stack_frame + 1260))
#define local_383 (*(undefined1 *)(pf_stack_frame + 1261))
#define local_382 (*(undefined1 *)(pf_stack_frame + 1262))
#define local_381 (*(undefined1 *)(pf_stack_frame + 1263))
#define local_380 (*(undefined1 *)(pf_stack_frame + 1264))
#define local_37f (*(undefined1 *)(pf_stack_frame + 1265))
#define local_37e (*(undefined1 *)(pf_stack_frame + 1266))
#define local_37d (*(undefined1 *)(pf_stack_frame + 1267))
#define local_37c (*(undefined1 *)(pf_stack_frame + 1268))
#define local_37b (*(undefined1 *)(pf_stack_frame + 1269))
#define local_37a (*(undefined1 *)(pf_stack_frame + 1270))
#define local_379 (*(undefined1 *)(pf_stack_frame + 1271))
#define local_338 (*(longlong (*)[103])(pf_stack_frame + 1336))
#define local_2b8 (*(uint (*)[174])(pf_stack_frame + 1464))
#define local_1b8 (*(uint (*)[110])(pf_stack_frame + 1720))
#define local_198 (*(byte (*)[408])(pf_stack_frame + 1752))
#define local_178 (*(byte (*)[376])(pf_stack_frame + 1784))
#define local_159 (*(byte *)(pf_stack_frame + 1815))
#define local_158 (*(uint (*)[86])(pf_stack_frame + 1816))
#define local_138 (*(byte (*)[312])(pf_stack_frame + 1848))
#define auStack_598 (*(uint (*)[358])(pf_stack_frame + 728))
#define local_118 (*(uint (*)[70])(pf_stack_frame + 1880))
#define local_98 (*(uint (*)[38])(pf_stack_frame + 2008))
#define uStack_3b3 (*(undefined1 *)(pf_stack_frame + 1213))
#define uStack_3b2 (*(undefined1 *)(pf_stack_frame + 1214))
#define uStack_3b1 (*(undefined1 *)(pf_stack_frame + 1215))
#define uStack_3b0 (*(undefined1 *)(pf_stack_frame + 1216))
#define uStack_3af (*(undefined1 *)(pf_stack_frame + 1217))
#define uStack_3ae (*(undefined1 *)(pf_stack_frame + 1218))
#define uStack_3ad (*(undefined1 *)(pf_stack_frame + 1219))
#define uStack_3ab (*(undefined1 *)(pf_stack_frame + 1221))
#define uStack_3aa (*(undefined1 *)(pf_stack_frame + 1222))
#define uStack_3a9 (*(undefined1 *)(pf_stack_frame + 1223))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100143a0
 */

/* WARNING: Type propagation algorithm not settling */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100143a0(int arg_ecx)

{
  unsigned char pf_stack_frame[2192] __attribute__((aligned(16))) = {0};

  uint **ppuVar1;
  uint3 uVar2;
  bool bVar3;
  char cVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  undefined3 extraout_var_01 = 0;
  undefined3 extraout_var_02 = 0;
  undefined4 uVar8;
  uint uVar9;
  char *pcVar10;
  char cVar15;
  uint **ppuVar11;
  byte *pbVar12;
  uint extraout_ECX = 0;
  uint uVar13;
  uint uVar14;
  uint extraout_ECX_00 = 0;
  int iVar16;
  uint *puVar17;
  undefined4 *puVar18;
  byte bVar19;
  uint *puVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint *puVar24;
  byte *pbVar25;
  int iVar26;
  undefined8 uVar27;

  uVar23 = *(uint *)(arg_ecx + 0x138);
  if (uVar23 < 4) {
    return;
  }
  local_69c = (uint *)(arg_ecx + 0x14c);
  local_6a0 = (char *)(arg_ecx + 0x28c);
  local_6a4 = (byte *)(arg_ecx + 0x198);
  local_490 = arg_ecx + 0x175;
  local_6a8 = (void *)(arg_ecx + 0x29c);
  local_6ac = (void *)(arg_ecx + 0x155);
  local_6bc = (undefined4 *)(arg_ecx + 0x1c);
  local_498[1] = (undefined4 *)(arg_ecx + 0x484);
  local_76c = (byte *)(arg_ecx + 0x4bc);
  local_6b8 = (byte *)(arg_ecx + 0x658);
  local_498[0] = (undefined4 *)(arg_ecx + 0x2e8);
LAB_10014461:
  if (*(char *)(arg_ecx + 0xdb4) != '\0') {
    return;
  }
  puVar18 = *(undefined4 **)(arg_ecx + 0x134);
  if (*(int *)(arg_ecx + 0x14c) - 2U < 2) {
    if (uVar23 < 0x10) {
      return;
    }
    recovered_10001d70(local_698,(undefined4 *)local_6a0,0x10);
    recovered_10013910(local_6a4,(char *)local_698,(int)puVar18,(int)&local_3b8,0x10);
    puVar24 = (uint *)CONCAT13(PF_PART1(local_3b8, 3),
                               CONCAT12(PF_PART1(local_3b8, 2),CONCAT11(PF_PART1(local_3b8, 1),(byte)local_3b8)));
    PF_PART1(local_3b8, 0) = 0;
    PF_PART1(local_3b8, 1) = 0;
    PF_PART1(local_3b8, 2) = 0;
    PF_PART1(local_3b8, 3) = 0;
    local_3b4 = 0;
    uStack_3b3 = 0;
    uStack_3b2 = 0;
    uStack_3b1 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ad = 0;
    local_3ac = 0;
    uStack_3ab = 0;
    uStack_3aa = 0;
    uStack_3a9 = 0;
    local_698[0] = (uint *)0x0;
    local_698[1] = (uint *)0x0;
    local_690[0] = 0;
    local_690[1] = 0;
  }
  else if (*(int *)(arg_ecx + 0x14c) == 1) {
    uVar8 = *(undefined4 *)(arg_ecx + 0x144);
    local_6b4 = 0;
    local_6b0 = (undefined1)((uint)uVar8 >> 0x18);
    local_6af = (undefined1)((uint)uVar8 >> 0x10);
    local_6ae = (undefined1)((uint)uVar8 >> 8);
    local_6ad = (undefined1)uVar8;
    recovered_10012420(0,0,&local_6b4,(int)puVar18,(int)local_698,4);
    puVar24 = local_698[0];
  }
  else {
    puVar24 = (uint *)*puVar18;
  }
  uVar23 = (uint)puVar24 >> 0x18 | ((uint)puVar24 & 0xff0000) >> 8 | ((uint)puVar24 & 0xff00) << 8 |
           (int)puVar24 << 0x18;
  if (uVar23 - 0x88b9 < 0xffff774c) {
    pcVar10 = str_1001eacb;
LAB_10017e56:
    uVar23 = 2;
LAB_10017e5d:
    recovered_100097e0(arg_ecx,uVar23,(undefined4 *)pcVar10);
    return;
  }
  uVar6 = *local_69c;
  if (((uVar6 & 0xfffffffe) == 2) && ((uVar23 + 4 & 0xf) != 0)) {
    pcVar10 = str_1001eadd;
    goto LAB_10017e56;
  }
  if (uVar6 - 2 < 2) {
    local_48c = uVar23 + 4 + *(int *)(arg_ecx + 0x2e0);
  }
  else if (uVar6 == 1) {
    local_48c = uVar23 + 0x14;
  }
  else {
    local_48c = uVar23 + 4;
  }
  if (*(uint *)(arg_ecx + 0x138) < local_48c) {
    return;
  }
  if (uVar6 - 2 < 2) {
    uVar6 = uVar23 + 4;
    recovered_10013910(local_6a4,local_6a0,(int)puVar18,(int)puVar18,uVar6);
    uVar8 = *(undefined4 *)(arg_ecx + 0x144);
    PF_PART1(local_3b8, 1) = (undefined1)((uint)uVar8 >> 0x10);
    PF_PART1(local_3b8, 2) = (undefined1)((uint)uVar8 >> 8);
    PF_PART1(local_3b8, 0) = (byte)((uint)uVar8 >> 0x18);
    PF_PART1(local_3b8, 3) = (byte)uVar8;
    if (*(int *)(arg_ecx + 0x150) == 2) {
      recovered_100128d0(local_6a8,*(uint *)(arg_ecx + 0x2dc),&local_3b8,puVar18,uVar6,local_698);
    }
    else {
      recovered_100131b0(local_6a8,*(uint *)(arg_ecx + 0x2dc),&local_3b8,puVar18,uVar6,local_698);
    }
    if (*(int *)(arg_ecx + 0x2e0) != 0) {
      iVar16 = 0;
      bVar19 = 0;
      do {
        bVar19 = bVar19 | *(byte *)((int)puVar18 + iVar16 + uVar23 + 4) ^
                          *(byte *)((int)local_698 + iVar16);
        iVar16 = iVar16 + 1;
      } while (*(int *)(arg_ecx + 0x2e0) != iVar16);
      if (bVar19 != 0) {
        local_698[0] = (uint *)0x0;
        local_698[1] = (uint *)0x0;
        local_690[0] = 0;
        local_690[1] = 0;
        local_690[2] = 0;
        local_684 = 0;
        local_680 = 0;
        local_67c = 0;
        local_678 = 0;
        local_674 = 0;
        local_670[0] = 0;
        local_670[1] = 0;
        local_670[2] = 0;
        local_670[3] = 0;
        local_670[4] = 0;
        local_670[5] = 0;
        goto LAB_10018090;
      }
    }
    local_698[0] = (uint *)0x0;
    local_698[1] = (uint *)0x0;
    local_690[0] = 0;
    local_690[1] = 0;
    local_690[2] = 0;
    local_684 = 0;
    local_680 = 0;
    local_67c = 0;
    local_678 = 0;
    local_674 = 0;
    local_670[0] = 0;
    local_670[1] = 0;
    local_670[2] = 0;
    local_670[3] = 0;
    local_670[4] = 0;
    local_670[5] = 0;
  }
  else if (uVar6 == 1) {
    recovered_1000adc0(local_6ac,0,0,&local_6b4,&local_3b8);
    local_698[0] = (uint *)(CONCAT13(PF_PART1(local_3b8, 3),
                                     CONCAT12(PF_PART1(local_3b8, 2),
                                              CONCAT11(PF_PART1(local_3b8, 1),(byte)local_3b8))) &
                           0x3ffffff);
    local_698[1] = (uint *)(CONCAT13(uStack_3b2,
                                     CONCAT12(uStack_3b3,CONCAT11(local_3b4,PF_PART1(local_3b8, 3)))) >> 2
                           & 0x3ffff03);
    local_690[0] = CONCAT13(uStack_3af,CONCAT12(uStack_3b0,CONCAT11(uStack_3b1,uStack_3b2))) >> 4 &
                   0x3ffc0ff;
    local_690[1] = CONCAT13(local_3ac,CONCAT12(uStack_3ad,CONCAT11(uStack_3ae,uStack_3af))) >> 6 &
                   0x3f03fff;
    local_690[2] = CONCAT13(uStack_3a9,CONCAT12(uStack_3aa,CONCAT11(uStack_3ab,local_3ac))) >> 8 &
                   0xfffff;
    recovered_10002000((byte *)&local_684,0,0x14);
    local_670[0] = local_3a8;
    local_670[1] = local_3a4;
    local_670[2] = local_3a0;
    local_670[3] = local_39c;
    local_670[8] = 0;
    recovered_10012620((int)local_698,puVar18,uVar23 + 4);
    recovered_100126e0((int)local_698,(undefined1 *)&local_488);
    PF_PART1(local_3b8, 0) = 0;
    PF_PART1(local_3b8, 1) = 0;
    PF_PART1(local_3b8, 2) = 0;
    PF_PART1(local_3b8, 3) = 0;
    local_3b4 = 0;
    uStack_3b3 = 0;
    uStack_3b2 = 0;
    uStack_3b1 = 0;
    uStack_3b0 = 0;
    uStack_3af = 0;
    uStack_3ae = 0;
    uStack_3ad = 0;
    local_3ac = 0;
    uStack_3ab = 0;
    uStack_3aa = 0;
    uStack_3a9 = 0;
    local_3a8 = 0;
    local_3a4 = 0;
    local_3a0 = 0;
    local_39c = 0;
    local_398 = 0;
    local_397 = 0;
    local_396 = 0;
    local_395 = 0;
    local_394 = 0;
    local_393 = 0;
    local_392 = 0;
    local_391 = 0;
    local_390 = 0;
    local_38f = 0;
    local_38e = 0;
    local_38d = 0;
    local_38c = 0;
    local_38b = 0;
    local_38a = 0;
    local_389 = 0;
    local_388 = 0;
    local_387 = 0;
    local_386 = 0;
    local_385 = 0;
    local_384 = 0;
    local_383 = 0;
    local_382 = 0;
    local_381 = 0;
    local_380 = 0;
    local_37f = 0;
    local_37e = 0;
    local_37d = 0;
    local_37c = 0;
    local_37b = 0;
    local_37a = 0;
    local_379 = 0;
    if (((((*(char *)((int)puVar18 + uVar23 + 5) != PF_PART1(local_488, 1)) ||
          (*(char *)((int)puVar18 + uVar23 + 4) != (char)local_488)) ||
         (*(char *)((int)puVar18 + uVar23 + 6) != PF_PART1(local_488, 2))) ||
        (((*(char *)((int)puVar18 + uVar23 + 7) != PF_PART1(local_488, 3) ||
          (*(char *)((int)puVar18 + uVar23 + 8) != (char)local_484)) ||
         ((*(char *)((int)puVar18 + uVar23 + 9) != PF_PART1(local_484, 1) ||
          ((*(char *)((int)puVar18 + uVar23 + 10) != PF_PART1(local_484, 2) ||
           (*(char *)((int)puVar18 + uVar23 + 0xb) != PF_PART1(local_484, 3))))))))) ||
       (((*(char *)((int)puVar18 + uVar23 + 0xc) != (char)local_480 ||
         (((((*(char *)((int)puVar18 + uVar23 + 0xd) != PF_PART1(local_480, 1) ||
             (*(char *)((int)puVar18 + uVar23 + 0xe) != PF_PART1(local_480, 2))) ||
            (*(char *)((int)puVar18 + uVar23 + 0xf) != PF_PART1(local_480, 3))) ||
           ((*(char *)((int)puVar18 + uVar23 + 0x10) != (char)local_47c ||
            (*(char *)((int)puVar18 + uVar23 + 0x11) != PF_PART1(local_47c, 1))))) ||
          (*(char *)((int)puVar18 + uVar23 + 0x12) != PF_PART1(local_47c, 2))))) ||
        (*(char *)((int)puVar18 + uVar23 + 0x13) != PF_PART1(local_47c, 3))))) {
LAB_10018090:
      pcVar10 = str_1001eaf6;
      uVar23 = 5;
      goto LAB_10017e5d;
    }
    recovered_10012420(1,0,&local_6b4,(int)(puVar18 + 1),(int)(puVar18 + 1),uVar23);
  }
  pbVar12 = local_76c;
  bVar19 = *(byte *)(puVar18 + 1);
  uVar6 = *(uint *)(arg_ecx + 0x144);
  *(uint *)(arg_ecx + 0x144) = uVar6 + 1;
  if (uVar23 <= bVar19) {
    pcVar10 = str_1001eb13;
    goto LAB_10017e56;
  }
  puVar24 = (uint *)(uVar23 + ~(uint)bVar19);
  if (puVar24 == (uint *)0x0) goto switchD_10014e7d_caseD_2;
  bVar19 = *(byte *)((int)puVar18 + 5);
  if ((bVar19 == 0x1e & *(byte *)(arg_ecx + 0x4a8)) == 1) {
    *(undefined1 *)(arg_ecx + 0x4a8) = 0;
    goto switchD_10014e7d_caseD_2;
  }
  if (0x61 < bVar19 - 1) {
switchD_10014e7d_caseD_6:
    puVar24 = *(uint **)(arg_ecx + 0x140);
    local_698[0] = (uint *)CONCAT31(PF_PART3(local_698[0], 1),3);
    recovered_10001d70(puVar24,local_698,1);
    local_698[0] = (uint *)(uVar6 >> 0x18 | (uVar6 & 0xff0000) >> 8 | (uVar6 & 0xff00) << 8 |
                           uVar6 << 0x18);
    recovered_10001d70((undefined4 *)((int)puVar24 + 1),local_698,4);
    uVar23 = 5;
LAB_100157e2:
    recovered_10011d50(arg_ecx,puVar24,uVar23);
    goto switchD_10014e7d_caseD_2;
  }
  puVar17 = (uint *)((int)puVar18 + 5);
  switch((uintptr_t)(bVar19)) {
  case 1:
    local_698[0] = (uint *)((uint)PF_PART3(local_698[0], 1) << 8);
    recovered_10001d70(local_698,puVar17,1);
    local_698[0] = (uint *)0x0;
    ppuVar11 = local_698;
    if (puVar24 < (uint *)0x5) {
LAB_10014eda:
      local_698[0] = (uint *)0x0;
    }
    else {
      recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 6),4);
      local_698[0] = (uint *)0x0;
      if ((int)puVar24 - 5U < 4) goto LAB_10014eda;
      recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 10),4);
      uVar23 = (uint)local_698[0] >> 0x18;
      uVar6 = ((uint)local_698[0] >> 0x10 & 0xff) << 8 |
              ((uint)local_698[0] >> 8 & 0xff) << 0x10 | (int)local_698[0] << 0x18;
      if (uVar6 + uVar23 <= (int)puVar24 - 9U) {
        if (uVar6 != 0) {
          uVar23 = 0xff;
        }
        recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 0xe),uVar23);
        ppuVar11 = (uint **)((int)local_698 + uVar23);
      }
    }
    *(undefined1 *)ppuVar11 = 0;
    recovered_100183f0((void *)arg_ecx,str_1001eb1f,local_698);
    *(undefined1 *)(arg_ecx + 0xdb4) = 1;
    recovered_10002000((byte *)&local_3b8,0,0x18);
    PF_PART1(local_3b8, 0) = 0x18;
    PF_PART1(local_3b8, 1) = 0;
    PF_PART1(local_3b8, 2) = 0;
    PF_PART1(local_3b8, 3) = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       (((0x16b < _DAT_00280808 && (_DAT_00280968 != (code *)0x0)) &&
        (iVar16 = (*_DAT_00280968)(&local_3b8), iVar16 != 0)))) {
      uVar23 = local_3a8;
    }
    else {
      uVar23 = 0;
    }
    bVar3 = CARRY4(uVar23 - DAT_100240c0,DAT_100240c8);
    DAT_100240c8 = (uVar23 - DAT_100240c0) + DAT_100240c8;
    DAT_100240cc = DAT_100240cc + (uint)bVar3;
    DAT_100240c0 = uVar23;
    uVar27 = recovered_100018c0((uint)((ulonglong)DAT_100240c8 * 1000),
                                DAT_100240cc * 1000 + (int)((ulonglong)DAT_100240c8 * 1000 >> 0x20),
                                DAT_100240bc,0);
    *(int *)(arg_ecx + 0xdb8) = (int)uVar27;
    if (*(int **)(arg_ecx + 8) != (int *)0x0) {
      recovered_10018230(*(int **)(arg_ecx + 8));
    }
    break;
  case 2:
  case 3:
  case 4:
  case 7:
  case 0x5f:
    break;
  case 5:
    local_698[0] = (uint *)((uint)PF_PART3(local_698[0], 1) << 8);
    recovered_10001d70(local_698,puVar17,1);
    local_698[0] = (uint *)0x0;
    if (puVar24 < (uint *)0x5) {
      uVar23 = 0;
      puVar17 = (uint *)0x0;
    }
    else {
      recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 6),4);
      uVar23 = (uint)local_698[0] >> 0x18 | ((uint)local_698[0] & 0xff0000) >> 8 |
               ((uint)local_698[0] & 0xff00) << 8 | (int)local_698[0] << 0x18;
      puVar17 = (uint *)((int)puVar18 + 10);
      if ((int)puVar24 - 5U < uVar23) {
        uVar23 = 0;
        puVar17 = (uint *)0x0;
      }
    }
    if ((1 < *(uint *)(arg_ecx + 0x10)) && (*(char *)(arg_ecx + 0x4a5) != '\x01')) {
      bVar3 = recovered_10018560(puVar17,uVar23,(uint *)str_1001eb5b);
      if (!bVar3) {
        pcVar10 = str_1001eb68;
        uVar23 = 7;
        goto LAB_10015b2c;
      }
      local_698[0] = *(uint **)(arg_ecx + 0x140);
      local_698[1] = (uint *)0x2000;
      local_690[1] = local_690[1] & 0xffffff00;
      PF_PART1(local_3b8, 0) = 6;
      recovered_10001d70(local_698[0],&local_3b8,1);
      local_690[0] = 1;
      recovered_1000b480((int *)local_698,(undefined4 *)str_1001eb5b);
      puVar24 = local_698[0];
      uVar23 = local_690[0];
      goto LAB_100157e2;
    }
    pcVar10 = str_1001eb37;
LAB_10015b25:
    uVar23 = 2;
    goto LAB_10015b2c;
  default:
    goto switchD_10014e7d_caseD_6;
  case 0x14:
    if (puVar24 < (uint *)0x2001) {
      local_698[0] = (uint *)((uint)PF_PART3(local_698[0], 1) << 8);
      recovered_10001d70(local_698,puVar17,1);
      bVar3 = puVar24 < (uint *)0x11;
      puVar20 = (uint *)((uint)!bVar3 * 0x10 + 1);
      iVar16 = -0x28;
      do {
        local_488 = 0;
        if ((bVar3) || ((uint)((int)puVar24 - (int)puVar20) < 4)) {
          uVar23 = 0;
          bVar3 = true;
          pbVar12 = (byte *)0x0;
LAB_10015a49:
          *(uint *)((int)local_338 + iVar16 + -0x58) = uVar23;
        }
        else {
          recovered_10001d70(&local_488,(undefined4 *)((int)puVar17 + (int)puVar20),4);
          puVar20 = puVar20 + 1;
          uVar23 = local_488 >> 0x18 | (local_488 & 0xff0000) >> 8 | (local_488 & 0xff00) << 8 |
                   local_488 << 0x18;
          *(undefined4 *)((int)local_338 + iVar16 + -0x58) = 0;
          if (uVar23 <= (uint)((int)puVar24 - (int)puVar20)) {
            pbVar12 = (byte *)((int)puVar17 + (int)puVar20);
            puVar20 = (uint *)((int)puVar20 + uVar23);
            goto LAB_10015a49;
          }
          pbVar12 = (byte *)0x0;
          bVar3 = true;
        }
        *(byte **)((int)local_670 + iVar16) = pbVar12;
        iVar16 = iVar16 + 4;
      } while (iVar16 != 0);
      local_488 = local_488 & 0xffffff00;
      if ((!bVar3) && (puVar20 != puVar24)) {
        recovered_10001d70(&local_488,(undefined4 *)((int)puVar17 + (int)puVar20),1);
        cVar15 = (char)local_488;
        local_488 = 0;
        if (3 < (int)puVar24 - ((int)puVar20 + 1U)) {
          recovered_10001d70(&local_488,(undefined4 *)((int)puVar20 + 1U + (int)puVar17),4);
          recovered_10009bf0(puVar17,(uint)puVar24);
          recovered_10001d70(*(undefined4 **)(arg_ecx + 0x4ac),puVar17,(uint)puVar24);
          *(uint **)(arg_ecx + 0x4b0) = puVar24;
          *(undefined1 *)(arg_ecx + 0x4a7) = 1;
          if (*(char *)(arg_ecx + 0x4a6) == '\0') {
            recovered_10011760(arg_ecx);
          }
          puVar24 = local_698[0];
          uVar23 = CONCAT13(PF_PART1(local_3b8, 3),
                            CONCAT12(PF_PART1(local_3b8, 2),CONCAT11(PF_PART1(local_3b8, 1),(byte)local_3b8)));
          local_820 = (uint *)str_1001ebe2;
          uVar6 = recovered_100024c0(((uintptr_t)pf_module_state + 0x10beU));
          if (puVar24 == (uint *)0x0) {
            recovered_100024c0(((uintptr_t)pf_module_state + 0x10d0U));
          }
          else {
            uVar7 = 0;
            do {
              if (uVar23 < uVar7) break;
              uVar21 = uVar7;
              if (uVar7 < uVar23) {
                bVar3 = true;
                uVar14 = uVar7;
                if (*(char *)((int)puVar24 + uVar7) != ',') {
                  do {
                    if (uVar23 - 1 == uVar14) {
                      uVar21 = uVar23;
                      break;
                    }
                    uVar21 = uVar14 + 1;
                    iVar16 = uVar14 + 1;
                    uVar14 = uVar21;
                  } while (*(char *)((int)puVar24 + iVar16) != ',');
                  bVar3 = uVar21 < uVar23;
                }
              }
              else {
                bVar3 = false;
              }
              if ((uVar21 - uVar7 == uVar6) &&
                 (iVar16 = recovered_10002230((uint *)(uVar7 + (int)puVar24),local_820,uVar6),
                 iVar16 == 0)) goto LAB_10015ef2;
              uVar7 = uVar21 + 1;
            } while (bVar3);
            local_824 = (uint *)str_1001ebf4;
            uVar6 = recovered_100024c0(((uintptr_t)pf_module_state + 0x10d0U));
            uVar7 = 0;
            do {
              if (uVar23 < uVar7) break;
              uVar21 = uVar7;
              if (uVar7 < uVar23) {
                bVar3 = true;
                uVar14 = uVar7;
                if (*(char *)((int)puVar24 + uVar7) != ',') {
                  do {
                    if (uVar23 - 1 == uVar14) {
                      uVar21 = uVar23;
                      break;
                    }
                    uVar21 = uVar14 + 1;
                    iVar16 = uVar14 + 1;
                    uVar14 = uVar21;
                  } while (*(char *)((int)puVar24 + iVar16) != ',');
                  bVar3 = uVar21 < uVar23;
                }
              }
              else {
                bVar3 = false;
              }
              if ((uVar21 - uVar7 == uVar6) &&
                 (iVar16 = recovered_10002230((uint *)(uVar7 + (int)puVar24),local_824,uVar6),
                 iVar16 == 0)) goto LAB_10015ef2;
              uVar7 = uVar21 + 1;
            } while (bVar3);
          }
          pcVar10 = str_1001ec11;
          goto LAB_100150ac;
        }
      }
      pcVar10 = str_1001ebd0;
      goto LAB_10015b25;
    }
    pcVar10 = str_1001ebbe;
    goto LAB_100150ac;
  case 0x15:
    if ((*(char *)(arg_ecx + 0x4a5) != '\x01') || (*(char *)(arg_ecx + 0x7f4) == '\0')) {
      pcVar10 = str_1001ecfd;
      goto LAB_10015b25;
    }
    recovered_10001d70(local_69c,(undefined4 *)local_76c,0x19c);
    *(undefined1 *)(arg_ecx + 0x809) = 1;
    iVar16 = -0x19c;
    do {
      pbVar12[iVar16 + 0x19c] = 0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0);
    iVar16 = -0x19c;
    do {
      local_6b8[iVar16 + 0x19c] = 0;
      iVar16 = iVar16 + 1;
    } while (iVar16 != 0);
    *(undefined1 *)(arg_ecx + 0x7f4) = 0;
    if (*(char *)(arg_ecx + 0x808) == '\x01') {
      *(undefined2 *)(arg_ecx + 0x4a5) = 0;
      *(undefined1 *)(arg_ecx + 0x4a7) = 0;
      if (*(int *)(arg_ecx + 0x10) == 1) {
        *(undefined4 *)(arg_ecx + 0x10) = 2;
      }
    }
    break;
  case 0x1e:
    if (((*(char *)(arg_ecx + 0x4a5) != '\x01') || (*(char *)(arg_ecx + 0x4a7) != '\x01')) ||
       (*(char *)(arg_ecx + 0x4a6) == '\0')) {
      pcVar10 = str_1001ed10;
      goto LAB_10015b25;
    }
    local_698[0] = (uint *)((uint)PF_PART3(local_698[0], 1) << 8);
    recovered_10001d70(local_698,puVar17,1);
    local_698[0] = (uint *)0x0;
    if ((uint *)0x4 < puVar24) {
      recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 6),4);
      uVar23 = (uint)local_698[0] >> 0x18 | ((uint)local_698[0] & 0xff0000) >> 8 |
               ((uint)local_698[0] & 0xff00) << 8 | (int)local_698[0] << 0x18;
      if ((uVar23 <= (int)puVar24 - 5U) && (uVar23 == 0x20)) {
        pbVar12 = (byte *)((int)puVar18 + 10);
        recovered_10009bf0((undefined4 *)pbVar12,0x20);
        recovered_10002000((byte *)local_698,0,0x18);
        local_698[0] = (uint *)0x18;
        if ((((_DAT_00280800 == 0x50414d57) && ((_DAT_00280804 != 0 && (0xb < _DAT_00280808)))) &&
            (0x16b < _DAT_00280808)) && (_DAT_00280968 != (code *)0x0)) {
          (*_DAT_00280968)(local_698);
        }
        recovered_10009bf0(local_698,0x18);
        recovered_1000a820((undefined4 *)local_81b,(undefined4 *)0x20);
        recovered_10019fe0(local_198,local_81b,&DAT_1001e28d);
        recovered_10019fe0(local_844,local_81b,pbVar12);
        cVar15 = local_844[1];
        bVar19 = local_844[0];
        local_820 = (uint *)CONCAT31(PF_PART3(local_820, 1),local_844[4]);
        local_824 = (uint *)CONCAT31(PF_PART3(local_824, 1),local_844[5]);
        local_7e8 = CONCAT31(PF_PART3(local_7e8, 1),local_844[6]);
        local_770 = (uint *)CONCAT31(PF_PART3(local_770, 1),local_844[7]);
        local_774 = (uint *)CONCAT31(PF_PART3(local_774, 1),local_844[8]);
        local_778 = (uint *)CONCAT31(PF_PART3(local_778, 1),local_844[10]);
        local_6c0 = CONCAT31(PF_PART3(local_6c0, 1),local_844[0xb]);
        local_7e9 = local_844[0xc];
        local_7ea = local_844[0xd];
        local_7eb = local_844[0xe];
        local_7ec = local_844[0xf];
        local_7ed = local_844[0x10];
        local_81b[0x20] = local_844[0x11];
        local_7fa = local_844[0x12];
        local_7f9 = local_844[0x13];
        local_7f8 = local_844[0x14];
        local_7f7 = local_844[0x15];
        local_7f6 = local_844[0x16];
        local_7f5 = local_844[0x17];
        local_7f4 = local_844[0x18];
        local_7f3 = local_844[0x19];
        local_7f2 = local_844[0x1a];
        local_7f1 = local_844[0x1b];
        local_7f0 = local_844[0x1c];
        local_7ef = local_844[0x1d];
        local_7ee = local_844[0x1e];
        if (((local_844[0x1d] == '\0' && local_844[0x1e] == '\0') &&
            (((((((local_844[0x16] == '\0' && local_844[0x17] == '\0') && local_844[0x18] == '\0')
                && local_844[0x19] == '\0') && local_844[0x1a] == '\0') && local_844[0x1b] == '\0')
             && local_844[0x1c] == '\0') &&
            ((((((local_844[0x10] == '\0' && local_844[0x11] == '\0') && local_844[0x12] == '\0') &&
               local_844[0x13] == '\0') && local_844[0x14] == '\0') && local_844[0x15] == '\0') &&
            (((((local_844[0xb] == '\0' && local_844[0xc] == '\0') && local_844[0xd] == '\0') &&
              local_844[0xe] == '\0') && local_844[0xf] == '\0') &&
            ((((local_844[7] == '\0' && local_844[8] == '\0') && local_844[9] == '\0') &&
             local_844[10] == '\0') &&
            (((local_844[4] == '\0' && local_844[5] == '\0') && local_844[6] == '\0') &&
            ((local_844[2] == '\0' && local_844[3] == '\0') && (cVar15 == '\0' && bVar19 == '\0'))))
            )))) && local_844[0x1f] == '\0') {
          local_81b[0] = 0;
          local_81b[1] = 0;
          local_81b[2] = 0;
          local_81b[3] = 0;
          local_81b[4] = 0;
          local_81b[5] = 0;
          local_81b[6] = 0;
          local_81b[7] = 0;
          local_81b[8] = 0;
          local_81b[9] = 0;
          local_81b[10] = 0;
          local_81b[0xb] = 0;
          local_81b[0xc] = 0;
          local_81b[0xd] = 0;
          local_81b[0xe] = 0;
          local_81b[0xf] = 0;
          local_81b[0x10] = 0;
          local_81b[0x11] = 0;
          local_81b[0x12] = 0;
          local_81b[0x13] = 0;
          local_81b[0x14] = 0;
          local_81b[0x15] = 0;
          local_81b[0x16] = 0;
          local_81b[0x17] = 0;
          local_81b[0x18] = 0;
          local_81b[0x19] = 0;
          local_81b[0x1a] = 0;
          local_81b[0x1b] = 0;
          local_81b[0x1c] = 0;
          local_81b[0x1d] = 0;
          local_81b[0x1e] = 0;
          local_81b[0x1f] = 0;
          pcVar10 = str_1001ed4c;
          goto LAB_100150ac;
        }
        local_860 = 0;
        pbVar25 = local_844;
        if (bVar19 == '\0') {
          local_860 = 1;
          pbVar25 = local_844 + 1;
          bVar19 = cVar15;
          if (cVar15 != '\0') goto LAB_1001562d;
          local_860 = 2;
          pbVar25 = local_844 + 2;
          bVar19 = local_844[2];
          if (local_844[2] != '\0') goto LAB_1001562d;
          local_860 = 3;
          pbVar25 = local_844 + 3;
          bVar19 = local_844[3];
          if (local_844[3] != '\0') goto LAB_1001562d;
          local_860 = 4;
          pbVar25 = local_844 + 4;
          bVar19 = local_844[4];
          if (local_844[4] != '\0') goto LAB_1001562d;
          local_860 = 5;
          pbVar25 = local_844 + 5;
          bVar19 = local_844[5];
          if (local_844[5] != '\0') goto LAB_1001562d;
          local_860 = 6;
          pbVar25 = local_844 + 6;
          bVar19 = local_844[6];
          if (local_844[6] != '\0') goto LAB_1001562d;
          local_860 = 7;
          pbVar25 = local_844 + 7;
          bVar19 = local_844[7];
          if (local_844[7] != '\0') goto LAB_1001562d;
          local_860 = 8;
          pbVar25 = local_844 + 8;
          bVar19 = local_844[8];
          if (local_844[8] != '\0') goto LAB_1001562d;
          local_860 = 9;
          pbVar25 = local_844 + 9;
          bVar19 = local_844[9];
          if (local_844[9] != '\0') goto LAB_1001562d;
          local_860 = 10;
          pbVar25 = local_844 + 10;
          bVar19 = local_844[10];
          if (local_844[10] != '\0') goto LAB_1001562d;
          local_860 = 0xb;
          pbVar25 = local_844 + 0xb;
          bVar19 = local_844[0xb];
          if (local_844[0xb] != '\0') goto LAB_1001562d;
          local_860 = 0xc;
          pbVar25 = local_844 + 0xc;
          bVar19 = local_844[0xc];
          if (local_844[0xc] != '\0') goto LAB_1001562d;
          local_860 = 0xd;
          pbVar25 = local_844 + 0xd;
          bVar19 = local_844[0xd];
          if (local_844[0xd] != '\0') goto LAB_1001562d;
          local_860 = 0xe;
          pbVar25 = local_844 + 0xe;
          bVar19 = local_844[0xe];
          if (local_844[0xe] != '\0') goto LAB_1001562d;
          local_860 = 0xf;
          pbVar25 = local_844 + 0xf;
          bVar19 = local_844[0xf];
          if (local_844[0xf] != '\0') goto LAB_1001562d;
          local_860 = 0x10;
          pbVar25 = local_844 + 0x10;
          bVar19 = local_844[0x10];
          if (local_844[0x10] != '\0') goto LAB_1001562d;
          local_860 = 0x11;
          pbVar25 = local_844 + 0x11;
          bVar19 = local_844[0x11];
          if (local_844[0x11] != '\0') goto LAB_1001562d;
          local_860 = 0x12;
          pbVar25 = local_844 + 0x12;
          bVar19 = local_844[0x12];
          if (local_844[0x12] != '\0') goto LAB_1001562d;
          local_860 = 0x13;
          pbVar25 = local_844 + 0x13;
          bVar19 = local_844[0x13];
          if (local_844[0x13] != '\0') goto LAB_1001562d;
          local_860 = 0x14;
          pbVar25 = local_844 + 0x14;
          bVar19 = local_844[0x14];
          if (local_844[0x14] != '\0') goto LAB_1001562d;
          local_860 = 0x15;
          pbVar25 = local_844 + 0x15;
          bVar19 = local_844[0x15];
          if (local_844[0x15] != '\0') goto LAB_1001562d;
          local_860 = 0x16;
          pbVar25 = local_844 + 0x16;
          bVar19 = local_844[0x16];
          if (local_844[0x16] != '\0') goto LAB_1001562d;
          local_860 = 0x17;
          pbVar25 = local_844 + 0x17;
          bVar19 = local_844[0x17];
          if (local_844[0x17] != '\0') goto LAB_1001562d;
          local_860 = 0x18;
          pbVar25 = local_844 + 0x18;
          bVar19 = local_844[0x18];
          if (local_844[0x18] != '\0') goto LAB_1001562d;
          local_860 = 0x19;
          pbVar25 = local_844 + 0x19;
          bVar19 = local_844[0x19];
          if (local_844[0x19] != '\0') goto LAB_1001562d;
          local_860 = 0x1a;
          pbVar25 = local_844 + 0x1a;
          bVar19 = local_844[0x1a];
          if (local_844[0x1a] != '\0') goto LAB_1001562d;
          local_860 = 0x1b;
          pbVar25 = local_844 + 0x1b;
          bVar19 = local_844[0x1b];
          if (local_844[0x1b] != '\0') goto LAB_1001562d;
          local_860 = 0x1c;
          pbVar25 = local_844 + 0x1c;
          bVar19 = local_844[0x1c];
          if (local_844[0x1c] != '\0') goto LAB_1001562d;
          local_860 = 0x1d;
          pbVar25 = local_844 + 0x1d;
          bVar19 = local_844[0x1d];
          if (local_844[0x1d] != '\0') goto LAB_1001562d;
          local_860 = 0x1e;
          pbVar25 = local_844 + 0x1e;
          bVar19 = local_844[0x1e];
          if (local_844[0x1e] != '\0') goto LAB_1001562d;
          local_860 = 0x1f;
          pbVar25 = local_844 + 0x1f;
          bVar19 = local_844[0x1f];
          if (local_844[0x1f] != '\0') goto LAB_1001562d;
          local_698[0] = (uint *)0x0;
          recovered_10001d70((undefined4 *)local_768,local_698,4);
          local_820 = (uint *)0x4;
        }
        else {
LAB_1001562d:
          if ((char)bVar19 < '\0') {
            local_698[0] = (uint *)((uint)(byte)(0x21 - (char)local_860) << 0x18);
            recovered_10001d70((undefined4 *)local_768,local_698,4);
            local_698[0] = (uint *)((uint)local_698[0] & 0xffffff00);
            recovered_10001d70((undefined4 *)local_764,local_698,1);
            uVar23 = 0x20 - local_860;
            iVar16 = 5;
            puVar18 = (undefined4 *)(local_764 + 1);
          }
          else {
            uVar23 = 0x20 - local_860;
            local_698[0] = (uint *)(uVar23 * 0x1000000);
            recovered_10001d70((undefined4 *)local_768,local_698,4);
            iVar16 = 4;
            puVar18 = (undefined4 *)local_764;
          }
          recovered_10001d70(puVar18,(undefined4 *)pbVar25,uVar23);
          local_820 = (uint *)(iVar16 + uVar23);
        }
        local_7e4[0] = 0x6a09e667;
        local_7e4[1] = 0xbb67ae85;
        local_7e4[2] = 0x3c6ef372;
        local_7e4[3] = 0xa54ff53a;
        local_7e4[4] = 0x510e527f;
        local_7e4[5] = 0x9b05688c;
        local_7e4[6] = 0x1f83d9ab;
        local_7e4[7] = 0x5be0cd19;
        local_7c0 = 0;
        local_7c4 = (char *)0x0;
        local_77c = 0;
        uVar23 = recovered_100024c0((int)local_6bc);
        local_848 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                    uVar23 << 0x18;
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        uVar23 = recovered_100024c0((int)local_6bc);
        bVar3 = CARRY4((uint)local_7c4,uVar23);
        local_7c4 = (char *)((int)local_7c4 + uVar23);
        local_7c0 = local_7c0 + (uint)bVar3;
        if (uVar23 != 0) {
          puVar18 = local_6bc;
          do {
            uVar6 = 0x40U - local_77c;
            if (uVar23 < 0x40U - local_77c) {
              uVar6 = uVar23;
            }
            recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar18,uVar6);
            local_77c = local_77c + uVar6;
            if (local_77c == 0x40) {
              recovered_1000f5d0(local_7e4,(int)local_7bc);
              local_77c = 0;
            }
            puVar18 = (undefined4 *)((int)puVar18 + uVar6);
            uVar23 = uVar23 - uVar6;
          } while (uVar23 != 0);
        }
        pcVar10 = str_1001ed65;
        uVar23 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1241U));
        local_848 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                    uVar23 << 0x18;
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        uVar23 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1241U));
        bVar3 = CARRY4((uint)local_7c4,uVar23);
        local_7c4 = (char *)((int)local_7c4 + uVar23);
        local_7c0 = local_7c0 + (uint)bVar3;
        if (uVar23 != 0) {
          do {
            uVar6 = 0x40U - local_77c;
            if (uVar23 < 0x40U - local_77c) {
              uVar6 = uVar23;
            }
            recovered_10001d70((undefined4 *)(local_7bc + local_77c),(undefined4 *)pcVar10,uVar6);
            local_77c = local_77c + uVar6;
            if (local_77c == 0x40) {
              recovered_1000f5d0(local_7e4,(int)local_7bc);
              local_77c = 0;
            }
            pcVar10 = pcVar10 + uVar6;
            uVar23 = uVar23 - uVar6;
          } while (uVar23 != 0);
        }
        uVar23 = *(uint *)(arg_ecx + 0x4b0);
        local_848 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                    uVar23 << 0x18;
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        puVar18 = *(undefined4 **)(arg_ecx + 0x4ac);
        uVar23 = *(uint *)(arg_ecx + 0x4b0);
        bVar3 = CARRY4((uint)local_7c4,uVar23);
        local_7c4 = (char *)((int)local_7c4 + uVar23);
        local_7c0 = local_7c0 + (uint)bVar3;
        if (uVar23 != 0) {
          do {
            uVar6 = 0x40U - local_77c;
            if (uVar23 < 0x40U - local_77c) {
              uVar6 = uVar23;
            }
            recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar18,uVar6);
            local_77c = local_77c + uVar6;
            if (local_77c == 0x40) {
              recovered_1000f5d0(local_7e4,(int)local_7bc);
              local_77c = 0;
            }
            puVar18 = (undefined4 *)((int)puVar18 + uVar6);
            uVar23 = uVar23 - uVar6;
          } while (uVar23 != 0);
        }
        uVar23 = *(uint *)(arg_ecx + 0x4b8);
        local_848 = uVar23 >> 0x18 | (uVar23 & 0xff0000) >> 8 | (uVar23 & 0xff00) << 8 |
                    uVar23 << 0x18;
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        puVar18 = *(undefined4 **)(arg_ecx + 0x4b4);
        uVar23 = *(uint *)(arg_ecx + 0x4b8);
        bVar3 = CARRY4((uint)local_7c4,uVar23);
        local_7c4 = (char *)((int)local_7c4 + uVar23);
        local_7c0 = local_7c0 + (uint)bVar3;
        if (uVar23 != 0) {
          do {
            uVar6 = 0x40U - local_77c;
            if (uVar23 < 0x40U - local_77c) {
              uVar6 = uVar23;
            }
            recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar18,uVar6);
            local_77c = local_77c + uVar6;
            if (local_77c == 0x40) {
              recovered_1000f5d0(local_7e4,(int)local_7bc);
              local_77c = 0;
            }
            puVar18 = (undefined4 *)((int)puVar18 + uVar6);
            uVar23 = uVar23 - uVar6;
          } while (uVar23 != 0);
        }
        local_848 = DAT_10023f78 >> 0x18 | (DAT_10023f78 & 0xff0000) >> 8 |
                    (DAT_10023f78 & 0xff00) << 8 | DAT_10023f78 << 0x18;
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        bVar3 = CARRY4((uint)local_7c4,DAT_10023f78);
        local_7c4 = (char *)((int)local_7c4 + DAT_10023f78);
        local_7c0 = local_7c0 + (uint)bVar3;
        if (DAT_10023f78 != 0) {
          puVar18 = (undefined4 *)&DAT_10023f44;
          uVar23 = DAT_10023f78;
          do {
            uVar6 = 0x40U - local_77c;
            if (uVar23 < 0x40U - local_77c) {
              uVar6 = uVar23;
            }
            recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar18,uVar6);
            local_77c = local_77c + uVar6;
            if (local_77c == 0x40) {
              recovered_1000f5d0(local_7e4,(int)local_7bc);
              local_77c = 0;
            }
            puVar18 = (undefined4 *)((int)puVar18 + uVar6);
            uVar23 = uVar23 - uVar6;
          } while (uVar23 != 0);
        }
        local_848 = 0x20000000;
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        bVar3 = 0xffffffdf < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 0x20);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 0x20;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),(undefined4 *)pbVar12,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          pbVar12 = pbVar12 + uVar6;
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        bVar3 = 0xfffffffb < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 4);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 4;
        puVar24 = &local_848;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),puVar24,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        bVar3 = 0xffffffdf < local_7c4;
        local_7c4 = (char *)((int)local_7c4 + 0x20);
        local_7c0 = local_7c0 + (uint)bVar3;
        uVar23 = 0x20;
        pbVar12 = local_198;
        do {
          uVar6 = 0x40U - local_77c;
          if (uVar23 < 0x40U - local_77c) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),(undefined4 *)pbVar12,uVar6);
          local_77c = local_77c + uVar6;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          pbVar12 = pbVar12 + uVar6;
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        bVar3 = CARRY4((uint)local_7c4,(uint)local_820);
        local_7c4 = (char *)((int)local_7c4 + (int)local_820);
        local_7c0 = local_7c0 + (uint)bVar3;
        pcVar10 = local_768;
        puVar24 = local_820;
        do {
          puVar17 = (uint *)(0x40 - local_77c);
          if (puVar24 < (uint *)(0x40 - local_77c)) {
            puVar17 = puVar24;
          }
          recovered_10001d70((undefined4 *)(local_7bc + local_77c),(undefined4 *)pcVar10,
                             (uint)puVar17);
          local_77c = local_77c + (int)puVar17;
          if (local_77c == 0x40) {
            recovered_1000f5d0(local_7e4,(int)local_7bc);
            local_77c = 0;
          }
          pcVar10 = pcVar10 + (int)puVar17;
          puVar24 = (uint *)((int)puVar24 - (int)puVar17);
        } while (puVar24 != (uint *)0x0);
        recovered_1000b520(local_7e4,local_1b8);
        if (*(char *)(arg_ecx + 0x4a4) == '\0') {
          recovered_10001d70(local_498[1],local_1b8,0x20);
          *(undefined1 *)(arg_ecx + 0x4a4) = 1;
        }
        local_698[1] = (uint *)0x6a09e667;
        local_698[0] = (uint *)0xf3bcc908;
        local_690[1] = 0xbb67ae85;
        local_690[0] = 0x84caa73b;
        local_684 = 0x3c6ef372;
        local_690[2] = 0xfe94f82b;
        local_67c = -0x5ab00ac6;
        local_680 = 0x5f1d36f1;
        local_674 = 0x510e527f;
        local_678 = 0xade682d1;
        local_670[1] = 0x9b05688c;
        local_670[0] = 0x2b3e6c1f;
        local_670[3] = 0x1f83d9ab;
        local_670[2] = 0xfb41bd6b;
        local_670[5] = 0x5be0cd19;
        local_670[4] = 0x137e2179;
        local_5d0 = 0;
        local_670[7] = 0;
        local_670[6] = 0x20;
        recovered_10001d70(local_670 + 8,(undefined4 *)&DAT_10023f04,0x20);
        local_5d0 = local_5d0 + 0x20;
        if (local_5d0 == 0x80) {
          recovered_10009e40((uint *)local_698,(int)(local_670 + 8));
          local_5d0 = 0;
        }
        recovered_1000b150((uint *)local_698,&local_740);
        PF_PART1(local_740, 0) = (byte)local_740 & 0xf8;
        local_721 = local_721 & 0x3f | 0x40;
        local_484 = 0x6a09e667;
        local_488 = 0xf3bcc908;
        local_47c = 0xbb67ae85;
        local_480 = 0x84caa73b;
        local_474 = 0x3c6ef372;
        local_478 = 0xfe94f82b;
        local_46c = 0xa54ff53a;
        local_470 = 0x5f1d36f1;
        local_464 = 0x510e527f;
        local_468 = 0xade682d1;
        local_45c = 0x9b05688c;
        local_460 = 0x2b3e6c1f;
        local_454 = 0x1f83d9ab;
        local_458 = 0xfb41bd6b;
        local_44c = 0x5be0cd19;
        local_450 = 0x137e2179;
        local_3c0 = 0;
        local_444 = 0;
        local_448 = 0x20;
        recovered_10001d70(local_440,(undefined4 *)local_720,0x20);
        local_3c0 = local_3c0 + 0x20;
        if (local_3c0 == 0x80) {
          recovered_10009e40(&local_488,(int)local_440);
          local_3c0 = 0;
        }
        bVar3 = 0xffffffdf < local_448;
        local_448 = local_448 + 0x20;
        local_444 = local_444 + (uint)bVar3;
        uVar23 = 0x20;
        puVar24 = local_1b8;
        do {
          uVar6 = 0x80U - local_3c0;
          if (uVar23 < 0x80U - local_3c0) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)((int)local_440 + local_3c0),puVar24,uVar6);
          local_3c0 = local_3c0 + uVar6;
          if (local_3c0 == 0x80) {
            recovered_10009e40(&local_488,(int)local_440);
            local_3c0 = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        recovered_1000b150(&local_488,&local_700);
        iVar16 = -0x40;
        do {
          local_498[iVar16 * 2] = (undefined4 *)(uint)local_6e0[iVar16 + 0x20];
          local_498[iVar16 * 2 + 1] = (undefined4 *)0x0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        iVar16 = -0x40;
        do {
          local_6e0[iVar16 + 0x20] = 0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        recovered_1001c5b0(&local_700,(uint *)local_698);
        recovered_1000b7d0(&local_3b8,(int)&local_700);
        recovered_1000ec90(local_98,local_2b8);
        recovered_1000c480((longlong *)local_698,(longlong *)&local_3b8,(longlong *)local_98);
        recovered_1000c480((longlong *)local_118,local_338,(longlong *)local_98);
        recovered_1000eec0(local_178,(longlong *)local_118);
        recovered_1000eec0(local_138,(longlong *)local_698);
        local_159 = local_159 ^ local_138[0] << 7;
        local_484 = 0x6a09e667;
        local_488 = 0xf3bcc908;
        local_47c = 0xbb67ae85;
        local_480 = 0x84caa73b;
        local_474 = 0x3c6ef372;
        local_478 = 0xfe94f82b;
        local_46c = 0xa54ff53a;
        local_470 = 0x5f1d36f1;
        local_464 = 0x510e527f;
        local_468 = 0xade682d1;
        local_45c = 0x9b05688c;
        local_460 = 0x2b3e6c1f;
        local_454 = 0x1f83d9ab;
        local_458 = 0xfb41bd6b;
        local_44c = 0x5be0cd19;
        local_450 = 0x137e2179;
        local_3c0 = 0;
        local_444 = 0;
        local_448 = 0x20;
        recovered_10001d70(local_440,(undefined4 *)local_178,0x20);
        local_3c0 = local_3c0 + 0x20;
        if (local_3c0 == 0x80) {
          recovered_10009e40(&local_488,(int)local_440);
          local_3c0 = 0;
        }
        bVar3 = 0xffffffdf < local_448;
        local_448 = local_448 + 0x20;
        local_444 = local_444 + (uint)bVar3;
        puVar18 = (undefined4 *)&DAT_10023f24;
        uVar23 = 0x20;
        do {
          uVar6 = 0x80U - local_3c0;
          if (uVar23 < 0x80U - local_3c0) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)((int)local_440 + local_3c0),puVar18,uVar6);
          local_3c0 = local_3c0 + uVar6;
          if (local_3c0 == 0x80) {
            recovered_10009e40(&local_488,(int)local_440);
            local_3c0 = 0;
          }
          puVar18 = (undefined4 *)((int)puVar18 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        bVar3 = 0xffffffdf < local_448;
        local_448 = local_448 + 0x20;
        local_444 = local_444 + (uint)bVar3;
        uVar23 = 0x20;
        puVar24 = local_1b8;
        do {
          uVar6 = 0x80U - local_3c0;
          if (uVar23 < 0x80U - local_3c0) {
            uVar6 = uVar23;
          }
          recovered_10001d70((undefined4 *)((int)local_440 + local_3c0),puVar24,uVar6);
          local_3c0 = local_3c0 + uVar6;
          if (local_3c0 == 0x80) {
            recovered_10009e40(&local_488,(int)local_440);
            local_3c0 = 0;
          }
          puVar24 = (uint *)((int)puVar24 + uVar6);
          uVar23 = uVar23 - uVar6;
        } while (uVar23 != 0);
        recovered_1000b150(&local_488,local_118);
        iVar16 = -0x40;
        do {
          local_498[iVar16 * 2] = (undefined4 *)(uint)abStack_d8[iVar16];
          local_498[iVar16 * 2 + 1] = (undefined4 *)0x0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        iVar16 = -0x40;
        ppuVar11 = local_698;
        do {
          abStack_d8[iVar16] = 0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        recovered_1001c5b0(local_118,(uint *)ppuVar11);
        iVar16 = -0x200;
        do {
          *(undefined4 *)((int)local_498 + iVar16 + 4) = 0;
          *(undefined4 *)((int)local_498 + iVar16) = 0;
          iVar16 = iVar16 + 8;
        } while (iVar16 != 0);
        iVar16 = -0x20;
        do {
          auStack_598[iVar16 * 2] = (uint)local_6e0[iVar16];
          auStack_598[iVar16 * 2 + 1] = 0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        iVar16 = 0;
        do {
          bVar19 = *(byte *)((int)local_118 + iVar16);
          iVar26 = -0x20;
          do {
            uVar23 = (uint)local_720[iVar26] * (uint)bVar19;
            ppuVar1 = ppuVar11 + iVar26 * 2 + 0x40;
            puVar24 = *ppuVar1;
            *ppuVar1 = (uint *)((int)*ppuVar1 + uVar23);
            ppuVar11[iVar26 * 2 + 0x41] =
                 (uint *)((int)ppuVar11[iVar26 * 2 + 0x41] + (uint)CARRY4((uint)puVar24,uVar23));
            iVar26 = iVar26 + 1;
          } while (iVar26 != 0);
          iVar16 = iVar16 + 1;
          ppuVar11 = ppuVar11 + 2;
        } while (iVar16 != 0x20);
        recovered_1001c5b0(local_158,(uint *)local_698);
        PF_PART1(local_740, 0) = 0;
        PF_PART1(local_740, 1) = 0;
        PF_PART1(local_740, 2) = 0;
        PF_PART1(local_740, 3) = 0;
        local_73c = 0;
        local_73b = 0;
        local_73a = 0;
        local_739 = 0;
        local_738 = 0;
        local_737 = 0;
        local_736 = 0;
        local_735 = 0;
        local_734 = 0;
        local_733 = 0;
        local_732 = 0;
        local_731 = 0;
        local_730 = 0;
        local_72f = 0;
        local_72e = 0;
        local_72d = 0;
        local_72c = 0;
        local_72b = 0;
        local_72a = 0;
        local_729 = 0;
        local_728 = 0;
        local_727 = 0;
        local_726 = 0;
        local_725 = 0;
        local_724 = 0;
        local_723 = 0;
        local_722 = 0;
        local_721 = 0;
        local_720[0] = 0;
        local_720[1] = 0;
        local_720[2] = 0;
        local_720[3] = 0;
        local_720[4] = 0;
        local_720[5] = 0;
        local_720[6] = 0;
        local_720[7] = 0;
        local_720[8] = 0;
        local_720[9] = 0;
        local_720[10] = 0;
        local_720[0xb] = 0;
        local_720[0xc] = 0;
        local_720[0xd] = 0;
        local_720[0xe] = 0;
        local_720[0xf] = 0;
        local_720[0x10] = 0;
        local_720[0x11] = 0;
        local_720[0x12] = 0;
        local_720[0x13] = 0;
        local_720[0x14] = 0;
        local_720[0x15] = 0;
        local_720[0x16] = 0;
        local_720[0x17] = 0;
        local_720[0x18] = 0;
        local_720[0x19] = 0;
        local_720[0x1a] = 0;
        local_720[0x1b] = 0;
        local_720[0x1c] = 0;
        local_720[0x1d] = 0;
        local_720[0x1e] = 0;
        local_720[0x1f] = 0;
        PF_PART1(local_700, 0) = 0;
        PF_PART1(local_700, 1) = 0;
        PF_PART1(local_700, 2) = 0;
        PF_PART1(local_700, 3) = 0;
        local_6fc = 0;
        local_6fb = 0;
        local_6fa = 0;
        local_6f9 = 0;
        local_6f8 = 0;
        local_6f7 = 0;
        local_6f6 = 0;
        local_6f5 = 0;
        local_6f4 = 0;
        local_6f3 = 0;
        local_6f2 = 0;
        local_6f1 = 0;
        local_6f0 = 0;
        local_6ef = 0;
        local_6ee = 0;
        local_6ed = 0;
        local_6ec = 0;
        local_6eb = 0;
        local_6ea = 0;
        local_6e9 = 0;
        local_6e8 = 0;
        local_6e7 = 0;
        local_6e6 = 0;
        local_6e5 = 0;
        local_6e4 = 0;
        local_6e3 = 0;
        local_6e2 = 0;
        local_6e1 = 0;
        local_6e0[0] = 0;
        local_6e0[1] = 0;
        local_6e0[2] = 0;
        local_6e0[3] = 0;
        local_6e0[4] = 0;
        local_6e0[5] = 0;
        local_6e0[6] = 0;
        local_6e0[7] = 0;
        local_6e0[8] = 0;
        local_6e0[9] = 0;
        local_6e0[10] = 0;
        local_6e0[0xb] = 0;
        local_6e0[0xc] = 0;
        local_6e0[0xd] = 0;
        local_6e0[0xe] = 0;
        local_6e0[0xf] = 0;
        local_6e0[0x10] = 0;
        local_6e0[0x11] = 0;
        local_6e0[0x12] = 0;
        local_6e0[0x13] = 0;
        local_6e0[0x14] = 0;
        local_6e0[0x15] = 0;
        local_6e0[0x16] = 0;
        local_6e0[0x17] = 0;
        local_6e0[0x18] = 0;
        local_6e0[0x19] = 0;
        local_6e0[0x1a] = 0;
        local_6e0[0x1b] = 0;
        local_6e0[0x1c] = 0;
        local_6e0[0x1d] = 0;
        local_6e0[0x1e] = 0;
        local_6e0[0x1f] = 0;
        iVar16 = -0x200;
        do {
          *(undefined1 *)((int)local_498 + iVar16) = 0;
          iVar16 = iVar16 + 1;
        } while (iVar16 != 0);
        puVar18 = *(undefined4 **)(arg_ecx + 0x140);
        local_698[0] = (uint *)CONCAT31(PF_PART3(local_698[0], 1),0x1f);
        recovered_10001d70(puVar18,local_698,1);
        uVar23 = DAT_10023f78;
        local_698[0] = (uint *)(DAT_10023f78 >> 0x18 | (DAT_10023f78 & 0xff0000) >> 8 |
                                (DAT_10023f78 & 0xff00) << 8 | DAT_10023f78 << 0x18);
        recovered_10001d70((undefined4 *)((int)puVar18 + 1),local_698,4);
        if (uVar23 < 0x1ffc) {
          if (uVar23 == 0) {
            local_858 = 5;
          }
          else {
            recovered_10001d70((undefined4 *)((int)puVar18 + 5),(undefined4 *)&DAT_10023f44,uVar23);
            local_858 = uVar23 + 5;
            local_698[0] = (uint *)0x20000000;
            if (0x1ff7 < uVar23) goto LAB_10017686;
          }
          local_698[0] = (uint *)0x20000000;
          recovered_10001d70((undefined4 *)(local_858 + (int)puVar18),local_698,4);
          local_858 = uVar23 + 9;
          bVar19 = 1;
          if (0x1f < uVar23 - 0x1fd8) {
            recovered_10001d70((undefined4 *)(local_858 + (int)puVar18),(undefined4 *)local_198,0x20
                              );
            local_858 = uVar23 + 0x29;
            bVar19 = 0;
          }
        }
        else {
          local_858 = 5;
LAB_10017686:
          bVar19 = 1;
        }
        uVar23 = recovered_100024c0(((uintptr_t)pf_module_state + 0x324U));
        PF_PART1(local_3b8, 1) = (undefined1)(uVar23 >> 0x10);
        PF_PART1(local_3b8, 2) = (undefined1)(uVar23 >> 8);
        PF_PART1(local_3b8, 0) = (byte)(uVar23 >> 0x18);
        PF_PART1(local_3b8, 3) = (byte)uVar23;
        recovered_10001d70(local_698,&local_3b8,4);
        if (uVar23 < 0x50) {
          if (uVar23 == 0) {
            uVar6 = 4;
          }
          else {
            recovered_10001d70(local_698 + 1,(undefined4 *)(str_1001de3e + 10),
                               uVar23);
            uVar6 = uVar23 + 4;
            if (0x4b < uVar23) goto LAB_1001786d;
          }
          PF_PART1(local_3b8, 3) = 0x40;
          PF_PART1(local_3b8, 2) = 0;
          PF_PART1(local_3b8, 1) = 0;
          PF_PART1(local_3b8, 0) = 0;
          recovered_10001d70((undefined4 *)((int)local_698 + uVar6),&local_3b8,4);
          uVar6 = uVar23 + 8;
          if (0x3f < uVar23 - 0xc) {
            recovered_10001d70((undefined4 *)((int)local_690 + uVar23),(undefined4 *)local_178,0x40)
            ;
            uVar6 = uVar23 + 0x48;
          }
        }
        else {
          uVar6 = 4;
        }
LAB_1001786d:
        PF_PART1(local_3b8, 1) = (undefined1)(uVar6 >> 0x10);
        PF_PART1(local_3b8, 2) = (undefined1)(uVar6 >> 8);
        PF_PART1(local_3b8, 0) = (byte)(uVar6 >> 0x18);
        PF_PART1(local_3b8, 3) = (byte)uVar6;
        if (!(bool)(bVar19 | local_858 - 0x1ffd < 4)) {
          recovered_10001d70((undefined4 *)((int)puVar18 + local_858),&local_3b8,4);
          uVar23 = 0x1ffc - local_858;
          local_858 = local_858 + 4;
          if (uVar6 <= uVar23) {
            recovered_10001d70((undefined4 *)((int)puVar18 + local_858),local_698,uVar6);
            local_858 = local_858 + uVar6;
          }
        }
        puVar24 = local_820;
        recovered_1001be40(local_76c,*(int *)(arg_ecx + 0x7f8),*(int *)(arg_ecx + 0x800),arg_ecx,
                           local_768,(uint)local_820,(int)local_1b8,'\0');
        recovered_1001be40(local_6b8,*(int *)(arg_ecx + 0x7fc),*(int *)(arg_ecx + 0x804),arg_ecx,
                           local_768,(uint)puVar24,(int)local_1b8,'\x01');
        *(undefined1 *)(arg_ecx + 0x7f4) = 1;
        local_81b[0] = 0;
        local_81b[1] = 0;
        local_81b[2] = 0;
        local_81b[3] = 0;
        local_81b[4] = 0;
        local_81b[5] = 0;
        local_81b[6] = 0;
        local_81b[7] = 0;
        local_81b[8] = 0;
        local_81b[9] = 0;
        local_81b[10] = 0;
        local_81b[0xb] = 0;
        local_81b[0xc] = 0;
        local_81b[0xd] = 0;
        local_81b[0xe] = 0;
        local_81b[0xf] = 0;
        local_81b[0x10] = 0;
        local_81b[0x11] = 0;
        local_81b[0x12] = 0;
        local_81b[0x13] = 0;
        local_81b[0x14] = 0;
        local_81b[0x15] = 0;
        local_81b[0x16] = 0;
        local_81b[0x17] = 0;
        local_81b[0x18] = 0;
        local_81b[0x19] = 0;
        local_81b[0x1a] = 0;
        local_81b[0x1b] = 0;
        local_81b[0x1c] = 0;
        local_81b[0x1d] = 0;
        local_81b[0x1e] = 0;
        local_81b[0x1f] = 0;
        local_844[0] = 0;
        local_844[1] = 0;
        local_844[2] = '\0';
        local_844[3] = '\0';
        local_844[4] = '\0';
        local_844[5] = '\0';
        local_844[6] = '\0';
        local_844[7] = '\0';
        local_844[8] = '\0';
        local_844[9] = '\0';
        local_844[10] = '\0';
        local_844[0xb] = '\0';
        local_844[0xc] = '\0';
        local_844[0xd] = '\0';
        local_844[0xe] = '\0';
        local_844[0xf] = '\0';
        local_844[0x10] = '\0';
        local_844[0x11] = '\0';
        local_844[0x12] = '\0';
        local_844[0x13] = '\0';
        local_844[0x14] = '\0';
        local_844[0x15] = '\0';
        local_844[0x16] = '\0';
        local_844[0x17] = '\0';
        local_844[0x18] = '\0';
        local_844[0x19] = '\0';
        local_844[0x1a] = '\0';
        local_844[0x1b] = '\0';
        local_844[0x1c] = '\0';
        local_844[0x1d] = '\0';
        local_844[0x1e] = '\0';
        local_844[0x1f] = '\0';
        local_768[0] = '\0';
        local_768[1] = 0;
        local_768[2] = 0;
        local_768[3] = 0;
        local_764[0] = 0;
        local_764[1] = 0;
        local_762 = 0;
        local_761 = 0;
        local_760 = 0;
        local_75f = 0;
        local_75e = 0;
        local_75d = 0;
        local_75c = 0;
        local_75b = 0;
        local_75a = 0;
        local_759 = 0;
        local_758 = 0;
        local_757 = 0;
        local_756 = 0;
        local_755 = 0;
        local_754 = 0;
        local_753 = 0;
        local_752 = 0;
        local_751 = 0;
        local_750 = 0;
        local_74f = 0;
        local_74e = 0;
        local_74d = 0;
        local_74c = 0;
        local_74b = 0;
        local_74a = 0;
        local_749 = 0;
        local_748 = 0;
        local_747 = 0;
        local_746 = 0;
        local_745 = 0;
        local_744 = 0;
        local_743 = 0;
        local_742 = 0;
        local_741 = 0;
        uVar8 = recovered_10011d50(arg_ecx,puVar18,local_858);
        if ((char)uVar8 == '\0') {
          pcVar10 = str_1001ed88;
        }
        else {
          local_698[0] = (uint *)CONCAT31(PF_PART3(local_698[0], 1),0x15);
          uVar8 = recovered_10011d50(arg_ecx,local_698,1);
          if ((char)uVar8 != '\0') {
            recovered_10001d70(local_498[0],(undefined4 *)local_6b8,0x19c);
            *(undefined1 *)(arg_ecx + 0x808) = 1;
            if (*(char *)(arg_ecx + 0x809) == '\x01') {
              *(undefined2 *)(arg_ecx + 0x4a5) = 0;
              *(undefined1 *)(arg_ecx + 0x4a7) = 0;
            }
            break;
          }
          pcVar10 = str_1001eda1;
        }
        goto LAB_10015b25;
      }
    }
    pcVar10 = str_1001ed33;
    goto LAB_100150ac;
  case 0x32:
    if ((*(uint *)(arg_ecx + 0x10) < 2) || (*(char *)(arg_ecx + 0x4a5) == '\x01')) {
      pcVar10 = str_1001eb78;
      goto LAB_10015b25;
    }
    recovered_100185b0(arg_ecx,(byte *)puVar17,(uint)puVar24);
    break;
  case 0x50:
    local_690[1] = local_690[1] & 0xffffff00;
    PF_PART1(local_3b8, 0) = 0;
    local_698[0] = puVar17;
    local_698[1] = puVar24;
    recovered_10001d70(&local_3b8,puVar17,1);
    PF_PART1(local_3b8, 0) = 0;
    PF_PART1(local_3b8, 1) = 0;
    PF_PART1(local_3b8, 2) = 0;
    PF_PART1(local_3b8, 3) = 0;
    if ((uint *)0x4 < puVar24) {
      recovered_10001d70(&local_3b8,(undefined4 *)((int)puVar18 + 6),4);
      uVar2 = CONCAT12(PF_PART1(local_3b8, 2),CONCAT11(PF_PART1(local_3b8, 1),(byte)local_3b8));
      uVar23 = (uint)PF_PART1(local_3b8, 3) | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
               CONCAT13(PF_PART1(local_3b8, 3),uVar2) << 0x18;
      if (uVar23 <= (int)puVar24 - 5U) {
        local_690[0] = uVar23 + 5;
        bVar3 = recovered_10018ae0((int *)local_698);
        if (bVar3) {
          PF_PART1(local_3b8, 0) = 0x52;
          puVar24 = &local_3b8;
          uVar23 = 1;
          goto LAB_100157e2;
        }
      }
    }
    break;
  case 0x5a:
    if (*(char *)(arg_ecx + 0x80a) == '\0') {
      pcVar10 = str_1001eb9b;
      goto LAB_10015b25;
    }
    recovered_10018b30(arg_ecx,puVar17,(uint)puVar24);
    break;
  case 0x5d:
    local_698[0] = (uint *)((uint)PF_PART3(local_698[0], 1) << 8);
    recovered_10001d70(local_698,puVar17,1);
    local_698[0] = (uint *)0x0;
    if ((uint *)0x4 < puVar24) {
      recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 6),4);
      puVar17 = local_698[0];
      uVar23 = (uint)local_698[0] >> 8;
      uVar6 = (uint)local_698[0] >> 0x10;
      uVar7 = (uint)local_698[0] >> 0x18;
      local_698[0] = (uint *)0x0;
      if (3 < (int)puVar24 - 5U) {
        recovered_10001d70(local_698,(undefined4 *)((int)puVar18 + 10),4);
        if ((*(char *)(arg_ecx + 0x850) == '\x01') &&
           (((uVar6 & 0xff) << 8 | (int)puVar17 << 0x18 | (uVar23 & 0xff) << 0x10) + uVar7 == 0)) {
          *(int *)(arg_ecx + 0x85c) =
               *(int *)(arg_ecx + 0x85c) +
               (((uint)local_698[0] >> 0x10 & 0xff) << 8 |
                (int)local_698[0] << 0x18 | ((uint)local_698[0] >> 8 & 0xff) << 0x10 |
               (uint)local_698[0] >> 0x18);
        }
        break;
      }
    }
    local_698[0] = (uint *)0x0;
    break;
  case 0x5e:
    if (*(char *)(arg_ecx + 0x80a) == '\x01') {
      recovered_10019940(arg_ecx,puVar17,(uint)puVar24);
    }
    break;
  case 0x60:
    if (((*(char *)(arg_ecx + 0x850) == '\x01') &&
        (*(undefined1 *)(arg_ecx + 0x854) = 1, *(int *)(arg_ecx + 0x874) == 1)) &&
       (*(char *)(arg_ecx + 0xdab) == '\0')) {
      *(undefined1 *)(arg_ecx + 0xdab) = 1;
      *(undefined4 *)(arg_ecx + 0xdb0) = 0;
    }
    break;
  case 0x61:
    if (*(char *)(arg_ecx + 0x850) == '\x01') {
      *(undefined1 *)(arg_ecx + 0x853) = 1;
      if (*(char *)(arg_ecx + 0x852) == '\0') {
        recovered_10019b60(arg_ecx);
        *(undefined1 *)(arg_ecx + 0x852) = 1;
      }
      if (*(char *)(arg_ecx + 0xdab) == '\0') {
        *(undefined1 *)(arg_ecx + 0xdab) = 1;
      }
    }
    break;
  case 0x62:
    if (*(char *)(arg_ecx + 0x80a) == '\x01') {
      recovered_10018f50(arg_ecx,puVar17,(uint)puVar24);
    }
  }
  goto switchD_10014e7d_caseD_2;
LAB_10015ef2:
  puVar17 = local_698[1];
  uVar6 = CONCAT13(uStack_3b1,CONCAT12(uStack_3b2,CONCAT11(uStack_3b3,local_3b4)));
  local_770 = (uint *)(str_1001de3e + 10);
  puVar20 = (uint *)recovered_100024c0(((uintptr_t)pf_module_state + 0x324U));
  if (puVar17 != (uint *)0x0) {
    local_7e8 = uVar6 - 1;
    uVar7 = 0;
    local_774 = puVar17;
    local_824 = puVar20;
    do {
      if (uVar6 < uVar7) break;
      uVar21 = uVar7;
      if (uVar7 < uVar6) {
        bVar3 = true;
        uVar14 = uVar7;
        if (*(char *)((int)puVar17 + uVar7) != ',') {
          do {
            if (local_7e8 == uVar14) {
              uVar21 = uVar6;
              break;
            }
            uVar21 = uVar14 + 1;
            iVar16 = uVar14 + 1;
            uVar14 = uVar21;
          } while (*(char *)((int)puVar17 + iVar16) != ',');
          bVar3 = uVar21 < uVar6;
        }
      }
      else {
        bVar3 = false;
      }
      if ((uint *)(uVar21 - uVar7) == local_824) {
        iVar16 = recovered_10002230((uint *)(uVar7 + (int)puVar17),local_770,(uint)local_824);
        puVar17 = local_774;
        if (iVar16 == 0) {
          cVar4 = recovered_10019c90(local_690[0],
                                     CONCAT13(uStack_3ad,
                                              CONCAT12(uStack_3ae,CONCAT11(uStack_3af,uStack_3b0))))
          ;
          *(uint *)(arg_ecx + 0x7f8) = CONCAT31(extraout_var,cVar4);
          cVar4 = recovered_10019c90(local_690[1],
                                     CONCAT13(uStack_3a9,
                                              CONCAT12(uStack_3aa,CONCAT11(uStack_3ab,local_3ac))));
          iVar16 = CONCAT31(extraout_var_00,cVar4);
          *(int *)(arg_ecx + 0x7fc) = iVar16;
          if (iVar16 == 0 || *(int *)(arg_ecx + 0x7f8) == 0) {
            pcVar10 = str_1001ec6e;
            goto LAB_100150ac;
          }
          iVar26 = 0;
          uVar8 = 0;
          if (*(int *)(arg_ecx + 0x7f8) != 1) {
            cVar4 = recovered_10019e20(local_690[2],local_3a8);
            uVar8 = CONCAT31(extraout_var_01,cVar4);
            iVar16 = *(int *)(arg_ecx + 0x7fc);
          }
          *(undefined4 *)(arg_ecx + 0x800) = uVar8;
          if (iVar16 != 1) {
            cVar4 = recovered_10019e20(local_684,local_3a4);
            iVar26 = CONCAT31(extraout_var_02,cVar4);
          }
          uVar7 = local_3a0;
          iVar16 = local_680;
          *(int *)(arg_ecx + 0x804) = iVar26;
          if (((*(int *)(arg_ecx + 0x7f8) != 1) && (*(int *)(arg_ecx + 0x800) == 0)) ||
             ((iVar26 == 0 && (*(int *)(arg_ecx + 0x7fc) != 1)))) {
            pcVar10 = str_1001ec81;
            goto LAB_100150ac;
          }
          local_778 = (uint *)&DAT_1001e288;
          local_7e8 = recovered_100024c0(((uintptr_t)pf_module_state + 0x764U));
          if (iVar16 == 0) goto LAB_10017ddf;
          uVar21 = uVar7 - 1;
          uVar9 = 0;
          local_6c0 = uVar7;
          uVar14 = extraout_ECX;
          goto LAB_10017cd1;
        }
      }
      uVar7 = uVar21 + 1;
    } while (bVar3);
  }
  pcVar10 = str_1001ec41;
  goto LAB_100150ac;
LAB_10017cd1:
  do {
    if (uVar7 < uVar9) break;
    uVar22 = uVar9;
    if (uVar9 < uVar7) {
      local_824 = (uint *)CONCAT31((int3)(uVar14 >> 8),1);
      uVar14 = uVar9;
      if (*(char *)(iVar16 + uVar9) != ',') {
        do {
          if (uVar21 == uVar14) {
            uVar13 = uVar14;
            uVar22 = uVar7;
            break;
          }
          uVar13 = uVar14 + 1;
          pcVar10 = (char *)(iVar16 + 1 + uVar14);
          uVar14 = uVar13;
          uVar22 = uVar13;
        } while (*pcVar10 != ',');
        local_824 = (uint *)CONCAT31((int3)(uVar13 >> 8),uVar22 < uVar7);
      }
    }
    else {
      local_824 = (uint *)0x0;
    }
    uVar14 = uVar22 - uVar9;
    if (uVar14 == local_7e8) {
      iVar26 = recovered_10002230((uint *)(uVar9 + iVar16),local_778,local_7e8);
      uVar14 = extraout_ECX_00;
      uVar7 = local_6c0;
      if (iVar26 == 0) {
        uVar8 = recovered_10019bd0(local_67c,local_39c,local_778);
        if ((char)uVar8 != '\0') {
          if (cVar15 != '\0') {
            bVar3 = recovered_10019f80(puVar24,uVar23,local_820);
            bVar5 = true;
            if (!bVar3) {
              bVar5 = recovered_10019f80(puVar24,uVar23,(uint *)str_1001ebf4);
            }
            bVar3 = recovered_10019f80(local_774,uVar6,local_770);
            *(byte *)(arg_ecx + 0x4a8) = bVar3 & bVar5 ^ 1;
          }
          goto switchD_10014e7d_caseD_2;
        }
        break;
      }
    }
    uVar9 = uVar22 + 1;
  } while ((char)local_824 != '\0');
LAB_10017ddf:
  pcVar10 = str_1001ec91;
LAB_100150ac:
  uVar23 = 3;
LAB_10015b2c:
  recovered_100097e0(arg_ecx,uVar23,(undefined4 *)pcVar10);
switchD_10014e7d_caseD_2:
  uVar23 = local_48c;
  uVar6 = *(uint *)(arg_ecx + 0x138) - local_48c;
  if (*(uint *)(arg_ecx + 0x138) < local_48c || uVar6 == 0) {
    *(undefined4 *)(arg_ecx + 0x138) = 0;
    return;
  }
  recovered_10001e30(*(undefined4 **)(arg_ecx + 0x134),
                     (undefined4 *)((int)*(undefined4 **)(arg_ecx + 0x134) + local_48c),uVar6);
  uVar23 = *(int *)(arg_ecx + 0x138) - uVar23;
  *(uint *)(arg_ecx + 0x138) = uVar23;
  if (uVar23 < 4) {
    return;
  }
  goto LAB_10014461;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280968
#undef DAT_1001e288
#undef DAT_1001e28d
#undef DAT_10023f04
#undef DAT_10023f24
#undef DAT_10023f44
#undef DAT_10023f78
#undef DAT_100240bc
#undef DAT_100240c0
#undef DAT_100240c8
#undef DAT_100240cc
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280968
#undef str_1001de3e
#undef str_1001eacb
#undef str_1001eadd
#undef str_1001eaf6
#undef str_1001eb13
#undef str_1001eb1f
#undef str_1001eb37
#undef str_1001eb5b
#undef str_1001eb68
#undef str_1001eb78
#undef str_1001eb9b
#undef str_1001ebbe
#undef str_1001ebd0
#undef str_1001ebe2
#undef str_1001ebf4
#undef str_1001ec11
#undef str_1001ec41
#undef str_1001ec6e
#undef str_1001ec81
#undef str_1001ec91
#undef str_1001ecfd
#undef str_1001ed10
#undef str_1001ed33
#undef str_1001ed4c
#undef str_1001ed65
#undef str_1001ed88
#undef str_1001eda1
#undef abStack_d8
#undef local_860
#undef local_858
#undef local_848
#undef local_844
#undef local_824
#undef local_820
#undef local_81b
#undef local_7fa
#undef local_7f9
#undef local_7f8
#undef local_7f7
#undef local_7f6
#undef local_7f5
#undef local_7f4
#undef local_7f3
#undef local_7f2
#undef local_7f1
#undef local_7f0
#undef local_7ef
#undef local_7ee
#undef local_7ed
#undef local_7ec
#undef local_7eb
#undef local_7ea
#undef local_7e9
#undef local_7e8
#undef local_7e4
#undef local_7c4
#undef local_7c0
#undef local_7bc
#undef local_77c
#undef local_778
#undef local_774
#undef local_770
#undef local_76c
#undef local_768
#undef local_764
#undef local_762
#undef local_761
#undef local_760
#undef local_75f
#undef local_75e
#undef local_75d
#undef local_75c
#undef local_75b
#undef local_75a
#undef local_759
#undef local_758
#undef local_757
#undef local_756
#undef local_755
#undef local_754
#undef local_753
#undef local_752
#undef local_751
#undef local_750
#undef local_74f
#undef local_74e
#undef local_74d
#undef local_74c
#undef local_74b
#undef local_74a
#undef local_749
#undef local_748
#undef local_747
#undef local_746
#undef local_745
#undef local_744
#undef local_743
#undef local_742
#undef local_741
#undef local_740
#undef local_73c
#undef local_73b
#undef local_73a
#undef local_739
#undef local_738
#undef local_737
#undef local_736
#undef local_735
#undef local_734
#undef local_733
#undef local_732
#undef local_731
#undef local_730
#undef local_72f
#undef local_72e
#undef local_72d
#undef local_72c
#undef local_72b
#undef local_72a
#undef local_729
#undef local_728
#undef local_727
#undef local_726
#undef local_725
#undef local_724
#undef local_723
#undef local_722
#undef local_721
#undef local_720
#undef local_700
#undef local_6fc
#undef local_6fb
#undef local_6fa
#undef local_6f9
#undef local_6f8
#undef local_6f7
#undef local_6f6
#undef local_6f5
#undef local_6f4
#undef local_6f3
#undef local_6f2
#undef local_6f1
#undef local_6f0
#undef local_6ef
#undef local_6ee
#undef local_6ed
#undef local_6ec
#undef local_6eb
#undef local_6ea
#undef local_6e9
#undef local_6e8
#undef local_6e7
#undef local_6e6
#undef local_6e5
#undef local_6e4
#undef local_6e3
#undef local_6e2
#undef local_6e1
#undef local_6e0
#undef local_6c0
#undef local_6bc
#undef local_6b8
#undef local_6b4
#undef local_6b0
#undef local_6af
#undef local_6ae
#undef local_6ad
#undef local_6ac
#undef local_6a8
#undef local_6a4
#undef local_6a0
#undef local_69c
#undef local_698
#undef local_690
#undef local_684
#undef local_680
#undef local_67c
#undef local_678
#undef local_674
#undef local_670
#undef local_5d0
#undef local_498
#undef local_490
#undef local_48c
#undef local_488
#undef local_484
#undef local_480
#undef local_47c
#undef local_478
#undef local_474
#undef local_470
#undef local_46c
#undef local_468
#undef local_464
#undef local_460
#undef local_45c
#undef local_458
#undef local_454
#undef local_450
#undef local_44c
#undef local_448
#undef local_444
#undef local_440
#undef local_3c0
#undef local_3b8
#undef local_3b4
#undef local_3ac
#undef local_3a8
#undef local_3a4
#undef local_3a0
#undef local_39c
#undef local_398
#undef local_397
#undef local_396
#undef local_395
#undef local_394
#undef local_393
#undef local_392
#undef local_391
#undef local_390
#undef local_38f
#undef local_38e
#undef local_38d
#undef local_38c
#undef local_38b
#undef local_38a
#undef local_389
#undef local_388
#undef local_387
#undef local_386
#undef local_385
#undef local_384
#undef local_383
#undef local_382
#undef local_381
#undef local_380
#undef local_37f
#undef local_37e
#undef local_37d
#undef local_37c
#undef local_37b
#undef local_37a
#undef local_379
#undef local_338
#undef local_2b8
#undef local_1b8
#undef local_198
#undef local_178
#undef local_159
#undef local_158
#undef local_138
#undef auStack_598
#undef local_118
#undef local_98
#undef uStack_3b3
#undef uStack_3b2
#undef uStack_3b1
#undef uStack_3b0
#undef uStack_3af
#undef uStack_3ae
#undef uStack_3ad
#undef uStack_3ab
#undef uStack_3aa
#undef uStack_3a9

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018230
 */

void recovered_10018230(int *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint in_EDX;

  if (*arg_ecx - 2U < 2) {
    *(undefined1 *)((int)arg_ecx + 0x49) = 1;
    recovered_10011550((uint *)arg_ecx,in_EDX);
  }
  else if (*arg_ecx == 1) {
    recovered_10011090((int)arg_ecx,
                       (uint)*(byte *)((int)arg_ecx + 0x4a) + (uint)*(byte *)(arg_ecx + 0x12) +
                       arg_ecx[0x11] + arg_ecx[7],0,0);
    *(undefined1 *)((int)arg_ecx + 0x4f) = 1;
    *arg_ecx = 0;
    arg_ecx[0xc] = 0;
    arg_ecx[0x10] = 0;
    *(undefined1 *)(arg_ecx + 0x16) = 0;
  }
  return;
}


#undef DAT_1001e43b
#define DAT_1001e43b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x917U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100182a0
 */

void recovered_100182a0(int arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;

  if (*(char *)(arg_ecx + 0x868) == '\x01') {
    uVar2 = recovered_100024c0(((uintptr_t)pf_module_state + 0x917U));
    iVar4 = *(int *)(arg_ecx + 0xb8c);
    if (uVar2 <= 0x8000U - iVar4) {
      puVar1 = *(undefined4 **)(arg_ecx + 0xb84);
      uVar3 = iVar4 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
      uVar6 = 0x8000 - uVar3;
      uVar5 = uVar2;
      if (uVar6 < uVar2) {
        uVar5 = uVar6;
      }
      recovered_10001d70((undefined4 *)(uVar3 + (int)puVar1),(undefined4 *)&DAT_1001e43b,uVar5);
      if (uVar6 < uVar2) {
        recovered_10001d70(puVar1,(undefined4 *)(&DAT_1001e43b + uVar5),uVar2 - uVar5);
      }
      iVar4 = *(int *)(arg_ecx + 0xb8c) + uVar2;
      *(int *)(arg_ecx + 0xb8c) = iVar4;
    }
    uVar2 = *(uint *)(arg_ecx + 0xa78);
    if ((uVar2 != 0) && (uVar2 <= 0x8000U - iVar4)) {
      puVar1 = *(undefined4 **)(arg_ecx + 0xb84);
      uVar3 = iVar4 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
      uVar6 = 0x8000 - uVar3;
      uVar5 = uVar2;
      if (uVar6 < uVar2) {
        uVar5 = uVar6;
      }
      recovered_10001d70((undefined4 *)(uVar3 + (int)puVar1),(undefined4 *)(arg_ecx + 0x878),uVar5);
      if (uVar6 < uVar2) {
        recovered_10001d70(puVar1,(undefined4 *)(arg_ecx + 0x878 + uVar5),uVar2 - uVar5);
      }
      *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar2;
    }
  }
  return;
}

#undef DAT_1001e43b

/* Recovered variadic session logging; Pooka's Free Software License. */
void recovered_100183f0(void *session,char *format,...) {
    char text[256];
    __builtin_va_list arguments;
    __builtin_va_start(arguments,format);
    recovered_10003dc0(text,sizeof(text),format,(void *)arguments);
    __builtin_va_end(arguments);
    recovered_10009110("ssh[%u %s]: %s",*(uint32_t *)((char *)session+4),(char *)session+0x120,text);
}


#define local_20 (*(uint (*)[8])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018450
 */

uint recovered_10018450(int *arg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;

  local_20[0] = 0;
  if (((char)arg_ecx[3] == '\0') && (3 < (uint)(arg_ecx[1] - arg_ecx[2]))) {
    recovered_10001d70(local_20,(undefined4 *)(arg_ecx[2] + *arg_ecx),4);
    arg_ecx[2] = arg_ecx[2] + 4;
    uVar1 = local_20[0] >> 0x18 | (local_20[0] & 0xff0000) >> 8 | (local_20[0] & 0xff00) << 8 |
            local_20[0] << 0x18;
  }
  else {
    *(undefined1 *)(arg_ecx + 3) = 1;
    uVar1 = 0;
  }
  return uVar1;
}

#undef local_20

#define local_1c (*(uint *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100184b0
 */

undefined4 recovered_100184b0(int *arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  undefined4 extraout_EAX = 0;
  uint uVar4;

  local_1c = 0;
  if (((char)arg_ecx[3] == '\0') && (3 < (uint)(arg_ecx[1] - arg_ecx[2]))) {
    recovered_10001d70(&local_1c,(undefined4 *)(arg_ecx[2] + *arg_ecx),4);
    arg_ecx[2] = arg_ecx[2] + 4;
    if ((*(byte *)(arg_ecx + 3) & 1) != 0) goto LAB_10018510;
    uVar2 = local_1c >> 0x18 | (local_1c & 0xff0000) >> 8 | (local_1c & 0xff00) << 8 |
            local_1c << 0x18;
    iVar1 = arg_ecx[2];
    if ((uint)(arg_ecx[1] - iVar1) < uVar2) goto LAB_10018510;
    local_18 = *arg_ecx;
    arg_ecx[2] = iVar1 + uVar2;
    if (local_18 != 0) {
      uVar4 = param_3 - 1;
      if (uVar2 < param_3) {
        uVar4 = uVar2;
      }
      recovered_10001d70(arg_edx,(undefined4 *)(local_18 + iVar1),uVar4);
      arg_edx = (undefined4 *)((int)arg_edx + uVar4);
      uVar3 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      goto LAB_10018516;
    }
  }
  else {
LAB_10018510:
    *(undefined1 *)(arg_ecx + 3) = 1;
  }
  uVar3 = 0;
LAB_10018516:
  *(undefined1 *)arg_edx = 0;
  return uVar3;
}

#undef local_1c
#undef local_18

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018560
 */

bool recovered_10018560(uint *arg_ecx,uint arg_edx,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  bool bVar3;

  uVar1 = recovered_100024c0((int)param_3);
  bVar3 = false;
  if ((arg_ecx != (uint *)0x0) && (uVar1 == arg_edx)) {
    iVar2 = recovered_10002230(arg_ecx,param_3,arg_edx);
    bVar3 = iVar2 == 0;
  }
  return bVar3;
}


#define local_78 (*(uint *)(pf_stack_frame + 24))
#define local_74 (*(byte * *)(pf_stack_frame + 28))
#define local_70 (*(void * *)(pf_stack_frame + 32))
#define local_6c (*(uint * *)(pf_stack_frame + 36))
#define local_68 (*(int *)(pf_stack_frame + 40))
#define local_64 (*(int *)(pf_stack_frame + 44))
#define local_60 (*(uint *)(pf_stack_frame + 48))
#define local_5c (*(uint * *)(pf_stack_frame + 52))
#define local_58 (*(byte * *)(pf_stack_frame + 56))
#define local_54 (*(uint (*)[21])(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100185b0
 */

void recovered_100185b0(int arg_ecx,byte *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[176] __attribute__((aligned(16))) = {0};

  bool bVar1;
  undefined4 *puVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  void *pvVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;

  if (*(char *)(arg_ecx + 0x80a) != '\0') {
    return;
  }
  local_54[0] = local_54[0] & 0xffffff00;
  local_64 = 0x100185c1;
  local_70 = (void *)arg_ecx;
  if (param_3 == 0) {
LAB_10018622:
    local_54[0] = local_54[0] & 0xffffff00;
LAB_10018627:
  }
  else {
    puVar7 = local_54;
    recovered_10001d70(puVar7,(undefined4 *)arg_edx,1);
    local_54[0] = 0;
    if (param_3 < 5) goto LAB_10018622;
    recovered_10001d70(puVar7,(undefined4 *)(arg_edx + 1),4);
    uVar8 = local_54[0] >> 0x18 | (local_54[0] & 0xff0000) >> 8 | (local_54[0] & 0xff00) << 8 |
            local_54[0] << 0x18;
    if (param_3 - 5 < uVar8) goto LAB_10018622;
    puVar3 = (uint *)(uVar8 + 5);
    local_74 = arg_edx;
    if (arg_edx != (byte *)0x0) {
      uVar5 = 0x3f;
      if (uVar8 < 0x3f) {
        uVar5 = uVar8;
      }
      local_6c = (uint *)(uVar8 + 5);
      recovered_10001d70(local_54,(undefined4 *)(arg_edx + 5),uVar5);
      puVar7 = (uint *)((int)local_54 + uVar5);
      puVar3 = local_6c;
    }
    *(undefined1 *)puVar7 = 0;
    local_78 = 0;
    if (param_3 - (int)puVar3 < 4) goto LAB_10018627;
    recovered_10001d70(&local_78,(undefined4 *)((int)puVar3 + (int)local_74),4);
    iVar9 = uVar8 + 9;
    puVar7 = (uint *)(local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
                     local_78 << 0x18);
    if ((uint *)(param_3 - iVar9) < puVar7) goto LAB_10018627;
    iVar4 = (int)puVar7 + iVar9;
    local_78 = 0;
    local_6c = puVar7;
    if (3 < param_3 - iVar4) {
      recovered_10001d70(&local_78,(undefined4 *)(local_74 + iVar4),4);
      local_68 = iVar4 + 4;
      local_60 = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
                 local_78 << 0x18;
      if (local_60 <= param_3 - local_68) {
        puVar7 = (uint *)(((uintptr_t)pf_module_state+0x1294U));
        puVar3 = (uint *)recovered_100024c0((int)puVar7);
        if (((local_74 != (byte *)0x0) && (puVar3 == local_6c)) &&
           (iVar4 = recovered_10002230((uint *)(local_74 + iVar9),puVar7,(uint)local_6c),
           iVar9 = local_64, iVar4 == 0)) {
          puVar7 = (uint *)(local_74 + local_68);
          local_6c = (uint *)(((uintptr_t)pf_module_state+0xaf1U));
          uVar8 = recovered_100024c0((int)local_6c);
          local_5c = puVar7;
          if ((uVar8 == local_60) &&
             (iVar4 = recovered_10002230(puVar7,local_6c,local_60), iVar4 == 0)) {
            uVar5 = local_68 + local_60;
            local_78 = local_78 & 0xffffff00;
            if (uVar5 != param_3) {
              recovered_10001d70(&local_78,(undefined4 *)(local_74 + uVar5),1);
              local_78 = 0;
              if (3 < param_3 - (uVar5 + 1)) {
                recovered_10001d70(&local_78,(undefined4 *)(local_74 + uVar5 + 1),4);
                uVar8 = local_60;
                local_68 = uVar5 + 5;
                uVar5 = local_78 >> 0x18 | (local_78 & 0xff0000) >> 8 | (local_78 & 0xff00) << 8 |
                        local_78 << 0x18;
                if (uVar5 <= param_3 - local_68) {
                  local_58 = (byte *)(iVar9 + 0xa179);
                  iVar4 = recovered_10002500(local_58,(byte *)(iVar9 + 0x5f47));
                  if (((iVar4 == 0) ||
                      (iVar4 = recovered_10002500(local_58,(byte *)local_54), iVar4 == 0)) &&
                     (bVar1 = recovered_1001cdb0((int)(local_74 + local_68),uVar5), bVar1))
                  goto LAB_1001884a;
                }
                goto LAB_1001890e;
              }
            }
            uVar8 = local_60;
          }
          else {
            uVar8 = local_60;
            uVar5 = recovered_100024c0(iVar9 + 0x5cc7);
            if ((uVar5 == uVar8) &&
               (iVar4 = recovered_10002230(local_5c,(uint *)(iVar9 + 0x5cc7),uVar8), iVar4 == 0)) {
              local_74 = (byte *)(iVar9 + 0x5f47);
              iVar4 = recovered_10002500((byte *)(iVar9 + 0xa179),local_74);
              if (((iVar4 == 0) ||
                  (iVar4 = recovered_10002500((byte *)(iVar9 + 0xa179),(byte *)local_54), iVar4 == 0
                  )) && (iVar4 = recovered_10002500((byte *)(iVar9 + 0xa1b9),local_74), iVar4 == 0))
              {
LAB_1001884a:
                pvVar6 = local_70;
                local_78 = CONCAT31(PF_PART3(local_78, 1),0x34);
                puVar2 = (undefined4 *)((int)local_70 + 0x810);
                uVar5 = recovered_100024c0((int)local_54);
                uVar8 = 0x3f;
                if (uVar5 < 0x3f) {
                  uVar8 = uVar5;
                }
                recovered_10001d70(puVar2,local_54,uVar8);
                *(undefined1 *)((int)pvVar6 + uVar8 + 0x810) = 0;
                *(undefined1 *)((int)pvVar6 + 0x80a) = 1;
                *(undefined4 *)((int)pvVar6 + 0x10) = 3;
                recovered_100183f0(pvVar6,(char *)(((uintptr_t)pf_module_state+0x12c6U)),local_54);
                recovered_10011d50((int)pvVar6,&local_78,1);
                return;
              }
            }
          }
LAB_1001890e:
          uVar5 = recovered_100024c0(iVar9 + 0x5cc7);
          if ((uVar5 != uVar8) ||
             (iVar4 = recovered_10002230(local_5c,(uint *)(iVar9 + 0x5cc7),uVar8), iVar4 != 0)) {
            recovered_100183f0(local_70,(char *)(iVar9 + 0x6841),local_54);
          }
          puVar2 = *(undefined4 **)((int)local_70 + 0x140);
          local_78 = CONCAT31(PF_PART3(local_78, 1),0x33);
          recovered_10001d70(puVar2,&local_78,1);
          uVar8 = recovered_100024c0((int)local_6c);
          local_78 = uVar8 >> 0x18 | (uVar8 & 0xff0000) >> 8 | (uVar8 & 0xff00) << 8 | uVar8 << 0x18
          ;
          recovered_10001d70((undefined4 *)((int)puVar2 + 1),&local_78,4);
          if (uVar8 < 0x1ffc) {
            if (uVar8 == 0) {
              local_78 = local_78 & 0xffffff00;
              iVar9 = 5;
            }
            else {
              recovered_10001d70((undefined4 *)((int)puVar2 + 5),local_6c,uVar8);
              iVar9 = uVar8 + 5;
              local_78 = local_78 & 0xffffff00;
              uVar5 = 0x2000;
              if (iVar9 == 0x2000) goto LAB_10018a07;
            }
            recovered_10001d70((undefined4 *)(iVar9 + (int)puVar2),&local_78,1);
            uVar5 = uVar8 + 6;
          }
          else {
            uVar5 = 5;
          }
LAB_10018a07:
          pvVar6 = local_70;
          recovered_10011d50((int)local_70,puVar2,uVar5);
          uVar8 = *(int *)((int)pvVar6 + 0x80c) + 1;
          *(uint *)((int)pvVar6 + 0x80c) = uVar8;
          if (uVar8 < 6) {
            return;
          }
          puVar2 = (undefined4 *)(((uintptr_t)pf_module_state+0x12fdU));
          uVar8 = 0xe;
          goto LAB_1001863d;
        }
      }
    }
  }
  puVar2 = (undefined4 *)(((uintptr_t)pf_module_state+0x12a3U));
  uVar8 = 7;
  pvVar6 = local_70;
LAB_1001863d:
  recovered_100097e0((int)pvVar6,uVar8,puVar2);
  return;
}

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

#define local_1d (*(char (*)[29])(pf_stack_frame + 19))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018ae0
 */

bool recovered_10018ae0(int *arg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  bool bVar1;

  local_1d[0] = '\0';
  if (((char)arg_ecx[3] == '\0') && (arg_ecx[1] != arg_ecx[2])) {
    recovered_10001d70((undefined4 *)local_1d,(undefined4 *)(arg_ecx[2] + *arg_ecx),1);
    arg_ecx[2] = arg_ecx[2] + 1;
    bVar1 = local_1d[0] != '\0';
  }
  else {
    *(undefined1 *)(arg_ecx + 3) = 1;
    bVar1 = false;
  }
  return bVar1;
}

#undef local_1d

#define local_3c (*(uint *)(pf_stack_frame + 20))
#define local_38 (*(undefined4 * *)(pf_stack_frame + 24))
#define local_34 (*(undefined4 * *)(pf_stack_frame + 28))
#define local_30 (*(int *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(uint *)(pf_stack_frame + 44))
#define local_20 (*(uint *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(uint *)(pf_stack_frame + 56))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018b30
 */

void recovered_10018b30(int arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 *puVar8;

  local_34 = (undefined4 *)0x10018b45;
  local_3c = local_3c & 0xffffff00;
  local_30 = arg_ecx;
  if (param_3 != 0) {
    recovered_10001d70(&local_3c,arg_edx,1);
    local_3c = 0;
    if (4 < param_3) {
      recovered_10001d70(&local_3c,(undefined4 *)((int)arg_edx + 1),4);
      uVar7 = local_3c >> 0x18 | (local_3c & 0xff0000) >> 8 | (local_3c & 0xff00) << 8 |
              local_3c << 0x18;
      if (uVar7 <= param_3 - 5) {
        local_3c = 0;
        if (3 < param_3 - (uVar7 + 5)) {
          recovered_10001d70(&local_3c,(undefined4 *)(uVar7 + 5 + (int)arg_edx),4);
          local_24 = local_3c;
          local_20 = local_3c >> 8 & 0xff;
          uVar2 = local_3c >> 0x10;
          uVar4 = local_3c >> 0x18;
          local_3c = 0;
          if (3 < param_3 - (uVar7 + 9)) {
            local_2c = uVar4;
            local_28 = uVar2 & 0xff;
            recovered_10001d70(&local_3c,(undefined4 *)(uVar7 + 9 + (int)arg_edx),4);
            local_18 = local_3c;
            local_3c = 0;
            if (3 < param_3 - (uVar7 + 0xd)) {
              recovered_10001d70(&local_3c,(undefined4 *)(uVar7 + 0xd + (int)arg_edx),4);
              local_1c = local_3c;
              local_38 = *(undefined4 **)(local_30 + 0x140);
              puVar1 = local_34 + 0x18c5;
              uVar2 = recovered_100024c0((int)puVar1);
              if (((uVar2 == uVar7) &&
                  (iVar3 = recovered_10002230((uint *)((int)arg_edx + 5),puVar1,uVar7),
                  iVar5 = local_30, puVar6 = local_38, iVar3 == 0)) &&
                 (*(char *)(local_30 + 0x850) != '\x01')) {
                *(undefined1 *)(local_30 + 0x850) = 1;
                *(uint *)(local_30 + 0x858) =
                     (local_28 << 8 | local_20 << 0x10 | local_24 << 0x18) + local_2c;
                uVar2 = local_1c >> 0x18 | (local_1c & 0xff0000) >> 8 | (local_1c & 0xff00) << 8 |
                        local_1c << 0x18;
                *(uint *)(local_30 + 0x85c) =
                     local_18 >> 0x18 | (local_18 & 0xff0000) >> 8 | (local_18 & 0xff00) << 8 |
                     local_18 << 0x18;
                uVar7 = 0x1000;
                if (uVar2 != 0) {
                  uVar7 = uVar2;
                }
                *(uint *)(local_30 + 0x860) = uVar7;
                *(undefined4 *)(local_30 + 0x864) = 0x20000;
                local_3c = CONCAT31(PF_PART3(local_3c, 1),0x5b);
                recovered_10001d70(local_38,&local_3c,1);
                local_3c = CONCAT13((char)local_2c,
                                    CONCAT12((char)local_28,CONCAT11((char)local_20,(char)local_24))
                                   );
                recovered_10001d70((undefined4 *)((int)puVar6 + 1),&local_3c,4);
                local_3c = 0;
                recovered_10001d70((undefined4 *)((int)puVar6 + 5),&local_3c,4);
                local_3c = 0x200;
                recovered_10001d70((undefined4 *)((int)puVar6 + 9),&local_3c,4);
                local_3c = 0x800000;
                recovered_10001d70((undefined4 *)((int)puVar6 + 0xd),&local_3c,4);
                uVar7 = 0x11;
              }
              else {
                puVar6 = local_38;
                local_3c = CONCAT31(PF_PART3(local_3c, 1),0x5c);
                recovered_10001d70(local_38,&local_3c,1);
                local_3c = CONCAT13((char)local_2c,
                                    CONCAT12((char)local_28,CONCAT11((char)local_20,(char)local_24))
                                   );
                recovered_10001d70((undefined4 *)((int)puVar6 + 1),&local_3c,4);
                iVar5 = local_30;
                local_3c = (uint)(byte)((*(char *)(local_30 + 0x850) != '\0') * '\x03' + 1) << 0x18;
                recovered_10001d70((undefined4 *)((int)puVar6 + 5),&local_3c,4);
                puVar8 = (undefined4 *)((int)local_34 + 0x6342);
                if (*(char *)(iVar5 + 0x850) != '\0') {
                  puVar8 = local_34 + 0x18c7;
                }
                uVar2 = recovered_100024c0((int)puVar8);
                local_3c = uVar2 >> 0x18 | (uVar2 & 0xff0000) >> 8 | (uVar2 & 0xff00) << 8 |
                           uVar2 << 0x18;
                recovered_10001d70((undefined4 *)((int)puVar6 + 9),&local_3c,4);
                uVar7 = 0xd;
                if (uVar2 < 0x1ff4) {
                  if (uVar2 != 0) {
                    recovered_10001d70((undefined4 *)((int)local_38 + 0xd),puVar8,uVar2);
                  }
                  uVar7 = uVar2 + 0xd;
                }
                local_34 = local_34 + 0x1641;
                uVar4 = recovered_100024c0((int)local_34);
                local_3c = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 |
                           uVar4 << 0x18;
                if (3 < uVar7 - 0x1ffd && uVar2 < 0x1ff4) {
                  recovered_10001d70((undefined4 *)((int)local_38 + uVar7),&local_3c,4);
                  uVar2 = 0x1ffc - uVar7;
                  uVar7 = uVar7 + 4;
                  if (uVar4 <= uVar2) {
                    if (uVar4 != 0) {
                      recovered_10001d70((undefined4 *)((int)local_38 + uVar7),local_34,uVar4);
                    }
                    uVar7 = uVar7 + uVar4;
                  }
                }
                iVar5 = local_30;
                puVar6 = local_38;
              }
              recovered_10011d50(iVar5,puVar6,uVar7);
              return;
            }
          }
        }
      }
    }
  }
  recovered_100097e0(local_30,2,(undefined4 *)((int)local_34 + 0x62fd));
  return;
}

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

#undef DAT_1001e5a9
#define DAT_1001e5a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa85U)))
#undef DAT_1001eeb9
#define DAT_1001eeb9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1395U)))
#undef DAT_1001eed5
#define DAT_1001eed5 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13b1U)))
#undef DAT_1001eee6
#define DAT_1001eee6 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13c2U)))
#undef DAT_10022808
#define DAT_10022808 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4ce4U)))
#undef DAT_10022908
#define DAT_10022908 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4de4U)))
#undef str_1001ea06
#define str_1001ea06 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xee2U)))
#undef str_1001eeab
#define str_1001eeab (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1387U)))
#undef str_1001eeb3
#define str_1001eeb3 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x138fU)))
#undef str_1001eebe
#define str_1001eebe (*(char (*)[1])(((uintptr_t)pf_module_state + 0x139aU)))
#undef str_1001eec7
#define str_1001eec7 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13a3U)))
#undef str_1001eed9
#define str_1001eed9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13b5U)))
#undef str_1001eee0
#define str_1001eee0 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13bcU)))
#undef str_1001eeeb
#define str_1001eeeb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13c7U)))
#undef str_1001ef00
#define str_1001ef00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13dcU)))
#define local_234 (*(uint *)(pf_stack_frame + 28))
#define local_230 (*(uint * *)(pf_stack_frame + 32))
#define local_22c (*(uint *)(pf_stack_frame + 36))
#define local_228 (*(char * *)(pf_stack_frame + 40))
#define local_224 (*(undefined4 * *)(pf_stack_frame + 44))
#define local_220 (*(uint *)(pf_stack_frame + 48))
#define local_21c (*(int *)(pf_stack_frame + 52))
#define local_218 (*(undefined1 *)(pf_stack_frame + 56))
#define local_214 (*(uint (*)[133])(pf_stack_frame + 60))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10018f50
 */

void recovered_10018f50(int arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[624] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint *puVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  undefined4 *puVar14;

  local_220 = param_3;
  local_21c = 0;
  local_218 = 0;
  local_214[0] = local_214[0] & 0xffffff00;
  if (param_3 == 0) {
    return;
  }
  local_224 = arg_edx;
  recovered_10001d70(local_214,arg_edx,1);
  local_214[0] = 0;
  if (param_3 < 5) {
    return;
  }
  recovered_10001d70(local_214,(undefined4 *)((int)arg_edx + 1),4);
  uVar4 = local_214[0];
  local_214[0] = 0;
  if (param_3 - 5 < 4) {
    return;
  }
  recovered_10001d70(local_214,(undefined4 *)((int)arg_edx + 5),4);
  uVar13 = local_214[0] >> 0x18 | (local_214[0] & 0xff0000) >> 8 | (local_214[0] & 0xff00) << 8 |
           local_214[0] << 0x18;
  if (param_3 - 9 < uVar13) {
    return;
  }
  local_214[0] = local_214[0] & 0xffffff00;
  if (uVar13 + 9 == param_3) {
    return;
  }
  recovered_10001d70(local_214,(undefined4 *)(uVar13 + 9 + (int)arg_edx),1);
  iVar6 = uVar13 + 10;
  cVar1 = (char)local_214[0];
  local_21c = iVar6;
  if ((*(char *)(arg_ecx + 0x850) != '\x01') ||
     (((uVar4 >> 0x18 != 0 || (uVar4 & 0xff0000) != 0) || (uVar4 & 0xff00) != 0) ||
      (uVar4 & 0xff) != 0)) {
    if ((char)local_214[0] == '\0' || *(char *)(arg_ecx + 0x850) != '\x01') {
      return;
    }
    puVar14 = *(undefined4 **)(arg_ecx + 0x140);
    local_214[0] = CONCAT31(PF_PART3(local_214[0], 1),100);
    recovered_10001d70(puVar14,local_214,1);
    uVar4 = *(uint *)(arg_ecx + 0x858);
    local_214[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
    recovered_10001d70((undefined4 *)((int)puVar14 + 1),local_214,4);
    goto LAB_10019915;
  }
  puVar8 = (uint *)((int)arg_edx + 9);
  local_230 = (uint *)str_1001eeab;
  uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1387U));
  if ((uVar4 != uVar13) || (iVar5 = recovered_10002230(puVar8,local_230,uVar13), iVar5 != 0)) {
    uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x138fU));
    if ((uVar4 == uVar13) &&
       (iVar6 = recovered_10002230(puVar8,(uint *)str_1001eeb3,uVar13), iVar6 == 0)) {
      if (*(int *)(arg_ecx + 0x874) == 0) {
        *(undefined4 *)(arg_ecx + 0x874) = 1;
        *(undefined4 *)(arg_ecx + 0xa78) = 0;
        iVar6 = *(int *)(arg_ecx + 0xb8c);
        if (iVar6 - 0x8001U < 0xfffffffe) {
          puVar14 = *(undefined4 **)(arg_ecx + 0xb84);
          uVar4 = iVar6 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
          uVar13 = 0x8000 - uVar4;
          if (1 < uVar13) {
            uVar13 = 2;
          }
          recovered_10001d70((undefined4 *)((int)puVar14 + uVar4),(undefined4 *)&DAT_1001e5a9,uVar13
                            );
          if (uVar4 == 0x7fff) {
            recovered_10001d70(puVar14,(undefined4 *)(&DAT_1001e5a9 + uVar13),2 - uVar13);
          }
          iVar6 = *(int *)(arg_ecx + 0xb8c) + 2;
          *(int *)(arg_ecx + 0xb8c) = iVar6;
        }
        if (DAT_10022808 != '\0') {
          pcVar9 = &DAT_10022808;
          local_230 = (uint *)&DAT_1001e5a9;
          pcVar11 = pcVar9;
          cVar3 = DAT_10022808;
          do {
            if (cVar3 == '\0') {
LAB_100193e3:
              uVar4 = (int)pcVar9 - (int)pcVar11;
              if ((pcVar11 <= pcVar9 && uVar4 != 0) && (uVar4 <= 0x8000U - iVar6)) {
                puVar14 = *(undefined4 **)(arg_ecx + 0xb84);
                uVar13 = iVar6 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
                uVar12 = 0x8000 - uVar13;
                local_22c = uVar4;
                if (uVar12 < uVar4) {
                  local_22c = uVar12;
                }
                local_228 = pcVar11;
                recovered_10001d70((undefined4 *)(uVar13 + (int)puVar14),(undefined4 *)pcVar11,
                                   local_22c);
                if (uVar12 < uVar4) {
                  recovered_10001d70(puVar14,(undefined4 *)(local_228 + local_22c),uVar4 - local_22c
                                    );
                }
                iVar6 = uVar4 + *(int *)(arg_ecx + 0xb8c);
                *(int *)(arg_ecx + 0xb8c) = iVar6;
                cVar3 = *pcVar9;
              }
              if (cVar3 == '\0') goto LAB_10019776;
              if (iVar6 - 0x8001U < 0xfffffffe) {
                uVar4 = iVar6 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
                uVar13 = 0x8000 - uVar4;
                if (1 < uVar13) {
                  uVar13 = 2;
                }
                puVar14 = *(undefined4 **)(arg_ecx + 0xb84);
                recovered_10001d70((undefined4 *)((int)puVar14 + uVar4),local_230,uVar13);
                if (uVar4 == 0x7fff) {
                  recovered_10001d70(puVar14,(undefined4 *)(&DAT_1001e5a9 + uVar13),2 - uVar13);
                }
                iVar6 = *(int *)(arg_ecx + 0xb8c) + 2;
                *(int *)(arg_ecx + 0xb8c) = iVar6;
              }
LAB_100193c6:
              pcVar11 = pcVar9 + 1;
            }
            else {
              if (cVar3 == '\r') {
                uVar4 = (int)pcVar9 - (int)pcVar11;
                if ((pcVar11 <= pcVar9 && uVar4 != 0) && (uVar4 <= 0x8000U - iVar6)) {
                  local_228 = *(char **)(arg_ecx + 0xb84);
                  uVar12 = iVar6 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
                  uVar13 = 0x8000 - uVar12;
                  local_22c = uVar4;
                  if (uVar13 < uVar4) {
                    local_22c = uVar13;
                  }
                  recovered_10001d70((undefined4 *)(local_228 + uVar12),(undefined4 *)pcVar11,
                                     local_22c);
                  if (uVar13 < uVar4) {
                    recovered_10001d70((undefined4 *)local_228,(undefined4 *)(pcVar11 + local_22c),
                                       uVar4 - local_22c);
                  }
                  iVar6 = uVar4 + *(int *)(arg_ecx + 0xb8c);
                  *(int *)(arg_ecx + 0xb8c) = iVar6;
                }
                if (iVar6 - 0x8001U < 0xfffffffe) {
                  uVar4 = iVar6 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
                  uVar13 = 0x8000 - uVar4;
                  if (1 < uVar13) {
                    uVar13 = 2;
                  }
                  puVar14 = *(undefined4 **)(arg_ecx + 0xb84);
                  recovered_10001d70((undefined4 *)((int)puVar14 + uVar4),local_230,uVar13);
                  if (uVar4 == 0x7fff) {
                    recovered_10001d70(puVar14,(undefined4 *)(&DAT_1001e5a9 + uVar13),2 - uVar13);
                  }
                  iVar6 = *(int *)(arg_ecx + 0xb8c) + 2;
                  *(int *)(arg_ecx + 0xb8c) = iVar6;
                }
                if (pcVar9[1] == '\n') {
                  pcVar9 = pcVar9 + 1;
                }
                goto LAB_100193c6;
              }
              if (cVar3 == '\n') goto LAB_100193e3;
            }
            cVar3 = pcVar9[1];
            pcVar9 = pcVar9 + 1;
          } while( true );
        }
        recovered_10004b20((char *)local_214,0x100,str_1001eeeb,&DAT_10022908);
        uVar4 = recovered_100024c0((int)local_214);
        if (uVar4 <= 0x8000U - *(int *)(arg_ecx + 0xb8c)) {
          puVar14 = *(undefined4 **)(arg_ecx + 0xb84);
          uVar12 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
          uVar10 = 0x8000 - uVar12;
          uVar13 = uVar4;
          if (uVar10 < uVar4) {
            uVar13 = uVar10;
          }
          recovered_10001d70((undefined4 *)(uVar12 + (int)puVar14),local_214,uVar13);
          if (uVar10 < uVar4) {
            recovered_10001d70(puVar14,(undefined4 *)((int)local_214 + uVar13),uVar4 - uVar13);
          }
          *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar4;
        }
        goto LAB_1001989a;
      }
LAB_1001923d:
      cVar3 = '\0';
    }
    else {
      uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1395U));
      if ((uVar4 == uVar13) &&
         (iVar6 = recovered_10002230(puVar8,(uint *)&DAT_1001eeb9,uVar13), iVar6 == 0)) {
        if (*(int *)(arg_ecx + 0x874) == 0) {
          uVar7 = recovered_100184b0((int *)&local_224,local_214,0x200);
          if ((char)uVar7 == '\0') goto LAB_1001923d;
          *(undefined4 *)(arg_ecx + 0x874) = 2;
          recovered_100183f0((void *)arg_ecx,str_1001eebe,local_214);
          uVar7 = recovered_1001ce40((byte *)local_214);
          if ((char)uVar7 == '\0') {
            recovered_1001d120(arg_ecx,local_214);
            goto LAB_100198c9;
          }
          cVar3 = '\x01';
          if (*(char *)(arg_ecx + 0xdab) == '\0') {
            *(undefined1 *)(arg_ecx + 0xdab) = 1;
            *(undefined4 *)(arg_ecx + 0xdb0) = 0;
          }
        }
        else {
          cVar3 = '\0';
        }
      }
      else {
        uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x13a3U));
        if ((uVar4 == uVar13) &&
           (iVar6 = recovered_10002230(puVar8,(uint *)str_1001eec7,uVar13), iVar6 == 0)) {
          uVar4 = recovered_10018450((int *)&local_224);
          *(uint *)(arg_ecx + 0x86c) = uVar4;
          uVar4 = recovered_10018450((int *)&local_224);
          *(uint *)(arg_ecx + 0x870) = uVar4;
          goto LAB_100198c9;
        }
        bVar2 = recovered_10018560(puVar8,uVar13,(uint *)&DAT_1001eed5);
        if (((bVar2) || (bVar2 = recovered_10018560(puVar8,uVar13,(uint *)str_1001eed9), bVar2)) ||
           (bVar2 = recovered_10018560(puVar8,uVar13,(uint *)str_1001eee0), bVar2)) {
          cVar3 = '\x01';
        }
        else {
          cVar3 = '\0';
        }
      }
    }
    goto joined_r0x1001925a;
  }
  local_214[0] = 0;
  if (param_3 - iVar6 < 4) {
LAB_100192be:
    local_214[0] = local_214[0] & 0xffffff00;
LAB_100192c3:
    *(undefined4 *)(arg_ecx + 0x86c) = 0;
    cVar3 = '\0';
    uVar4 = 0;
  }
  else {
    recovered_10001d70(local_214,(undefined4 *)(iVar6 + (int)arg_edx),4);
    iVar6 = uVar13 + 0xe;
    uVar4 = local_214[0] >> 0x18 | (local_214[0] & 0xff0000) >> 8 | (local_214[0] & 0xff00) << 8 |
            local_214[0] << 0x18;
    if (param_3 - iVar6 < uVar4) goto LAB_100192be;
    iVar5 = uVar4 + iVar6;
    puVar8 = local_214;
    if (arg_edx != (undefined4 *)0x0) {
      uVar13 = 0x1f;
      if (uVar4 < 0x1f) {
        uVar13 = uVar4;
      }
      recovered_10001d70(local_214,(undefined4 *)(iVar6 + (int)arg_edx),uVar13);
      puVar8 = (uint *)((int)local_214 + uVar13);
    }
    *(undefined1 *)puVar8 = 0;
    local_234 = 0;
    if (param_3 - iVar5 < 4) goto LAB_100192c3;
    recovered_10001d70(&local_234,(undefined4 *)((int)arg_edx + iVar5),4);
    *(uint *)(arg_ecx + 0x86c) =
         local_234 >> 0x18 | (local_234 & 0xff0000) >> 8 | (local_234 & 0xff00) << 8 |
         local_234 << 0x18;
    local_234 = 0;
    cVar3 = '\0';
    uVar4 = 0;
    if (3 < param_3 - (iVar5 + 4)) {
      recovered_10001d70(&local_234,(undefined4 *)((int)arg_edx + iVar5 + 4),4);
      uVar4 = local_234 >> 0x18 | (local_234 & 0xff0000) >> 8 | (local_234 & 0xff00) << 8 |
              local_234 << 0x18;
      cVar3 = '\x01';
    }
  }
  *(uint *)(arg_ecx + 0x870) = uVar4;
  *(char *)(arg_ecx + 0x868) = cVar3;
joined_r0x1001925a:
  if (cVar1 == '\0') {
    return;
  }
  puVar14 = *(undefined4 **)(arg_ecx + 0x140);
  PF_PART3(local_214[0], 1) = (undefined3)(local_214[0] >> 8);
  local_214[0] = CONCAT31(PF_PART3(local_214[0], 1),'d' - cVar3);
  recovered_10001d70(puVar14,local_214,1);
  uVar4 = *(uint *)(arg_ecx + 0x858);
  local_214[0] = uVar4 >> 0x18 | (uVar4 & 0xff0000) >> 8 | (uVar4 & 0xff00) << 8 | uVar4 << 0x18;
  recovered_10001d70((undefined4 *)((int)puVar14 + 1),local_214,4);
LAB_10019915:
  recovered_10011d50(arg_ecx,puVar14,5);
  return;
LAB_10019776:
  if (iVar6 - 0x8001U < 0xfffffffc) {
    puVar14 = *(undefined4 **)(arg_ecx + 0xb84);
    uVar4 = iVar6 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
    uVar13 = 0x8000 - uVar4;
    if (3 < uVar13) {
      uVar13 = 4;
    }
    recovered_10001d70((undefined4 *)((int)puVar14 + uVar4),(undefined4 *)&DAT_1001eee6,uVar13);
    if (0x7ffc < uVar4) {
      recovered_10001d70(puVar14,(undefined4 *)(&DAT_1001eee6 + uVar13),4 - uVar13);
    }
    *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + 4;
  }
LAB_1001989a:
  recovered_100182a0(arg_ecx);
  recovered_10009110(str_1001ea06,*(uint *)(arg_ecx + 4),(void *)(arg_ecx + 0x11c),str_1001ef00);
LAB_100198c9:
  cVar3 = '\x01';
  goto joined_r0x1001925a;
}

#undef DAT_1001e5a9
#undef DAT_1001eeb9
#undef DAT_1001eed5
#undef DAT_1001eee6
#undef DAT_10022808
#undef DAT_10022908
#undef str_1001ea06
#undef str_1001eeab
#undef str_1001eeb3
#undef str_1001eebe
#undef str_1001eec7
#undef str_1001eed9
#undef str_1001eee0
#undef str_1001eeeb
#undef str_1001ef00
#undef local_234
#undef local_230
#undef local_22c
#undef local_228
#undef local_224
#undef local_220
#undef local_21c
#undef local_218
#undef local_214

#define local_20 (*(uint *)(pf_stack_frame + 16))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019940
 */

void recovered_10019940(int arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;
  uint uVar2;
  undefined4 *arg_edx_00;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;

  local_20 = local_20 & 0xffffff00;
  if (param_3 != 0) {
    local_1c = 0x10019951;
    recovered_10001d70(&local_20,arg_edx,1);
    local_20 = 0;
    if (4 < param_3) {
      recovered_10001d70(&local_20,(undefined4 *)((int)arg_edx + 1),4);
      local_18 = local_20;
      local_20 = 0;
      if (3 < param_3 - 5) {
        recovered_10001d70(&local_20,(undefined4 *)((int)arg_edx + 5),4);
        uVar3 = local_20 >> 0x18 | (local_20 & 0xff0000) >> 8 | (local_20 & 0xff00) << 8 |
                local_20 << 0x18;
        if (((uVar3 <= param_3 - 9) && (*(char *)(arg_ecx + 0x850) == '\x01')) &&
           (((local_18 >> 0x18 == 0 && (local_18 & 0xff0000) == 0) && (local_18 & 0xff00) == 0) &&
            (local_18 & 0xff) == 0)) {
          uVar4 = *(uint *)(arg_ecx + 0x864) - uVar3;
          if (*(uint *)(arg_ecx + 0x864) < uVar3) {
            recovered_100097e0(arg_ecx,2,(undefined4 *)(local_1c + 0x55ce));
          }
          else {
            *(uint *)(arg_ecx + 0x864) = uVar4;
            if (((*(int *)(arg_ecx + 0x874) == 1) && (uVar3 != 0)) &&
               (*(char *)(arg_ecx + 0xdab) == '\0')) {
              uVar4 = 0;
              do {
                if (((*(char *)(arg_ecx + 0xb90) == '\0') && (*(char *)(arg_ecx + 0xb91) == '\0'))
                   && (*(char *)(arg_ecx + 0xda8) != '\x01')) {
                  recovered_1001d2b0(arg_ecx,(uint)*(byte *)((int)arg_edx + uVar4 + 9));
                  if (*(char *)(arg_ecx + 0xdab) != '\0') break;
                }
                else {
                  uVar2 = *(uint *)(arg_ecx + 0xb80);
                  if (uVar2 < 0x100) {
                    uVar1 = *(undefined1 *)((int)arg_edx + uVar4 + 9);
                    local_1c = CONCAT31(PF_PART3(local_1c, 1),uVar1);
                    *(uint *)(arg_ecx + 0xb80) = uVar2 + 1;
                    *(undefined1 *)(arg_ecx + 0xa7e + uVar2) = uVar1;
                  }
                }
                uVar4 = uVar4 + 1;
              } while (uVar4 < uVar3);
              uVar4 = *(uint *)(arg_ecx + 0x864);
            }
            if (uVar4 < 0x10000) {
              arg_edx_00 = *(undefined4 **)(arg_ecx + 0x140);
              local_20 = CONCAT31(PF_PART3(local_20, 1),0x5d);
              recovered_10001d70(arg_edx_00,&local_20,1);
              uVar3 = *(uint *)(arg_ecx + 0x858);
              local_20 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         uVar3 << 0x18;
              recovered_10001d70((undefined4 *)((int)arg_edx_00 + 1),&local_20,4);
              uVar3 = 0x20000 - *(int *)(arg_ecx + 0x864);
              local_20 = uVar3 >> 0x18 | (uVar3 & 0xff0000) >> 8 | (uVar3 & 0xff00) << 8 |
                         *(int *)(arg_ecx + 0x864) * -0x1000000;
              recovered_10001d70((undefined4 *)((int)arg_edx_00 + 5),&local_20,4);
              uVar5 = recovered_10011d50(arg_ecx,arg_edx_00,9);
              if ((char)uVar5 != '\0') {
                *(undefined4 *)(arg_ecx + 0x864) = 0x20000;
              }
            }
          }
        }
      }
    }
  }
  return;
}

#undef local_20
#undef local_1c
#undef local_18

#define local_15 (*(undefined1 *)(pf_stack_frame + 27))
#define local_14 (*(uint (*)[5])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019b60
 */

void recovered_10019b60(int arg_ecx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  undefined4 *arg_edx;
  uint uVar1;

  arg_edx = *(undefined4 **)(arg_ecx + 0x140);
  recovered_10001d70(arg_edx,(undefined4 *)&local_15,1);
  uVar1 = *(uint *)(arg_ecx + 0x858);
  local_14[0] = uVar1 >> 0x18 | (uVar1 & 0xff0000) >> 8 | (uVar1 & 0xff00) << 8 | uVar1 << 0x18;
  recovered_10001d70((undefined4 *)((int)arg_edx + 1),local_14,4);
  recovered_10011d50(arg_ecx,arg_edx,5);
  return;
}

#undef local_15
#undef local_14

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019bd0
 */

undefined4 recovered_10019bd0(int arg_ecx,uint arg_edx,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar1 = recovered_100024c0((int)param_3);
  uVar2 = 0;
  if (arg_ecx != 0) {
    do {
      if (arg_edx < uVar2) {
        return 0;
      }
      uVar5 = uVar2;
      if (uVar2 < arg_edx) {
        bVar6 = true;
        uVar4 = uVar2;
        if (*(char *)(arg_ecx + uVar2) != ',') {
          do {
            uVar4 = uVar4 + 1;
            if (arg_edx == uVar4) {
              uVar5 = arg_edx;
              goto LAB_10019c48;
            }
          } while (*(char *)(arg_ecx + uVar4) != ',');
          uVar5 = uVar4;
LAB_10019c48:
          bVar6 = uVar4 < arg_edx;
        }
      }
      else {
        bVar6 = false;
      }
      if ((uVar5 - uVar2 == uVar1) &&
         (iVar3 = recovered_10002230((uint *)(uVar2 + arg_ecx),param_3,uVar1), iVar3 == 0)) {
        return 1;
      }
      uVar2 = uVar5 + 1;
    } while (bVar6);
  }
  return 0;
}


#undef str_1001ecad
#define str_1001ecad (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1189U)))
#undef str_1001eccb
#define str_1001eccb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11a7U)))
#undef str_1001ecd6
#define str_1001ecd6 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11b2U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019c90
 */

char recovered_10019c90(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar1 = 0;
  if (arg_ecx != 0) {
LAB_10019cf9:
    do {
      uVar5 = uVar1;
      if (uVar1 < arg_edx) {
        bVar6 = true;
        uVar4 = uVar1;
        if (*(char *)(arg_ecx + uVar1) != ',') {
          do {
            uVar4 = uVar4 + 1;
            if (arg_edx == uVar4) {
              uVar5 = arg_edx;
              goto LAB_10019d4d;
            }
          } while (*(char *)(arg_ecx + uVar4) != ',');
          uVar5 = uVar4;
LAB_10019d4d:
          bVar6 = uVar4 < arg_edx;
        }
      }
      else {
        bVar6 = false;
      }
      puVar3 = (uint *)(arg_ecx + uVar1);
      uVar1 = uVar5 - uVar1;
      uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1189U));
      if ((uVar4 == uVar1) &&
         (iVar2 = recovered_10002230(puVar3,(uint *)str_1001ecad,uVar1), iVar2 == 0)) {
        uVar1 = 1;
        goto LAB_10019e16;
      }
      uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x11a7U));
      if ((uVar4 == uVar1) &&
         (iVar2 = recovered_10002230(puVar3,(uint *)str_1001eccb,uVar1), iVar2 == 0)) {
        uVar1 = 3;
        goto LAB_10019e16;
      }
      uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x11b2U));
      if (uVar4 == uVar1) {
        iVar2 = recovered_10002230(puVar3,(uint *)str_1001ecd6,uVar1);
        if (!(bool)(bVar6 & iVar2 != 0)) {
          uVar1 = (uint)(iVar2 == 0) * 2;
          goto LAB_10019e16;
        }
        uVar1 = uVar5 + 1;
        if (arg_edx < uVar1) break;
        goto LAB_10019cf9;
      }
      uVar1 = uVar5 + 1;
    } while ((bool)(bVar6 & uVar1 <= arg_edx));
    uVar1 = 0;
  }
LAB_10019e16:
  return (char)uVar1;
}

#undef str_1001ecad
#undef str_1001eccb
#undef str_1001ecd6

#undef str_1001ece1
#define str_1001ece1 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11bdU)))
#undef str_1001ecef
#define str_1001ecef (*(char (*)[1])(((uintptr_t)pf_module_state + 0x11cbU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019e20
 */

char recovered_10019e20(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;

  uVar1 = 0;
  if (arg_ecx != 0) {
LAB_10019e7c:
    do {
      uVar4 = uVar1;
      if (uVar1 < arg_edx) {
        bVar6 = true;
        uVar3 = uVar1;
        if (*(char *)(arg_ecx + uVar1) != ',') {
          do {
            uVar3 = uVar3 + 1;
            if (arg_edx == uVar3) {
              uVar4 = arg_edx;
              goto LAB_10019ece;
            }
          } while (*(char *)(arg_ecx + uVar3) != ',');
          uVar4 = uVar3;
LAB_10019ece:
          bVar6 = uVar3 < arg_edx;
        }
      }
      else {
        bVar6 = false;
      }
      uVar5 = uVar4 - uVar1;
      uVar3 = recovered_100024c0(((uintptr_t)pf_module_state + 0x11bdU));
      if ((uVar3 == uVar5) &&
         (iVar2 = recovered_10002230((uint *)(arg_ecx + uVar1),(uint *)str_1001ece1,uVar5),
         iVar2 == 0)) {
        uVar1 = 1;
        goto LAB_10019f6a;
      }
      uVar3 = recovered_100024c0(((uintptr_t)pf_module_state + 0x11cbU));
      if (uVar3 == uVar5) {
        iVar2 = recovered_10002230((uint *)(arg_ecx + uVar1),(uint *)str_1001ecef,uVar5);
        if (!(bool)(bVar6 & iVar2 != 0)) {
          uVar1 = (uint)(iVar2 == 0) * 2;
          goto LAB_10019f6a;
        }
        uVar1 = uVar4 + 1;
        if (arg_edx < uVar1) break;
        goto LAB_10019e7c;
      }
      uVar1 = uVar4 + 1;
    } while ((bool)(bVar6 & uVar1 <= arg_edx));
    uVar1 = 0;
  }
LAB_10019f6a:
  return (char)uVar1;
}

#undef str_1001ece1
#undef str_1001ecef

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10019f80
 */

bool recovered_10019f80(uint *arg_ecx,uint arg_edx,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  bool bVar4;

  uVar1 = recovered_100024c0((int)param_3);
  uVar3 = 0;
  if (arg_edx != 0) {
    do {
      if (*(char *)((int)arg_ecx + uVar3) == ',') goto LAB_10019fbd;
      uVar3 = uVar3 + 1;
    } while (arg_edx != uVar3);
    uVar3 = arg_edx;
  }
LAB_10019fbd:
  if (uVar3 == uVar1) {
    iVar2 = recovered_10002230(arg_ecx,param_3,uVar1);
    bVar4 = iVar2 == 0;
  }
  else {
    bVar4 = false;
  }
  return bVar4;
}


/* Recovered clamped Montgomery ladder over the native sixteen-limb field.
 * Pooka's Free Software License. */
static void pf_curve_product(int64_t out[16],const int64_t a[16],const int64_t b[16]) {
    recovered_1000c480(out,a,b);
}
static void pf_curve_swap(int64_t a[16],int64_t b[16],unsigned bit) {
    int64_t mask=-(int64_t)bit;
    for(unsigned i=0;i<16;i++){int64_t change=(a[i]^b[i])&mask;a[i]^=change;b[i]^=change;}
}
void recovered_10019fe0(byte *output,const byte *key,const byte *point) {
    uint8_t scalar[32];
    int64_t x[16],a[16]={1},b[16],c[16]={0},d[16]={1},e[16],f[16];
    const int64_t constant[16]={121665};
    for(unsigned i=0;i<32;i++)scalar[i]=((const uint8_t *)key)[i];
    scalar[0]&=248;scalar[31]=(scalar[31]&127)|64;
    for(unsigned i=0;i<16;i++) {
        const uint8_t *p=(const uint8_t *)(uintptr_t)point+2*i;
        x[i]=b[i]=(int64_t)p[0]+((int64_t)p[1]<<8);
    }
    x[15]&=0x7fff;b[15]&=0x7fff;
    for(int index=254;index>=0;index--) {
        unsigned bit=(scalar[index>>3]>>(index&7))&1;
        pf_curve_swap(a,b,bit);pf_curve_swap(c,d,bit);
        for(unsigned i=0;i<16;i++){e[i]=a[i]+c[i];a[i]-=c[i];c[i]=b[i]+d[i];b[i]-=d[i];}
        pf_curve_product(d,e,e);pf_curve_product(f,a,a);
        pf_curve_product(a,c,a);pf_curve_product(c,b,e);
        for(unsigned i=0;i<16;i++){e[i]=a[i]+c[i];a[i]-=c[i];}
        pf_curve_product(b,a,a);
        for(unsigned i=0;i<16;i++)c[i]=d[i]-f[i];
        pf_curve_product(a,c,constant);
        for(unsigned i=0;i<16;i++)a[i]+=d[i];
        pf_curve_product(c,c,a);pf_curve_product(a,d,f);
        pf_curve_product(d,b,x);pf_curve_product(b,e,e);
        pf_curve_swap(a,b,bit);pf_curve_swap(c,d,bit);
    }
    int64_t inverse[16];
    for(unsigned i=0;i<16;i++)inverse[i]=c[i];
    for(int index=253;index>=0;index--) {
        pf_curve_product(inverse,inverse,inverse);
        if(index!=2 && index!=4)pf_curve_product(inverse,inverse,c);
    }
    pf_curve_product(a,a,inverse);
    recovered_1000eec0((uint8_t *)(uintptr_t)output,a);
    for(unsigned i=0;i<32;i++)((volatile uint8_t *)scalar)[i]=0;
}


#define local_2c (*(uint *)(pf_stack_frame + 212))
#define local_6c (*(undefined4 (*)[27])(pf_stack_frame + 148))
#define local_ac (*(undefined4 (*)[43])(pf_stack_frame + 84))
#define local_ec (*(undefined4 (*)[59])(pf_stack_frame + 20))
#define local_28 (*(int *)(pf_stack_frame + 216))
#define local_24 (*(uint *)(pf_stack_frame + 220))
#define local_20 (*(int *)(pf_stack_frame + 224))
#define local_1c (*(byte * *)(pf_stack_frame + 228))
#define local_18 (*(uint *)(pf_stack_frame + 232))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001be40
 */

void recovered_1001be40(byte *arg_ecx,int arg_edx,int param_3,uint param_4,undefined4 *param_5,
                       uint param_6,int param_7,char param_8)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined1 uVar2;
  byte bVar5;
  ushort uVar3;
  uint uVar4;
  byte bVar6;
  ushort uVar7;
  uint uVar8;
  byte *pbVar9;

  local_28 = 0x1001be58;
  recovered_10002000(arg_ecx,0,0x19c);
  *(int *)arg_ecx = arg_edx;
  *(int *)(arg_ecx + 4) = param_3;
  arg_ecx[8] = 1;
  if (arg_edx == 1) {
    recovered_1001c8a0(param_4,param_5,param_6,param_7,param_8 + 'C',(undefined4 *)(arg_ecx + 9));
    arg_ecx[0x198] = 8;
    arg_ecx[0x199] = 0;
    arg_ecx[0x19a] = 0;
    arg_ecx[0x19b] = 0;
    arg_ecx[0x194] = 0x10;
    arg_ecx[0x195] = 0;
    arg_ecx[0x196] = 0;
    arg_ecx[0x197] = 0;
  }
  else {
    local_2c = (uint)(arg_edx == 3) * 0x10;
    uVar4 = local_2c + 0x10;
    local_20 = arg_edx;
    recovered_1001c8a0(param_4,param_5,param_6,param_7,param_8 + 'A',local_6c);
    recovered_1001c8a0(param_4,param_5,param_6,param_7,param_8 + 'C',local_ac);
    recovered_1001c8a0(param_4,param_5,param_6,param_7,param_8 + 'E',local_ec);
    pbVar9 = arg_ecx + 0x4c;
    uVar8 = uVar4 >> 2;
    *(uint *)(arg_ecx + 0x13c) = uVar8 + 6;
    recovered_10001d70((undefined4 *)pbVar9,local_ac,uVar4);
    local_18 = uVar8 - 1;
    local_2c = local_2c + 0x2c;
    uVar4 = uVar8;
    do {
      bVar1 = arg_ecx[uVar4 * 4 + 0x49];
      uVar3 = CONCAT11(bVar1,arg_ecx[uVar4 * 4 + 0x48]);
      bVar5 = arg_ecx[uVar4 * 4 + 0x4a];
      bVar6 = arg_ecx[uVar4 * 4 + 0x4b];
      if ((uVar4 & local_18) == 0) {
        uVar7 = CONCAT11(bVar5,arg_ecx[uVar4 * 4 + 0x48]);
        uVar3 = CONCAT11(bVar6,*(byte *)(((uintptr_t)pf_module_state+0x90cU) + uVar4 / uVar8) ^
                               *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uint)bVar1));
LAB_1001c057:
        uVar2 = *(undefined1 *)(((uintptr_t)pf_module_state+0x664U) + (uint)(uVar7 >> 8));
        bVar5 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (uint)(uVar3 >> 8));
        bVar6 = *(byte *)(((uintptr_t)pf_module_state+0x664U) + (CONCAT11(uVar2,(char)uVar7) & 0xff));
        uVar3 = CONCAT11(uVar2,(char)uVar3);
      }
      else if ((local_20 == 3) && ((uVar4 & local_18) == 4)) {
        uVar7 = CONCAT11(bVar1,bVar6);
        uVar3 = CONCAT11(bVar5,*(undefined1 *)(((uintptr_t)pf_module_state+0x664U) + (uVar3 & 0xff)));
        goto LAB_1001c057;
      }
      arg_ecx[uVar4 * 4 + 0x4c] = (byte)uVar3 ^ *pbVar9;
      arg_ecx[uVar4 * 4 + 0x4d] = (byte)(uVar3 >> 8) ^ pbVar9[1];
      arg_ecx[uVar4 * 4 + 0x4e] = bVar5 ^ pbVar9[2];
      arg_ecx[uVar4 * 4 + 0x4f] = bVar6 ^ pbVar9[3];
      uVar4 = uVar4 + 1;
      pbVar9 = pbVar9 + 4;
    } while (local_2c != uVar4);
    local_24 = uVar8;
    local_1c = arg_ecx;
    recovered_10001d70((undefined4 *)(arg_ecx + 0x140),local_6c,0x10);
    uVar4 = (uint)(param_3 == 2) * 0x20 + 0x20;
    *(uint *)(arg_ecx + 400) = uVar4;
    recovered_10001d70((undefined4 *)(arg_ecx + 0x150),local_ec,uVar4);
    *(undefined4 *)(arg_ecx + 0x194) = *(undefined4 *)(arg_ecx + 400);
    arg_ecx[0x198] = 0x10;
    arg_ecx[0x199] = 0;
    arg_ecx[0x19a] = 0;
    arg_ecx[0x19b] = 0;
  }
  return;
}

#undef local_2c
#undef local_6c
#undef local_ac
#undef local_ec
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1001e330
#define DAT_1001e330 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x80cU)))
#define local_38 (*(uint * *)(pf_stack_frame + 24))
#define local_34 (*(int *)(pf_stack_frame + 28))
#define local_24 (*(int *)(pf_stack_frame + 44))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c5b0
 */

void recovered_1001c5b0(uint *arg_ecx,uint *arg_edx)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  int *piVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  uint *puVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;

  puVar6 = arg_edx + 0x3e;
  iVar11 = 0x33;
  uVar15 = 0x3f;
  do {
    uVar7 = 0;
    local_24 = -0xa0;
    puVar12 = &DAT_1001e330;
    iVar10 = 0;
    do {
      lVar4 = (ulonglong)arg_edx[(uintptr_t)uVar15 * 2] * (ulonglong)*puVar12;
      uVar5 = (uint)lVar4;
      uVar8 = uVar7 + uVar5 * -0x10;
      puVar1 = (uint *)((int)puVar6 + local_24 + 0xa0);
      uVar13 = uVar8 + *puVar1;
      iVar14 = ((iVar10 - (((int)((ulonglong)lVar4 >> 0x20) + puVar12[1] * arg_edx[(uintptr_t)uVar15 * 2] +
                           arg_edx[(uintptr_t)uVar15 * 2 + 1] * *puVar12) * 0x10 | uVar5 >> 0x1c)) -
               (uint)(uVar7 < uVar5 * 0x10)) + *(int *)((int)puVar6 + local_24 + 0xa4) +
               (uint)CARRY4(uVar8,*puVar1);
      iVar9 = iVar14 + (uint)(0xffffff7f < uVar13);
      uVar7 = iVar9 * 0x1000000 | uVar13 + 0x80 >> 8;
      iVar10 = iVar9 >> 8;
      uVar5 = uVar13 + 0x80 & 0xffffff00;
      *(uint *)((int)puVar6 + local_24 + 0xa0) = uVar13 - uVar5;
      *(uint *)((int)puVar6 + local_24 + 0xa4) = (iVar14 - iVar9) - (uint)(uVar13 < uVar5);
      puVar12 = puVar12 + 2;
      local_24 = local_24 + 8;
    } while (local_24 != 0);
    puVar12 = arg_edx + iVar11 * 2;
    uVar5 = *puVar12;
    *puVar12 = *puVar12 + uVar7;
    arg_edx[iVar11 * 2 + 1] = arg_edx[iVar11 * 2 + 1] + iVar10 + (uint)CARRY4(uVar5,uVar7);
    arg_edx[(uintptr_t)uVar15 * 2 + 1] = 0;
    arg_edx[(uintptr_t)uVar15 * 2] = 0;
    iVar11 = iVar11 + -1;
    puVar6 = puVar6 + -2;
    bVar3 = 0x20 < uVar15;
    uVar15 = uVar15 - 1;
  } while (bVar3);
  uVar15 = 0;
  iVar11 = -0x100;
  local_38 = &DAT_1001e330;
  iVar10 = 0;
  do {
    uVar7 = arg_edx[0x3e] >> 4 | arg_edx[0x3f] << 0x1c;
    lVar4 = (ulonglong)uVar7 * (ulonglong)*local_38;
    uVar5 = (uint)lVar4;
    uVar13 = uVar15 - uVar5;
    puVar6 = (uint *)((int)arg_edx + iVar11 + 0x100);
    uVar8 = uVar13 + *puVar6;
    iVar10 = ((iVar10 - (((int)arg_edx[0x3f] >> 4) * *local_38 + (int)((ulonglong)lVar4 >> 0x20) +
                        local_38[1] * uVar7)) - (uint)(uVar15 < uVar5)) +
             *(int *)((int)arg_edx + iVar11 + 0x104) + (uint)CARRY4(uVar13,*puVar6);
    uVar15 = (uintptr_t)iVar10 * 0x1000000 | uVar8 >> 8;
    *(uint *)((int)arg_edx + iVar11 + 0x100) = uVar8 & 0xff;
    iVar10 = iVar10 >> 8;
    *(undefined4 *)((int)arg_edx + iVar11 + 0x104) = 0;
    local_38 = local_38 + 2;
    iVar11 = iVar11 + 8;
  } while (iVar11 != 0);
  local_34 = -0x100;
  puVar6 = &DAT_1001e330;
  do {
    uVar5 = *puVar6;
    lVar4 = (ulonglong)uVar5 * (ulonglong)uVar15;
    uVar13 = (uint)lVar4;
    uVar8 = puVar6[1];
    puVar12 = (uint *)((int)arg_edx + local_34 + 0x100);
    uVar7 = *puVar12;
    *puVar12 = *puVar12 - uVar13;
    piVar2 = (int *)((int)arg_edx + local_34 + 0x104);
    *piVar2 = (*piVar2 - (uVar8 * uVar15 + (int)((ulonglong)lVar4 >> 0x20) + uVar5 * iVar10)) -
              (uint)(uVar7 < uVar13);
    puVar6 = puVar6 + 2;
    local_34 = local_34 + 8;
  } while (local_34 != 0);
  if (arg_ecx < arg_edx + 0x42 && arg_edx < arg_ecx + 8) {
    iVar11 = -0x20;
    do {
      uVar7 = arg_edx[iVar11 * 2 + 0x41] << 0x18 | arg_edx[iVar11 * 2 + 0x40] >> 8;
      puVar6 = arg_edx + iVar11 * 2 + 0x42;
      uVar15 = *puVar6;
      *puVar6 = *puVar6 + uVar7;
      arg_edx[iVar11 * 2 + 0x43] =
           arg_edx[iVar11 * 2 + 0x43] + ((int)arg_edx[iVar11 * 2 + 0x41] >> 8) +
           (uint)CARRY4(uVar15,uVar7);
      *(char *)((int)arg_ecx + iVar11 + 0x20) = (char)arg_edx[iVar11 * 2 + 0x40];
      iVar11 = iVar11 + 1;
    } while (iVar11 != 0);
  }
  else {
    uVar15 = arg_edx[1];
    iVar11 = -0x20;
    uVar7 = *arg_edx;
    do {
      uVar5 = uVar15 << 0x18 | uVar7 >> 8;
      uVar8 = uVar5 + arg_edx[iVar11 * 2 + 0x42];
      uVar15 = ((int)uVar15 >> 8) + arg_edx[iVar11 * 2 + 0x43] +
               (uint)CARRY4(uVar5,arg_edx[iVar11 * 2 + 0x42]);
      arg_edx[iVar11 * 2 + 0x42] = uVar8;
      arg_edx[iVar11 * 2 + 0x43] = uVar15;
      *(char *)((int)arg_ecx + iVar11 + 0x20) = (char)uVar7;
      iVar11 = iVar11 + 1;
      uVar7 = uVar8;
    } while (iVar11 != 0);
  }
  return;
}

#undef DAT_1001e330
#undef local_38
#undef local_34
#undef local_24

#define local_5c (*(int *)(pf_stack_frame + 100))
#define local_58 (*(undefined4 (*)[22])(pf_stack_frame + 104))
#define local_18 (*(int *)(pf_stack_frame + 168))
#define local_88 (*(uint *)(pf_stack_frame + 56))
#define local_a8 (*(uint (*)[42])(pf_stack_frame + 24))
#define local_84 (*(undefined4 * *)(pf_stack_frame + 60))
#define local_80 (*(uint (*)[32])(pf_stack_frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001c8a0
 */

void recovered_1001c8a0(uint arg_ecx,undefined4 *arg_edx,uint param_3,int param_4,undefined1 param_5
                       ,undefined4 *param_6)

{
  unsigned char pf_stack_frame[224] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 *puVar4;
  bool bVar5;

  local_80[0] = 0x6a09e667;
  local_80[1] = 0xbb67ae85;
  local_80[2] = 0x3c6ef372;
  local_80[3] = 0xa54ff53a;
  local_80[4] = 0x510e527f;
  local_80[5] = 0x9b05688c;
  local_80[6] = 0x1f83d9ab;
  local_80[7] = 0x5be0cd19;
  local_18 = 0;
  local_80[8] = param_3;
  local_5c = 0;
  local_88 = arg_ecx;
  local_84 = arg_edx;
  if (param_3 == 0) {
    local_80[8] = 0x20;
    local_5c = 0;
  }
  else {
    uVar3 = param_3;
    do {
      uVar1 = 0x40U - local_18;
      if (uVar3 < 0x40U - local_18) {
        uVar1 = uVar3;
      }
      recovered_10001d70((undefined4 *)((int)local_58 + local_18),arg_edx,uVar1);
      local_18 = local_18 + uVar1;
      if (local_18 == 0x40) {
        recovered_1000f5d0(local_80,(int)local_58);
        local_18 = 0;
      }
      arg_edx = (undefined4 *)((int)arg_edx + uVar1);
      uVar3 = uVar3 - uVar1;
    } while (uVar3 != 0);
    bVar5 = 0xffffffdf < local_80[8];
    local_80[8] = local_80[8] + 0x20;
    local_5c = local_5c + (uint)bVar5;
  }
  uVar3 = 0x20;
  puVar4 = (undefined4 *)param_4;
  do {
    uVar1 = 0x40U - local_18;
    if (uVar3 < 0x40U - local_18) {
      uVar1 = uVar3;
    }
    recovered_10001d70((undefined4 *)((int)local_58 + local_18),puVar4,uVar1);
    local_18 = local_18 + uVar1;
    if (local_18 == 0x40) {
      recovered_1000f5d0(local_80,(int)local_58);
      local_18 = 0;
    }
    puVar4 = (undefined4 *)((int)puVar4 + uVar1);
    uVar3 = uVar3 - uVar1;
  } while (uVar3 != 0);
  bVar5 = 0xfffffffe < local_80[8];
  local_80[8] = local_80[8] + 1;
  local_5c = local_5c + (uint)bVar5;
  puVar4 = (undefined4 *)&param_5;
  uVar3 = 1;
  do {
    uVar1 = 0x40U - local_18;
    if (uVar3 < 0x40U - local_18) {
      uVar1 = uVar3;
    }
    recovered_10001d70((undefined4 *)((int)local_58 + local_18),puVar4,uVar1);
    local_18 = local_18 + uVar1;
    if (local_18 == 0x40) {
      recovered_1000f5d0(local_80,(int)local_58);
      local_18 = 0;
    }
    puVar4 = (undefined4 *)((int)puVar4 + uVar1);
    uVar3 = uVar3 - uVar1;
  } while (uVar3 != 0);
  puVar4 = (undefined4 *)(local_88 + 0x484);
  bVar5 = 0xffffffdf < local_80[8];
  local_80[8] = local_80[8] + 0x20;
  local_5c = local_5c + (uint)bVar5;
  uVar3 = 0x20;
  do {
    uVar1 = 0x40U - local_18;
    if (uVar3 < 0x40U - local_18) {
      uVar1 = uVar3;
    }
    recovered_10001d70((undefined4 *)((int)local_58 + local_18),puVar4,uVar1);
    local_18 = local_18 + uVar1;
    if (local_18 == 0x40) {
      recovered_1000f5d0(local_80,(int)local_58);
      local_18 = 0;
    }
    puVar4 = (undefined4 *)((int)puVar4 + uVar1);
    uVar3 = uVar3 - uVar1;
  } while (uVar3 != 0);
  recovered_1000b520(local_80,local_a8);
  local_80[0] = 0x6a09e667;
  local_80[1] = 0xbb67ae85;
  local_80[2] = 0x3c6ef372;
  local_80[3] = 0xa54ff53a;
  local_80[4] = 0x510e527f;
  local_80[5] = 0x9b05688c;
  local_80[6] = 0x1f83d9ab;
  local_80[7] = 0x5be0cd19;
  local_18 = 0;
  local_80[8] = param_3;
  local_5c = 0;
  uVar3 = 0x20;
  if (param_3 == 0) {
    local_80[8] = 0x20;
    local_5c = 0;
  }
  else {
    puVar4 = local_84;
    do {
      uVar1 = 0x40U - local_18;
      if (param_3 < 0x40U - local_18) {
        uVar1 = param_3;
      }
      local_88 = param_3;
      local_84 = puVar4;
      recovered_10001d70((undefined4 *)((int)local_58 + local_18),puVar4,uVar1);
      local_18 = local_18 + uVar1;
      if (local_18 == 0x40) {
        recovered_1000f5d0(local_80,(int)local_58);
        local_18 = 0;
      }
      puVar4 = (undefined4 *)((int)local_84 + uVar1);
      param_3 = local_88 - uVar1;
    } while (param_3 != 0);
    bVar5 = 0xffffffdf < local_80[8];
    local_80[8] = local_80[8] + 0x20;
    local_5c = local_5c + (uint)bVar5;
  }
  do {
    uVar1 = 0x40U - local_18;
    if (uVar3 < 0x40U - local_18) {
      uVar1 = uVar3;
    }
    recovered_10001d70((undefined4 *)((int)local_58 + local_18),(undefined4 *)param_4,uVar1);
    local_18 = local_18 + uVar1;
    if (local_18 == 0x40) {
      recovered_1000f5d0(local_80,(int)local_58);
      local_18 = 0;
    }
    param_4 = param_4 + uVar1;
    uVar3 = uVar3 - uVar1;
  } while (uVar3 != 0);
  bVar5 = 0xffffffdf < local_80[8];
  local_80[8] = local_80[8] + 0x20;
  local_5c = local_5c + (uint)bVar5;
  uVar3 = 0x20;
  puVar2 = local_a8;
  do {
    uVar1 = 0x40U - local_18;
    if (uVar3 < 0x40U - local_18) {
      uVar1 = uVar3;
    }
    recovered_10001d70((undefined4 *)((int)local_58 + local_18),puVar2,uVar1);
    local_18 = local_18 + uVar1;
    if (local_18 == 0x40) {
      recovered_1000f5d0(local_80,(int)local_58);
      local_18 = 0;
    }
    puVar4 = param_6;
    puVar2 = (uint *)((int)puVar2 + uVar1);
    uVar3 = uVar3 - uVar1;
  } while (uVar3 != 0);
  recovered_1000b520(local_80,param_6 + 8);
  recovered_10001d70(puVar4,local_a8,0x20);
  return;
}

#undef local_5c
#undef local_58
#undef local_18
#undef local_88
#undef local_a8
#undef local_84
#undef local_80

#undef DAT_1001e508
#define DAT_1001e508 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x9e4U)))
#undef DAT_1002277a
#define DAT_1002277a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x4c56U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001cdb0
 */

bool recovered_1001cdb0(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  byte bVar6;
  bool bVar7;

  pbVar5 = &DAT_1002277a;
  uVar1 = recovered_100024c0(((uintptr_t)pf_module_state + 0x4c56U));
  iVar2 = recovered_10002500(&DAT_1002277a,&DAT_1001e508);
  if (iVar2 == 0) {
    bVar7 = true;
  }
  else {
    bVar6 = uVar1 != arg_edx;
    if (uVar1 != 0) {
      uVar3 = 0;
      do {
        if (uVar3 < arg_edx) {
          bVar4 = *(byte *)(arg_ecx + uVar3);
        }
        else {
          bVar4 = 0;
        }
        bVar6 = bVar6 | bVar4 ^ *pbVar5;
        uVar3 = uVar3 + 1;
        pbVar5 = pbVar5 + 1;
      } while (uVar1 != uVar3);
    }
    bVar7 = bVar6 == 0;
  }
  return bVar7;
}

#undef DAT_1001e508
#undef DAT_1002277a

#undef DAT_1001ef0f
#define DAT_1001ef0f (*(char *)(((uintptr_t)pf_module_state + 0x13ebU)))
#undef DAT_1001ef10
#define DAT_1001ef10 (*(char *)(((uintptr_t)pf_module_state + 0x13ecU)))
#undef DAT_1001ef11
#define DAT_1001ef11 (*(char *)(((uintptr_t)pf_module_state + 0x13edU)))
#undef DAT_1001ef12
#define DAT_1001ef12 (*(char *)(((uintptr_t)pf_module_state + 0x13eeU)))
#undef DAT_1001ef1a
#define DAT_1001ef1a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13f6U)))
#undef DAT_1001ef1b
#define DAT_1001ef1b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13f7U)))
#undef DAT_1001ef1c
#define DAT_1001ef1c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13f8U)))
#undef DAT_1001ef1d
#define DAT_1001ef1d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13f9U)))
#undef DAT_1001ef1e
#define DAT_1001ef1e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x13faU)))
#undef str_1001ef13
#define str_1001ef13 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x13efU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001ce40
 */

/* WARNING: Type propagation algorithm not settling */

undefined4 recovered_1001ce40(byte *arg_ecx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  byte bVar2;
  char *pcVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  ushort uVar7;

  bVar4 = *arg_ecx;
  bVar6 = bVar4;
  if (bVar4 == 0) {
    pcVar3 = str_1001ef13;
    goto LAB_1001d056;
  }
  bVar5 = bVar4 | 0x20;
  if (0x19 < (byte)(bVar4 + 0xbf)) {
    bVar5 = bVar4;
  }
  if (bVar5 == 0x6c) {
    bVar5 = arg_ecx[1];
    if (bVar5 == 0) {
      pcVar3 = str_1001ef13 + 1;
    }
    else {
      bVar2 = bVar5 | 0x20;
      if (0x19 < (byte)(bVar5 + 0xbf)) {
        bVar2 = bVar5;
      }
      if (bVar2 != 0x6f) goto LAB_1001d067;
      bVar5 = arg_ecx[2];
      if (bVar5 == 0) {
        pcVar3 = str_1001ef13 + 2;
      }
      else {
        bVar2 = bVar5 | 0x20;
        if (0x19 < (byte)(bVar5 + 0xbf)) {
          bVar2 = bVar5;
        }
        if (bVar2 != 0x67) goto LAB_1001d067;
        bVar5 = arg_ecx[3];
        if (bVar5 == 0) {
          pcVar3 = str_1001ef13 + 3;
        }
        else {
          bVar2 = bVar5 | 0x20;
          if (0x19 < (byte)(bVar5 + 0xbf)) {
            bVar2 = bVar5;
          }
          if (bVar2 != 0x6f) goto LAB_1001d067;
          bVar5 = arg_ecx[4];
          if (bVar5 == 0) {
            pcVar3 = str_1001ef13 + 4;
          }
          else {
            bVar2 = bVar5 | 0x20;
            if (0x19 < (byte)(bVar5 + 0xbf)) {
              bVar2 = bVar5;
            }
            if (bVar2 != 0x75) goto LAB_1001d067;
            bVar5 = arg_ecx[5];
            if (bVar5 == 0) {
              pcVar3 = str_1001ef13 + 5;
            }
            else {
              bVar2 = bVar5 | 0x20;
              if (0x19 < (byte)(bVar5 + 0xbf)) {
                bVar2 = bVar5;
              }
              if ((bVar2 != 0x74) || (arg_ecx[6] != 0)) goto LAB_1001d067;
              pcVar3 = str_1001ef13 + 6;
            }
          }
        }
      }
    }
LAB_1001d056:
    if (*pcVar3 == '\0') {
LAB_1001d0e4:
      return CONCAT31((int3)((uint)pcVar3 >> 8),1);
    }
    if (bVar4 == 0) {
      pcVar3 = &DAT_1001ef1a;
      goto LAB_1001d10e;
    }
  }
  else {
    if (bVar5 != 0x65) goto LAB_1001d067;
    bVar6 = arg_ecx[1];
    pcVar3 = (char *)0x0;
    cVar1 = DAT_1001ef0f;
    if (bVar6 == 0) {
joined_r0x1001cf29:
      uVar7 = (ushort)bVar4;
joined_r0x1001cf49:
      if (cVar1 == '\0') goto LAB_1001d0e4;
    }
    else {
      uVar7 = CONCAT11(bVar6,bVar4) | 0x2000;
      bVar5 = (byte)(uVar7 >> 8);
      if (0x19 < (byte)(bVar6 + 0xbf)) {
        bVar5 = bVar6;
      }
      if (bVar5 == 0x78) {
        bVar6 = arg_ecx[2];
        cVar1 = DAT_1001ef10;
        if (bVar6 == 0) goto joined_r0x1001cf29;
        uVar7 = CONCAT11(bVar6,bVar4) | 0x2000;
        bVar5 = (byte)(uVar7 >> 8);
        if (0x19 < (byte)(bVar6 + 0xbf)) {
          bVar5 = bVar6;
        }
        if (bVar5 != 0x69) goto LAB_1001cf4f;
        bVar6 = arg_ecx[3];
        uVar7 = CONCAT11(bVar6,bVar4);
        cVar1 = DAT_1001ef11;
        if (bVar6 != 0) {
          uVar7 = CONCAT11(bVar6,bVar4) | 0x2000;
          bVar5 = (byte)(uVar7 >> 8);
          if (0x19 < (byte)(bVar6 + 0xbf)) {
            bVar5 = bVar6;
          }
          if ((bVar5 != 0x74) || (cVar1 = DAT_1001ef12, arg_ecx[4] != 0)) goto LAB_1001cf4f;
        }
        goto joined_r0x1001cf49;
      }
    }
LAB_1001cf4f:
    bVar6 = (byte)uVar7;
  }
LAB_1001d067:
  if ((byte)(bVar6 + 0xbf) < 0x1a) {
    bVar4 = bVar6 | 0x20;
  }
  if (bVar4 != 0x71) {
    return 0;
  }
  bVar4 = arg_ecx[1];
  if (bVar4 == 0) {
    pcVar3 = &DAT_1001ef1b;
  }
  else {
    bVar6 = bVar4 | 0x20;
    if (0x19 < (byte)(bVar4 + 0xbf)) {
      bVar6 = bVar4;
    }
    if (bVar6 != 0x75) {
      return 0;
    }
    bVar4 = arg_ecx[2];
    if (bVar4 == 0) {
      pcVar3 = &DAT_1001ef1c;
    }
    else {
      bVar6 = bVar4 | 0x20;
      if (0x19 < (byte)(bVar4 + 0xbf)) {
        bVar6 = bVar4;
      }
      if (bVar6 != 0x69) {
        return 0;
      }
      bVar4 = arg_ecx[3];
      if (bVar4 == 0) {
        pcVar3 = &DAT_1001ef1d;
      }
      else {
        bVar6 = bVar4 | 0x20;
        if (0x19 < (byte)(bVar4 + 0xbf)) {
          bVar6 = bVar4;
        }
        if (bVar6 != 0x74) {
          return 0;
        }
        if (arg_ecx[4] != 0) {
          return 0;
        }
        pcVar3 = &DAT_1001ef1e;
      }
    }
  }
LAB_1001d10e:
  return CONCAT31((int3)((uint)pcVar3 >> 8),*pcVar3 == '\0');
}

#undef DAT_1001ef0f
#undef DAT_1001ef10
#undef DAT_1001ef11
#undef DAT_1001ef12
#undef DAT_1001ef1a
#undef DAT_1001ef1b
#undef DAT_1001ef1c
#undef DAT_1001ef1d
#undef DAT_1001ef1e
#undef str_1001ef13

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d120
 */

void recovered_1001d120(int arg_ecx,undefined4 *arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_100024c0((int)arg_edx);
  uVar2 = 0x1ff;
  if (uVar1 < 0x1ff) {
    uVar2 = uVar1;
  }
  recovered_10001d70((undefined4 *)(arg_ecx + 0xb92),arg_edx,uVar2);
  *(undefined1 *)(arg_ecx + 0xb92 + uVar2) = 0;
  *(undefined1 *)(arg_ecx + 0xb90) = 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d180
 */

void recovered_1001d180(int arg_ecx,undefined4 *arg_edx,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;

  if (param_3 <= 0x8000U - *(int *)(arg_ecx + 0xb8c)) {
    puVar1 = *(undefined4 **)(arg_ecx + 0xb84);
    uVar2 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
    uVar3 = 0x8000 - uVar2;
    uVar4 = param_3;
    if (uVar3 < param_3) {
      uVar4 = uVar3;
    }
    recovered_10001d70((undefined4 *)(uVar2 + (int)puVar1),arg_edx,uVar4);
    if (uVar3 < param_3) {
      recovered_10001d70(puVar1,(undefined4 *)((int)arg_edx + uVar4),param_3 - uVar4);
    }
    *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + param_3;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d210
 */

void recovered_1001d210(int arg_ecx,undefined4 *arg_edx)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar2 = recovered_100024c0((int)arg_edx);
  if (uVar2 <= 0x8000U - *(int *)(arg_ecx + 0xb8c)) {
    puVar1 = *(undefined4 **)(arg_ecx + 0xb84);
    uVar3 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
    uVar5 = 0x8000 - uVar3;
    uVar4 = uVar2;
    if (uVar5 < uVar2) {
      uVar4 = uVar5;
    }
    recovered_10001d70((undefined4 *)(uVar3 + (int)puVar1),arg_edx,uVar4);
    if (uVar5 < uVar2) {
      recovered_10001d70(puVar1,(undefined4 *)((int)arg_edx + uVar4),uVar2 - uVar4);
    }
    *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar2;
  }
  return;
}


#undef DAT_1001ef37
#define DAT_1001ef37 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1413U)))
#undef DAT_1001ef3b
#define DAT_1001ef3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1417U)))
#undef DAT_1001ef49
#define DAT_1001ef49 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1425U)))
#undef str_1001ef40
#define str_1001ef40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141cU)))
#define local_1d (*(char *)(pf_stack_frame + 19))
#define local_1c (*(undefined4 * *)(pf_stack_frame + 20))
#define local_18 (*(uint *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d2b0
 */

void recovered_1001d2b0(int arg_ecx,uint arg_edx)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  char *arg_edx_00;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  local_1d = (char)arg_edx;
  cVar1 = *(char *)(arg_ecx + 0xa7d);
  *(bool *)(arg_ecx + 0xa7d) = arg_edx == 0xd;
  cVar2 = *(char *)(arg_ecx + 0xa7c);
  if (cVar2 == '\x03') {
LAB_1001d30f:
    *(undefined1 *)(arg_ecx + 0xa7c) = 0;
    return;
  }
  if (cVar2 == '\x02') {
    if (0x3e < (byte)(local_1d - 0x40U)) {
      return;
    }
    goto LAB_1001d30f;
  }
  uVar5 = arg_edx & 0xff;
  if (cVar2 == '\x01') {
    if (local_1d == 'O') {
      *(undefined1 *)(arg_ecx + 0xa7c) = 3;
      return;
    }
    if (uVar5 == 0x5b) {
      *(undefined1 *)(arg_ecx + 0xa7c) = 2;
      return;
    }
    goto LAB_1001d30f;
  }
  switch((uintptr_t)(uVar5)) {
  case 3:
    uVar5 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1417U));
    if (uVar5 <= 0x8000U - *(int *)(arg_ecx + 0xb8c)) {
      local_1c = *(undefined4 **)(arg_ecx + 0xb84);
      uVar6 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
      uVar4 = 0x8000 - uVar6;
      local_18 = uVar5;
      if (uVar4 < uVar5) {
        local_18 = uVar4;
      }
      recovered_10001d70((undefined4 *)(uVar6 + (int)local_1c),(undefined4 *)&DAT_1001ef3b,local_18)
      ;
      if (uVar4 < uVar5) {
        recovered_10001d70(local_1c,(undefined4 *)(&DAT_1001ef3b + local_18),uVar5 - local_18);
      }
      *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar5;
    }
    *(undefined4 *)(arg_ecx + 0xa78) = 0;
    recovered_100182a0(arg_ecx);
    break;
  case 4:
    if ((*(int *)(arg_ecx + 0xa78) == 0) &&
       (recovered_1001d210(arg_ecx,(undefined4 *)str_1001ef40), *(char *)(arg_ecx + 0xdab) == '\0'))
    {
      *(undefined1 *)(arg_ecx + 0xdab) = 1;
      *(undefined4 *)(arg_ecx + 0xdb0) = 0;
    }
    break;
  case 8:
switchD_1001d333_caseD_8:
    if (*(int *)(arg_ecx + 0xa78) == 0) {
      return;
    }
    *(int *)(arg_ecx + 0xa78) = *(int *)(arg_ecx + 0xa78) + -1;
    if (*(char *)(arg_ecx + 0x868) != '\x01') {
      return;
    }
    arg_edx_00 = &DAT_1001ef37;
    uVar5 = 3;
    goto LAB_1001d465;
  case 9:
    break;
  case 10:
    if (cVar1 != '\0') {
      return;
    }
  case 0xd:
    recovered_1001d690(arg_ecx);
    break;
  case 0xc:
    uVar5 = recovered_100024c0(((uintptr_t)pf_module_state + 0x1425U));
    if (uVar5 <= 0x8000U - *(int *)(arg_ecx + 0xb8c)) {
      local_1c = *(undefined4 **)(arg_ecx + 0xb84);
      uVar6 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
      uVar4 = 0x8000 - uVar6;
      local_18 = uVar5;
      if (uVar4 < uVar5) {
        local_18 = uVar4;
      }
      recovered_10001d70((undefined4 *)(uVar6 + (int)local_1c),(undefined4 *)&DAT_1001ef49,local_18)
      ;
      if (uVar4 < uVar5) {
        recovered_10001d70(local_1c,(undefined4 *)(&DAT_1001ef49 + local_18),uVar5 - local_18);
      }
      *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar5;
    }
    recovered_100182a0(arg_ecx);
    break;
  case 0x15:
    iVar3 = *(int *)(arg_ecx + 0xa78);
    while (iVar3 != 0) {
      iVar3 = iVar3 + -1;
      *(int *)(arg_ecx + 0xa78) = iVar3;
      if ((*(char *)(arg_ecx + 0x868) == '\x01') &&
         (*(int *)(arg_ecx + 0xb8c) - 0x8001U < 0xfffffffd)) {
        local_1c = *(undefined4 **)(arg_ecx + 0xb84);
        uVar6 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
        uVar5 = 0x8000 - uVar6;
        if (2 < uVar5) {
          uVar5 = 3;
        }
        recovered_10001d70((undefined4 *)((int)local_1c + uVar6),(undefined4 *)&DAT_1001ef37,uVar5);
        if (0x7ffd < uVar6) {
          recovered_10001d70(local_1c,(undefined4 *)(&DAT_1001ef37 + uVar5),uVar5 ^ 3);
        }
        *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + 3;
        iVar3 = *(int *)(arg_ecx + 0xa78);
      }
    }
    break;
  case 0x1b:
    *(undefined1 *)(arg_ecx + 0xa7c) = 1;
    break;
  default:
    if (uVar5 == 0x7f) goto switchD_1001d333_caseD_8;
  case 5:
  case 6:
  case 7:
  case 0xb:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x16:
  case 0x17:
  case 0x18:
  case 0x19:
  case 0x1a:
    if ((byte)(local_1d - 0x20U) < 0x5f) {
      iVar3 = *(int *)(arg_ecx + 0xa78);
      uVar5 = iVar3 + 1;
      if (uVar5 < 0x200) {
        *(uint *)(arg_ecx + 0xa78) = uVar5;
        *(char *)(arg_ecx + 0x878 + iVar3) = local_1d;
        if (*(char *)(arg_ecx + 0x868) == '\x01') {
          arg_edx_00 = &local_1d;
          uVar5 = 1;
LAB_1001d465:
          recovered_1001d180(arg_ecx,(undefined4 *)arg_edx_00,uVar5);
        }
      }
    }
  }
  return;
}

#undef DAT_1001ef37
#undef DAT_1001ef3b
#undef DAT_1001ef49
#undef str_1001ef40
#undef local_1d
#undef local_1c
#undef local_18

#undef DAT_1001e5a9
#define DAT_1001e5a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa85U)))
#undef str_1001ef40
#define str_1001ef40 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x141cU)))
#define local_214 (*(byte (*)[532])(pf_stack_frame + 28))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d690
 */

void recovered_1001d690(int arg_ecx)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;

  if ((*(char *)(arg_ecx + 0x868) == '\x01') && (*(int *)(arg_ecx + 0xb8c) - 0x8001U < 0xfffffffe))
  {
    puVar1 = *(undefined4 **)(arg_ecx + 0xb84);
    uVar6 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
    uVar4 = 0x8000 - uVar6;
    if (1 < uVar4) {
      uVar4 = 2;
    }
    recovered_10001d70((undefined4 *)((int)puVar1 + uVar6),(undefined4 *)&DAT_1001e5a9,uVar4);
    if (uVar6 == 0x7fff) {
      recovered_10001d70(puVar1,(undefined4 *)(&DAT_1001e5a9 + uVar4),2 - uVar4);
    }
    *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + 2;
  }
  if (*(uint *)(arg_ecx + 0xa78) == 0) {
    recovered_100182a0(arg_ecx);
  }
  else {
    recovered_10001d70((undefined4 *)local_214,(undefined4 *)(arg_ecx + 0x878),
                       *(uint *)(arg_ecx + 0xa78));
    local_214[*(int *)(arg_ecx + 0xa78)] = 0;
    *(undefined4 *)(arg_ecx + 0xa78) = 0;
    uVar2 = recovered_1001ce40(local_214);
    if ((char)uVar2 == '\0') {
      uVar6 = recovered_100024c0((int)local_214);
      uVar4 = 0x1ff;
      if (uVar6 < 0x1ff) {
        uVar4 = uVar6;
      }
      recovered_10001d70((undefined4 *)(arg_ecx + 0xb92),(undefined4 *)local_214,uVar4);
      *(undefined1 *)(arg_ecx + 0xb92 + uVar4) = 0;
      *(undefined1 *)(arg_ecx + 0xb90) = 1;
    }
    else {
      uVar4 = recovered_100024c0(((uintptr_t)pf_module_state + 0x141cU));
      if (uVar4 <= 0x8000U - *(int *)(arg_ecx + 0xb8c)) {
        puVar1 = *(undefined4 **)(arg_ecx + 0xb84);
        uVar3 = *(int *)(arg_ecx + 0xb8c) + *(int *)(arg_ecx + 0xb88) & 0x7fff;
        uVar5 = 0x8000 - uVar3;
        uVar6 = uVar4;
        if (uVar5 < uVar4) {
          uVar6 = uVar5;
        }
        recovered_10001d70((undefined4 *)(uVar3 + (int)puVar1),(undefined4 *)str_1001ef40,uVar6);
        if (uVar5 < uVar4) {
          recovered_10001d70(puVar1,(undefined4 *)(str_1001ef40 + uVar6),uVar4 - uVar6);
        }
        *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar4;
      }
      if (*(char *)(arg_ecx + 0xdab) == '\0') {
        *(undefined1 *)(arg_ecx + 0xdab) = 1;
        *(undefined4 *)(arg_ecx + 0xdb0) = 0;
      }
    }
  }
  return;
}

#undef DAT_1001e5a9
#undef str_1001ef40
#undef local_214

#undef DAT_1001e5a9
#define DAT_1001e5a9 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xa85U)))
#define local_21 (*(char *)(pf_stack_frame + 31))
#define local_20 (*(undefined4 * *)(pf_stack_frame + 32))
#define local_1c (*(undefined4 * *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 * *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001d890
 */

void recovered_1001d890(int arg_ecx)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;

  local_20 = (undefined4 *)0x1001d8a1;
  if (*(char *)(arg_ecx + 0xda8) == '\x01') {
    iVar4 = *(int *)(arg_ecx + 0xb8c);
    local_1c = (undefined4 *)&DAT_1001e5a9;
    do {
      if (0xfffffffd < iVar4 - 0x8001U) {
        return;
      }
      local_21 = **(char **)(arg_ecx + 0xda4);
      if (local_21 == '\n') {
        if ((*(char *)(arg_ecx + 0xda9) == '\r') || (*(char *)(arg_ecx + 0x868) != '\x01'))
        goto LAB_1001d980;
        local_18 = *(undefined4 **)(arg_ecx + 0xb84);
        uVar3 = iVar4 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
        uVar2 = 0x8000 - uVar3;
        if (1 < uVar2) {
          uVar2 = 2;
        }
        recovered_10001d70((undefined4 *)((int)local_18 + uVar3),local_1c,uVar2);
        iVar4 = 2;
        if (uVar3 == 0x7fff) {
          recovered_10001d70(local_18,(undefined4 *)((int)local_20 + 0xd08 + uVar2),2 - uVar2);
        }
      }
      else {
        if (local_21 == '\0') {
          if ((*(char *)(arg_ecx + 0xda9) != '\0') && (*(char *)(arg_ecx + 0xda9) != '\n')) {
            puVar1 = (undefined4 *)((int)local_20 + 0x16b0);
            if (*(byte *)(arg_ecx + 0x868) != 0) {
              puVar1 = local_1c;
            }
            uVar2 = *(byte *)(arg_ecx + 0x868) + 1;
            local_20 = *(undefined4 **)(arg_ecx + 0xb84);
            uVar5 = iVar4 + *(int *)(arg_ecx + 0xb88) & 0x7fff;
            uVar3 = 0x8000 - uVar5;
            local_18 = (undefined4 *)uVar2;
            if (uVar3 < uVar2) {
              local_18 = (undefined4 *)uVar3;
            }
            local_1c = puVar1;
            recovered_10001d70((undefined4 *)(uVar5 + (int)local_20),puVar1,(uint)local_18);
            if (uVar3 < uVar2) {
              recovered_10001d70(local_20,(undefined4 *)((int)local_1c + (int)local_18),
                                 uVar2 - (int)local_18);
            }
            *(int *)(arg_ecx + 0xb8c) = *(int *)(arg_ecx + 0xb8c) + uVar2;
          }
          *(undefined1 *)(arg_ecx + 0xda8) = 0;
          *(undefined4 *)(arg_ecx + 0xda4) = 0;
          return;
        }
LAB_1001d980:
        recovered_10001d70((undefined4 *)
                           ((iVar4 + *(int *)(arg_ecx + 0xb88) & 0x7fffU) +
                           *(int *)(arg_ecx + 0xb84)),(undefined4 *)&local_21,1);
        iVar4 = 1;
      }
      iVar4 = iVar4 + *(int *)(arg_ecx + 0xb8c);
      *(int *)(arg_ecx + 0xb8c) = iVar4;
      *(char *)(arg_ecx + 0xda9) = local_21;
      *(int *)(arg_ecx + 0xda4) = *(int *)(arg_ecx + 0xda4) + 1;
    } while (*(char *)(arg_ecx + 0xda8) != '\0');
  }
  return;
}

#undef DAT_1001e5a9
#undef local_21
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280898
#define DAT_00280898 (*(uint8_t *)(0x280898U))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280898
#define _DAT_00280898 (*(code * *)(0x280898U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1001da90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_1001da90(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  **(undefined1 **)(param_1 + 0xd94) = 0;
  uVar1 = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x9b < _DAT_00280808 && (_DAT_00280898 != (code *)0x0)))) {
    uVar1 = (*_DAT_00280898)(param_1 + 0xb92,*(undefined4 *)(param_1 + 0xd94),0x10000);
  }
  *(undefined4 *)(param_1 + 0xd9c) = uVar1;
  __atomic_thread_fence(__ATOMIC_SEQ_CST);
  *(undefined4 *)(param_1 + 0xd98) = 1;
  return *(int *)(param_1 + 0xd9c) == 0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280898
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280898
