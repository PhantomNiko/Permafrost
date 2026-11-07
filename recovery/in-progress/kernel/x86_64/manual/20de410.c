/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_38 (*(int * *)(frame + 72))
#define local_40 (*(char * *)(frame + 64))
#define local_48 (*(long * *)(frame + 56))
#define local_50 (*(ulong *)(frame + 48))
#define local_58 (*(ulong *)(frame + 40))
#define local_60 (*(undefined1 * *)(frame + 32))
#define local_70 (*(long *)(frame + 16))
#define str_020a99d0 (*(char (*)[1])(0x20faf47U))
#define uStack_68 (*(undefined8 *)(frame + 24))
uchar recovered_20de410(int *param_1,char *param_2,long param_3,undefined1 *param_4,long param_5,
                       long *param_6)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char *left;
  long *plVar1;
  uchar uVar2;
  int iVar3;
  char *right;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  void *buffer;
  long lVar7;

  puVar5 = &DAT_020a259c;
  if (param_4 != (undefined1 *)0x0) {
    puVar5 = param_4;
  }
  if (param_6 == (long *)0x0) {
    return '\0';
  }
  *param_6 = 0;
  local_58 = param_5 + 1;
  local_40 = param_2;
  local_38 = param_1;
  right = recovered_2000ad0(local_58);
  if (param_3 == 0) {
    if (right != (char *)0x0) {
      if (param_5 != 0) {
        recovered_2001410(right,puVar5,param_5);
      }
      right[param_5] = '\0';
LAB_02098cf6:
      *param_6 = (long)right;
      return '\x01';
    }
    *param_6 = 0;
  }
  else {
    if (right == (char *)0x0) goto LAB_02098d0f;
    local_48 = param_6;
    if (param_5 != 0) {
      recovered_2001410(right,puVar5,param_5);
    }
    right[param_5] = '\0';
    uVar4 = *(ulong *)(param_3 + 8);
    local_50 = param_5;
    if (uVar4 != 0) {
      lVar7 = 0;
      uVar6 = 0;
      do {
        left = *(char **)(*(long *)(param_3 + 0x18) + lVar7);
        if (left != (char *)0x0) {
          iVar3 = recovered_2002eb0(left,right);
          if (iVar3 == 0) {
            if (-1 < (int)(uint)uVar6) {
              lVar7 = *(long *)(param_3 + 0x18);
              uVar4 = (ulong)((uint)uVar6 & 0x7fffffff);
              recovered_2000bb0(right);
              plVar1 = local_48;
              if (*(int *)(lVar7 + 8 + uVar4 * 0x48) == 0) goto LAB_02098cc5;
              *local_48 = 0;
              local_70 = 0;
              uStack_68 = 0;
              local_60 = (undefined1 *)0x0;
              uVar2 = recovered_20a8f50((int *)(lVar7 + uVar4 * 0x48 + 8),&local_70,0);
              if (uVar2 == '\0') {
                recovered_2000bb0(local_60);
                buffer = (void *)*plVar1;
              }
              else {
                puVar5 = local_60;
                if (local_60 != (undefined1 *)0x0) {
LAB_02098cb6:
                  *plVar1 = (long)puVar5;
                  return '\x01';
                }
                puVar5 = recovered_2000ad0(1);
                if (puVar5 != (undefined1 *)0x0) {
                  *puVar5 = 0;
                  goto LAB_02098cb6;
                }
                *plVar1 = 0;
                buffer = (void *)0x0;
              }
              recovered_2000bb0(buffer);
              *plVar1 = 0;
              goto LAB_02098d0f;
            }
            break;
          }
          uVar4 = *(ulong *)(param_3 + 8);
        }
        uVar6 = uVar6 + 1;
        lVar7 = lVar7 + 0x48;
      } while (uVar6 < uVar4);
    }
    recovered_2000bb0(right);
LAB_02098cc5:
    right = recovered_2000ad0(local_58);
    param_6 = local_48;
    uVar4 = local_50;
    if (right != (char *)0x0) {
      if (local_50 != 0) {
        recovered_2001410(right,puVar5,local_50);
      }
      right[uVar4] = '\0';
      goto LAB_02098cf6;
    }
    *local_48 = 0;
    param_5 = local_50;
  }
  if (param_5 == 0) {
    return '\x01';
  }
LAB_02098d0f:
  pf_varargs_205eb00___(local_38,local_40,str_020a99d0);
  return '\0';
}
