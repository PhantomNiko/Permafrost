/* Permafrost recovered implementation; Pooka's Free Software License.
 * Fixed entry addresses and original function boundaries are recorded
 * separately in recovery metadata. */
#include "functions.h"

#undef DAT_1000b138
#define DAT_1000b138 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e9U)))
#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001050
 */

/* WARNING: Removing unreachable block (ram,0x1000108c) */

void recovered_10001050(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    DAT_1000b138 = 0;
    recovered_100010b0();
    DAT_1000b140 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b138
#undef DAT_1000b140

#undef DAT_00280088
#define DAT_00280088 (*(uint8_t *)(0x280088U))
#undef DAT_0028008c
#define DAT_0028008c (*(uint8_t *)(0x28008cU))
#undef DAT_00280090
#define DAT_00280090 (*(uint8_t *)(0x280090U))
#undef DAT_00280094
#define DAT_00280094 (*(uint8_t *)(0x280094U))
#undef DAT_1000b138
#define DAT_1000b138 (*(char *)(((uintptr_t)pf_module_state + 0x3e9U)))
#undef DAT_1000b13c
#define DAT_1000b13c (*(int *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b144
#define DAT_1000b144 (*(int *)(((uintptr_t)pf_module_state + 0x3f5U)))
#undef _DAT_00280088
#define _DAT_00280088 (*(uint *)(0x280088U))
#undef _DAT_0028008c
#define _DAT_0028008c (*(uint *)(0x28008cU))
#define local_9c (*(uint (*)[39])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100010b0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100010b0(void)

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
  if (DAT_1000b138 != '\0') {
    return;
  }
  DAT_1000b13c = 0;
  DAT_1000b144 = 0;
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
              if (local_9c[uVar2 * 2] <= uVar5) goto LAB_1000111b;
              uVar1 = local_9c[uVar2 * 2];
              local_9c[uVar2 * 2 + 3] = local_9c[uVar2 * 2 + 1];
              local_9c[uVar2 * 2 + 2] = uVar1;
              uVar1 = uVar2 - 1;
            } while (uVar2 - 1 != 0);
            uVar2 = 0;
          }
LAB_1000111b:
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
        if (iVar9 == 0) goto LAB_10001270;
      }
      puVar3 = local_9c + 3;
      do {
        recovered_10005410((undefined *)puVar3[-1],*puVar3,(int *)local_9c);
        puVar3 = puVar3 + 2;
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      if (DAT_1000b13c != 0) goto LAB_100012ab;
    }
  }
LAB_10001270:
  uVar4 = 0x4000000;
  if (0x300000 < _DAT_00280088) {
    uVar4 = _DAT_00280088 & 0xfffffff0;
  }
  uVar7 = 0x3d00000;
  if (0x300020 < uVar4) {
    uVar7 = uVar4 - 0x300000;
  }
  recovered_10005410((undefined *)0x300000,uVar7,(int *)local_9c);
LAB_100012ab:
  if (DAT_1000b144 == 0) {
    DAT_1000b144 = DAT_1000b13c;
  }
  DAT_1000b138 = 1;
  return;
}

#undef DAT_00280088
#undef DAT_0028008c
#undef DAT_00280090
#undef DAT_00280094
#undef DAT_1000b138
#undef DAT_1000b13c
#undef DAT_1000b144
#undef _DAT_00280088
#undef _DAT_0028008c
#undef local_9c

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100012d0
 */

/* WARNING: Removing unreachable block (ram,0x1000131c) */

void recovered_100012d0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001340(param_1,param_2,param_3);
    DAT_1000b140 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b140

#undef DAT_10000001
#define DAT_10000001 (*(uint8_t *)(0x10000001U))
#undef DAT_1000b13c
#define DAT_1000b13c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b144
#define DAT_1000b144 (*(int * *)(((uintptr_t)pf_module_state + 0x3f5U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001340
 */

bool recovered_10001340(int in_ECX,int in_EDX,int param_3)

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
    recovered_100010b0();
    local_18 = DAT_1000b13c;
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
          if (uVar2 < uVar7 || uVar3 == 0) goto LAB_10001440;
          bVar11 = 0x20 < (uVar3 & 0xfffffff0);
        }
        else {
LAB_10001440:
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
      piVar1 = DAT_1000b13c;
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
    piVar5 = (int *)&DAT_1000b13c;
    iVar10 = 0;
    do {
      iVar4 = iVar10;
      iVar10 = *piVar5;
      piVar5 = (int *)(iVar10 + 4);
    } while (iVar10 != 0);
    iVar10 = 0;
    local_1c = iVar4;
    do {
      recovered_10005410(*(undefined **)(in_ECX + iVar10 * 4),*(uint *)(in_EDX + iVar10 * 4),
                         &local_1c);
      iVar10 = iVar10 + 1;
    } while (param_3 != iVar10);
    if (DAT_1000b144 == (int *)0x0) {
      DAT_1000b144 = DAT_1000b13c;
    }
    bVar11 = local_1c != iVar4;
  }
  return bVar11;
}

#undef DAT_10000001
#undef DAT_1000b13c
#undef DAT_1000b144
#undef local_1c
#undef local_18

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
#define local_24 (*(undefined1 (*)[36])(pf_stack_frame + 28))
#define local_20 (*(undefined1 (*)[32])(pf_stack_frame + 32))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001580
 */

/* WARNING: Removing unreachable block (ram,0x100015cc) */

void recovered_10001580(void)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001340((int)local_20,(int)local_24,1);
    DAT_1000b140 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b140
#undef local_24
#undef local_20

#undef DAT_1000b13c
#define DAT_1000b13c (*(int * *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001600
 */

/* WARNING: Removing unreachable block (ram,0x1000163c) */

int recovered_10001600(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int *piVar2;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100010b0();
  iVar1 = 0;
  for (piVar2 = DAT_1000b13c; piVar2 != (int *)0x0; piVar2 = (int *)piVar2[1]) {
    if ((char)piVar2[3] == '\x01') {
      iVar1 = iVar1 + *piVar2;
    }
  }
  DAT_1000b140 = 0;
  return iVar1;
}

#undef DAT_1000b13c
#undef DAT_1000b140

#undef DAT_1000b13c
#define DAT_1000b13c (*(int *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001680
 */

/* WARNING: Removing unreachable block (ram,0x100016bc) */

void recovered_10001680(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100010b0();
  for (iVar1 = DAT_1000b13c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000b140 = 0;
  return;
}

#undef DAT_1000b13c
#undef DAT_1000b140

#undef DAT_1000b13c
#define DAT_1000b13c (*(int * *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001700
 */

/* WARNING: Removing unreachable block (ram,0x1000173c) */

int recovered_10001700(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int iVar2;

  iVar2 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar2 != 0) {
    do {
    } while( true );
  }
  recovered_100010b0();
  iVar2 = 0;
  for (piVar1 = DAT_1000b13c; piVar1 != (int *)0x0; piVar1 = (int *)piVar1[1]) {
    iVar2 = iVar2 + *piVar1;
  }
  DAT_1000b140 = 0;
  return iVar2;
}

#undef DAT_1000b13c
#undef DAT_1000b140

#undef DAT_1000b13c
#define DAT_1000b13c (*(int *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001770
 */

/* WARNING: Removing unreachable block (ram,0x100017ac) */

void recovered_10001770(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  recovered_100010b0();
  for (iVar1 = DAT_1000b13c; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
  }
  DAT_1000b140 = 0;
  return;
}

#undef DAT_1000b13c
#undef DAT_1000b140

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100017f0
 */

/* WARNING: Removing unreachable block (ram,0x1000183c) */

