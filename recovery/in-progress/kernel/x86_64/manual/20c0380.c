/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_38 (*(void * *)(frame + 24))
#define str_020a9d36 (*(char (*)[1])(0x20fb2adU))
#define str_020a9d5c (*(char (*)[1])(0x20fb2d3U))
#define str_020a9d96 (*(char (*)[1])(0x20fb30dU))
#define str_020a9dc7 (*(char (*)[1])(0x20fb33eU))
#define str_020a9df7 (*(char (*)[1])(0x20fb36eU))
#define str_020a9e29 (*(char (*)[1])(0x20fb3a0U))
uint recovered_20c0380(long param_1,long *param_2,ulong *param_3,ulong *param_4,char *param_5,
                      ulong param_6)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  long lVar1;
  undefined8 *puVar2;
  char cVar3;
  long lVar4;
  undefined4 in_EAX = 0;
  int iVar5;
  void *pvVar6;
  ulong uVar7;
  ulong uVar8;
  ulong uVar9;
  ulong uVar10;
  uint uVar11;
  void *unaff_RBX;
  ulong uVar12;
  ulong uVar13;
  uint *puVar14;
  ulong uVar15;
  long lVar16;
  char *pcVar17;
  ulong uVar18;
  ulong uVar19;
  uint128 auVar20;

  PF_PART4(auVar20, 0) = -(uint)(param_1 == 0);
  PF_PART4(auVar20, 4) = -(uint)(param_2 == (long *)0x0);
  PF_PART4(auVar20, 8) = -(uint)(param_3 == (ulong *)0x0);
  PF_PART4(auVar20, 12) = -(uint)(param_4 == (ulong *)0x0);
  iVar5 = movmskps(in_EAX,auVar20);
  if (iVar5 == 0) {
    if (*(long *)(param_1 + 0x40) == 0) {
      uVar9 = *(ulong *)(param_1 + 0x20);
      if (uVar9 != 0) {
        uVar7 = 0;
        local_38 = (void *)0x0;
        uVar18 = 0;
        uVar8 = 0;
        while( true ) {
          lVar4 = *(long *)(param_1 + 0x30);
          cVar3 = *(char *)(lVar4 + uVar7 * 0xc);
          uVar12 = uVar8;
          if (cVar3 != '\0') break;
          lVar1 = lVar4 + uVar7 * 0xc;
          if (*(ulong *)(param_1 + 8) <= (ulong)*(uint *)(lVar1 + 4)) {
            pf_varargs_20039e0___(param_5,param_6,str_020a9d96);
            if (local_38 == (void *)0x0) {
              return 0;
            }
            if (uVar18 != 0) {
              uVar9 = 0;
              do {
                recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
                *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
                uVar9 = uVar9 + 1;
              } while (uVar18 != uVar9);
            }
            goto LAB_020825e9;
          }
          uVar19 = uVar7 + 1;
          iVar5 = *(int *)(lVar1 + 8);
          if (iVar5 == 0) {
            uVar7 = uVar19;
          }
          else {
            lVar16 = uVar7 + (iVar5 - 1);
            puVar14 = (uint *)(lVar4 + uVar7 * 0xc + 0x10);
            do {
              if (uVar9 <= uVar19) {
                pf_varargs_20039e0___(param_5,param_6,str_020a9dc7);
                if (local_38 == (void *)0x0) {
                  return 0;
                }
                if (uVar18 != 0) {
                  uVar9 = 0;
                  do {
                    recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
                    *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
                    uVar9 = uVar9 + 1;
                  } while (uVar18 != uVar9);
                }
                goto LAB_020825e9;
              }
              if ((char)puVar14[-1] != '\x02') {
                pf_varargs_20039e0___(param_5,param_6,str_020a9df7);
                if (local_38 == (void *)0x0) {
                  return 0;
                }
                if (uVar18 != 0) {
                  uVar9 = 0;
                  do {
                    recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
                    *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
                    uVar9 = uVar9 + 1;
                  } while (uVar18 != uVar9);
                }
                goto LAB_020825e9;
              }
              if (*(ulong *)(param_1 + 8) <= (ulong)*puVar14) {
                pf_varargs_20039e0___(param_5,param_6,str_020a9e29);
                if (local_38 == (void *)0x0) {
                  return 0;
                }
                if (uVar18 != 0) {
                  uVar9 = 0;
                  do {
                    recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
                    *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
                    uVar9 = uVar9 + 1;
                  } while (uVar18 != uVar9);
                }
                goto LAB_020825e9;
              }
              puVar14 = puVar14 + 3;
              uVar19 = uVar19 + 1;
              iVar5 = iVar5 + -1;
              uVar7 = lVar16 + 2;
            } while (iVar5 != 0);
          }
          uVar19 = uVar18 + 1;
          if (uVar8 < uVar19) {
            if (uVar8 == 0) {
              uVar12 = 0x10;
            }
            for (; uVar12 < uVar19; uVar12 = uVar12 * 2) {
              if ((long)uVar12 < 0) {
                uVar12 = uVar19;
                break;
              }
            }
            pvVar6 = recovered_2000d40(local_38,uVar12 * 8);
            if (pvVar6 != (void *)0x0) {
              uVar9 = uVar12 - uVar8;
              if (uVar8 <= uVar12 && uVar9 != 0) {
                uVar10 = uVar8;
                if (3 < uVar9) {
                  uVar13 = uVar9 & 0xfffffffffffffffc;
                  uVar10 = uVar8 + uVar13;
                  uVar15 = 0;
                  do {
                    puVar2 = (undefined8 *)((long)pvVar6 + uVar15 * 8 + uVar8 * 8);
                    *puVar2 = 0;
                    puVar2[1] = 0;
                    puVar2 = (undefined8 *)((long)pvVar6 + uVar15 * 8 + uVar8 * 8 + 0x10);
                    *puVar2 = 0;
                    puVar2[1] = 0;
                    uVar15 = uVar15 + 4;
                  } while (uVar13 != uVar15);
                  if (uVar9 == uVar13) goto LAB_02082390;
                }
                do {
                  *(undefined8 *)((long)pvVar6 + uVar10 * 8) = 0;
                  uVar10 = uVar10 + 1;
                } while (uVar12 != uVar10);
              }
LAB_02082390:
              local_38 = pvVar6;
              goto LAB_02082397;
            }
            pf_varargs_20039e0___(param_5,param_6,str_020a9d36);
            if (local_38 == (void *)0x0) {
              return 0;
            }
            if (uVar18 != 0) {
              uVar9 = 0;
              do {
                recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
                *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
                uVar9 = uVar9 + 1;
              } while (uVar18 != uVar9);
            }
LAB_020824e9:
            recovered_2000bb0(local_38);
            goto LAB_0208209f;
          }
LAB_02082397:
          pcVar17 = *(char **)(*(long *)(param_1 + 0x18) + (ulong)*(uint *)(lVar1 + 4) * 8);
          uVar9 = recovered_2002e80(pcVar17);
          unaff_RBX = recovered_2000ad0(uVar9 + 1);
          if (unaff_RBX == (void *)0x0) {
            *(undefined8 *)((long)local_38 + uVar18 * 8) = 0;
            pf_varargs_20039e0___(param_5,param_6,str_020a9d36);
            if (uVar18 != 0) {
              uVar9 = 0;
              do {
                recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
                *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
                uVar9 = uVar9 + 1;
              } while (uVar18 != uVar9);
            }
LAB_02082459:
            recovered_2000bb0(local_38);
            goto LAB_0208209f;
          }
          if (pcVar17 != (char *)0x0 && uVar9 != 0) {
            recovered_2001410(unaff_RBX,pcVar17,uVar9);
          }
          *(undefined1 *)((long)unaff_RBX + uVar9) = 0;
          *(void **)((long)local_38 + uVar18 * 8) = unaff_RBX;
          uVar9 = *(ulong *)(param_1 + 0x20);
          uVar18 = uVar19;
          uVar8 = uVar12;
          if (uVar9 <= uVar7) goto LAB_0208247f;
        }
        if (cVar3 == '\x14') {
          uVar19 = uVar18;
          goto LAB_0208247f;
        }
        pf_varargs_20039e0___(param_5,param_6,str_020a9d5c);
        if (local_38 == (void *)0x0) {
          return 0;
        }
        if (uVar18 != 0) {
          uVar9 = 0;
          do {
            recovered_2000bb0(*(void **)((long)local_38 + uVar9 * 8));
            *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
            uVar9 = uVar9 + 1;
          } while (uVar18 != uVar9);
        }
LAB_020825e9:
        recovered_2000bb0(local_38);
        goto LAB_0208209f;
      }
      local_38 = (void *)0x0;
      uVar12 = 0;
      uVar19 = 0;
LAB_0208247f:
      *param_2 = (long)local_38;
      *param_3 = uVar19;
    }
    else {
      local_38 = (void *)0x0;
      uVar9 = 0;
      uVar7 = 0;
      do {
        uVar18 = uVar9 + 1;
        uVar12 = uVar7;
        if (uVar9 < uVar7) {
        }
        else {
          if (uVar7 == 0) {
            uVar12 = 0x10;
          }
          for (; uVar12 <= uVar9; uVar12 = uVar12 * 2) {
            if ((long)uVar12 < 0) {
              uVar12 = uVar18;
              break;
            }
          }
          pvVar6 = recovered_2000d40(local_38,uVar12 * 8);
          if (pvVar6 == (void *)0x0) {
            pf_varargs_20039e0___(param_5,param_6,str_020a9d36);
            if (local_38 == (void *)0x0) {
              return 0;
            }
            if (uVar9 != 0) {
              uVar7 = 0;
              do {
                recovered_2000bb0(*(void **)((long)local_38 + uVar7 * 8));
                *(undefined8 *)((long)local_38 + uVar7 * 8) = 0;
                uVar7 = uVar7 + 1;
              } while (uVar9 != uVar7);
            }
            goto LAB_020824e9;
          }
          uVar8 = uVar12 - uVar7;
          if (uVar7 <= uVar12 && uVar8 != 0) {
            uVar19 = uVar7;
            if (3 < uVar8) {
              uVar10 = uVar8 & 0xfffffffffffffffc;
              uVar19 = uVar7 + uVar10;
              uVar13 = 0;
              do {
                puVar2 = (undefined8 *)((long)pvVar6 + uVar13 * 8 + uVar7 * 8);
                *puVar2 = 0;
                puVar2[1] = 0;
                puVar2 = (undefined8 *)((long)pvVar6 + uVar13 * 8 + uVar7 * 8 + 0x10);
                *puVar2 = 0;
                puVar2[1] = 0;
                uVar13 = uVar13 + 4;
              } while (uVar10 != uVar13);
              if (uVar8 == uVar10) goto LAB_020821d0;
            }
            do {
              *(undefined8 *)((long)pvVar6 + uVar19 * 8) = 0;
              uVar19 = uVar19 + 1;
            } while (uVar12 != uVar19);
          }
LAB_020821d0:
          local_38 = pvVar6;
        }
        pcVar17 = *(char **)(*(long *)(param_1 + 0x38) + uVar9 * 8);
        if (pcVar17 == (char *)0x0) {
          pcVar17 = &DAT_020a259c;
        }
        uVar7 = recovered_2002e80(pcVar17);
        unaff_RBX = recovered_2000ad0(uVar7 + 1);
        if (unaff_RBX == (void *)0x0) {
          *(undefined8 *)((long)local_38 + uVar9 * 8) = 0;
          pf_varargs_20039e0___(param_5,param_6,str_020a9d36);
          if (uVar9 != 0) {
            uVar7 = 0;
            do {
              recovered_2000bb0(*(void **)((long)local_38 + uVar7 * 8));
              *(undefined8 *)((long)local_38 + uVar7 * 8) = 0;
              uVar7 = uVar7 + 1;
            } while (uVar9 != uVar7);
          }
          goto LAB_02082459;
        }
        if (uVar7 != 0) {
          recovered_2001410(unaff_RBX,pcVar17,uVar7);
        }
        *(undefined1 *)((long)unaff_RBX + uVar7) = 0;
        *(void **)((long)local_38 + uVar9 * 8) = unaff_RBX;
        uVar9 = uVar18;
        uVar7 = uVar12;
      } while (uVar18 < *(ulong *)(param_1 + 0x40));
      *param_2 = (long)local_38;
      *param_3 = uVar18;
    }
    *param_4 = uVar12;
    uVar11 = (uint)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
  }
  else {
LAB_0208209f:
    uVar11 = 0;
  }
  return uVar11;
}