void recovered_100017f0(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001860(in_stack_00000004,(uint *)0x0,(uint *)0xffffffff);
    DAT_1000b140 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b140

#undef DAT_1000b13c
#define DAT_1000b13c (*(uint * *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b144
#define DAT_1000b144 (*(uint * *)(((uintptr_t)pf_module_state + 0x3f5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001860
 */

uint * recovered_10001860(int in_ECX,uint *in_EDX,uint *param_3)

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
    recovered_100010b0();
    puVar3 = DAT_1000b13c;
    puVar4 = DAT_1000b144;
    if (DAT_1000b144 == (uint *)0x0) {
      puVar4 = DAT_1000b13c;
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
              if (uVar6 < uVar8) goto LAB_10001942;
            }
          }
          else {
LAB_10001942:
            if ((uVar7 - 1 <= (uint)((int)param_3 - (int)in_EDX_00) && in_EDX_00 <= param_3) &&
               (uVar7 <= uVar8 - uVar6 && uVar6 <= uVar8)) {
              if (uVar7 - 1 < uVar8) {
                bVar2 = 0xffffffef < uVar8;
                if ((uint)(uVar8 - uVar7 < 0x20) <= -(uint)(uVar8 < uVar7)) {
                  bVar2 = 0xffffffdf < uVar7;
                }
                if (!bVar2) {
                  if (uVar6 == 0) {
LAB_10001a24:
                    if ((bool)(~(uVar8 < uVar7) & 0x1f < uVar8 - uVar7)) {
                      DAT_1000b144 = (uint *)((int)in_ECX_00 + uVar7 + 0x10);
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x10) = (uVar8 - uVar7) - 0x10;
                      uVar8 = in_ECX_00[1];
                      *(uint *)((int)in_ECX_00 + uVar7 + 0x14) = uVar8;
                      *(uint **)((int)in_ECX_00 + uVar7 + 0x18) = in_ECX_00;
                      *(undefined1 *)((int)in_ECX_00 + uVar7 + 0x1c) = 1;
                      if (uVar8 != 0) {
                        *(uint **)(uVar8 + 8) = DAT_1000b144;
                      }
                      *in_ECX_00 = uVar7;
                      in_ECX_00[1] = (uint)DAT_1000b144;
                    }
                    else {
                      DAT_1000b144 = (uint *)in_ECX_00[1];
                    }
                    *(undefined1 *)(in_ECX_00 + 3) = 0;
                    if (DAT_1000b144 == (uint *)0x0) {
                      DAT_1000b144 = DAT_1000b13c;
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
                      in_ECX_00 = recovered_100055b0(in_ECX_00,in_EDX_00);
                      if (in_ECX_00 == (uint *)0x0) {
                        return (uint *)0x0;
                      }
                      uVar8 = *in_ECX_00;
                      goto LAB_10001a24;
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

#undef DAT_1000b13c
#undef DAT_1000b144

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001a90
 */

/* WARNING: Removing unreachable block (ram,0x10001adc) */

void recovered_10001a90(int param_1,uint *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001860(param_1,(uint *)0x0,param_2);
    DAT_1000b140 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b140

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b00
 */

/* WARNING: Removing unreachable block (ram,0x10001b4c) */

uint * recovered_10001b00(int param_1,uint *param_2,uint *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint *puVar2;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  puVar2 = (uint *)0x0;
  if (param_2 <= param_3) {
    puVar2 = recovered_10001860(param_1,param_2,param_3);
  }
  DAT_1000b140 = 0;
  return puVar2;
}

#undef DAT_1000b140

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001b70
 */

/* WARNING: Removing unreachable block (ram,0x10001bbc) */

void recovered_10001b70(int in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 == 0) {
    recovered_10001be0(in_stack_00000004);
    DAT_1000b140 = 0;
    return;
  }
  do {
  } while( true );
}

#undef DAT_1000b140

#undef DAT_1000b144
#define DAT_1000b144 (*(uint * *)(((uintptr_t)pf_module_state + 0x3f5U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001be0
 */

void recovered_10001be0(int in_ECX)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;

  if (in_ECX == 0) {
    return;
  }
  recovered_100010b0();
  puVar2 = (uint *)(in_ECX + -0x10);
  *(undefined1 *)(in_ECX + -4) = 1;
  puVar3 = *(uint **)(in_ECX + -0xc);
  if ((puVar3 != (uint *)0x0) && ((char)puVar3[3] == '\x01')) {
    uVar4 = *puVar2;
    while (((uVar4 < 0xfffffff0 && ((uint *)(in_ECX + uVar4) == puVar3)) &&
           (*puVar3 <= -uVar4 - 0x11))) {
      uVar4 = uVar4 + 0x10 + *puVar3;
      if (DAT_1000b144 == puVar3) {
        DAT_1000b144 = puVar2;
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
      DAT_1000b144 = puVar2;
      return;
    }
    uVar4 = *puVar3;
    if ((uint *)((int)puVar3 + uVar4 + 0x10) != puVar2) {
      DAT_1000b144 = puVar2;
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
        if (DAT_1000b144 == puVar2) {
          DAT_1000b144 = puVar3;
        }
        puVar1[2] = (uint)puVar3;
        puVar2 = puVar1;
      } while ((char)puVar1[3] != '\0');
    }
    puVar2 = puVar3;
  }
  DAT_1000b144 = puVar2;
  return;
}

#undef DAT_1000b144

#undef DAT_1000b140
#define DAT_1000b140 (*(int *)(((uintptr_t)pf_module_state + 0x3f1U)))
#undef DAT_1000b144
#define DAT_1000b144 (*(uint * *)(((uintptr_t)pf_module_state + 0x3f5U)))
#define local_20 (*(uint * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10001d00
 */

/* WARNING: Removing unreachable block (ram,0x10001d4c) */

uint * recovered_10001d00(uint *param_1,uint param_2)

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

  iVar1 = DAT_1000b140;
  { __typeof__(DAT_1000b140) pf_atomic_old = __atomic_exchange_n(&(DAT_1000b140),1,__ATOMIC_SEQ_CST);
}
  if (iVar1 != 0) {
    do {
    } while( true );
  }
  if (param_1 == (uint *)0x0) {
    puVar5 = recovered_10001860(param_2,(uint *)0x0,(uint *)0xffffffff);
    DAT_1000b140 = 0;
    return puVar5;
  }
  if (param_2 == 0) {
    recovered_10001be0((int)param_1);
    DAT_1000b140 = 0;
    return (uint *)0x0;
  }
  if (0xfffffff0 < param_2) {
    DAT_1000b140 = 0;
    return (uint *)0x0;
  }
  recovered_100010b0();
  in_ECX = param_2 + 0xf & 0xfffffff0;
  puVar5 = param_1 + -4;
  uVar7 = param_1[-4];
  if (in_ECX <= uVar7) {
    if (uVar7 <= in_ECX - 1) {
      DAT_1000b140 = 0;
      return (uint *)0x0;
    }
    uVar2 = uVar7 - in_ECX;
    bVar10 = 0xffffffdf < in_ECX;
    if (-(uint)(uVar7 < in_ECX) < (uint)(uVar2 < 0x20)) {
      bVar10 = 0xffffffef < uVar7;
    }
    if (!bVar10) {
      if (uVar2 < 0x20) {
        DAT_1000b140 = 0;
        return param_1;
      }
      DAT_1000b144 = (uint *)((int)param_1 + in_ECX);
      *(uint *)((int)param_1 + in_ECX) = uVar2 - 0x10;
      uVar7 = param_1[-3];
      *(uint *)((int)param_1 + in_ECX + 4) = uVar7;
      *(uint **)((int)param_1 + in_ECX + 8) = puVar5;
      *(undefined1 *)((int)param_1 + in_ECX + 0xc) = 1;
      if (uVar7 != 0) {
        *(uint **)(uVar7 + 8) = DAT_1000b144;
      }
      param_1[-4] = in_ECX;
      param_1[-3] = (uint)DAT_1000b144;
      DAT_1000b140 = 0;
      return param_1;
    }
    DAT_1000b140 = 0;
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
      local_20 = DAT_1000b144;
      puVar3 = (uint *)param_1[-3];
      do {
        if (((puVar3 == (uint *)0x0) || ((char)puVar3[3] != '\x01')) ||
           ((0xffffffef < uVar7 ||
            (((uint *)(uVar7 + (int)param_1) != puVar3 || (-uVar7 - 0x11 < *puVar3)))))) break;
        if (local_20 == puVar3) {
          local_20 = puVar5;
          DAT_1000b144 = puVar5;
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
        DAT_1000b140 = 0;
        return (uint *)0x0;
      }
      uVar4 = recovered_10005610(puVar5,in_ECX);
      if ((char)uVar4 != '\0') {
        DAT_1000b144 = (uint *)param_1[-3];
      }
      *(undefined1 *)(param_1 + -1) = 0;
      DAT_1000b140 = 0;
      return param_1;
    }
  }
  puVar3 = recovered_10001860(in_ECX,(uint *)0x0,(uint *)0xffffffff);
  if (puVar3 == (uint *)0x0) {
    DAT_1000b140 = 0;
    return (uint *)0x0;
  }
  if (*puVar5 < in_ECX) {
    in_ECX = *puVar5;
  }
  puVar5 = param_1;
  puVar9 = puVar3;
  if (in_ECX < 8) {
LAB_10001f75:
    if (in_ECX == 0) goto LAB_10001f8c;
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
    goto LAB_10001f75;
  }
  uVar7 = 0;
  do {
    *(undefined1 *)((int)puVar9 + uVar7) = *(undefined1 *)((int)puVar5 + uVar7);
    uVar7 = uVar7 + 1;
  } while (in_ECX != uVar7);
LAB_10001f8c:
  recovered_10001be0((int)param_1);
  DAT_1000b140 = 0;
  return puVar3;
}

#undef DAT_1000b140
#undef DAT_1000b144
#undef local_20

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longlong recovered_100020a0(uint param_1,int param_2,uint param_3)

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

ulonglong recovered_100020f0(uint param_1,uint param_2,uint param_3)

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

undefined8 recovered_10002140(uint param_1,uint param_2,uint param_3)

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
undefined8 recovered_10002180(uint param_1,uint param_2,uint param_3,uint param_4)

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

undefined8 recovered_10002270(uint param_1,uint param_2,uint param_3,uint param_4)

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
undefined8 recovered_100022e0(uint param_1,uint param_2,uint param_3,uint param_4)

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

undefined8 recovered_10002430(uint param_1,uint param_2,uint param_3,uint param_4)

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

void recovered_10002500(void)

{
  unsigned char frame[64] = {0};

  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002520(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 ^ (int)param_1 >> 0x1f) - ((int)param_1 >> 0x1f);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_10002540(uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<80U||!api[19]){return 0;}
 return ((void * (*)(uintptr_t))(uintptr_t)api[19])(size);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void recovered_10002590(void *pointer) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<84U||!api[20]){return;}
 ((void (*)(void *))(uintptr_t)api[20])(pointer);
}


/* Native packed API allocation bridge; Pooka's Free Software License. */
void * recovered_100025e0(void *pointer,uintptr_t size) {
 volatile uint32_t *api=(volatile uint32_t *)(uintptr_t)0x280800U;
 if(api[0]!=0x50414d57U||!api[1]||api[2]<88U||!api[21]){return 0;}
 return ((void * (*)(void *,uintptr_t))(uintptr_t)api[21])(pointer,size);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002630
 */

void * recovered_10002630(void *destination,void *source,ulong count)

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
    if ((((uint)source ^ (uint)destination) & 3) != 0) goto LAB_1000265a;
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
LAB_1000265a:
  uVar4 = 0;
  do {
    *(undefined1 *)((int)destination + uVar4) = *(undefined1 *)((int)source + uVar4);
    uVar4 = uVar4 + 1;
  } while (count != uVar4);
  return pvVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100026f0
 */

void * recovered_100026f0(void *destination,void *source,ulong count)

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
 * Address: 0x100028c0
 */

/* WARNING: Variable defined which should be unmapped: destination */

void * recovered_100028c0(void *destination,int value,ulong count)

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
 * Address: 0x10002970
 */

void recovered_10002970(undefined4 *param_1,uint param_2)

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
 * Address: 0x10002a10
 */

void recovered_10002a10(undefined4 *param_1,uint param_2)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10002ab0(char *param_1,char param_2,int param_3)

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
 * Address: 0x10002af0
 */

int recovered_10002af0(void *left,void *right,ulong count)

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
    if ((((uint)right ^ (uint)left) & 3) != 0) goto LAB_10002b8e;
    if (((uint)left & 3) != 0) {
      uVar6 = count;
      pvVar7 = left;
      do {
        pvVar7 = (void *)((int)pvVar7 + 1);
        bVar1 = (byte)*(uint *)left;
        bVar2 = (byte)*(uint *)right;
        if (bVar1 != bVar2) goto LAB_10002ba5;
        left = (void *)((int)left + 1);
        right = (void *)((int)right + 1);
        count = uVar6 - 1;
      } while ((uVar6 != 1) && (uVar6 = count, ((uint)pvVar7 & 3) != 0));
    }
    for (; 0xf < count; count = count - 0x10) {
      uVar8 = *(uint *)left;
      uVar9 = *(uint *)right;
      if (uVar8 != uVar9) {
LAB_10002bd6:
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
      if (uVar8 != uVar9) goto LAB_10002bd6;
      uVar8 = *(uint *)((int)left + 8);
      uVar9 = *(uint *)((int)right + 8);
      if (uVar8 != uVar9) goto LAB_10002bd6;
      uVar8 = *(uint *)((int)left + 0xc);
      uVar9 = *(uint *)((int)right + 0xc);
      if (uVar8 != uVar9) goto LAB_10002bd6;
      left = (void *)((int)left + 0x10);
      right = (void *)((int)right + 0x10);
    }
    for (; 3 < count; count = count - 4) {
      if (*(uint *)left != *(uint *)right) {
        iVar3 = recovered_10002c20(left,right);
        return iVar3;
      }
      left = (void *)((int)left + 4);
      right = (void *)((int)right + 4);
    }
  }
  if (count == 0) {
    return 0;
  }
LAB_10002b8e:
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
LAB_10002ba5:
  return (uint)bVar1 - (uint)bVar2;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10002c20
 */

int recovered_10002c20(char *in_ECX,char *in_EDX)

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


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002c70(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x61U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002c90(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x41U < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002cb0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002cd0(uint param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30 < 10 || (param_1 & 0xffffffdf) - 0x41 < 0x1a;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002d00(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 == 9 || param_1 == 0x20;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10002d20(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x20U < 0x5f;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002d40(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x5bU) {
    param_1 = param_1 + 0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10002d60(int param_1)

{
  unsigned char frame[64] = {0};

  if (0xffffffe5 < param_1 - 0x7bU) {
    param_1 = param_1 + -0x20;
  }
  return param_1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10002d80(char *text)

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

int recovered_10002dc0(byte *param_1,byte *param_2)

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

int recovered_10002e00(byte *param_1,byte *param_2)

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

void recovered_10002e40(int param_1,int param_2)

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
 * Address: 0x10002e70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10002e70(undefined4 *param_1)

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
    if ((((uint)puVar4 ^ (uint)param_1) & 3) != 0) goto LAB_10002f88;
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
LAB_10002f88:
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

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

char * recovered_10002fb0(char *param_1,char param_2)

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

int recovered_10002ff0(char *param_1,char *param_2)

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
 * Address: 0x10003050
 */

int recovered_10003050(char *param_1,char *param_2)

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

char * recovered_100030b0(char *param_1,char *param_2)

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

char * recovered_10003100(char *param_1,char *param_2)

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


#undef DAT_1000ae30
#define DAT_1000ae30 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xe1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003150
 */

undefined * recovered_10003150(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &DAT_1000ae30;
}

#undef DAT_1000ae30

#undef PTR_DAT_1000b098
#define PTR_DAT_1000b098 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x349U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003170
 */

undefined ** recovered_10003170(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return &PTR_DAT_1000b098;
}

#undef PTR_DAT_1000b098

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
 * Address: 0x10003190
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10003190(undefined4 *param_1)

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

#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003230
 */

longdouble recovered_10003230(double param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  longdouble lVar2;

  lVar2 = (longdouble)param_1;
  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000ad50;
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

#undef DAT_1000ad50

#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003280
 */

void recovered_10003280(double param_1,int *param_2)

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
        param_1 = param_1 * (double)DAT_1000ad50;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < (double)DAT_1000ad50 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < (double)DAT_1000ad50);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000ad50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003340(double param_1,double param_2)

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

longdouble recovered_100033a0(double param_1,double param_2)

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

longdouble recovered_10003430(double param_1)

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

longdouble recovered_10003480(double param_1)

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

void recovered_100034e0(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ad54
#define DAT_1000ad54 (*(float *)(((uintptr_t)pf_module_state + 0x5U)))
#undef DAT_1000ad58
#define DAT_1000ad58 (*(float *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000ad5c
#define DAT_1000ad5c (*(float *)(((uintptr_t)pf_module_state + 0xdU)))
#undef DAT_1000ad60
#define DAT_1000ad60 (*(float *)(((uintptr_t)pf_module_state + 0x11U)))
#undef DAT_1000ad64
#define DAT_1000ad64 (*(float *)(((uintptr_t)pf_module_state + 0x15U)))
#undef DAT_1000ad68
#define DAT_1000ad68 (*(float *)(((uintptr_t)pf_module_state + 0x19U)))
#undef DAT_1000ad6c
#define DAT_1000ad6c (*(float *)(((uintptr_t)pf_module_state + 0x1dU)))
#undef DAT_1000ad70
#define DAT_1000ad70 (*(float *)(((uintptr_t)pf_module_state + 0x21U)))
#undef DAT_1000ad74
#define DAT_1000ad74 (*(float *)(((uintptr_t)pf_module_state + 0x25U)))
#undef DAT_1000ad78
#define DAT_1000ad78 (*(float *)(((uintptr_t)pf_module_state + 0x29U)))
#undef DAT_1000ad7c
#define DAT_1000ad7c (*(float *)(((uintptr_t)pf_module_state + 0x2dU)))
#undef DAT_1000ad80
#define DAT_1000ad80 (*(float *)(((uintptr_t)pf_module_state + 0x31U)))
#undef DAT_1000ada8
#define DAT_1000ada8 (*(double *)(((uintptr_t)pf_module_state + 0x59U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100035e0
 */

longdouble recovered_100035e0(double param_1)

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
    lVar2 = (longdouble)DAT_1000ad54;
  }
  else {
    iVar1 = 0;
    if ((longdouble)DAT_1000ad58 < lVar2) {
      iVar1 = 0;
      do {
        lVar2 = lVar2 * (longdouble)DAT_1000ad50;
        iVar1 = iVar1 + 1;
      } while ((longdouble)DAT_1000ad58 < lVar2);
    }
    if (lVar2 < (longdouble)DAT_1000ad5c) {
      do {
        lVar2 = lVar2 + lVar2;
        iVar1 = iVar1 + -1;
      } while (lVar2 < (longdouble)DAT_1000ad5c);
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
    lVar2 = (lVar9 * lVar2) / (longdouble)DAT_1000ad80 +
            lVar9 / (longdouble)DAT_1000ad7c +
            lVar8 / (longdouble)DAT_1000ad78 +
            lVar7 / (longdouble)DAT_1000ad74 +
            lVar6 / (longdouble)DAT_1000ad70 +
            lVar5 / (longdouble)DAT_1000ad6c +
            lVar4 / (longdouble)DAT_1000ad68 +
            lVar3 / (longdouble)DAT_1000ad64 +
            (lVar10 * lVar2) / (longdouble)DAT_1000ad60 + (longdouble)0 + lVar10;
    lVar2 = lVar2 + lVar2 + (longdouble)iVar1 * (longdouble)DAT_1000ada8;
  }
  return lVar2;
}

#undef DAT_1000ad50
#undef DAT_1000ad54
#undef DAT_1000ad58
#undef DAT_1000ad5c
#undef DAT_1000ad60
#undef DAT_1000ad64
#undef DAT_1000ad68
#undef DAT_1000ad6c
#undef DAT_1000ad70
#undef DAT_1000ad74
#undef DAT_1000ad78
#undef DAT_1000ad7c
#undef DAT_1000ad80
#undef DAT_1000ada8

#undef DAT_1000add0
#define DAT_1000add0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100036f0
 */

longlong recovered_100036f0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (longlong)ROUND(param_1 + *(double *)(&DAT_1000add0 + (uint)(0.0 <= param_1) * 8));
}

#undef DAT_1000add0

#undef DAT_1000ad84
#define DAT_1000ad84 (*(float *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1000ad88
#define DAT_1000ad88 (*(float *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000ad8c
#define DAT_1000ad8c (*(float *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1000adb0
#define DAT_1000adb0 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000adb8
#define DAT_1000adb8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000adc0
#define DAT_1000adc0 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000adc8
#define DAT_1000adc8 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003750
 */

longdouble recovered_10003750(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000adb0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000adb8;
    } while ((longdouble)DAT_1000adb0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000adc0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000adc8;
    } while (lVar1 < (longdouble)DAT_1000adc0);
  }
  lVar2 = lVar1 * lVar1;
  return ((lVar2 * lVar2 * lVar2) / (longdouble)DAT_1000ad8c +
         (lVar2 * lVar2) / (longdouble)DAT_1000ad88 +
         (longdouble)1 + lVar2 / (longdouble)DAT_1000ad84) * lVar1;
}

#undef DAT_1000ad84
#undef DAT_1000ad88
#undef DAT_1000ad8c
#undef DAT_1000adb0
#undef DAT_1000adb8
#undef DAT_1000adc0
#undef DAT_1000adc8

#undef DAT_1000ad90
#define DAT_1000ad90 (*(float *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ad94
#define DAT_1000ad94 (*(float *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_1000ad98
#define DAT_1000ad98 (*(float *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000adb0
#define DAT_1000adb0 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000adb8
#define DAT_1000adb8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000adc0
#define DAT_1000adc0 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000adc8
#define DAT_1000adc8 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100037e0
 */

longdouble recovered_100037e0(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;

  lVar1 = (longdouble)param_1;
  if ((longdouble)DAT_1000adb0 < lVar1) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000adb8;
    } while ((longdouble)DAT_1000adb0 < lVar1);
  }
  if (lVar1 < (longdouble)DAT_1000adc0) {
    do {
      lVar1 = lVar1 + (longdouble)DAT_1000adc8;
    } while (lVar1 < (longdouble)DAT_1000adc0);
  }
  lVar1 = lVar1 * lVar1;
  return (lVar1 * lVar1 * lVar1) / (longdouble)DAT_1000ad98 +
         (lVar1 * lVar1) / (longdouble)DAT_1000ad94 +
         (longdouble)1 + lVar1 * (longdouble)DAT_1000ad90;
}

#undef DAT_1000ad90
#undef DAT_1000ad94
#undef DAT_1000ad98
#undef DAT_1000adb0
#undef DAT_1000adb8
#undef DAT_1000adc0
#undef DAT_1000adc8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10003870(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern long long pf_numeric_fallback___fixdfdi(double);
long long recovered_10003890(double value){return pf_numeric_fallback___fixdfdi(value);}


/* Verified native compiler-helper semantics; Pooka's Free Software License. */
extern unsigned long long pf_numeric_fallback___fixunsdfdi(double);
unsigned long long recovered_10003950(double value){return pf_numeric_fallback___fixunsdfdi(value);}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_100039e0(uint param_1,uint param_2)

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

longdouble recovered_10003a50(uint param_1,uint param_2)

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

void recovered_10003b10(void)

{
  unsigned char frame[64] = {0};

  return;
}


#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003b80
 */

void recovered_10003b80(float param_1,int *param_2)

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
        param_1 = param_1 * DAT_1000ad50;
        iVar1 = iVar1 + 1;
      } while (1.0 <= param_1);
    }
    if (param_1 < DAT_1000ad50 && 0.0 < param_1) {
      do {
        param_1 = param_1 + param_1;
        iVar1 = iVar1 + -1;
        if (param_1 <= 0.0) break;
      } while (param_1 < DAT_1000ad50);
    }
    if (param_2 != (int *)0x0) {
      *param_2 = iVar1;
    }
  }
  return;
}

#undef DAT_1000ad50

#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003c70
 */

longdouble recovered_10003c70(float param_1,int param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 < 1) {
    if (param_2 < 0) {
      do {
        param_1 = param_1 * DAT_1000ad50;
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

#undef DAT_1000ad50

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10003cd0(float param_1,float param_2)

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

longdouble recovered_10003d70(float param_1)

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

longdouble recovered_10003dd0(float param_1)

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

longdouble recovered_10003e40(double param_1)

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

longdouble recovered_10003eb0(float param_1)

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

longdouble recovered_10003f20(float param_1)

{
  unsigned char frame[64] = {0};

  longdouble extraout_ST0;

  recovered_100034e0();
  return (longdouble)(float)extraout_ST0;
}


#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ad58
#define DAT_1000ad58 (*(float *)(((uintptr_t)pf_module_state + 0x9U)))
#undef DAT_1000ad5c
#define DAT_1000ad5c (*(float *)(((uintptr_t)pf_module_state + 0xdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10003f40
 */

void recovered_10003f40(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (0.0 < param_1) {
    if (DAT_1000ad58 < param_1) {
      do {
        param_1 = param_1 * DAT_1000ad50;
      } while (DAT_1000ad58 < param_1);
    }
    for (; param_1 < DAT_1000ad5c; param_1 = param_1 + param_1) {
    }
  }
  return;
}

#undef DAT_1000ad50
#undef DAT_1000ad58
#undef DAT_1000ad5c

#undef DAT_1000add0
#define DAT_1000add0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x81U)))
#define local_10 (*(undefined4 *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004060
 */

undefined4 recovered_10004060(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};


  local_10 = (undefined4)
             (longlong)ROUND(param_1 + *(double *)(&DAT_1000add0 + (uint)(0.0 <= param_1) * 8));
  return local_10;
}

#undef DAT_1000add0
#undef local_10

#undef DAT_1000ad84
#define DAT_1000ad84 (*(float *)(((uintptr_t)pf_module_state + 0x35U)))
#undef DAT_1000ad88
#define DAT_1000ad88 (*(float *)(((uintptr_t)pf_module_state + 0x39U)))
#undef DAT_1000ad8c
#define DAT_1000ad8c (*(float *)(((uintptr_t)pf_module_state + 0x3dU)))
#undef DAT_1000adb0
#define DAT_1000adb0 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000adb8
#define DAT_1000adb8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000adc0
#define DAT_1000adc0 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000adc8
#define DAT_1000adc8 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100040b0
 */

longdouble recovered_100040b0(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000adb0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000adb8;
    } while ((float)DAT_1000adb0 < param_1);
  }
  if (param_1 < (float)DAT_1000adc0) {
    do {
      param_1 = param_1 + (float)DAT_1000adc8;
    } while (param_1 < (float)DAT_1000adc0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         (((fVar1 * fVar1 * fVar1) / DAT_1000ad8c +
          (fVar1 * fVar1) / DAT_1000ad88 + fVar1 / DAT_1000ad84 + 1.0) * param_1);
}

#undef DAT_1000ad84
#undef DAT_1000ad88
#undef DAT_1000ad8c
#undef DAT_1000adb0
#undef DAT_1000adb8
#undef DAT_1000adc0
#undef DAT_1000adc8

#undef DAT_1000ad90
#define DAT_1000ad90 (*(float *)(((uintptr_t)pf_module_state + 0x41U)))
#undef DAT_1000ad94
#define DAT_1000ad94 (*(float *)(((uintptr_t)pf_module_state + 0x45U)))
#undef DAT_1000ad98
#define DAT_1000ad98 (*(float *)(((uintptr_t)pf_module_state + 0x49U)))
#undef DAT_1000adb0
#define DAT_1000adb0 (*(double *)(((uintptr_t)pf_module_state + 0x61U)))
#undef DAT_1000adb8
#define DAT_1000adb8 (*(double *)(((uintptr_t)pf_module_state + 0x69U)))
#undef DAT_1000adc0
#define DAT_1000adc0 (*(double *)(((uintptr_t)pf_module_state + 0x71U)))
#undef DAT_1000adc8
#define DAT_1000adc8 (*(double *)(((uintptr_t)pf_module_state + 0x79U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004140
 */

longdouble recovered_10004140(float param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  float fVar1;

  if ((float)DAT_1000adb0 < param_1) {
    do {
      param_1 = param_1 + (float)DAT_1000adb8;
    } while ((float)DAT_1000adb0 < param_1);
  }
  if (param_1 < (float)DAT_1000adc0) {
    do {
      param_1 = param_1 + (float)DAT_1000adc8;
    } while (param_1 < (float)DAT_1000adc0);
  }
  fVar1 = param_1 * param_1;
  return (longdouble)
         ((fVar1 * fVar1 * fVar1) / DAT_1000ad98 +
         (fVar1 * fVar1) / DAT_1000ad94 + fVar1 * DAT_1000ad90 + 1.0);
}

#undef DAT_1000ad90
#undef DAT_1000ad94
#undef DAT_1000ad98
#undef DAT_1000adb0
#undef DAT_1000adb8
#undef DAT_1000adc0
#undef DAT_1000adc8

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_100041d0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_100041f0(byte *param_1,undefined4 *param_2,uint param_3)

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

int recovered_10004340(byte *param_1,undefined4 *param_2,uint param_3)

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


#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ada0
#define DAT_1000ada0 (*(float *)(((uintptr_t)pf_module_state + 0x51U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004490
 */

longdouble recovered_10004490(byte *param_1,undefined4 *param_2)

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
      lVar9 = lVar9 * (longdouble)DAT_1000ada0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
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
        lVar10 = lVar10 * (longdouble)DAT_1000ada0 + (longdouble)(int)((uVar2 >> 8) - 0x30);
        lVar11 = lVar11 * (longdouble)DAT_1000ada0;
        pbVar8 = pbVar3 + 1;
        uVar2 = (uint)CONCAT11(*pbVar8,(char)uVar2);
        pbVar3 = pbVar3 + 1;
      } while ((byte)(*pbVar8 - 0x30U) < 10);
      lVar10 = lVar10 / lVar11;
      goto LAB_10004563;
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
LAB_10004563:
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
              lVar10 = lVar10 * (longdouble)DAT_1000ad50;
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

#undef DAT_1000ad50
#undef DAT_1000ada0

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

longdouble recovered_10004650(byte *param_1,undefined4 *param_2)

{
  unsigned char frame[64] = {0};

  longdouble lVar1;

  lVar1 = recovered_10004490(param_1,param_2);
  return (longdouble)(float)lVar1;
}


#undef DAT_1000ada0
#define DAT_1000ada0 (*(float *)(((uintptr_t)pf_module_state + 0x51U)))
#undef str_1000ae32
#define str_1000ae32 (*(char (*)[1])(((uintptr_t)pf_module_state + 0xe3U)))
#undef str_1000ae3c
#define str_1000ae3c (*(char (*)[1])(((uintptr_t)pf_module_state + 0xedU)))
#undef str_1000ae4d
#define str_1000ae4d (*(char (*)[1])(((uintptr_t)pf_module_state + 0xfeU)))
#define local_80 (*(char *)(pf_stack_frame + 96))
#define local_c4 (*(double * *)(pf_stack_frame + 28))
#define local_c0 (*(int *)(pf_stack_frame + 32))
#define local_bc (*(uint *)(pf_stack_frame + 36))
#define local_b8 (*(byte * *)(pf_stack_frame + 40))
#define abStack_51 (*(byte (*)[81])(pf_stack_frame + 143))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10004680
 */

int recovered_10004680(char *buffer,ulong capacity,char *format,void *arguments)

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
      goto LAB_10004713;
    }
    bVar6 = format[1];
    if (bVar6 == 0x25) {
      if (1 < local_bc) {
        *buffer = 0x25;
        buffer = buffer + 1;
        local_bc = local_bc - 1;
      }
      format = format + 1;
      goto LAB_10004713;
    }
    pbVar10 = (byte *)(format + 2);
    while( true ) {
      uVar8 = bVar6 - 0x20;
      if (0x10 < uVar8) break;
      if ((0x12809U >> (uVar8 & 0x1f) & 1) == 0) {
        if (uVar8 == 10) {
          local_c4 = (double *)((int)local_c4 + 4);
          bVar6 = *pbVar10;
          goto LAB_10004775;
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
LAB_10004775:
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
      goto LAB_1000485c;
    case 0x6a:
      cVar7 = '\a';
      goto LAB_10004868;
    case 0x6c:
      format = (char *)(pbVar10 + 1);
      if (pbVar10[1] == 0x6c) {
        format = (char *)(pbVar10 + 2);
      }
      cVar7 = (pbVar10[1] == 0x6c) + '\x03';
LAB_1000485c:
      bVar19 = false;
      break;
    case 0x74:
      cVar7 = '\x06';
      goto LAB_10004868;
    case 0x7a:
      cVar7 = '\x05';
LAB_10004868:
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
        goto LAB_10004b79;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar8 = (int)uVar15 >> 0x1f;
LAB_10004b79:
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
        abStack_51[iVar12 + 1] = str_1000ae4d[uVar15 + uVar9 * -10];
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
      goto LAB_100046c8;
    default:
      if (1 < local_bc) {
        *buffer = 0x3f;
        buffer = buffer + 1;
        local_bc = local_bc - 1;
      }
      goto LAB_10004713;
    case 'X':
    case 'x':
      switch((uintptr_t)(cVar7)) {
      case '\x01':
        uVar15 = (uint)*(byte *)local_c4;
        goto LAB_10004ca7;
      case '\x02':
        uVar15 = (uint)*(ushort *)local_c4;
        goto LAB_10004ca7;
      case '\x03':
      case '\x05':
        uVar15 = *(uint *)local_c4;
LAB_10004ca7:
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
      pcVar14 = str_1000ae4d;
      if (*format == 0x58) {
        pcVar14 = str_1000ae3c;
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
LAB_10004c7c:
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
LAB_10004713:
      local_c0 = local_c0 + 1;
LAB_10004714:
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
                        goto LAB_10004db5;
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
LAB_10004db5:
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
          abStack_51[iVar12 + 1] = str_1000ae4d[uVar8 + uVar9 * -10];
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
            dVar2 = (dVar2 - (double)(int)ROUND(dVar2)) * (double)DAT_1000ada0;
            iVar12 = (int)ROUND(dVar2);
            local_b8[1] = (char)iVar12 + 0x30;
            uVar15 = local_bc & 0xfffffffe;
            uVar8 = 1;
            if (uVar15 == 2) {
              local_b8 = local_b8 + 2;
              local_bc = uVar8;
            }
            else {
              dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000ada0;
              iVar12 = (int)ROUND(dVar2);
              local_b8[2] = (char)iVar12 + 0x30;
              if (local_bc - 5 < 0xfffffffe) {
                dVar2 = (dVar2 - (double)iVar12) * (double)DAT_1000ada0;
                iVar12 = (int)ROUND(dVar2);
                local_b8[3] = (char)iVar12 + 0x30;
                if (uVar15 == 4) {
                  local_b8 = local_b8 + 4;
                }
                else {
                  dVar4 = (double)DAT_1000ada0;
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
                      local_80 = (char)(int)ROUND((dVar4 - (double)iVar12) * (double)DAT_1000ada0);
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
        abStack_51[iVar12 + 1] = str_1000ae4d[uVar8 & 0xf];
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
      goto LAB_10004714;
    case 's':
      pdVar1 = (double *)((int)local_c4 + 4);
      if (iVar12 != 0) {
        pbVar10 = (byte *)str_1000ae32;
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
      goto LAB_10004c7c;
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
        goto LAB_10004e8f;
      case '\x06':
        uVar8 = *(uint *)local_c4;
        local_c4 = (double *)((int)local_c4 + 4);
        uVar15 = (int)uVar8 >> 0x1f;
        goto LAB_10004e8f;
      default:
        uVar8 = *(uint *)local_c4;
      }
      local_c4 = (double *)((int)local_c4 + 4);
      uVar15 = 0;
LAB_10004e8f:
      iVar12 = 0;
      do {
        uVar16 = uVar15 << 0x1f | uVar8 >> 1;
        uVar11 = uVar15 >> 1;
        uVar18 = (uVar16 + uVar11 + (uint)CARRY4(uVar16,uVar11)) % 5;
        uVar17 = uVar16 - uVar18;
        lVar3 = (ulonglong)uVar17 * 0xcccccccd;
        uVar9 = (uint)lVar3;
        abStack_51[iVar12 + 1] = str_1000ae4d[uVar8 + uVar9 * -10];
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
LAB_100046c8:
      format = format + 1;
      buffer = (char *)local_b8;
    }
  } while( true );
}

#undef DAT_1000ada0
#undef str_1000ae32
#undef str_1000ae3c
#undef str_1000ae4d
#undef local_80
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef abStack_51

/* Native formatted-output ABI; Pooka's Free Software License. */
int recovered_100053e0(char *buffer,uintptr_t capacity,char *format,...) {
 __builtin_va_list args;__builtin_va_start(args,format);
 int result=recovered_10004680(buffer,capacity,format,(void *)args);
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
#undef DAT_1000b13c
#define DAT_1000b13c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3edU)))
#undef DAT_1000b144
#define DAT_1000b144 (*(int * *)(((uintptr_t)pf_module_state + 0x3f5U)))
#undef _DAT_10000000
#define _DAT_10000000 (*(int *)(0x10000000U))
#undef _DAT_10000004
#define _DAT_10000004 (*(uint32_t *)(0x10000004U))
#undef _DAT_10000008
#define _DAT_10000008 (*(int *)(0x10000008U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005410
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005410(undefined *in_ECX,uint in_EDX,int *param_3)

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
        if (DAT_1000b13c == 0) {
          puVar2 = &DAT_1000b13c;
        }
        *puVar2 = piVar4;
        *param_3 = (int)piVar4;
        if (DAT_1000b144 == (int *)0x0) {
          DAT_1000b144 = piVar4;
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
    if (DAT_1000b13c == 0) {
      puVar2 = &DAT_1000b13c;
    }
    *puVar2 = 0x10000000;
    *param_3 = 0x10000000;
    if (DAT_1000b144 != (int *)0x0) {
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
    if (DAT_1000b13c == 0) {
      puVar2 = &DAT_1000b13c;
    }
    *puVar2 = piVar4;
    *param_3 = (int)piVar4;
    if (DAT_1000b144 != (int *)0x0) {
      return;
    }
  }
  DAT_1000b144 = piVar4;
  return;
}

#undef DAT_10000000
#undef DAT_10000001
#undef DAT_10000004
#undef DAT_10000008
#undef DAT_1000000c
#undef DAT_1000b13c
#undef DAT_1000b144
#undef _DAT_10000000
#undef _DAT_10000004
#undef _DAT_10000008

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100055b0
 */

uint * recovered_100055b0(uint *in_ECX,uint *in_EDX)

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
 * Address: 0x10005610
 */

undefined4 recovered_10005610(uint *in_ECX,int in_EDX)

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
#undef DAT_1000b148
#define DAT_1000b148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f9U)))
#undef DAT_1000b14c
#define DAT_1000b14c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fdU)))
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
 * Address: 0x10005670
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005670(char *param_1,int param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  ulong uVar3;

  if (param_2 != 0 && param_1 != (char *)0x0) {
    do {
      cVar2 = *param_1;
      if (cVar2 == '\b') {
        if (DAT_1000b148 != 0) {
          DAT_1000b148 = DAT_1000b148 - 1;
        }
      }
      else if (cVar2 != '\r') {
        if (cVar2 == '\n') {
          if (DAT_1000b148 == 0) {
            uVar3 = 0;
          }
          else {
            recovered_10002630(local_214,&DAT_1000b14c,DAT_1000b148);
            uVar3 = DAT_1000b148;
          }
          local_214[uVar3] = 0;
          if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
             ((0xb < _DAT_00280808 && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0))))))
          {
            (*_DAT_00280840)(local_214);
          }
          DAT_1000b148 = 0;
        }
        else {
          if (DAT_1000b148 - 0x1ff < 0xfffffe00) {
            recovered_10002630(local_214,&DAT_1000b14c,DAT_1000b148);
            local_214[DAT_1000b148] = 0;
            if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808))
               && ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
              (*_DAT_00280840)(local_214);
            }
            DAT_1000b148 = 0;
          }
          pcVar1 = &DAT_1000b14c + DAT_1000b148;
          DAT_1000b148 = DAT_1000b148 + 1;
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
#undef DAT_1000b148
#undef DAT_1000b14c
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
#undef DAT_1000b148
#define DAT_1000b148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f9U)))
#undef DAT_1000b14c
#define DAT_1000b14c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fdU)))
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
 * Address: 0x10005830
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005830(void)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  if (DAT_1000b148 == 0) {
    uVar1 = 0;
  }
  else {
    recovered_10002630(local_21c,&DAT_1000b14c,DAT_1000b148);
    uVar1 = DAT_1000b148;
  }
  local_21c[uVar1] = 0;
  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
    (*_DAT_00280840)(local_21c);
  }
  DAT_1000b148 = 0;
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000b148
#undef DAT_1000b14c
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
#undef DAT_1000b148
#define DAT_1000b148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f9U)))
#undef DAT_1000b14c
#define DAT_1000b14c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fdU)))
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
 * Address: 0x100058d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100058d0(void)

{
  unsigned char pf_stack_frame[576] __attribute__((aligned(16))) = {0};


  if (DAT_1000b148 != 0) {
    recovered_10002630(local_210,&DAT_1000b14c,DAT_1000b148);
    local_210[DAT_1000b148] = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
      (*_DAT_00280840)(local_210);
    }
    DAT_1000b148 = 0;
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280840
#undef DAT_1000b148
#undef DAT_1000b14c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef local_210

#undef DAT_1000ae3b
#define DAT_1000ae3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000ae5e
#define DAT_1000ae5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#define acStack_150 (*(char (*)[336])(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005960
 */

void recovered_10005960(char *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[384] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  char *format;

  format = &DAT_1000ae5e;
  if (param_1 != (char *)0x0) {
    format = param_1;
  }
  puVar1 = &DAT_1000ae3b;
  if (param_2 != (undefined1 *)0x0) {
    puVar1 = param_2;
  }
  iVar2 = recovered_100053e0(acStack_150,0x140,format,puVar1);
  if (0 < iVar2) {
    recovered_10005670(acStack_150,iVar2);
  }
  return;
}

#undef DAT_1000ae3b
#undef DAT_1000ae5e
#undef acStack_150

#undef DAT_1000ae7c
#define DAT_1000ae7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_1000ae61
#define str_1000ae61 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x112U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100059c0
 */

void recovered_100059c0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002d80(str_1000ae61);
  recovered_10005670(str_1000ae61,uVar1);
  uVar1 = recovered_10002d80(&DAT_1000ae7c);
  recovered_10005670(&DAT_1000ae7c,uVar1);
  return;
}

#undef DAT_1000ae7c
#undef str_1000ae61

#undef DAT_1000ae7c
#define DAT_1000ae7c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x12dU)))
#undef str_1000ae7f
#define str_1000ae7f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x130U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005a10
 */

void recovered_10005a10(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;

  uVar1 = recovered_10002d80(str_1000ae7f);
  recovered_10005670(str_1000ae7f,uVar1);
  uVar1 = recovered_10002d80(&DAT_1000ae7c);
  recovered_10005670(&DAT_1000ae7c,uVar1);
  return;
}

#undef DAT_1000ae7c
#undef str_1000ae7f

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
#undef DAT_1000b148
#define DAT_1000b148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f9U)))
#undef DAT_1000b14c
#define DAT_1000b14c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fdU)))
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
 * Address: 0x10005a60
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool recovered_10005a60(int param_1,int param_2,undefined4 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_2 != 0 && param_1 != 0) {
    if (DAT_1000b148 != 0) {
      recovered_10002630(local_214,&DAT_1000b14c,DAT_1000b148);
      local_214[DAT_1000b148] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000b148 = 0;
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
#undef DAT_1000b148
#undef DAT_1000b14c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10005b60(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10005b70(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10005b80(void)

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
#undef DAT_1000ae5e
#define DAT_1000ae5e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x10fU)))
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280834
#define _DAT_00280834 (*(code * *)(0x280834U))
#undef str_1000af00
#define str_1000af00 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1b1U)))
#undef str_1000af0d
#define str_1000af0d (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1beU)))
#undef str_1000af1b
#define str_1000af1b (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1ccU)))
#define local_24 (*(undefined4 *)(pf_stack_frame + 28))
#define local_20 (*(void * *)(pf_stack_frame + 32))
#define local_1c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005b90
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * recovered_10005b90(char *param_1,char *param_2)

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
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return (undefined4 *)0x0;
  }
  iVar3 = recovered_10002dc0(param_1,str_1000af00);
  if (iVar3 == 0) {
    local_24 = 1;
  }
  else {
    iVar4 = recovered_10002dc0(param_1,str_1000af0d);
    if (iVar4 == 0) {
      local_24 = 2;
    }
    else {
      iVar4 = recovered_10002dc0(param_1,str_1000af1b);
      if (iVar4 != 0) {
        puVar5 = recovered_10002540(800);
        if (puVar5 != (undefined4 *)0x0) {
          recovered_100028c0(puVar5,0,800);
          *puVar5 = 0;
          pcVar6 = recovered_10002fb0(param_2,'r');
          bVar8 = true;
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002fb0(param_2,'+');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002fb0(param_2,'a');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          *(bool *)(puVar5 + 0x44) = bVar8;
          pcVar6 = recovered_10002fb0(param_2,'w');
          if (pcVar6 == (char *)0x0) {
            pcVar6 = recovered_10002fb0(param_2,'a');
            bVar8 = true;
            if (pcVar6 == (char *)0x0) {
              pcVar6 = recovered_10002fb0(param_2,'+');
              bVar8 = pcVar6 != (char *)0x0;
            }
          }
          else {
            bVar8 = true;
          }
          *(bool *)((int)puVar5 + 0x111) = bVar8;
          pcVar6 = recovered_10002fb0(param_2,'a');
          *(bool *)((int)puVar5 + 0x112) = pcVar6 != (char *)0x0;
          puVar5[0x43] = 0xffffffff;
          recovered_100053e0((char *)(puVar5 + 1),0xf1,&DAT_1000ae5e,param_1);
          recovered_100028c0(&local_20,0,0xc);
          if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
             (((0x37 < _DAT_00280808 && (_DAT_00280834 != (code *)0x0)) &&
              (iVar3 = (*_DAT_00280834)(param_1,&local_20), iVar3 != 0)))) {
            pcVar6 = recovered_10002fb0(param_2,'w');
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
                  destination = recovered_100025e0((void *)puVar5[0x3f],uVar7);
                  if (destination == (void *)0x0) {
                    *(undefined4 *)PTR_DAT_1000b000 = 0xc;
                    *(undefined1 *)((int)puVar5 + 0x115) = 1;
                    goto LAB_10005ed7;
                  }
                  puVar5[0x3f] = destination;
                  puVar5[0x41] = uVar7;
                  puVar5[0x3e] = destination;
                }
                else {
                  destination = (void *)puVar5[0x3f];
                }
                recovered_10002630(destination,local_20,local_1c);
              }
              else {
                puVar5[0x3e] = local_20;
              }
              puVar5[0x40] = local_1c;
              cVar1 = *(char *)((int)puVar5 + 0x112);
              goto joined_r0x10005eb4;
            }
          }
          else if (*(char *)((int)puVar5 + 0x111) == '\0') {
            *(undefined4 *)PTR_DAT_1000b000 = 2;
LAB_10005ed7:
            recovered_10002590(puVar5);
            return (undefined4 *)0x0;
          }
          cVar1 = *(char *)((int)puVar5 + 0x112);
joined_r0x10005eb4:
          if (cVar1 == '\x01') {
            puVar5[0x42] = puVar5[0x40];
            return puVar5;
          }
          return puVar5;
        }
        goto LAB_10005d35;
      }
      local_24 = 3;
    }
  }
  puVar5 = recovered_10002540(800);
  if (puVar5 != (undefined4 *)0x0) {
    recovered_100028c0(puVar5,0,800);
    *puVar5 = local_24;
    *(bool *)(puVar5 + 0x44) = iVar3 == 0;
    *(bool *)((int)puVar5 + 0x111) = iVar3 != 0;
    puVar5[0x43] = 0xffffffff;
    recovered_100053e0((char *)(puVar5 + 1),0xf1,&DAT_1000ae5e,param_1);
    return puVar5;
  }
LAB_10005d35:
  *(undefined4 *)PTR_DAT_1000b000 = 0xc;
  return (undefined4 *)0x0;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_1000ae5e
#undef PTR_DAT_1000b000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280834
#undef str_1000af00
#undef str_1000af0d
#undef str_1000af1b
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10005f40
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10005f40(char *param_1,char *param_2,int *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_3 == (int *)0x0) goto LAB_10006017;
  if ((*param_3 == 0) && (*(char *)((int)param_3 + 0x113) == '\x01')) {
    if (((_DAT_00280800 == 0x50414d57) &&
        (((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x3b < _DAT_00280808)))) &&
       (_DAT_00280838 != (code *)0x0)) {
      iVar1 = (*_DAT_00280838)(param_3 + 1,param_3[0x3e],param_3[0x40]);
      if (iVar1 != 0) {
        *(undefined1 *)((int)param_3 + 0x113) = 0;
        goto LAB_10005ffa;
      }
    }
    *(undefined4 *)PTR_DAT_1000b000 = 5;
    *(undefined1 *)((int)param_3 + 0x115) = 1;
  }
LAB_10005ffa:
  if ((void *)param_3[0x3f] != (void *)0x0) {
    recovered_10002590((void *)param_3[0x3f]);
  }
  recovered_10002590(param_3);
LAB_10006017:
  recovered_10005b90(param_1,param_2);
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000b000
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006030
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006030(int *param_1)

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
      *(undefined4 *)PTR_DAT_1000b000 = 5;
      *(undefined1 *)((int)param_1 + 0x115) = 1;
      uVar2 = 0xffffffff;
    }
  }
  if ((void *)param_1[0x3f] != (void *)0x0) {
    recovered_10002590((void *)param_1[0x3f]);
  }
  recovered_10002590(param_1);
  return uVar2;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000b000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006110
 */

uint recovered_10006110(undefined1 *param_1,uint param_2,uint param_3,int *param_4)

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
        recovered_10002630(param_1,(void *)(uVar3 + param_4[0x3e]),uVar1);
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
          uVar2 = recovered_10006220(param_4);
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
#undef DAT_1000ae3b
#define DAT_1000ae3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000b148
#define DAT_1000b148 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x3f9U)))
#undef DAT_1000b14c
#define DAT_1000b14c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3fdU)))
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
 * Address: 0x10006220
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint recovered_10006220(int *param_1)

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
LAB_10006281:
      param_1[199] = uVar3 + 1;
      return (uint)*(byte *)((int)param_1 + uVar3 + 0x116);
    }
    if (DAT_1000b148 != 0) {
      recovered_10002630(local_214,&DAT_1000b14c,DAT_1000b148);
      local_214[DAT_1000b148] = 0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x43 < _DAT_00280808 && (_DAT_00280840 != (code *)0x0)))) {
        (*_DAT_00280840)(local_214);
      }
      DAT_1000b148 = 0;
    }
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x47 < _DAT_00280808 && (_DAT_00280844 != (code *)0x0)))))) {
      iVar1 = (*_DAT_00280844)((char *)((int)param_1 + 0x116),0x1fe,&DAT_1000ae3b,0);
      if (iVar1 != 0) {
        uVar2 = recovered_10002d80((char *)((int)param_1 + 0x116));
        param_1[0xc6] = uVar2 + 1;
        *(undefined1 *)((int)param_1 + uVar2 + 0x116) = 10;
        *(undefined1 *)((int)param_1 + param_1[0xc6] + 0x116) = 0;
        uVar3 = 0;
        goto LAB_10006281;
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
#undef DAT_1000ae3b
#undef DAT_1000b148
#undef DAT_1000b14c
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280840
#undef _DAT_00280844
#undef local_214

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100063e0
 */

int recovered_100063e0(char *param_1,int param_2,int param_3,uint *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  void *pvVar3;
  ulong count;
  uint uVar4;

  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == (char *)0x0)) ||
     ((param_4 == (uint *)0x0 || (*(char *)((int)param_4 + 0x111) != '\x01')))) {
LAB_1000654a:
    param_3 = 0;
  }
  else {
    count = param_2 * param_3;
    if ((*param_4 & 0xfffffffe) == 2) {
      recovered_10005670(param_1,count);
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
      pvVar3 = recovered_100025e0((void *)param_4[0x3f],uVar2);
      if (pvVar3 == (void *)0x0) {
        *(undefined4 *)PTR_DAT_1000b000 = 0xc;
        *(undefined1 *)((int)param_4 + 0x115) = 1;
        goto LAB_1000654a;
      }
      param_4[0x3f] = (uint)pvVar3;
      param_4[0x41] = uVar2;
      param_4[0x3e] = (uint)pvVar3;
      uVar4 = param_4[0x42];
    }
    uVar2 = param_4[0x40];
    if (uVar2 <= uVar4 && uVar4 - uVar2 != 0) {
      recovered_100028c0((void *)(uVar2 + param_4[0x3f]),0,uVar4 - uVar2);
      uVar4 = param_4[0x42];
    }
    recovered_10002630((void *)(uVar4 + param_4[0x3f]),param_1,count);
    uVar4 = count + param_4[0x42];
    param_4[0x42] = uVar4;
    if (param_4[0x40] < uVar4) {
      param_4[0x40] = uVar4;
    }
    *(undefined2 *)((int)param_4 + 0x113) = 1;
  }
  return param_3;
}

#undef PTR_DAT_1000b000

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006560
 */

undefined4 recovered_10006560(int *param_1,uint param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == (int *)0x0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    return 0xffffffff;
  }
  if (*param_1 == 0) {
    if (param_3 != 0) {
      if (param_3 == 1) {
        iVar1 = 0x108;
      }
      else {
        if (param_3 != 2) goto LAB_10006579;
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
LAB_10006579:
  *(undefined4 *)PTR_DAT_1000b000 = 0x16;
  *(undefined1 *)((int)param_1 + 0x115) = 1;
  return 0xffffffff;
}

#undef PTR_DAT_1000b000

#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006600
 */

undefined4 recovered_10006600(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_1 == 0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = *(undefined4 *)(param_1 + 0x108);
  }
  return uVar1;
}

#undef PTR_DAT_1000b000

#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280838
#define DAT_00280838 (*(uint8_t *)(0x280838U))
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280838
#define _DAT_00280838 (*(code * *)(0x280838U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006630
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006630(int *param_1)

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
    *(undefined4 *)PTR_DAT_1000b000 = 5;
    *(undefined1 *)((int)param_1 + 0x115) = 1;
    uVar1 = 0xffffffff;
  }
  return uVar1;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280838
#undef PTR_DAT_1000b000
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280838

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_100066f0(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x114);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined1 recovered_10006710(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 == 0) {
    return 0;
  }
  return *(undefined1 *)(param_1 + 0x115);
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006730(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

uint recovered_10006760(uint param_1,int param_2)

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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028083c
#define _DAT_0028083c (*(code * *)(0x28083cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100067a0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_100067a0(int param_1)

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
  *(undefined4 *)PTR_DAT_1000b000 = uVar2;
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028083c
#undef PTR_DAT_1000b000
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
#undef PTR_DAT_1000b000
#define PTR_DAT_1000b000 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b1U)))
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
 * Address: 0x10006820
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_10006820(int param_1,int param_2)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined4 uVar2;

  if (param_1 == 0 || param_2 == 0) {
    *(undefined4 *)PTR_DAT_1000b000 = 0x16;
  }
  else {
    recovered_100028c0(&local_20,0,0xc);
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
    *(undefined4 *)PTR_DAT_1000b000 = uVar2;
  }
  return 0xffffffff;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280834
#undef DAT_00280838
#undef DAT_0028083c
#undef PTR_DAT_1000b000
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
undefined4 recovered_100069a0(int param_1,int *param_2,int *param_3)

{
  unsigned char frame[76] = {0};

  code *pcVar1;
  int iVar2;
  void *dst;
  uint uVar3;

  if (param_3 != (int *)0x0 && (param_2 != (int *)0x0 && param_1 != 0)) {
    recovered_100028c0(&local_1c,0,0xc);
    iVar2 = Ram00006800;
    if ((((iVar2 == 0x50414d57) && (iVar2 = Ram00006804, iVar2 != 0)) &&
        (uVar3 = Ram00006808, 0xb < uVar3)) &&
       (((uVar3 = Ram00006808, 0x37 < uVar3 &&
         (pcVar1 = (code *)(*(volatile uint32_t *)(uintptr_t)0x6834), pcVar1 != (code *)0x0)) &&
        (iVar2 = (*pcVar1)((char *)param_1,&local_1c), iVar2 != 0)))) {
      dst = recovered_10002540(local_18 + (local_18 == 0));
      if (dst == (void *)0x0) {
        return 0;
      }
      uVar3 = 0;
      if (local_18 != 0) {
        recovered_10002630(dst,local_1c,local_18);
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
bool recovered_10006a80(int param_1,int param_2,int param_3)

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

undefined4 recovered_10006b00(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006b10(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006b20(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006b30(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006b40(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

int recovered_10006b50(int param_1,int param_2,int param_3)

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


#undef DAT_1000ae8f
#define DAT_1000ae8f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x140U)))
#undef str_1000ae92
#define str_1000ae92 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x143U)))
#undef str_1000ae9f
#define str_1000ae9f (*(char (*)[1])(((uintptr_t)pf_module_state + 0x150U)))
#undef str_1000aea9
#define str_1000aea9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x15aU)))
#undef str_1000aebd
#define str_1000aebd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x16eU)))
#undef str_1000aecb
#define str_1000aecb (*(char (*)[1])(((uintptr_t)pf_module_state + 0x17cU)))
#undef str_1000aedd
#define str_1000aedd (*(char (*)[1])(((uintptr_t)pf_module_state + 0x18eU)))
#undef str_1000aee9
#define str_1000aee9 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x19aU)))
#undef str_1000aefa
#define str_1000aefa (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1abU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ba0
 */

char * recovered_10006ba0(undefined4 param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_1000ae8f;
  switch((uintptr_t)(param_1)) {
  case 0:
    break;
  default:
    pcVar1 = str_1000aefa;
    break;
  case 2:
    pcVar1 = str_1000ae92;
    break;
  case 5:
    pcVar1 = str_1000ae9f;
    break;
  case 9:
    pcVar1 = str_1000aea9;
    break;
  case 0xc:
    pcVar1 = str_1000aebd;
    break;
  case 0xd:
    pcVar1 = str_1000aecb;
    break;
  case 0x11:
    pcVar1 = str_1000aedd;
    break;
  case 0x16:
    pcVar1 = str_1000aee9;
  }
  return pcVar1;
}

#undef DAT_1000ae8f
#undef str_1000ae92
#undef str_1000ae9f
#undef str_1000aea9
#undef str_1000aebd
#undef str_1000aecb
#undef str_1000aedd
#undef str_1000aee9
#undef str_1000aefa

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006c70(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10006c80(void)

{
  unsigned char frame[64] = {0};

  return 0xffffffff;
}


#undef DAT_1000b34c
#define DAT_1000b34c (*(int *)(((uintptr_t)pf_module_state + 0x5fdU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006c90
 */

void recovered_10006c90(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000b34c = DAT_1000b34c + 1;
  return;
}

#undef DAT_1000b34c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cb0
 */

longlong recovered_10006cb0(longdouble param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longlong lVar1;

  lVar1 = recovered_100036f0((double)param_1);
  return lVar1;
}


#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006cd0
 */

uint recovered_10006cd0(byte *param_1,double *param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004680(local_21c,0x200,(char *)param_1,param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005670(local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

#define local_21c (*(char (*)[540])(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006d20
 */

uint recovered_10006d20(byte *param_1,double param_2)

{
  unsigned char pf_stack_frame[592] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;

  uVar1 = recovered_10004680(local_21c,0x200,(char *)param_1,&param_2);
  if (0 < (int)uVar1) {
    uVar2 = 0x1ff;
    if (uVar1 < 0x1ff) {
      uVar2 = uVar1;
    }
    recovered_10005670(local_21c,uVar2);
  }
  return uVar1;
}

#undef local_21c

/* Native IA32 exception-scope stack, frame and program-counter transfer.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006d80(void *context,...){
 __asm__ volatile("movl 4(%esp),%eax\nmovl 40(%eax),%esp\nmovl 32(%eax),%ebp\njmpl *36(%eax)");
}


/* Native IA32 nonlocal context and floating-point control state.
 * Pooka's Free Software License. */
__attribute__((naked,returns_twice)) int recovered_10006d90(void *context){
 __asm__ volatile("movl 4(%esp),%eax\nmovl %ebx,0(%eax)\nmovl %esi,4(%eax)\nmovl %edi,8(%eax)\nmovl %ebp,12(%eax)\nleal 4(%esp),%edx\nmovl %edx,16(%eax)\nmovl (%esp),%edx\nmovl %edx,20(%eax)\nmovl $-1,24(%eax)\nmovl %eax,%esi\nmovl $1,%eax\ncpuid\nandl $0x3000000,%edx\ncmpl $0x3000000,%edx\njne 1f\nstmxcsr 24(%esi)\n1: fnstcw 28(%esi)\nxorl %eax,%eax\nmovl 0(%esi),%ebx\nmovl 4(%esi),%esi\nret");
}


/* Native IA32 context restore and zero-to-one longjmp normalization.
 * Pooka's Free Software License. */
__attribute__((naked,noreturn)) void recovered_10006de0(void *context,int value){
 __asm__ volatile("movl 4(%esp),%edx\nmovl 8(%esp),%eax\ntestl %eax,%eax\njne 1f\nmovl $1,%eax\n1: cmpl $-1,24(%edx)\nje 2f\nldmxcsr 24(%edx)\n2: fldcw 28(%edx)\nmovl 0(%edx),%ebx\nmovl 4(%edx),%esi\nmovl 8(%edx),%edi\nmovl 12(%edx),%ebp\nmovl 16(%edx),%esp\njmpl *20(%edx)");
}


#undef DAT_1000af38
#define DAT_1000af38 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e9U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006e20
 */

void recovered_10006e20(void)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};

  code *pcVar1;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006ea0;
  local_2c = &DAT_1000af38;
  local_24 = 0x40;
  local_44 = 1;
  recovered_10007510(&local_48);
  recovered_10002500();
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}

#undef DAT_1000af38
#undef auStackY_d0
#undef auStack_1c
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ea0
 */

undefined4 recovered_10006ea0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10006eb0(int param_1)

{
  unsigned char frame[64] = {0};

  recovered_10006ed0(param_1);
                    /* WARNING: Subroutine does not return */
  recovered_10006e20();
}


#undef DAT_1000b350
#define DAT_1000b350 (*(void * *)(((uintptr_t)pf_module_state + 0x601U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006ed0
 */

void * recovered_10006ed0(void *argument)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10007310(argument);
  if (pvVar1 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006e20();
  }
  *(void **)((int)pvVar1 + 8) = DAT_1000b350;
  *(undefined1 *)((int)pvVar1 + 0x20) = 0;
  DAT_1000b350 = pvVar1;
  pvVar1 = recovered_10007360(pvVar1);
  return pvVar1;
}

#undef DAT_1000b350

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f10
 */

void * recovered_10006f10(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002540(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10002500();
  }
  return pvVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10006f40
 */

void * recovered_10006f40(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = recovered_10002540(param_1 + (uint)(param_1 == 0));
  if (pvVar1 == (void *)0x0) {
    recovered_10002500();
  }
  return pvVar1;
}


#undef DAT_1000af48
#define DAT_1000af48 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1f9U)))
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
 * Address: 0x10006f70
 */

void recovered_10006f70(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006ea0;
  local_2c = &DAT_1000af48;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007510(&local_48);
  recovered_10002590(param_1);
  recovered_10007540(&local_48);
  return;
}

#undef DAT_1000af48
#undef auStackY_d0
#undef local_48
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c

#undef DAT_1000af58
#define DAT_1000af58 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x209U)))
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
 * Address: 0x10007000
 */

void recovered_10007000(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006ea0;
  local_2c = &DAT_1000af58;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007510(&local_48);
  recovered_10002590(param_1);
  recovered_10007540(&local_48);
  return;
}

#undef DAT_1000af58
#undef local_30
#undef auStackY_d0
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef auStack_1c
#undef local_48
#undef local_44

#undef DAT_1000af68
#define DAT_1000af68 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x219U)))
#define auStackY_d0 (*(undefined1 (*)[208])(pf_stack_frame + 16))
#define local_48 (*(undefined4 *)(pf_stack_frame + 152))
#define auStack_1c (*(undefined1 (*)[28])(pf_stack_frame + 196))
#define local_44 (*(undefined4 *)(pf_stack_frame + 156))
#define local_30 (*(code * *)(pf_stack_frame + 176))
#define local_2c (*(undefined * *)(pf_stack_frame + 180))
#define local_28 (*(undefined1 * *)(pf_stack_frame + 184))
#define local_24 (*(undefined4 *)(pf_stack_frame + 188))
#define local_20 (*(undefined1 * *)(pf_stack_frame + 192))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007090
 */

void recovered_10007090(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006ea0;
  local_2c = &DAT_1000af68;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007510(&local_48);
  recovered_10002590(param_1);
  recovered_10007540(&local_48);
  return;
}

#undef DAT_1000af68
#undef auStackY_d0
#undef local_48
#undef auStack_1c
#undef local_44
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

#undef DAT_1000af78
#define DAT_1000af78 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x229U)))
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
 * Address: 0x10007120
 */

void recovered_10007120(void *param_1)

{
  unsigned char pf_stack_frame[256] __attribute__((aligned(16))) = {0};


  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_d0 + 0x80;
  local_30 = recovered_10006ea0;
  local_2c = &DAT_1000af78;
  local_24 = 0x58;
  local_44 = 1;
  recovered_10007510(&local_48);
  recovered_10002590(param_1);
  recovered_10007540(&local_48);
  return;
}

#undef DAT_1000af78
#undef auStackY_d0
#undef local_48
#undef local_44
#undef auStack_1c
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071b0
 */

undefined4 recovered_100071b0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071c0
 */

uint recovered_100071c0(uint *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return ~*param_1 & 1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071e0
 */

void recovered_100071e0(byte *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = *param_1 | 1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100071f0
 */

void recovered_100071f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return;
}


#undef DAT_1000b358
#define DAT_1000b358 (*(int *)(((uintptr_t)pf_module_state + 0x609U)))
#undef DAT_1000b35c
#define DAT_1000b35c (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x60dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007200
 */

undefined1 * recovered_10007200(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  undefined1 *puVar2;
  ulong size;
  int iVar3;

  size = param_1 + 0x24 + (uint)(param_1 == 0);
  puVar1 = recovered_10002540(size);
  if (puVar1 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006e20();
  }
  if (size != 0) {
    puVar2 = puVar1;
    do {
      *puVar2 = 0;
      puVar2 = puVar2 + 1;
      size = size - 1;
    } while (size != 0);
  }
  DAT_1000b358 = DAT_1000b358 + 1 + (uint)(DAT_1000b358 == -1);
  if (DAT_1000b35c == (undefined1 *)0x0) {
LAB_1000727c:
    *(int *)(puVar1 + 0x1c) = DAT_1000b358;
    *(undefined1 **)(puVar1 + 0xc) = DAT_1000b35c;
    DAT_1000b35c = puVar1;
    return puVar1 + 0x24;
  }
  do {
    iVar3 = (int)DAT_1000b35c;
    while (*(int *)(iVar3 + 0x1c) != DAT_1000b358) {
      iVar3 = *(int *)(iVar3 + 0xc);
      if (iVar3 == 0) goto LAB_1000727c;
    }
    DAT_1000b358 = DAT_1000b358 + 1 + (uint)(DAT_1000b358 == -1);
  } while( true );
}

#undef DAT_1000b358
#undef DAT_1000b35c

#undef DAT_1000b35c
#define DAT_1000b35c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x60dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100072a0
 */

void recovered_100072a0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  if (param_1 != 0) {
    pointer = (void *)(param_1 + -0x24);
    pvVar1 = DAT_1000b35c;
    if (DAT_1000b35c == pointer) {
      puVar2 = &DAT_1000b35c;
    }
    else {
      do {
        pvVar3 = pvVar1;
        if (pvVar3 == (void *)0x0) goto LAB_100072f4;
        pvVar1 = *(void **)((int)pvVar3 + 0xc);
      } while (*(void **)((int)pvVar3 + 0xc) != pointer);
      puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
    }
    *puVar2 = *(undefined4 *)(param_1 + -0x18);
    *(undefined4 *)(param_1 + -0x18) = 0;
LAB_100072f4:
    recovered_10002590(pointer);
  }
  return;
}

#undef DAT_1000b35c

#undef DAT_1000b35c
#define DAT_1000b35c (*(void * *)(((uintptr_t)pf_module_state + 0x60dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007310
 */

void * recovered_10007310(void *argument)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;

  pvVar1 = DAT_1000b35c;
  if (DAT_1000b35c != argument && DAT_1000b35c != (void *)0x0) {
    do {
      if (*(void **)((int)pvVar1 + 0x1c) == argument) {
        return pvVar1;
      }
      pvVar1 = *(void **)((int)pvVar1 + 0xc);
      if (pvVar1 == (void *)0x0) {
        return (void *)0x0;
      }
    } while (pvVar1 != argument);
  }
  return pvVar1;
}

#undef DAT_1000b35c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007360
 */

void * recovered_10007360(void *argument)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return (void *)((int)argument + 0x24);
}


#undef DAT_1000b350
#define DAT_1000b350 (*(void * *)(((uintptr_t)pf_module_state + 0x601U)))
#undef DAT_1000b35c
#define DAT_1000b35c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x60dU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007370
 */

void recovered_10007370(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pointer;
  void *pvVar1;
  undefined4 *puVar2;
  void *pvVar3;

  pointer = DAT_1000b350;
  if (DAT_1000b350 != (void *)0x0) {
    puVar2 = (undefined4 *)((int)DAT_1000b350 + 8);
    DAT_1000b350 = *(void **)((int)DAT_1000b350 + 8);
    *puVar2 = 0;
    if (*(char *)((int)pointer + 0x20) == '\0') {
      if (*(code **)((int)pointer + 4) != (code *)0x0) {
        (**(code **)((int)pointer + 4))((int)pointer + 0x24);
      }
      pvVar1 = DAT_1000b35c;
      if (DAT_1000b35c == pointer) {
        puVar2 = &DAT_1000b35c;
      }
      else {
        do {
          pvVar3 = pvVar1;
          if (pvVar3 == (void *)0x0) goto LAB_100073e4;
          pvVar1 = *(void **)((int)pvVar3 + 0xc);
        } while (*(void **)((int)pvVar3 + 0xc) != pointer);
        puVar2 = (undefined4 *)((int)pvVar3 + 0xc);
      }
      *puVar2 = *(undefined4 *)((int)pointer + 0xc);
      *(undefined4 *)((int)pointer + 0xc) = 0;
LAB_100073e4:
      recovered_10002590(pointer);
    }
  }
  return;
}

#undef DAT_1000b350
#undef DAT_1000b35c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007400
 */

void recovered_10007400(int param_1,undefined4 param_2,undefined4 param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *(undefined4 *)(param_1 + -0x24) = param_2;
  *(undefined4 *)(param_1 + -0x20) = param_3;
  *(undefined4 *)(param_1 + -0x14) = 0;
  *(undefined4 *)(param_1 + -0x10) = 0;
  *(undefined4 *)(param_1 + -0xc) = 0;
  *(undefined1 *)(param_1 + -4) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007440((void *)(param_1 + -0x24));
}


#undef DAT_1000b350
#define DAT_1000b350 (*(void * *)(((uintptr_t)pf_module_state + 0x601U)))
#undef DAT_1000b354
#define DAT_1000b354 (*(int * *)(((uintptr_t)pf_module_state + 0x605U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 16))
#define local_1c (*(undefined4 *)(pf_stack_frame + 20))
#define local_18 (*(undefined4 *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007440
 */

void recovered_10007440(void *header)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  byte *in_EDX;
  void *header_00;
  undefined4 uVar1;
  int *in_ECX;

  if (DAT_1000b354 != (int *)0x0) {
    in_EDX = *(byte **)header;
    in_ECX = DAT_1000b354;
    do {
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      uVar1 = recovered_10007e10((int)in_ECX,in_EDX,(undefined2 *)&local_20);
      if (((char)uVar1 != '\0') && (PF_PART1(local_20, 2) == '\x01')) {
        *(int **)((int)header + 0x10) = in_ECX;
        *(undefined4 *)((int)header + 0x14) = local_1c;
        *(undefined4 *)((int)header + 0x18) = local_18;
        recovered_10007610((int)header);
        header_00 = DAT_1000b350;
        if (DAT_1000b350 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          recovered_10006e20();
        }
        *(undefined1 *)((int)DAT_1000b350 + 0x20) = 1;
        *(undefined4 *)((int)header_00 + 0x10) = 0;
        *(undefined4 *)((int)header_00 + 0x14) = 0;
        *(undefined4 *)((int)header_00 + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
        recovered_10007440(header_00);
      }
      in_ECX = (int *)*in_ECX;
    } while (in_ECX != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006e20();
}

#undef DAT_1000b350
#undef DAT_1000b354
#undef local_20
#undef local_1c
#undef local_18

#undef DAT_1000b350
#define DAT_1000b350 (*(void * *)(((uintptr_t)pf_module_state + 0x601U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100074d0
 */

void recovered_100074d0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *header;

  header = DAT_1000b350;
  if (DAT_1000b350 == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006e20();
  }
  *(undefined1 *)((int)DAT_1000b350 + 0x20) = 1;
  *(undefined4 *)((int)header + 0x10) = 0;
  *(undefined4 *)((int)header + 0x14) = 0;
  *(undefined4 *)((int)header + 0x18) = 0;
                    /* WARNING: Subroutine does not return */
  recovered_10007440(header);
}

#undef DAT_1000b350

#undef DAT_1000b354
#define DAT_1000b354 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x605U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007510
 */

void recovered_10007510(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  *param_1 = DAT_1000b354;
  DAT_1000b354 = param_1;
  return;
}

#undef DAT_1000b354

#undef DAT_1000b354
#define DAT_1000b354 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x605U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007540
 */

void recovered_10007540(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;

  puVar1 = DAT_1000b354;
  if (DAT_1000b354 == param_1) {
    puVar2 = &DAT_1000b354;
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

#undef DAT_1000b354

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007580
 */

void recovered_10007580(void *in_stack_00000004)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10007440(in_stack_00000004);
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075a0
 */

void recovered_100075a0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006e20();
}


#undef DAT_1000b354
#define DAT_1000b354 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x605U)))
#undef DAT_1000b35c
#define DAT_1000b35c (*(int *)(((uintptr_t)pf_module_state + 0x60dU)))
#define iStack_4c (*(int *)(pf_stack_frame + 20))
#define uStack_40 (*(undefined4 *)(pf_stack_frame + 32))
#define uStack_3c (*(undefined4 *)(pf_stack_frame + 36))
#define uStack_38 (*(undefined4 *)(pf_stack_frame + 40))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100075b0
 */

undefined4 recovered_100075b0(int param_1)

{
  unsigned char pf_stack_frame[128] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int in_ECX;
  undefined4 *extraout_ECX = 0;

  in_ECX = DAT_1000b35c;
  if (DAT_1000b35c != param_1 && DAT_1000b35c != 0) {
    do {
      if (*(int *)(in_ECX + 0x1c) == param_1) goto LAB_100075f2;
      in_ECX = *(int *)(in_ECX + 0xc);
    } while ((in_ECX != 0) && (in_ECX != param_1));
  }
  if (in_ECX == 0) {
                    /* WARNING: Subroutine does not return */
    recovered_10006e20();
  }
LAB_100075f2:
  if (DAT_1000b354 != (undefined4 *)0x0) {
    DAT_1000b354 = (undefined4 *)*DAT_1000b354;
  }
  recovered_10007610(in_ECX);
  if (DAT_1000b354 != (undefined4 *)0x0) {
    puVar1 = (undefined4 *)extraout_ECX[4];
    do {
      puVar2 = DAT_1000b354;
      if (DAT_1000b354 == puVar1) {
        DAT_1000b354[2] = extraout_ECX;
        puVar2[3] = extraout_ECX[6];
        uVar3 = extraout_ECX[5];
LAB_100076ae:
        puVar2[1] = uVar3;
        recovered_10006d80((int)puVar2);
        recovered_100075b0(iStack_4c);
        return 0;
      }
      uStack_38 = 0;
      uStack_3c = 0;
      uStack_40 = 0;
      recovered_10007e10((int)DAT_1000b354,(byte *)*extraout_ECX,(undefined2 *)&uStack_40);
      if (((char)uStack_40 == '\x01') && (PF_PART1(uStack_40, 1) == '\x01')) {
        puVar2[2] = extraout_ECX;
        puVar2[3] = 0;
        uVar3 = uStack_3c;
        goto LAB_100076ae;
      }
      DAT_1000b354 = (undefined4 *)*puVar2;
    } while (DAT_1000b354 != (undefined4 *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006e20();
}

#undef DAT_1000b354
#undef DAT_1000b35c
#undef iStack_4c
#undef uStack_40
#undef uStack_3c
#undef uStack_38

#undef DAT_1000b354
#define DAT_1000b354 (*(int * *)(((uintptr_t)pf_module_state + 0x605U)))
#define local_20 (*(undefined4 *)(pf_stack_frame + 32))
#define local_1c (*(int *)(pf_stack_frame + 36))
#define local_18 (*(undefined4 *)(pf_stack_frame + 40))
#define iStack_2c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007610
 */

undefined4 recovered_10007610(int in_ECX)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  int *piVar1;
  int *piVar2;
  int iVar3;

  if (DAT_1000b354 != (int *)0x0) {
    piVar1 = *(int **)(in_ECX + 0x10);
    do {
      piVar2 = DAT_1000b354;
      if (DAT_1000b354 == piVar1) {
        DAT_1000b354[2] = in_ECX;
        piVar2[3] = *(int *)(in_ECX + 0x18);
        iVar3 = *(int *)(in_ECX + 0x14);
LAB_100076ae:
        piVar2[1] = iVar3;
        recovered_10006d80((int)piVar2);
        recovered_100075b0(iStack_2c);
        return 0;
      }
      local_18 = 0;
      local_1c = 0;
      local_20 = 0;
      recovered_10007e10((int)DAT_1000b354,*(byte **)in_ECX,(undefined2 *)&local_20);
      if (((char)local_20 == '\x01') && (PF_PART1(local_20, 1) == '\x01')) {
        piVar2[2] = in_ECX;
        piVar2[3] = 0;
        iVar3 = local_1c;
        goto LAB_100076ae;
      }
      DAT_1000b354 = (int *)*piVar2;
    } while (DAT_1000b354 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  recovered_10006e20();
}

#undef DAT_1000b354
#undef local_20
#undef local_1c
#undef local_18
#undef iStack_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076c0
 */

undefined4 recovered_100076c0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_100075b0(param_1);
  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076e0
 */

undefined4 recovered_100076e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100076f0
 */

void recovered_100076f0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

                    /* WARNING: Subroutine does not return */
  recovered_10006e20();
}


#undef DAT_1000b0f0
#define DAT_1000b0f0 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3a1U)))
#define local_1c (*(int *)(pf_stack_frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007700
 */

int recovered_10007700(int *param_1,undefined4 param_2,undefined4 *param_3)

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
          if (iVar4 == iVar3) goto LAB_100077c0;
        }
        else {
          iVar5 = 0;
          do {
            cVar1 = *(char *)(iVar4 + iVar5);
            cVar2 = *(char *)(iVar3 + iVar5);
            if ((cVar1 == '\0') || (cVar2 == '\0')) {
              if (cVar1 == cVar2) goto LAB_100077c0;
              break;
            }
            iVar5 = iVar5 + 1;
          } while (cVar1 == cVar2);
        }
        if ((undefined *)*puVar6 != &DAT_1000b0f0) {
          return 0;
        }
        puVar6 = (undefined4 *)puVar6[2];
        bVar7 = puVar6 != (undefined4 *)0x0;
      } while ((puVar6 != param_3) && (puVar6 != (undefined4 *)0x0));
    }
    if (bVar7) {
LAB_100077c0:
      local_1c = (int)param_1 + *(int *)(*param_1 + -8);
    }
  }
  return local_1c;
}

#undef DAT_1000b0f0
#undef local_1c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100077e0
 */

void recovered_100077e0(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  recovered_10002500();
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007800
 */

undefined4 recovered_10007800(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007810(int param_1)

{
  unsigned char frame[64] = {0};

  return param_1 - 0x30U < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007830(int param_1)

{
  unsigned char frame[64] = {0};

  bool bVar1;

  if ((0x17 < param_1 - 9U) || (bVar1 = true, (0x80001bU >> (param_1 - 9U & 0x1f) & 1) == 0)) {
    bVar1 = param_1 == 0xb;
  }
  return bVar1;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007870(uint param_1)

{
  unsigned char frame[64] = {0};

  return (param_1 & 0xffffffdf) - 0x41 < 6 || param_1 - 0x30 < 10;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100078a0(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_100078c0(uint param_1)

{
  unsigned char frame[64] = {0};

  return (~param_1 & 0x7f800000) != 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

byte recovered_100078e0(undefined4 param_1,undefined4 param_2,ushort param_3)

{
  unsigned char frame[64] = {0};

  return (param_3 & 0x7fff) == 0 |
         (byte)((uint)param_2 >> 0x1f) & (ushort)((param_3 & 0x7fff) - 1) < 0x7ffe;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

bool recovered_10007920(undefined4 param_1,uint param_2)

{
  unsigned char frame[64] = {0};

  return (~param_2 & 0x7ff00000) != 0;
}


/* r232 exponential series and time arithmetic; Pooka's Free Software License. */
#pragma STDC FP_CONTRACT OFF
double recovered_10007940(double value) {
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
float recovered_10007a30(float value){return (float)recovered_10007940((double)value);}


/* Native exponential ABI; Pooka's Free Software License. */
long double recovered_10007b30(long double value){return (long double)recovered_10007940((double)value);}


/* Native time difference; Pooka's Free Software License. */
double recovered_10007c20(long end,long start){return (double)end-(double)start;}


#undef DAT_1000ad50
#define DAT_1000ad50 (*(float *)(((uintptr_t)pf_module_state + 0x1U)))
#undef DAT_1000ad90
#define DAT_1000ad90 (*(float *)(((uintptr_t)pf_module_state + 0x41U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10007c50
 */

longdouble recovered_10007c50(double param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  longdouble lVar1;
  longdouble lVar2;

  lVar1 = recovered_10003430(param_1);
  if ((longdouble)DAT_1000ad50 <= (longdouble)param_1 - lVar1) {
    lVar2 = (longdouble)1;
  }
  else {
    if ((longdouble)DAT_1000ad90 < (longdouble)param_1 - lVar1) {
      return lVar1;
    }
    lVar2 = -(longdouble)1;
  }
  return lVar2 + lVar1;
}

#undef DAT_1000ad50
#undef DAT_1000ad90

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#define local_14 (*(uint *)(frame + 16))
ulonglong recovered_10007cb0(byte *param_1,undefined4 *param_2,uint param_3)

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
void recovered_10007df0(void)

{
  unsigned char frame[64] = {0};


  recovered_10007cb0(in_stack_00000004,in_stack_00000008,in_stack_0000000c);
  return;
}

#undef in_stack_00000004
#undef in_stack_00000008
#undef in_stack_0000000c

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
 * Address: 0x10007e10
 */

undefined4 recovered_10007e10(int in_ECX,byte *in_EDX,undefined2 *param_3)

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

  local_2c = 0x10007e25;
  pbVar11 = *(byte **)(in_ECX + 0x1c);
  if (pbVar11 != (byte *)0x0) {
    local_38 = pbVar11 + 1;
    if (*pbVar11 != 0xff) {
      recovered_100081a0((uint)*pbVar11,(int *)&local_38);
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
          goto LAB_10007fc0;
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
LAB_10007fc0:
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
LAB_1000817e:
      *(undefined1 *)(param_3 + 1) = 1;
      *(uint *)(param_3 + 4) = uVar7;
      return CONCAT31((int3)((uint)param_3 >> 8),1);
    }
    local_18[0] = local_34 + *(int *)(local_2c + 0x2fd7 + local_28 * 4) * uVar7;
    pbVar11 = recovered_100081a0(local_30,(int *)local_18);
    if (pbVar11 == (byte *)0x0) goto LAB_1000817e;
    bVar17 = in_EDX != (byte *)0x0;
    if ((in_EDX != (byte *)0x0) && (pbVar11 != in_EDX)) {
      iVar9 = *(int *)(pbVar11 + 4);
      pbVar13 = in_EDX;
      do {
        iVar5 = *(int *)(pbVar13 + 4);
        if ((iVar9 == 0) || (iVar5 == 0)) {
          if (iVar5 == iVar9) goto LAB_1000817e;
        }
        else {
          iVar14 = 0;
          do {
            cVar3 = *(char *)(iVar5 + iVar14);
            cVar4 = *(char *)(iVar9 + iVar14);
            if ((cVar3 == '\0') || (cVar4 == '\0')) {
              if (cVar3 == cVar4) goto LAB_1000817e;
              break;
            }
            iVar14 = iVar14 + 1;
          } while (cVar3 == cVar4);
        }
        if (*(int *)pbVar13 != local_2c + 0x32cb) goto LAB_10008157;
        pbVar13 = *(byte **)(pbVar13 + 8);
        bVar17 = pbVar13 != (byte *)0x0;
      } while ((pbVar13 != pbVar11) && (pbVar13 != (byte *)0x0));
    }
    if (bVar17) goto LAB_1000817e;
  }
LAB_10008157:
  if ((uVar15 | uVar6) == 0) {
    return 0;
  }
  local_1c = local_1c + (uVar15 | uVar6);
  bVar17 = 0x3e < local_20;
  local_20 = local_20 + 1;
  if (bVar17) {
    return 0;
  }
  goto LAB_10007fc0;
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
 * Address: 0x100081a0
 */

byte * recovered_100081a0(uint in_ECX,int *in_EDX)

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
    goto LAB_10008285;
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
    goto LAB_10008285;
  case 0x4:
  case 0xc:
    *in_EDX = (int)(puVar1 + 4);
    break;
  default:
    goto switchD_100081df_caseD_5;
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
LAB_10008285:
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
switchD_100081df_caseD_5:
  return pbVar3;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280814
#define DAT_00280814 (*(uint8_t *)(0x280814U))
#undef DAT_1000b360
#define DAT_1000b360 (*(int * *)(((uintptr_t)pf_module_state + 0x611U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280814
#define _DAT_00280814 (*(code * *)(0x280814U))
#undef str_1000af29
#define str_1000af29 (*(char (*)[1])(((uintptr_t)pf_module_state + 0x1daU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100082f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * recovered_100082f0(char *param_1,uint param_2,uint param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  int *in_ECX;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;

  if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
     ((0x17 < _DAT_00280808 && (_DAT_00280814 != (code *)0x0)))) {
    (*_DAT_00280814)();
  }
  in_ECX = recovered_10006f10(0x4c);
  *in_ECX = 0;
  in_ECX[1] = 0;
  in_ECX[2] = 0;
  in_ECX[3] = 0;
  in_ECX[4] = 0;
  in_ECX[5] = 0;
  in_ECX[6] = 0;
  *(undefined1 *)(in_ECX + 7) = 0;
  *(undefined1 *)((int)in_ECX + 0x1d) = 0;
  *(undefined1 *)((int)in_ECX + 0x1e) = 0;
  *(undefined1 *)((int)in_ECX + 0x1f) = 0;
  in_ECX[8] = 0;
  in_ECX[9] = 0;
  *(undefined1 *)(in_ECX + 10) = 0;
  *(undefined1 *)((int)in_ECX + 0x29) = 0;
  *(undefined1 *)((int)in_ECX + 0x2a) = 0;
  in_ECX[0xb] = 0;
  in_ECX[0xc] = 0;
  in_ECX[0xd] = 0;
  in_ECX[0xe] = 0;
  in_ECX[0xf] = 0;
  in_ECX[0x10] = 0;
  in_ECX[0x11] = 0;
  in_ECX[0x12] = 0;
  pcVar3 = str_1000af29;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  uVar5 = 0xffffffff;
  do {
    iVar2 = uVar5 + 1;
    uVar5 = uVar5 + 1;
  } while (pcVar3[iVar2] != '\0');
  recovered_1000a790(in_ECX,(int)pcVar3,uVar5);
  if ((int)param_2 < 2) {
    param_2 = 1;
  }
  in_ECX[3] = param_2;
  uVar5 = 1;
  if (1 < (int)param_3) {
    uVar5 = param_3;
  }
  in_ECX[4] = uVar5;
  in_ECX[5] = param_2;
  in_ECX[6] = uVar5;
  in_ECX[8] = param_2 >> 1;
  in_ECX[9] = uVar5 >> 1;
  uVar6 = param_2 * (uintptr_t)uVar5 * 4;
  in_ECX[0x11] = 0;
  uVar5 = 0;
  if ((uint)in_ECX[0x12] < uVar6) {
    pvVar4 = recovered_10006f10(uVar6);
    pvVar1 = (void *)in_ECX[0x10];
    iVar2 = in_ECX[0x11];
    if (iVar2 != 0) {
      iVar7 = 0;
      do {
        *(undefined1 *)((int)pvVar4 + iVar7) = *(undefined1 *)((int)pvVar1 + iVar7);
        iVar7 = iVar7 + 1;
      } while (iVar2 != iVar7);
    }
    recovered_10006f70(pvVar1);
    in_ECX[0x10] = (int)pvVar4;
    in_ECX[0x12] = uVar6;
    uVar5 = in_ECX[0x11];
  }
  while (uVar5 < uVar6) {
    *(undefined1 *)(in_ECX[0x10] + uVar5) = 0;
    uVar5 = in_ECX[0x11] + 1;
    in_ECX[0x11] = uVar5;
  }
  DAT_1000b360 = in_ECX;
  recovered_100084d0((int)in_ECX);
  recovered_100087f0((int)in_ECX);
  return in_ECX;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280814
#undef DAT_1000b360
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280814
#undef str_1000af29

#define local_6c (*(undefined1 *)(pf_stack_frame + 20))
#define local_6b (*(undefined1 *)(pf_stack_frame + 21))
#define local_6a (*(undefined1 *)(pf_stack_frame + 22))
#define local_69 (*(undefined1 *)(pf_stack_frame + 23))
#define local_68 (*(int *)(pf_stack_frame + 24))
#define local_64 (*(int *)(pf_stack_frame + 28))
#define local_60 (*(int *)(pf_stack_frame + 32))
#define local_5c (*(int *)(pf_stack_frame + 36))
#define local_54 (*(undefined4 *)(pf_stack_frame + 44))
#define local_50 (*(int *)(pf_stack_frame + 48))
#define local_4c (*(ushort *)(pf_stack_frame + 52))
#define local_4a (*(ushort *)(pf_stack_frame + 54))
#define local_48 (*(int *)(pf_stack_frame + 56))
#define local_44 (*(int *)(pf_stack_frame + 60))
#define local_40 (*(int *)(pf_stack_frame + 64))
#define local_3c (*(int *)(pf_stack_frame + 68))
#define local_38 (*(int *)(pf_stack_frame + 72))
#define local_34 (*(int *)(pf_stack_frame + 76))
#define local_30 (*(int *)(pf_stack_frame + 80))
#define local_2c (*(int *)(pf_stack_frame + 84))
#define local_28 (*(int *)(pf_stack_frame + 88))
#define local_24 (*(int *)(pf_stack_frame + 92))
#define local_20 (*(int *)(pf_stack_frame + 96))
#define local_1c (*(int *)(pf_stack_frame + 100))
#define local_18 (*(int *)(pf_stack_frame + 104))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100084d0
 */

void recovered_100084d0(int in_ECX)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  ushort in_FPUControlWord = pf_fpu_control();
  longdouble lVar10;
  longdouble lVar11;

  if (((in_ECX != 0) && (0 < *(int *)(in_ECX + 0xc))) && (0 < *(int *)(in_ECX + 0x10))) {
    uVar8 = *(int *)(in_ECX + 0xc) * *(int *)(in_ECX + 0x10) * 4;
    *(undefined4 *)(in_ECX + 0x44) = 0;
    uVar2 = 0;
    local_50 = in_ECX;
    if (*(uint *)(in_ECX + 0x48) < uVar8) {
      pvVar3 = recovered_10006f10(uVar8);
      pvVar1 = *(void **)(in_ECX + 0x40);
      iVar9 = *(int *)(in_ECX + 0x44);
      if (iVar9 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar9 != iVar6);
      }
      recovered_10006f70(pvVar1);
      *(void **)(local_50 + 0x40) = pvVar3;
      *(uint *)(local_50 + 0x48) = uVar8;
      uVar2 = *(uint *)(local_50 + 0x44);
      in_ECX = local_50;
    }
    while (uVar2 < uVar8) {
      *(undefined1 *)(*(int *)(in_ECX + 0x40) + uVar2) = 0;
      uVar2 = *(int *)(in_ECX + 0x44) + 1;
      *(uint *)(in_ECX + 0x44) = uVar2;
    }
    if (((*(int *)(in_ECX + 0x30) == 0) || (iVar9 = *(int *)(in_ECX + 0x38), iVar9 < 1)) ||
       (iVar6 = *(int *)(in_ECX + 0x3c), iVar6 < 1)) {
      local_54 = 0;
      local_68 = 0;
      iVar7 = 0;
      local_5c = 0;
      local_60 = 0;
    }
    else {
      local_20 = *(int *)(in_ECX + 0xc);
      local_24 = *(int *)(in_ECX + 0x10);
      lVar10 = (longdouble)local_20 / (longdouble)iVar9;
      lVar11 = (longdouble)local_24 / (longdouble)iVar6;
      if (lVar11 < lVar10) {
        lVar10 = lVar11;
      }
      local_4a = in_FPUControlWord | 0xc00;
      local_18 = (int)ROUND((longdouble)iVar9 * lVar10);
      local_60 = local_18;
      if (local_18 < 2) {
        local_60 = 1;
      }
      local_4c = in_FPUControlWord | 0xc00;
      local_1c = (int)ROUND(lVar10 * (longdouble)iVar6);
      local_5c = 1;
      if (1 < local_1c) {
        local_5c = local_1c;
      }
      iVar7 = (local_20 - local_60) / 2;
      local_68 = (local_24 - local_5c) / 2;
      local_54 = CONCAT31((int3)((uint)(local_24 - local_5c) >> 8),1);
      local_2c = iVar9;
      local_28 = iVar6;
    }
    iVar9 = *(int *)(in_ECX + 0x10);
    if (0 < iVar9) {
      local_38 = local_60 + iVar7;
      local_3c = local_5c + local_68;
      iVar6 = *(int *)(in_ECX + 0xc);
      local_48 = -iVar7;
      local_64 = 0;
      local_44 = iVar7;
      do {
        if (0 < iVar6) {
          local_40 = local_64 - local_68;
          iVar9 = 0;
          do {
            local_6c = *(undefined1 *)(in_ECX + 0x1d);
            local_6b = *(undefined1 *)(in_ECX + 0x1e);
            local_6a = *(undefined1 *)(in_ECX + 0x1f);
            if ((((iVar7 <= iVar9 & (byte)local_54) == 1) && (iVar9 < local_38)) &&
               ((local_68 <= local_64 && (local_64 < local_3c)))) {
              local_30 = *(int *)(in_ECX + 0x2c);
              local_34 = *(int *)(in_ECX + 0x38);
              iVar4 = ((local_48 + iVar9) * local_34) / local_60;
              iVar7 = local_34 + -1;
              if (iVar4 <= local_34 + -1) {
                iVar7 = iVar4;
              }
              if (iVar4 < 0) {
                iVar7 = 0;
              }
              iVar5 = (*(int *)(local_50 + 0x3c) * local_40) / local_5c;
              iVar4 = *(int *)(local_50 + 0x3c) + -1;
              if (iVar5 <= iVar4) {
                iVar4 = iVar5;
              }
              if (iVar5 < 0) {
                iVar4 = 0;
              }
              iVar7 = iVar4 * local_34 + iVar7;
              local_6c = *(undefined1 *)(local_30 + iVar7 * 4);
              local_6b = *(undefined1 *)(local_30 + 1 + iVar7 * 4);
              local_6a = *(undefined1 *)(local_30 + 2 + iVar7 * 4);
              iVar7 = local_44;
              in_ECX = local_50;
            }
            local_69 = 0xff;
            recovered_10002630((void *)((iVar6 * local_64 + iVar9) * 4 + *(int *)(in_ECX + 0x40)),
                               &local_6c,4);
            iVar9 = iVar9 + 1;
            iVar6 = *(int *)(in_ECX + 0xc);
          } while (iVar9 < iVar6);
          iVar9 = *(int *)(in_ECX + 0x10);
        }
        local_64 = local_64 + 1;
      } while (local_64 < iVar9);
    }
  }
  return;
}

#undef local_6c
#undef local_6b
#undef local_6a
#undef local_69
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_54
#undef local_50
#undef local_4c
#undef local_4a
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
#undef DAT_0028087c
#define DAT_0028087c (*(uint8_t *)(0x28087cU))
#undef DAT_1000b364
#define DAT_1000b364 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x615U)))
#undef DAT_1000b368
#define DAT_1000b368 (*(int *)(((uintptr_t)pf_module_state + 0x619U)))
#undef DAT_1000b36c
#define DAT_1000b36c (*(int *)(((uintptr_t)pf_module_state + 0x61dU)))
#undef DAT_1000b370
#define DAT_1000b370 (*(uint *)(((uintptr_t)pf_module_state + 0x621U)))
#undef DAT_1000b374
#define DAT_1000b374 (*(uint *)(((uintptr_t)pf_module_state + 0x625U)))
#undef DAT_1000b378
#define DAT_1000b378 (*(uint *)(((uintptr_t)pf_module_state + 0x629U)))
#undef DAT_1000b37c
#define DAT_1000b37c (*(int *)(((uintptr_t)pf_module_state + 0x62dU)))
#undef DAT_1000b380
#define DAT_1000b380 (*(uint *)(((uintptr_t)pf_module_state + 0x631U)))
#undef DAT_1000b384
#define DAT_1000b384 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x635U)))
#undef DAT_1000b388
#define DAT_1000b388 (*(uint *)(((uintptr_t)pf_module_state + 0x639U)))
#undef DAT_1000b38c
#define DAT_1000b38c (*(uint32_t *)(((uintptr_t)pf_module_state + 0x63dU)))
#undef DAT_1000b390
#define DAT_1000b390 (*(uint *)(((uintptr_t)pf_module_state + 0x641U)))
#undef DAT_1000b394
#define DAT_1000b394 (*(uint32_t *)(((uintptr_t)pf_module_state + 0x645U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028087c
#define _DAT_0028087c (*(code * *)(0x28087cU))
#define local_48 (*(uint *)(pf_stack_frame + 56))
#define local_70 (*(uint *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100087f0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_100087f0(int in_ECX)

{
  unsigned char pf_stack_frame[160] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  longlong lVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  byte bVar16;
  byte bVar17;
  byte bVar18;
  byte bVar19;
  byte bVar20;
  byte bVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  int iVar30;
  bool bVar31;
  undefined8 uVar32;
  undefined8 uVar33;

  if ((((in_ECX != 0) && (*(int *)(in_ECX + 0x44) != 0)) && (0 < *(int *)(in_ECX + 0xc))) &&
     (0 < *(int *)(in_ECX + 0x10))) {
    recovered_100028c0(&DAT_1000b364,0,0x34);
    if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
       ((0xb < _DAT_00280808 && ((0x7f < _DAT_00280808 && (_DAT_0028087c != (code *)0x0)))))) {
      iVar10 = (*_DAT_0028087c)(&DAT_1000b364);
      uVar15 = DAT_1000b390;
      uVar24 = DAT_1000b388;
      uVar28 = DAT_1000b380;
      uVar9 = DAT_1000b378;
      uVar8 = DAT_1000b374;
      uVar7 = DAT_1000b370;
      iVar6 = DAT_1000b364;
      if (iVar10 != 0) {
        local_48 = DAT_1000b374;
        if ((DAT_1000b368 == 0 &&
            (DAT_1000b374 <= DAT_1000b370 >> 2 && (DAT_1000b390 != 0 && DAT_1000b388 != 0))) &&
            ((DAT_1000b380 != 0 && (DAT_1000b37c == 0x20 && DAT_1000b378 != 0)) &&
            ((DAT_1000b374 != 0 && DAT_1000b370 != 0) &&
            (DAT_1000b36c != 0 && (DAT_1000b364 != 0 || DAT_1000b368 != 0))))) {
          bVar1 = *(byte *)(in_ECX + 0x1d);
          bVar16 = (byte)DAT_1000b380;
          uVar25 = ~(-1 << (bVar16 & 0x1f));
          if (0x1f < DAT_1000b380) {
            uVar25 = 0xffffffff;
          }
          bVar17 = (byte)DAT_1000b384;
          bVar18 = (byte)DAT_1000b388;
          uVar26 = ~(-1 << (bVar18 & 0x1f));
          if (0x1f < DAT_1000b388) {
            uVar26 = 0xffffffff;
          }
          bVar2 = *(byte *)(in_ECX + 0x1e);
          bVar19 = (byte)DAT_1000b38c;
          bVar20 = (byte)DAT_1000b390;
          uVar27 = ~(-1 << (bVar20 & 0x1f));
          if (0x1f < DAT_1000b390) {
            uVar27 = 0xffffffff;
          }
          bVar3 = *(byte *)(in_ECX + 0x1f);
          bVar21 = (byte)DAT_1000b394;
          uVar11 = 0;
          uVar22 = 1;
          do {
            bVar31 = uVar22 != 0;
            uVar22 = 0;
            if (bVar31) {
              uVar22 = 0;
              do {
                *(uint *)(uVar11 * uVar7 + iVar6 + uVar22 * 4) =
                     (bVar2 * uVar26 + 0x7f) / 0xff << (bVar19 & 0x1f) |
                     (bVar1 * uVar25 + 0x7f) / 0xff << (bVar17 & 0x1f) |
                     (bVar3 * uVar27 + 0x7f) / 0xff << (bVar21 & 0x1f);
                uVar22 = uVar22 + 1;
              } while (uVar8 != uVar22);
              uVar22 = uVar8;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 != uVar9);
          uVar22 = *(uint *)(in_ECX + 0xc);
          uVar11 = *(uint *)(in_ECX + 0x10);
          lVar5 = (ulonglong)uVar11 * (ulonglong)uVar8;
          uVar32 = recovered_10002180((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),uVar22,0);
          uVar12 = (uint)uVar32;
          if (uVar9 < uVar12) {
            lVar5 = (ulonglong)uVar22 * (ulonglong)uVar9;
            uVar32 = recovered_10002180((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),uVar11,0);
            local_48 = (int)uVar32 + (uint)((int)uVar32 == 0);
            uVar12 = uVar9;
          }
          else {
            uVar12 = uVar12 + (uVar12 == 0);
          }
          uVar11 = uVar8 - local_48 >> 1;
          uVar22 = uVar9 - uVar12 >> 1;
          iVar10 = *(int *)(in_ECX + 0x40);
          uVar29 = 0;
          do {
            lVar5 = (ulonglong)uVar29 * (ulonglong)*(uint *)(in_ECX + 0x10);
            uVar32 = recovered_10002180((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),uVar12,0);
            uVar23 = 0;
            do {
              uVar4 = *(uint *)(in_ECX + 0xc);
              lVar5 = (ulonglong)uVar4 * (ulonglong)uVar23;
              uVar33 = recovered_10002180((uint)lVar5,(uint)((ulonglong)lVar5 >> 0x20),local_48,0);
              iVar30 = uVar4 * (int)uVar32 + (int)uVar33;
              *(uint *)((uVar22 + uVar29) * uVar7 + iVar6 + uVar11 * 4 + uVar23 * 4) =
                   (*(byte *)(iVar10 + 2 + iVar30 * 4) * uVar27 + 0x7f) / 0xff << (bVar21 & 0x1f) |
                   (*(byte *)(iVar10 + 1 + iVar30 * 4) * uVar26 + 0x7f) / 0xff << (bVar19 & 0x1f) |
                   (*(byte *)(iVar10 + iVar30 * 4) * uVar25 + 0x7f) / 0xff << (bVar17 & 0x1f);
              uVar23 = uVar23 + 1;
            } while (local_48 + (local_48 == 0) != uVar23);
            uVar29 = uVar29 + 1;
          } while (uVar29 < uVar12);
          uVar25 = *(uint *)(in_ECX + 0x14);
          if ((0 < (int)uVar25) && (uVar26 = *(uint *)(in_ECX + 0x18), 0 < (int)uVar26)) {
            uVar27 = *(uint *)(in_ECX + 0x20);
            uVar29 = uVar25 - 1;
            if ((int)uVar27 <= (int)(uVar25 - 1)) {
              uVar29 = uVar27;
            }
            if ((int)uVar27 < 0) {
              uVar29 = 0;
            }
            uVar27 = *(uint *)(in_ECX + 0x24);
            uVar32 = recovered_10002180((uint)((ulonglong)local_48 * (ulonglong)uVar29),
                                        (int)((ulonglong)local_48 * (ulonglong)uVar29 >> 0x20) +
                                        ((int)uVar29 >> 0x1f) * local_48,uVar25,0);
            uVar25 = uVar26 - 1;
            if ((int)uVar27 <= (int)(uVar26 - 1)) {
              uVar25 = uVar27;
            }
            if ((int)uVar27 < 0) {
              uVar25 = 0;
            }
            uVar33 = recovered_10002180((uint)((ulonglong)uVar12 * (ulonglong)uVar25),
                                        (int)((ulonglong)uVar12 * (ulonglong)uVar25 >> 0x20) +
                                        ((int)uVar25 >> 0x1f) * uVar12,uVar26,0);
            if (*(char *)(in_ECX + 0x28) == '\x01') {
              uVar25 = 0x1010100;
              if (uVar28 < 0x20) {
                uVar25 = ((0xff << (bVar16 & 0x1f)) - 0x80U) / 0xff;
              }
              uVar26 = 0;
              uVar28 = 0;
              if (uVar24 < 0x20) {
                uVar28 = ((0x3c << (bVar18 & 0x1f)) + 0x43U) / 0xff;
              }
              if (uVar15 < 0x20) {
                uVar26 = ((0x3c << (bVar20 & 0x1f)) + 0x43U) / 0xff;
              }
              local_70 = uVar28 << (bVar19 & 0x1f) | uVar26 << (bVar21 & 0x1f) |
                         uVar25 << (bVar17 & 0x1f);
            }
            else if (*(char *)(in_ECX + 0x29) == '\x01') {
              uVar25 = 0;
              if (uVar28 < 0x20) {
                uVar25 = ((0x3c << (bVar16 & 0x1f)) + 0x43U) / 0xff;
              }
              uVar28 = 0x1010100;
              if (uVar24 < 0x20) {
                uVar28 = ((0xff << (bVar18 & 0x1f)) - 0x80U) / 0xff;
              }
              uVar24 = 0;
              if (uVar15 < 0x20) {
                uVar24 = ((0x3c << (bVar20 & 0x1f)) + 0x43U) / 0xff;
              }
              local_70 = uVar28 << (bVar19 & 0x1f) | uVar24 << (bVar21 & 0x1f) |
                         uVar25 << (bVar17 & 0x1f);
            }
            else {
              uVar25 = 0x1010100;
              if (uVar15 < 0x20) {
                uVar25 = ((0xff << (bVar20 & 0x1f)) - 0x80U) / 0xff;
              }
              if (*(char *)(in_ECX + 0x2a) == '\0') {
                uVar15 = 0x1010100;
                if (uVar28 < 0x20) {
                  uVar15 = ((0xff << (bVar16 & 0x1f)) - 0x80U) / 0xff;
                }
                uVar28 = 0x1010100;
                if (uVar24 < 0x20) {
                  uVar28 = ((0xff << (bVar18 & 0x1f)) - 0x80U) / 0xff;
                }
                local_70 = uVar28 << (bVar19 & 0x1f) | uVar15 << (bVar17 & 0x1f);
              }
              else {
                uVar15 = 0;
                if (uVar28 < 0x20) {
                  uVar15 = ((0x50 << (bVar16 & 0x1f)) + 0x2fU) / 0xff;
                }
                uVar28 = 0x1010100;
                if (uVar24 < 0x20) {
                  uVar28 = ((0x82 << (bVar18 & 0x1f)) - 3U) / 0xff;
                }
                local_70 = uVar28 << (bVar19 & 0x1f) | uVar15 << (bVar17 & 0x1f);
              }
              local_70 = local_70 | uVar25 << (bVar21 & 0x1f);
            }
            iVar10 = -7;
            do {
              uVar28 = uVar22 + (int)uVar33 + iVar10;
              iVar30 = -7;
              do {
                iVar13 = recovered_10002520(iVar30);
                iVar14 = recovered_10002520(iVar10);
                if ((((iVar14 + iVar13 < 8) &&
                     (uVar24 = uVar11 + (int)uVar32 + iVar30, -1 < (int)uVar24)) &&
                    (-1 < (int)uVar28)) && ((uVar24 < uVar8 && (uVar28 < uVar9)))) {
                  uVar15 = local_70;
                  if (5 < iVar14 + iVar13) {
                    uVar15 = 0;
                  }
                  *(uint *)(uVar28 * uVar7 + iVar6 + uVar24 * 4) = uVar15;
                }
                iVar30 = iVar30 + 1;
              } while (iVar30 != 8);
              iVar10 = iVar10 + 1;
            } while (iVar10 != 8);
          }
        }
      }
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028087c
#undef DAT_1000b364
#undef DAT_1000b368
#undef DAT_1000b36c
#undef DAT_1000b370
#undef DAT_1000b374
#undef DAT_1000b378
#undef DAT_1000b37c
#undef DAT_1000b380
#undef DAT_1000b384
#undef DAT_1000b388
#undef DAT_1000b38c
#undef DAT_1000b390
#undef DAT_1000b394
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028087c
#undef local_48
#undef local_70

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f50
 */

void recovered_10008f50(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1c) = 1;
  }
  return;
}


#undef DAT_00280800
#define DAT_00280800 (*(uint8_t *)(0x280800U))
#undef DAT_00280804
#define DAT_00280804 (*(uint8_t *)(0x280804U))
#undef DAT_00280808
#define DAT_00280808 (*(uint8_t *)(0x280808U))
#undef DAT_00280818
#define DAT_00280818 (*(uint8_t *)(0x280818U))
#undef DAT_1000b360
#define DAT_1000b360 (*(uint32_t * *)(((uintptr_t)pf_module_state + 0x611U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280818
#define _DAT_00280818 (*(code * *)(0x280818U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10008f70
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10008f70(undefined4 *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != (undefined4 *)0x0) {
    if (DAT_1000b360 == param_1) {
      DAT_1000b360 = (undefined4 *)0x0;
    }
    param_1[0x11] = 0;
    recovered_10006f70((void *)param_1[0x10]);
    param_1[0xc] = 0;
    recovered_10006f70((void *)param_1[0xb]);
    recovered_10006f70((void *)*param_1);
    recovered_10006f70(param_1);
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
       ((0x1b < _DAT_00280808 && (_DAT_00280818 != (code *)0x0)))) {
      (*_DAT_00280818)();
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280818
#undef DAT_1000b360
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280818

#undef DAT_1000ae3b
#define DAT_1000ae3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000af88
#define DAT_1000af88 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x239U)))
#undef PTR_recovered_10006ea0_1000b004
#define PTR_recovered_10006ea0_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b5U)))
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
 * Address: 0x10009010
 */

void * recovered_10009010(undefined4 *param_1)

{
  unsigned char pf_stack_frame[288] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *destination;
  undefined1 *puVar2;

  local_28 = auStack_1c + 0x18;
  local_20 = auStackY_f0 + 0x80;
  local_54 = (undefined1 *)0x0;
  local_50 = 0;
  local_4c = 0;
  local_30 = PTR_recovered_10006ea0_1000b004;
  local_2c = &DAT_1000af88;
  local_24 = 0xf6;
  recovered_10007510(&local_48);
  if (param_1 == (undefined4 *)0x0) {
    iVar1 = 1;
  }
  else {
    puVar2 = &DAT_1000ae3b;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      puVar2 = (undefined1 *)*param_1;
    }
    local_44 = 0xffffffff;
    recovered_1000a790((int *)&local_54,(int)puVar2,param_1[1]);
    iVar1 = local_50 + 1;
  }
  local_44 = 1;
  destination = recovered_10006f40(iVar1);
  puVar2 = &DAT_1000ae3b;
  if (local_54 != (undefined1 *)0x0) {
    puVar2 = local_54;
  }
  local_44 = 2;
  recovered_10002630(destination,puVar2,local_50 + 1);
  recovered_10006f70(local_54);
  recovered_10007540(&local_48);
  return destination;
}

#undef DAT_1000ae3b
#undef DAT_1000af88
#undef PTR_recovered_10006ea0_1000b004
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
 * Address: 0x10009160
 */

void recovered_10009160(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;

  if (param_2 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0xc);
    }
    *param_2 = uVar1;
  }
  if (param_3 != (undefined4 *)0x0) {
    if (param_1 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(undefined4 *)(param_1 + 0x10);
    }
    *param_3 = uVar1;
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100091a0
 */

void recovered_100091a0(int param_1,int param_2,int param_3)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  if (param_1 != 0) {
    if (param_2 < 2) {
      param_2 = 1;
    }
    *(int *)(param_1 + 0xc) = param_2;
    iVar2 = 1;
    if (1 < param_3) {
      iVar2 = param_3;
    }
    *(int *)(param_1 + 0x10) = iVar2;
    *(int *)(param_1 + 0x14) = param_2;
    *(int *)(param_1 + 0x18) = iVar2;
    iVar3 = *(int *)(param_1 + 0x20);
    iVar4 = param_2 + -1;
    if (iVar3 <= param_2 + -1) {
      iVar4 = iVar3;
    }
    iVar1 = *(int *)(param_1 + 0x24);
    if (iVar3 < 0) {
      iVar4 = 0;
    }
    *(int *)(param_1 + 0x20) = iVar4;
    iVar3 = iVar2 + -1;
    if (iVar1 <= iVar2 + -1) {
      iVar3 = iVar1;
    }
    if (iVar1 < 0) {
      iVar3 = 0;
    }
    *(int *)(param_1 + 0x24) = iVar3;
    recovered_100084d0(param_1);
  }
  return;
}


#undef DAT_1000ae3b
#define DAT_1000ae3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009210
 */

void recovered_10009210(int *param_1,undefined1 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  undefined1 *puVar2;
  uint uVar3;

  if (param_1 != (int *)0x0) {
    puVar2 = &DAT_1000ae3b;
    if (param_2 != (undefined1 *)0x0) {
      puVar2 = param_2;
    }
    uVar3 = 0xffffffff;
    do {
      iVar1 = uVar3 + 1;
      uVar3 = uVar3 + 1;
    } while (puVar2[iVar1] != '\0');
    recovered_1000a790(param_1,(int)puVar2,uVar3);
  }
  return;
}

#undef DAT_1000ae3b

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009260
 */

void recovered_10009260(int param_1,int *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 *puVar1;
  int iVar2;
  int iVar3;

  if ((((param_2 != (int *)0x0 && param_1 != 0) &&
       (puVar1 = (undefined1 *)param_2[2], puVar1 != (undefined1 *)0x0)) &&
      (iVar2 = *param_2, 0 < iVar2)) && (iVar3 = param_2[1], 0 < iVar3)) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    recovered_1000ac30((int *)(param_1 + 0x2c),*(int *)(param_1 + 0x2c),puVar1,
                       puVar1 + iVar2 * (uintptr_t)iVar3 * 4);
    *(int *)(param_1 + 0x38) = *param_2;
    *(int *)(param_1 + 0x3c) = param_2[1];
    recovered_100084d0(param_1);
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x100092d0
 */

void recovered_100092d0(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    recovered_10009300();
    recovered_100084d0(param_1);
    recovered_100087f0(param_1);
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
#undef DAT_00280880
#define DAT_00280880 (*(uint8_t *)(0x280880U))
#undef DAT_1000b108
#define DAT_1000b108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b9U)))
#undef DAT_1000b109
#define DAT_1000b109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3baU)))
#undef DAT_1000b10a
#define DAT_1000b10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef DAT_1000b10b
#define DAT_1000b10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bcU)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bdU)))
#undef DAT_1000b10d
#define DAT_1000b10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3beU)))
#undef DAT_1000b10e
#define DAT_1000b10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bfU)))
#undef DAT_1000b10f
#define DAT_1000b10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c0U)))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c1U)))
#undef DAT_1000b111
#define DAT_1000b111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_1000b112
#define DAT_1000b112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c3U)))
#undef DAT_1000b113
#define DAT_1000b113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_1000b114
#define DAT_1000b114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c5U)))
#undef DAT_1000b115
#define DAT_1000b115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_1000b116
#define DAT_1000b116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c7U)))
#undef DAT_1000b117
#define DAT_1000b117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c8U)))
#undef DAT_1000b118
#define DAT_1000b118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c9U)))
#undef DAT_1000b119
#define DAT_1000b119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_1000b11a
#define DAT_1000b11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cbU)))
#undef DAT_1000b11b
#define DAT_1000b11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ccU)))
#undef DAT_1000b11c
#define DAT_1000b11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cdU)))
#undef DAT_1000b11d
#define DAT_1000b11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ceU)))
#undef DAT_1000b11e
#define DAT_1000b11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cfU)))
#undef DAT_1000b11f
#define DAT_1000b11f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d0U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d1U)))
#undef DAT_1000b121
#define DAT_1000b121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d2U)))
#undef DAT_1000b122
#define DAT_1000b122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d3U)))
#undef DAT_1000b123
#define DAT_1000b123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d4U)))
#undef DAT_1000b124
#define DAT_1000b124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d5U)))
#undef DAT_1000b125
#define DAT_1000b125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d6U)))
#undef DAT_1000b126
#define DAT_1000b126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d7U)))
#undef DAT_1000b127
#define DAT_1000b127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000b128
#define DAT_1000b128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d9U)))
#undef DAT_1000b129
#define DAT_1000b129 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#undef DAT_1000b12a
#define DAT_1000b12a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dbU)))
#undef DAT_1000b12b
#define DAT_1000b12b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dcU)))
#undef DAT_1000b12c
#define DAT_1000b12c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ddU)))
#undef DAT_1000b12d
#define DAT_1000b12d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3deU)))
#undef DAT_1000b12e
#define DAT_1000b12e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dfU)))
#undef DAT_1000b12f
#define DAT_1000b12f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e0U)))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e1U)))
#undef DAT_1000b131
#define DAT_1000b131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e2U)))
#undef DAT_1000b132
#define DAT_1000b132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e3U)))
#undef DAT_1000b133
#define DAT_1000b133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e4U)))
#undef DAT_1000b134
#define DAT_1000b134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e5U)))
#undef DAT_1000b135
#define DAT_1000b135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e6U)))
#undef DAT_1000b136
#define DAT_1000b136 (*(char *)(((uintptr_t)pf_module_state + 0x3e7U)))
#undef DAT_1000b360
#define DAT_1000b360 (*(int *)(((uintptr_t)pf_module_state + 0x611U)))
#undef DAT_1000b398
#define DAT_1000b398 (*(int *)(((uintptr_t)pf_module_state + 0x649U)))
#undef PTR_DAT_1000b008
#define PTR_DAT_1000b008 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b9U)))
#undef PTR_DAT_1000b070
#define PTR_DAT_1000b070 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x321U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_0028082c
#define _DAT_0028082c (*(code * *)(0x28082cU))
#undef _DAT_00280880
#define _DAT_00280880 (*(code * *)(0x280880U))
#define local_28 (*(uint *)(pf_stack_frame + 40))
#define local_24 (*(int *)(pf_stack_frame + 44))
#define local_20 (*(int *)(pf_stack_frame + 48))
#define local_1c (*(uint *)(pf_stack_frame + 52))
#define local_18 (*(uint *)(pf_stack_frame + 56))
#define local_34 (*(uint *)(pf_stack_frame + 28))
#define local_30 (*(undefined4 *)(pf_stack_frame + 32))
#define local_2c (*(uint *)(pf_stack_frame + 36))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009300
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_10009300(void)

{
  unsigned char pf_stack_frame[112] __attribute__((aligned(16))) = {0};

  longlong lVar1;
  char cVar2;
  char cVar5;
  uint uVar3;
  uint uVar4;
  byte bVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  undefined8 uVar11;

  if (DAT_1000b360 == 0) {
    DAT_1000b108 = 0;
    DAT_1000b109 = 0;
    DAT_1000b10a = 0;
    DAT_1000b10b = 0;
    DAT_1000b10c = 0;
    DAT_1000b10d = 0;
    DAT_1000b10e = 0;
    DAT_1000b10f = 0;
    DAT_1000b110 = 0;
    DAT_1000b111 = 0;
    DAT_1000b112 = 0;
    DAT_1000b113 = 0;
    DAT_1000b114 = 0;
    DAT_1000b115 = 0;
    DAT_1000b116 = 0;
    DAT_1000b117 = 0;
    DAT_1000b118 = 0;
    DAT_1000b119 = 0;
    DAT_1000b11a = 0;
    DAT_1000b11b = 0;
    DAT_1000b11c = 0;
    DAT_1000b11d = 0;
    DAT_1000b11e = 0;
    DAT_1000b11f = 0;
    DAT_1000b120 = 0;
    DAT_1000b121 = 0;
    DAT_1000b122 = 0;
    DAT_1000b123 = 0;
    DAT_1000b124 = 0;
    DAT_1000b125 = 0;
    DAT_1000b126 = 0;
    DAT_1000b127 = 0;
    DAT_1000b128 = 0;
    DAT_1000b129 = 0;
    DAT_1000b12a = 0;
    DAT_1000b12b = 0;
    DAT_1000b12c = 0;
    DAT_1000b12d = 0;
    DAT_1000b12e = 0;
    DAT_1000b12f = 0;
    DAT_1000b130 = 0;
    DAT_1000b131 = 0;
    DAT_1000b132 = 0;
    DAT_1000b133 = 0;
    DAT_1000b134 = 0;
    DAT_1000b135 = 0;
    DAT_1000b136 = '\0';
  }
  else {
    iVar10 = DAT_1000b360;
    if (_DAT_00280800 == 0x50414d57) {
      do {
        if ((((_DAT_00280804 == 0) || (_DAT_00280808 < 0xc)) || (_DAT_00280808 < 0x30)) ||
           (_DAT_0028082c == (code *)0x0)) break;
        uVar3 = (*_DAT_0028082c)();
        iVar10 = DAT_1000b360;
        if (uVar3 == 0) break;
        cVar2 = (char)uVar3;
        cVar5 = (char)(uVar3 >> 8);
        if (cVar2 == '\0') {
          if (DAT_1000b360 == 0) goto LAB_10009480;
          switch((uintptr_t)(cVar5)) {
          case '\x01':
          case 'H':
switchD_10009683_caseD_48:
            DAT_1000b109 = 1;
            break;
          case '\x02':
          case 'P':
switchD_10009683_caseD_50:
            DAT_1000b10a = 1;
            break;
          case '\x03':
          case 'M':
switchD_10009683_caseD_4d:
            DAT_1000b10c = 1;
            break;
          case '\x04':
          case 'K':
switchD_10009683_caseD_4b:
            DAT_1000b10b = 1;
            break;
          default:
            break;
          case '\x0e':
switchD_10009683_caseD_e:
            DAT_1000b133 = 1;
            break;
          case '\x17':
switchD_1000952e_caseD_17:
            *(undefined1 *)(iVar10 + 0x1c) = 1;
            break;
          case '\x1c':
switchD_10009683_caseD_1c:
            DAT_1000b108 = 1;
            break;
          case 'S':
switchD_10009683_caseD_53:
            DAT_1000b134 = 1;
          }
        }
        else if (DAT_1000b360 == 0) {
LAB_10009480:
          iVar10 = 0;
        }
        else {
          if (DAT_1000b398 == 2) {
            DAT_1000b398 = 0;
            switch((uintptr_t)(uVar3 & 0xff)) {
            case 0x41:
              DAT_1000b109 = 1;
              break;
            case 0x42:
              DAT_1000b10a = 1;
              break;
            case 0x43:
              DAT_1000b10c = 1;
              break;
            case 0x44:
              DAT_1000b10b = 1;
            }
          }
          else if (DAT_1000b398 == 1) {
            DAT_1000b398 = (uint)(cVar2 == '[') * 2;
          }
          else if (cVar2 == '\x1b') {
            DAT_1000b398 = 1;
          }
          else if ((byte)(cVar2 - 0x20U) < 0x5f) {
            DAT_1000b136 = cVar2;
            if ((byte)(cVar2 + 0x9fU) < 0x1a) {
              **(undefined1 **)
                ((int)&PTR_DAT_1000b008 + ((int)(uVar3 * 0x1000000 + -0x61000000) >> 0x16)) = 1;
            }
            else {
              bVar6 = cVar2 + 0xbf;
              if (bVar6 < 0x1a) {
                if (bVar6 < 0x1a) {
                  *(&PTR_DAT_1000b008)[bVar6] = 1;
                }
              }
              else {
                if (9 < (byte)(cVar2 - 0x30U)) goto LAB_10009612;
                *(&PTR_DAT_1000b070)[uVar3 + 0xd0 & 0xff] = 1;
              }
            }
          }
          else {
LAB_10009612:
            switch((uintptr_t)(uVar3 & 0xff)) {
            case 3:
            case 4:
              *(undefined1 *)(DAT_1000b360 + 0x1c) = 1;
              break;
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
switchD_10009626_caseD_8:
              DAT_1000b133 = 1;
              break;
            case 10:
            case 0xd:
              DAT_1000b108 = 1;
              break;
            case 0x20:
              DAT_1000b135 = 1;
              break;
            case 0x2d:
              DAT_1000b131 = 1;
              break;
            case 0x2e:
              DAT_1000b132 = 1;
              break;
            default:
              if ((uVar3 & 0xff) == 0x7f) goto switchD_10009626_caseD_8;
            }
          }
          if ((uVar3 & 0xffff) != 0x11b) {
            switch((uintptr_t)(cVar5)) {
            case '\x0e':
              goto switchD_10009683_caseD_e;
            case '\x0f':
            case '\x10':
            case '\x11':
            case '\x12':
            case '\x13':
            case '\x14':
            case '\x15':
            case '\x16':
            case '\x17':
            case '\x18':
            case '\x19':
            case '\x1a':
            case '\x1b':
            case '\x1d':
            case '\x1e':
            case '\x1f':
            case ' ':
            case '!':
            case '\"':
            case '#':
            case '$':
            case '%':
            case '&':
            case '\'':
            case '(':
            case ')':
            case '*':
            case '+':
            case ',':
            case '-':
            case '.':
            case '/':
            case '0':
            case '1':
            case '2':
            case '3':
            case '4':
            case '5':
            case '6':
            case '7':
            case '8':
            case '9':
            case ':':
            case ';':
            case '<':
            case '=':
            case '>':
            case '?':
            case '@':
            case 'A':
            case 'B':
            case 'C':
            case 'D':
            case 'E':
            case 'F':
            case 'G':
            case 'I':
            case 'J':
            case 'L':
            case 'N':
            case 'O':
            case 'Q':
            case 'R':
              break;
            case '\x1c':
              goto switchD_10009683_caseD_1c;
            case 'H':
              goto switchD_10009683_caseD_48;
            case 'K':
              goto switchD_10009683_caseD_4b;
            case 'M':
              goto switchD_10009683_caseD_4d;
            case 'P':
              goto switchD_10009683_caseD_50;
            case 'S':
              goto switchD_10009683_caseD_53;
            default:
              if (cVar5 == '\x01') goto switchD_1000952e_caseD_17;
            }
          }
        }
      } while (_DAT_00280800 == 0x50414d57);
      if (iVar10 == 0) {
        return;
      }
    }
    iVar7 = *(int *)(iVar10 + 0x14);
    if (iVar7 < 2) {
      iVar7 = 1;
    }
    iVar9 = *(int *)(iVar10 + 0x20);
    iVar8 = iVar7 + -1;
    if (iVar9 <= iVar7 + -1) {
      iVar8 = iVar9;
    }
    if (iVar9 < 0) {
      iVar8 = 0;
    }
    *(int *)(iVar10 + 0x20) = iVar8;
    iVar7 = 1;
    if (1 < *(int *)(iVar10 + 0x18)) {
      iVar7 = *(int *)(iVar10 + 0x18);
    }
    iVar9 = *(int *)(iVar10 + 0x24);
    iVar8 = iVar7 + -1;
    if (iVar9 <= iVar7 + -1) {
      iVar8 = iVar9;
    }
    if (iVar9 < 0) {
      iVar8 = 0;
    }
    *(int *)(iVar10 + 0x24) = iVar8;
    local_18 = 0;
    local_1c = 0;
    local_20 = 0;
    local_24 = 0;
    local_28 = 0;
    local_2c = 0;
    local_30 = 0;
    local_34 = 0;
    if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
        ((0xb < _DAT_00280808 && ((0x83 < _DAT_00280808 && (_DAT_00280880 != (code *)0x0)))))) &&
       (iVar7 = (*_DAT_00280880)(&local_34), iVar7 != 0)) {
      if ((local_34 & 1) == 0) {
        if ((local_34 & 2) == 0) {
          iVar7 = *(int *)(iVar10 + 0x20);
          uVar3 = *(uint *)(iVar10 + 0x24);
        }
        else {
          iVar7 = *(int *)(iVar10 + 0x20);
          uVar3 = *(uint *)(iVar10 + 0x24);
          if (local_24 != 0 || local_20 != 0) {
            iVar7 = iVar7 + local_24;
            uVar3 = *(uint *)(iVar10 + 0x24) + local_20;
          }
        }
      }
      else {
        iVar7 = *(int *)(iVar10 + 0x14);
        uVar11 = 0;
        if (1 < iVar7) {
          if (local_1c == 0) {
            uVar3 = iVar7 - 1U;
            if (local_2c <= iVar7 - 1U) {
              uVar3 = local_2c;
            }
            uVar11 = 0;
            if (-1 < (int)local_2c) {
              uVar11 = CONCAT44(local_2c,uVar3);
            }
          }
          else {
            uVar3 = 0;
            if (0 < (int)local_2c) {
              uVar3 = local_2c;
            }
            if (local_1c <= uVar3) {
              uVar3 = local_1c;
            }
            lVar1 = (ulonglong)(iVar7 - 1) * (ulonglong)uVar3;
            uVar11 = recovered_10002180((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_1c,0);
          }
        }
        iVar7 = (int)uVar11;
        iVar9 = *(int *)(iVar10 + 0x18);
        uVar3 = 0;
        if (1 < iVar9) {
          if (local_18 == 0) {
            uVar4 = iVar9 - 1U;
            if (local_28 <= iVar9 - 1U) {
              uVar4 = local_28;
            }
            uVar3 = 0;
            if (-1 < (int)local_28) {
              uVar3 = uVar4;
            }
          }
          else {
            uVar3 = 0;
            if (0 < (int)local_28) {
              uVar3 = local_28;
            }
            if (local_18 <= uVar3) {
              uVar3 = local_18;
            }
            lVar1 = (ulonglong)(iVar9 - 1) * (ulonglong)uVar3;
            uVar11 = recovered_10002180((uint)lVar1,(uint)((ulonglong)lVar1 >> 0x20),local_18,0);
            uVar3 = (uint)uVar11;
          }
        }
      }
      *(byte *)(iVar10 + 0x28) = (byte)local_30 & 1;
      *(byte *)(iVar10 + 0x29) = (byte)local_30 >> 1 & 1;
      *(byte *)(iVar10 + 0x2a) = (byte)local_30 >> 2 & 1;
      iVar9 = *(int *)(iVar10 + 0x14);
      if (iVar9 < 2) {
        iVar9 = 1;
      }
      iVar8 = iVar9 + -1;
      if (iVar7 <= iVar9 + -1) {
        iVar8 = iVar7;
      }
      if (iVar7 < 0) {
        iVar8 = 0;
      }
      *(int *)(iVar10 + 0x20) = iVar8;
      iVar7 = 1;
      if (1 < *(int *)(iVar10 + 0x18)) {
        iVar7 = *(int *)(iVar10 + 0x18);
      }
      uVar4 = iVar7 - 1U;
      if ((int)uVar3 <= (int)(iVar7 - 1U)) {
        uVar4 = uVar3;
      }
      if ((int)uVar3 < 0) {
        uVar4 = 0;
      }
      *(uint *)(iVar10 + 0x24) = uVar4;
    }
  }
  return;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_0028082c
#undef DAT_00280880
#undef DAT_1000b108
#undef DAT_1000b109
#undef DAT_1000b10a
#undef DAT_1000b10b
#undef DAT_1000b10c
#undef DAT_1000b10d
#undef DAT_1000b10e
#undef DAT_1000b10f
#undef DAT_1000b110
#undef DAT_1000b111
#undef DAT_1000b112
#undef DAT_1000b113
#undef DAT_1000b114
#undef DAT_1000b115
#undef DAT_1000b116
#undef DAT_1000b117
#undef DAT_1000b118
#undef DAT_1000b119
#undef DAT_1000b11a
#undef DAT_1000b11b
#undef DAT_1000b11c
#undef DAT_1000b11d
#undef DAT_1000b11e
#undef DAT_1000b11f
#undef DAT_1000b120
#undef DAT_1000b121
#undef DAT_1000b122
#undef DAT_1000b123
#undef DAT_1000b124
#undef DAT_1000b125
#undef DAT_1000b126
#undef DAT_1000b127
#undef DAT_1000b128
#undef DAT_1000b129
#undef DAT_1000b12a
#undef DAT_1000b12b
#undef DAT_1000b12c
#undef DAT_1000b12d
#undef DAT_1000b12e
#undef DAT_1000b12f
#undef DAT_1000b130
#undef DAT_1000b131
#undef DAT_1000b132
#undef DAT_1000b133
#undef DAT_1000b134
#undef DAT_1000b135
#undef DAT_1000b136
#undef DAT_1000b360
#undef DAT_1000b398
#undef PTR_DAT_1000b008
#undef PTR_DAT_1000b070
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_0028082c
#undef _DAT_00280880
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_34
#undef local_30
#undef local_2c

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c10
 */

undefined1 recovered_10009c10(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x1c);
  }
  return uVar1;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c30
 */

void recovered_10009c30(int param_1,undefined1 param_2,undefined1 param_3,undefined1 param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  if (param_1 != 0) {
    *(undefined1 *)(param_1 + 0x1d) = param_2;
    *(undefined1 *)(param_1 + 0x1e) = param_3;
    *(undefined1 *)(param_1 + 0x1f) = param_4;
    if (*(int *)(param_1 + 0x30) == 0) {
      recovered_100084d0(param_1);
    }
  }
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009c70
 */

int * recovered_10009c70(int param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;
  void *destination;
  ulong count;
  int *piVar3;

  piVar3 = (int *)0x0;
  if (param_1 != 0) {
    recovered_100084d0(param_1);
    if (*(int *)(param_1 + 0x44) != 0) {
      piVar3 = recovered_10006f10(0x18);
      iVar1 = *(int *)(param_1 + 0xc);
      *piVar3 = iVar1;
      iVar2 = *(int *)(param_1 + 0x10);
      piVar3[1] = iVar2;
      count = iVar1 * (uintptr_t)iVar2 * 4;
      destination = recovered_10006f40(count);
      piVar3[2] = (int)destination;
      recovered_10002630(destination,*(void **)(param_1 + 0x40),count);
      piVar3[3] = 0;
      piVar3[4] = 0;
      piVar3[5] = 0;
    }
  }
  return piVar3;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009cf0
 */

void recovered_10009cf0(int param_1,undefined4 *param_2,undefined4 *param_3)

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
      *param_2 = *(undefined4 *)(param_1 + 0x20);
    }
    if (param_3 == (undefined4 *)0x0) {
      return;
    }
    uVar1 = *(undefined4 *)(param_1 + 0x24);
  }
  *param_3 = uVar1;
  return;
}


/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d40
 */

undefined1 recovered_10009d40(int param_1,uint param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  undefined1 uVar1;

  if (param_2 < 3 && param_1 != 0) {
    uVar1 = *(undefined1 *)(param_1 + 0x28 + param_2);
  }
  else {
    uVar1 = 0;
  }
  return uVar1;
}


#undef DAT_1000b108
#define DAT_1000b108 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3b9U)))
#undef DAT_1000b109
#define DAT_1000b109 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3baU)))
#undef DAT_1000b10a
#define DAT_1000b10a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bbU)))
#undef DAT_1000b10b
#define DAT_1000b10b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bcU)))
#undef DAT_1000b10c
#define DAT_1000b10c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bdU)))
#undef DAT_1000b10d
#define DAT_1000b10d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3beU)))
#undef DAT_1000b10e
#define DAT_1000b10e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3bfU)))
#undef DAT_1000b10f
#define DAT_1000b10f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c0U)))
#undef DAT_1000b110
#define DAT_1000b110 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c1U)))
#undef DAT_1000b111
#define DAT_1000b111 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c2U)))
#undef DAT_1000b112
#define DAT_1000b112 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c3U)))
#undef DAT_1000b113
#define DAT_1000b113 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c4U)))
#undef DAT_1000b114
#define DAT_1000b114 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c5U)))
#undef DAT_1000b115
#define DAT_1000b115 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c6U)))
#undef DAT_1000b116
#define DAT_1000b116 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c7U)))
#undef DAT_1000b117
#define DAT_1000b117 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c8U)))
#undef DAT_1000b118
#define DAT_1000b118 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3c9U)))
#undef DAT_1000b119
#define DAT_1000b119 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3caU)))
#undef DAT_1000b11a
#define DAT_1000b11a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cbU)))
#undef DAT_1000b11b
#define DAT_1000b11b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ccU)))
#undef DAT_1000b11c
#define DAT_1000b11c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cdU)))
#undef DAT_1000b11d
#define DAT_1000b11d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ceU)))
#undef DAT_1000b11e
#define DAT_1000b11e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3cfU)))
#undef DAT_1000b11f
#define DAT_1000b11f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d0U)))
#undef DAT_1000b120
#define DAT_1000b120 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d1U)))
#undef DAT_1000b121
#define DAT_1000b121 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d2U)))
#undef DAT_1000b122
#define DAT_1000b122 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d3U)))
#undef DAT_1000b123
#define DAT_1000b123 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d4U)))
#undef DAT_1000b124
#define DAT_1000b124 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d5U)))
#undef DAT_1000b125
#define DAT_1000b125 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d6U)))
#undef DAT_1000b126
#define DAT_1000b126 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d7U)))
#undef DAT_1000b127
#define DAT_1000b127 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d8U)))
#undef DAT_1000b128
#define DAT_1000b128 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3d9U)))
#undef DAT_1000b129
#define DAT_1000b129 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3daU)))
#undef DAT_1000b12a
#define DAT_1000b12a (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dbU)))
#undef DAT_1000b12b
#define DAT_1000b12b (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dcU)))
#undef DAT_1000b12c
#define DAT_1000b12c (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3ddU)))
#undef DAT_1000b12d
#define DAT_1000b12d (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3deU)))
#undef DAT_1000b12e
#define DAT_1000b12e (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3dfU)))
#undef DAT_1000b12f
#define DAT_1000b12f (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e0U)))
#undef DAT_1000b130
#define DAT_1000b130 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e1U)))
#undef DAT_1000b131
#define DAT_1000b131 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e2U)))
#undef DAT_1000b132
#define DAT_1000b132 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e3U)))
#undef DAT_1000b133
#define DAT_1000b133 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e4U)))
#undef DAT_1000b134
#define DAT_1000b134 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e5U)))
#undef DAT_1000b135
#define DAT_1000b135 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e6U)))
#undef DAT_1000b136
#define DAT_1000b136 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x3e7U)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009d70
 */

void recovered_10009d70(void)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  DAT_1000b108 = 0;
  DAT_1000b109 = 0;
  DAT_1000b10a = 0;
  DAT_1000b10b = 0;
  DAT_1000b10c = 0;
  DAT_1000b10d = 0;
  DAT_1000b10e = 0;
  DAT_1000b10f = 0;
  DAT_1000b110 = 0;
  DAT_1000b111 = 0;
  DAT_1000b112 = 0;
  DAT_1000b113 = 0;
  DAT_1000b114 = 0;
  DAT_1000b115 = 0;
  DAT_1000b116 = 0;
  DAT_1000b117 = 0;
  DAT_1000b118 = 0;
  DAT_1000b119 = 0;
  DAT_1000b11a = 0;
  DAT_1000b11b = 0;
  DAT_1000b11c = 0;
  DAT_1000b11d = 0;
  DAT_1000b11e = 0;
  DAT_1000b11f = 0;
  DAT_1000b120 = 0;
  DAT_1000b121 = 0;
  DAT_1000b122 = 0;
  DAT_1000b123 = 0;
  DAT_1000b124 = 0;
  DAT_1000b125 = 0;
  DAT_1000b126 = 0;
  DAT_1000b127 = 0;
  DAT_1000b128 = 0;
  DAT_1000b129 = 0;
  DAT_1000b12a = 0;
  DAT_1000b12b = 0;
  DAT_1000b12c = 0;
  DAT_1000b12d = 0;
  DAT_1000b12e = 0;
  DAT_1000b12f = 0;
  DAT_1000b130 = 0;
  DAT_1000b131 = 0;
  DAT_1000b132 = 0;
  DAT_1000b133 = 0;
  DAT_1000b134 = 0;
  DAT_1000b135 = 0;
  DAT_1000b136 = 0;
  return;
}

#undef DAT_1000b108
#undef DAT_1000b109
#undef DAT_1000b10a
#undef DAT_1000b10b
#undef DAT_1000b10c
#undef DAT_1000b10d
#undef DAT_1000b10e
#undef DAT_1000b10f
#undef DAT_1000b110
#undef DAT_1000b111
#undef DAT_1000b112
#undef DAT_1000b113
#undef DAT_1000b114
#undef DAT_1000b115
#undef DAT_1000b116
#undef DAT_1000b117
#undef DAT_1000b118
#undef DAT_1000b119
#undef DAT_1000b11a
#undef DAT_1000b11b
#undef DAT_1000b11c
#undef DAT_1000b11d
#undef DAT_1000b11e
#undef DAT_1000b11f
#undef DAT_1000b120
#undef DAT_1000b121
#undef DAT_1000b122
#undef DAT_1000b123
#undef DAT_1000b124
#undef DAT_1000b125
#undef DAT_1000b126
#undef DAT_1000b127
#undef DAT_1000b128
#undef DAT_1000b129
#undef DAT_1000b12a
#undef DAT_1000b12b
#undef DAT_1000b12c
#undef DAT_1000b12d
#undef DAT_1000b12e
#undef DAT_1000b12f
#undef DAT_1000b130
#undef DAT_1000b131
#undef DAT_1000b132
#undef DAT_1000b133
#undef DAT_1000b134
#undef DAT_1000b135
#undef DAT_1000b136

/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009ed0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009ee0(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10009ef0(void)

{
  unsigned char frame[64] = {0};

  return 0;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

void recovered_10009f00(void)

{
  unsigned char frame[64] = {0};

  return;
}


/* Reviewed instruction-equivalent C. Pooka's Free Software License. */

undefined4 recovered_10009f10(void)

{
  unsigned char frame[64] = {0};

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
#undef DAT_00280858
#define DAT_00280858 (*(uint8_t *)(0x280858U))
#undef DAT_1000ae39
#define DAT_1000ae39 (*(uint8_t *)(((uintptr_t)pf_module_state + 0xeaU)))
#undef DAT_1000ae3b
#define DAT_1000ae3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
#undef DAT_1000af34
#define DAT_1000af34 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x1e5U)))
#undef DAT_1000af90
#define DAT_1000af90 (*(uint8_t *)(((uintptr_t)pf_module_state + 0x241U)))
#undef PTR_recovered_10006ea0_1000b004
#define PTR_recovered_10006ea0_1000b004 (*(uint8_t * *)(((uintptr_t)pf_module_state + 0x2b5U)))
#undef _DAT_00280800
#define _DAT_00280800 (*(int *)(0x280800U))
#undef _DAT_00280804
#define _DAT_00280804 (*(int *)(0x280804U))
#undef _DAT_00280808
#define _DAT_00280808 (*(uint *)(0x280808U))
#undef _DAT_00280850
#define _DAT_00280850 (*(code * *)(0x280850U))
#undef _DAT_00280858
#define _DAT_00280858 (*(code * *)(0x280858U))
#define auStack_14 (*(undefined1 (*)[20])(pf_stack_frame + 316))
#define local_a8 (*(uint *)(pf_stack_frame + 168))
#define local_a4 (*(char * *)(pf_stack_frame + 172))
#define local_a0 (*(uint *)(pf_stack_frame + 176))
#define local_9c (*(uint *)(pf_stack_frame + 180))
#define local_98 (*(uint *)(pf_stack_frame + 184))
#define auStackY_140 (*(undefined1 (*)[320])(pf_stack_frame + 16))
#define local_94 (*(char * *)(pf_stack_frame + 188))
#define local_90 (*(uint *)(pf_stack_frame + 192))
#define local_8c (*(void * *)(pf_stack_frame + 196))
#define local_88 (*(uint *)(pf_stack_frame + 200))
#define local_84 (*(undefined4 *)(pf_stack_frame + 204))
#define local_80 (*(char * *)(pf_stack_frame + 208))
#define local_7c (*(uint *)(pf_stack_frame + 212))
#define local_78 (*(uint *)(pf_stack_frame + 216))
#define local_74 (*(char * *)(pf_stack_frame + 220))
#define local_70 (*(uint *)(pf_stack_frame + 224))
#define local_6c (*(undefined4 *)(pf_stack_frame + 228))
#define local_68 (*(undefined4 *)(pf_stack_frame + 232))
#define local_64 (*(undefined4 *)(pf_stack_frame + 236))
#define local_50 (*(undefined * *)(pf_stack_frame + 256))
#define local_4c (*(undefined * *)(pf_stack_frame + 260))
#define local_48 (*(undefined1 * *)(pf_stack_frame + 264))
#define local_44 (*(undefined4 *)(pf_stack_frame + 268))
#define local_40 (*(undefined1 * *)(pf_stack_frame + 272))
#define local_30 (*(void * *)(pf_stack_frame + 288))
#define local_2c (*(int *)(pf_stack_frame + 292))
#define local_28 (*(ulong *)(pf_stack_frame + 296))
#define local_24 (*(int *)(pf_stack_frame + 300))
#define local_20 (*(int *)(pf_stack_frame + 304))
#define local_1c (*(undefined4 *)(pf_stack_frame + 308))
#define local_18 (*(undefined1 * *)(pf_stack_frame + 312))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x10009f20
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void * recovered_10009f20(int param_1,int *param_2,int *param_3)

{
  unsigned char pf_stack_frame[368] __attribute__((aligned(16))) = {0};

  void *source;
  uint uVar1;
  char *pcVar2;
  undefined1 *puVar3;
  char *pcVar4;
  uint uVar5;
  uint unaff_EBX = 0;
  uint uVar6;
  uint uVar7;
  int iVar8;
  void *destination;

  local_48 = auStack_14 + 0x10;
  local_40 = auStackY_140 + 0x80;
  local_50 = PTR_recovered_10006ea0_1000b004;
  local_4c = &DAT_1000af90;
  local_44 = 0x7bc;
  recovered_10007510(&local_68);
  if (param_2 != (int *)0x0) {
    *param_2 = 0;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = 0;
  }
  if (param_1 == 0) {
    destination = (void *)0x0;
    goto LAB_1000a6de;
  }
  local_1c = 0;
  local_20 = 0;
  local_24 = 0;
  local_28 = 0;
  local_2c = 0;
  local_30 = (void *)0x0;
  local_74 = (char *)0x0;
  local_70 = 0;
  local_6c = 0;
  uVar1 = 0xffffffff;
  do {
    pcVar2 = (char *)(param_1 + 1 + uVar1);
    uVar1 = uVar1 + 1;
  } while (*pcVar2 != '\0');
  local_64 = 0xffffffff;
  recovered_1000a790((int *)&local_74,param_1,uVar1);
  local_8c = (void *)0x0;
  local_88 = 0;
  local_84 = 0;
  uVar1 = 0;
  if (local_70 == 0) {
    local_98 = 0;
  }
  else {
    pcVar2 = &DAT_1000ae3b;
    if (local_74 != (char *)0x0) {
      pcVar2 = local_74;
    }
    local_98 = CONCAT31((int3)((uint)pcVar2 >> 8),*pcVar2 == '/');
  }
  local_94 = &DAT_1000ae3b;
  do {
    uVar5 = local_70 - uVar1;
    if (local_70 < uVar1 || uVar5 == 0) break;
    pcVar2 = local_74;
    if (local_74 == (char *)0x0) {
      pcVar2 = &DAT_1000ae3b;
    }
    uVar6 = uVar1;
    do {
      if (pcVar2[uVar6] == '/') {
        if (uVar6 != 0xffffffff) {
          local_90 = 0;
          local_a8 = uVar6;
          goto LAB_1000a11e;
        }
        break;
      }
      uVar6 = uVar6 + 1;
    } while (local_70 != uVar6);
    local_a8 = 0xffffffff;
    local_90 = CONCAT31((int3)(unaff_EBX >> 8),1);
    uVar6 = local_70;
LAB_1000a11e:
    uVar6 = uVar6 - uVar1;
    uVar7 = uVar6;
    if (uVar5 < uVar6) {
      uVar7 = uVar5;
    }
    if (uVar6 == 0xffffffff) {
      uVar7 = uVar5;
    }
    local_a4 = (char *)0x0;
    local_a0 = 0;
    local_9c = 0;
    local_64 = 1;
    recovered_1000a790((int *)&local_a4,(int)(pcVar2 + uVar1),uVar7);
    if (local_a0 != 0) {
      pcVar2 = local_a4;
      if (local_a4 == (char *)0x0) {
        pcVar2 = &DAT_1000ae3b;
      }
      if (local_a0 == 1) {
        if (*pcVar2 == '.') goto LAB_1000a0a0;
      }
      else if (((local_a0 == 2) && (*pcVar2 == '.')) && (pcVar2[1] == '.')) {
        if (local_88 != 0) {
          pcVar2 = *(char **)((int)local_8c + local_88 * 0xc + -0xc);
          pcVar4 = pcVar2;
          if (pcVar2 == (char *)0x0) {
            pcVar4 = &DAT_1000ae3b;
          }
          if (((*(int *)((int)local_8c + local_88 * 0xc + -8) != 2) || (*pcVar4 != '.')) ||
             (pcVar4[1] != '.')) {
            recovered_10006f70(pcVar2);
            local_88 = local_88 - 1;
            goto LAB_1000a0a0;
          }
        }
        if ((char)local_98 != '\0') goto LAB_1000a0a0;
      }
      local_64 = 2;
      recovered_1000a950((int *)&local_8c,&local_a4);
    }
LAB_1000a0a0:
    uVar1 = local_a8 + 1;
    recovered_10006f70(local_a4);
    unaff_EBX = uVar1;
  } while ((char)local_90 == '\0');
  local_18 = &DAT_1000af34;
  puVar3 = &DAT_1000ae3b;
  if ((char)local_98 != '\0') {
    puVar3 = local_18;
  }
  local_a4 = (char *)0x0;
  local_a0 = 0;
  local_9c = 0;
  uVar1 = 0xffffffff;
  do {
    iVar8 = uVar1 + 1;
    uVar1 = uVar1 + 1;
  } while (puVar3[iVar8] != '\0');
  local_64 = 3;
  recovered_1000a790((int *)&local_a4,(int)puVar3,uVar1);
  if (local_88 != 0) {
    uVar1 = 0;
    do {
      if (uVar1 != 0 || (local_98 & 1) != 0) {
        if (local_a0 == local_9c) {
          uVar5 = local_a0 * 2;
          if (local_a0 == 0) {
            uVar5 = 0x10;
          }
          if (uVar5 <= local_a0) goto LAB_1000a310;
          local_64 = 4;
          local_90 = uVar5;
          pcVar2 = recovered_10006f10(uVar5 | 1);
          *pcVar2 = '\0';
          if (local_a0 != 0) {
            uVar5 = 0;
            do {
              pcVar2[uVar5] = local_a4[uVar5];
              uVar5 = uVar5 + 1;
            } while (local_a0 != uVar5);
          }
          pcVar2[local_a0] = '\0';
          recovered_10006f70(local_a4);
          local_9c = local_90;
LAB_1000a337:
          local_a4 = pcVar2;
        }
        else {
LAB_1000a310:
          if (local_a4 == (char *)0x0) {
            local_64 = 5;
            pcVar2 = recovered_10006f10(1);
            *pcVar2 = '\0';
            local_9c = 0;
            goto LAB_1000a337;
          }
        }
        local_a4[local_a0] = '/';
        local_a4[local_a0 + 1] = '\0';
        local_a0 = local_a0 + 1;
      }
      puVar3 = *(undefined1 **)((int)local_8c + uVar1 * 0xc);
      if (puVar3 == (undefined1 *)0x0) {
        puVar3 = &DAT_1000ae3b;
      }
      local_64 = 6;
      recovered_1000aa90((int *)&local_a4,(int)puVar3,*(uint *)((int)local_8c + uVar1 * 0xc + 4));
      uVar1 = uVar1 + 1;
    } while (uVar1 < local_88);
  }
  if (local_a0 == 0) {
    puVar3 = &DAT_1000ae39;
    if ((char)local_98 != '\0') {
      puVar3 = local_18;
    }
    local_80 = (char *)0x0;
    local_7c = 0;
    local_78 = 0;
    uVar1 = 0xffffffff;
    do {
      iVar8 = uVar1 + 1;
      uVar1 = uVar1 + 1;
    } while (puVar3[iVar8] != '\0');
    local_64 = 7;
    recovered_1000a790((int *)&local_80,(int)puVar3,uVar1);
  }
  else {
    local_80 = local_a4;
    local_7c = local_a0;
    local_78 = local_9c;
    local_a4 = (char *)0x0;
    local_a0 = 0;
    local_9c = 0;
  }
  recovered_10006f70(local_a4);
  if (local_88 != 0) {
    iVar8 = local_88 * 0xc;
    uVar1 = local_88;
    do {
      iVar8 = iVar8 + -0xc;
      recovered_10006f70(*(void **)((int)local_8c + iVar8));
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  local_88 = 0;
  recovered_10006f70(local_8c);
  recovered_10006f70(local_74);
  if (((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) &&
     ((0xb < _DAT_00280808 && ((0x5b < _DAT_00280808 && (_DAT_00280858 != (code *)0x0)))))) {
    local_64 = 8;
    iVar8 = (*_DAT_00280858)();
    if (iVar8 == 0) goto LAB_1000a50b;
LAB_1000a5dd:
    source = local_30;
    destination = (void *)0x0;
    if (((local_2c == 0) && (local_30 != (void *)0x0)) &&
       ((local_28 != 0 && ((local_24 != 0 && (local_20 != 0)))))) {
      local_64 = 10;
      destination = recovered_10006f40(local_28);
      local_64 = 0xb;
      recovered_10002630(destination,source,local_28);
      if ((_DAT_00280800 == 0x50414d57) &&
         ((((_DAT_00280804 != 0 && (0xb < _DAT_00280808)) && (0x53 < _DAT_00280808)) &&
          (_DAT_00280850 != (code *)0x0)))) {
        local_64 = 0xc;
        (*_DAT_00280850)();
      }
      if (param_2 != (int *)0x0) {
        *param_2 = local_24;
      }
      if (param_3 != (int *)0x0) {
        *param_3 = local_20;
      }
    }
  }
  else {
LAB_1000a50b:
    uVar1 = 0xffffffff;
    do {
      pcVar2 = (char *)(param_1 + 1 + uVar1);
      uVar1 = uVar1 + 1;
    } while (*pcVar2 != '\0');
    if (local_80 != (char *)0x0) {
      local_94 = local_80;
    }
    if (local_7c == uVar1) {
      if (local_7c != 0) {
        uVar1 = 0;
        do {
          if (local_94[uVar1] != *(char *)(param_1 + uVar1)) goto LAB_1000a56c;
          uVar1 = uVar1 + 1;
        } while (local_7c != uVar1);
      }
      destination = (void *)0x0;
    }
    else {
LAB_1000a56c:
      destination = (void *)0x0;
      if ((((_DAT_00280800 == 0x50414d57) && (_DAT_00280804 != 0)) && (0xb < _DAT_00280808)) &&
         ((0x5b < _DAT_00280808 && (_DAT_00280858 != (code *)0x0)))) {
        local_64 = 9;
        iVar8 = (*_DAT_00280858)();
        destination = (void *)0x0;
        if (iVar8 != 0) goto LAB_1000a5dd;
      }
    }
  }
  recovered_10006f70(local_80);
LAB_1000a6de:
  recovered_10007540(&local_68);
  return destination;
}

#undef DAT_00280800
#undef DAT_00280804
#undef DAT_00280808
#undef DAT_00280850
#undef DAT_00280858
#undef DAT_1000ae39
#undef DAT_1000ae3b
#undef DAT_1000af34
#undef DAT_1000af90
#undef PTR_recovered_10006ea0_1000b004
#undef _DAT_00280800
#undef _DAT_00280804
#undef _DAT_00280808
#undef _DAT_00280850
#undef _DAT_00280858
#undef auStack_14
#undef local_a8
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef auStackY_140
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
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_30
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18

#define local_1c (*(int *)(pf_stack_frame + 20))
#define local_18 (*(int *)(pf_stack_frame + 24))
#define local_20 (*(void * *)(pf_stack_frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a790
 */

void recovered_1000a790(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[80] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  int iVar2;
  undefined1 *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  uVar6 = param_3;
  if (param_2 == 0) {
    uVar6 = 0;
  }
  puVar3 = (undefined1 *)*param_1;
  if (puVar3 != (undefined1 *)0x0 && param_2 != 0) {
    uVar4 = param_2 - (int)puVar3;
    uVar7 = 0;
    do {
      if (uVar4 == uVar7) {
        uVar7 = param_1[1] - uVar4;
        if (uVar6 < uVar7) {
          uVar7 = uVar6;
        }
        local_20 = (void *)0x0;
        local_1c = 0;
        local_18 = 0;
        recovered_1000a790((int *)&local_20,(int)(puVar3 + uVar4),uVar7);
        pvVar1 = (void *)*param_1;
        *param_1 = (int)local_20;
        iVar2 = param_1[1];
        param_1[1] = local_1c;
        iVar5 = param_1[2];
        param_1[2] = local_18;
        local_20 = pvVar1;
        local_1c = iVar2;
        local_18 = iVar5;
        recovered_10006f70(pvVar1);
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
      puVar3 = recovered_10006f10(1);
      *puVar3 = 0;
      *param_1 = (int)puVar3;
      param_1[2] = 0;
    }
  }
  else {
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_10006f10(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar2 = param_1[1];
      if (iVar2 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar2 != iVar5);
      }
      puVar3[iVar2] = 0;
      recovered_10006f70(pvVar1);
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

#undef local_1c
#undef local_18
#undef local_20

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a900
 */

void recovered_1000a900(int *param_1)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  iVar2 = param_1[1];
  if (iVar2 != 0) {
    iVar1 = iVar2 * 0xc;
    do {
      iVar1 = iVar1 + -0xc;
      recovered_10006f70(*(void **)(*param_1 + iVar1));
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
  }
  param_1[1] = 0;
  recovered_10006f70((void *)*param_1);
  return;
}


#undef DAT_1000ae3b
#define DAT_1000ae3b (*(uint8_t *)(((uintptr_t)pf_module_state + 0xecU)))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000a950
 */

int recovered_1000a950(int *param_1,undefined4 *param_2)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  void *pvVar2;
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
      pvVar2 = recovered_10006f10(uVar4 * 0xc);
      if (param_1[1] != 0) {
        uVar5 = 0;
        iVar6 = 8;
        do {
          iVar1 = *param_1;
          *(undefined4 *)((int)pvVar2 + iVar6 + -8) = *(undefined4 *)(iVar1 + -8 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6 + -4) = *(undefined4 *)(iVar1 + -4 + iVar6);
          *(undefined4 *)((int)pvVar2 + iVar6) = *(undefined4 *)(iVar1 + iVar6);
          *(undefined4 *)(iVar1 + -8 + iVar6) = 0;
          *(undefined4 *)(iVar1 + -4 + iVar6) = 0;
          *(undefined4 *)(iVar1 + iVar6) = 0;
          recovered_10006f70((void *)0x0);
          uVar5 = uVar5 + 1;
          iVar6 = iVar6 + 0xc;
        } while (uVar5 < (uint)param_1[1]);
      }
      recovered_10006f70((void *)*param_1);
      *param_1 = (int)pvVar2;
      param_1[2] = uVar4;
      uVar5 = param_1[1];
    }
  }
  iVar6 = *param_1;
  *(undefined4 *)(iVar6 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar6 + 4 + uVar5 * 0xc) = 0;
  *(undefined4 *)(iVar6 + 8 + uVar5 * 0xc) = 0;
  puVar3 = &DAT_1000ae3b;
  if ((undefined1 *)*param_2 != (undefined1 *)0x0) {
    puVar3 = (undefined1 *)*param_2;
  }
  recovered_1000a790((int *)(iVar6 + uVar5 * 0xc),(int)puVar3,param_2[1]);
  iVar6 = param_1[1];
  param_1[1] = iVar6 + 1;
  return iVar6 * 0xc + *param_1;
}

#undef DAT_1000ae3b

#define local_28 (*(undefined1 * *)(pf_stack_frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000aa90
 */

int * recovered_1000aa90(int *param_1,int param_2,uint param_3)

{
  unsigned char pf_stack_frame[96] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;

  if (param_3 != 0 && param_2 != 0) {
    local_28 = (undefined1 *)*param_1;
    if (local_28 != (undefined1 *)0x0) {
      uVar6 = param_1[1];
      uVar7 = param_2 - (int)local_28;
      uVar2 = 0;
LAB_1000aad0:
      if (uVar7 != uVar2) goto code_r0x1000aad8;
      uVar2 = uVar6 - uVar7;
      if (param_3 <= uVar6 - uVar7) {
        uVar2 = param_3;
      }
      param_3 = uVar2;
      uVar2 = param_3 + uVar6;
      if ((uint)param_1[2] < uVar2) {
        local_28 = recovered_10006f10(uVar2 + 1);
        *local_28 = 0;
        pvVar1 = (void *)*param_1;
        iVar4 = param_1[1];
        if (iVar4 != 0) {
          iVar5 = 0;
          do {
            local_28[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
            iVar5 = iVar5 + 1;
          } while (iVar4 != iVar5);
        }
        local_28[iVar4] = 0;
        recovered_10006f70(pvVar1);
        *param_1 = (int)local_28;
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
        goto LAB_1000ac06;
      }
      goto LAB_1000ac08;
    }
    uVar6 = param_1[1];
LAB_1000aae2:
    uVar6 = uVar6 + param_3;
    if ((uint)param_1[2] < uVar6) {
      puVar3 = recovered_10006f10(uVar6 + 1);
      *puVar3 = 0;
      pvVar1 = (void *)*param_1;
      iVar4 = param_1[1];
      if (iVar4 != 0) {
        iVar5 = 0;
        do {
          puVar3[iVar5] = *(undefined1 *)((int)pvVar1 + iVar5);
          iVar5 = iVar5 + 1;
        } while (iVar4 != iVar5);
      }
      puVar3[iVar4] = 0;
      recovered_10006f70(pvVar1);
      *param_1 = (int)puVar3;
      param_1[2] = uVar6;
    }
    uVar6 = 0;
    do {
      *(undefined1 *)(uVar6 + *param_1 + param_1[1]) = *(undefined1 *)(param_2 + uVar6);
      uVar6 = uVar6 + 1;
    } while (param_3 != uVar6);
LAB_1000ac06:
    local_28 = (undefined1 *)*param_1;
LAB_1000ac08:
    iVar4 = param_3 + param_1[1];
    param_1[1] = iVar4;
    local_28[iVar4] = 0;
  }
  return param_1;
code_r0x1000aad8:
  uVar2 = uVar2 + 1;
  if (uVar6 < uVar2) goto LAB_1000aae2;
  goto LAB_1000aad0;
}

#undef local_28

/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x1000ac30
 */

int recovered_1000ac30(int *param_1,int param_2,undefined1 *param_3,undefined1 *param_4)

{
  unsigned char pf_stack_frame[64] __attribute__((aligned(16))) = {0};

  void *pvVar1;
  undefined1 *puVar2;
  void *pvVar3;
  uint uVar4;
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
    uVar4 = param_1[1];
    puVar8 = (undefined1 *)param_1[2];
    if (puVar8 < param_4 + (uVar4 - (int)param_3)) {
      puVar2 = (undefined1 *)0x4;
      if (puVar8 != (undefined1 *)0x0) {
        puVar2 = puVar8;
      }
      do {
        puVar8 = puVar2;
        puVar2 = (undefined1 *)((int)(uintptr_t)puVar8 * 2);
      } while (puVar8 < param_4 + (uVar4 - (int)param_3));
      pvVar3 = recovered_10006f10((int)puVar8);
      pvVar1 = (void *)*param_1;
      iVar5 = param_1[1];
      if (iVar5 != 0) {
        iVar6 = 0;
        do {
          *(undefined1 *)((int)pvVar3 + iVar6) = *(undefined1 *)((int)pvVar1 + iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar5 != iVar6);
      }
      recovered_10006f70(pvVar1);
      *param_1 = (int)pvVar3;
      param_1[2] = (int)puVar8;
      uVar4 = param_1[1];
    }
    for (; uVar7 < uVar4; uVar4 = uVar4 - 1) {
      param_4[((uVar4 - 1) + *param_1) - (int)param_3] = *(undefined1 *)((uVar4 - 1) + *param_1);
    }
    uVar4 = uVar7;
    puVar8 = param_3;
    do {
      *(undefined1 *)(*param_1 + uVar4) = *puVar8;
      puVar8 = puVar8 + 1;
      uVar4 = uVar4 + 1;
    } while (puVar8 != param_4);
    param_1[1] = (int)(param_4 + (param_1[1] - (int)param_3));
    iVar5 = *param_1;
    bVar9 = iVar5 == 0;
  }
  iVar6 = 0;
  if (!bVar9) {
    iVar6 = iVar5 + uVar7;
  }
  return iVar6;
}

