/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20df440(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  long lVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  void *pvVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_3 != 0 && (param_2 != 0 && param_1 != (long *)0x0)) {
    uVar4 = param_1[1];
    if (uVar4 == 0) {
      uVar4 = 0;
    }
    else {
      lVar7 = 0;
      uVar9 = 0;
      do {
        if ((*(char *)(*param_1 + 0x48 + lVar7) == '\x01') &&
           (left = *(char **)(*param_1 + lVar7), left != (char *)0x0)) {
          iVar2 = recovered_2002eb0(left,(char *)param_2);
          if (iVar2 == 0) {
            if (-1 < (int)(uint)uVar9) {
              lVar7 = *param_1;
              uVar4 = (ulong)((uint)uVar9 & 0x7fffffff);
              goto LAB_02099848;
            }
            uVar4 = param_1[1];
            break;
          }
          uVar4 = param_1[1];
        }
        uVar9 = uVar9 + 1;
        lVar7 = lVar7 + 0x50;
      } while (uVar9 < uVar4);
    }
    uVar4 = uVar4 + 1;
    uVar9 = param_1[2];
    if (uVar9 < uVar4) {
      uVar8 = 8;
      if (uVar9 != 0) {
        uVar8 = uVar9;
      }
      for (; uVar8 < uVar4; uVar8 = uVar8 * 2) {
        if ((long)uVar8 < 0) {
          uVar8 = uVar4;
          break;
        }
      }
      pvVar5 = recovered_2000d40((void *)*param_1,uVar8 * 0x50);
      if (pvVar5 == (void *)0x0) {
        return 0;
      }
      uVar4 = param_1[2];
      lVar7 = uVar8 - uVar4;
      if (uVar4 <= uVar8 && lVar7 != 0) {
        puVar6 = (undefined1 *)((long)pvVar5 + uVar4 * 0x50 + 0x48);
        do {
          *(undefined8 *)(puVar6 + -0x48) = 0;
          *(undefined8 *)(puVar6 + -0x40) = 0;
          *(undefined4 *)(puVar6 + -0x38) = 0;
          *(undefined8 *)(puVar6 + -0x30) = 0;
          *(undefined8 *)(puVar6 + -0x28) = 0;
          *(undefined8 *)(puVar6 + -0x20) = 0;
          *(undefined8 *)(puVar6 + -0x18) = 0;
          *(undefined8 *)(puVar6 + -0x10) = 0;
          *(undefined8 *)(puVar6 + -8) = 0;
          *puVar6 = 0;
          puVar6 = puVar6 + 0x50;
          lVar7 = lVar7 + -1;
        } while (lVar7 != 0);
      }
      *param_1 = (long)pvVar5;
      param_1[2] = uVar8;
    }
    uVar4 = recovered_2002e80((char *)param_2);
    pvVar5 = recovered_2000ad0(uVar4 + 1);
    if (pvVar5 != (void *)0x0) {
      if (uVar4 != 0) {
        recovered_2001410(pvVar5,(void *)param_2,uVar4);
      }
      *(undefined1 *)((long)pvVar5 + uVar4) = 0;
      lVar7 = *param_1;
      lVar1 = param_1[1];
      param_1[1] = lVar1 + 1;
      uVar4 = (ulong)(int)lVar1;
      *(void **)(lVar7 + uVar4 * 0x50) = pvVar5;
      *(undefined1 *)(lVar7 + 0x48 + uVar4 * 0x50) = 1;
LAB_02099848:
      uVar3 = recovered_20a0670((undefined8 *)(lVar7 + uVar4 * 0x50 + 8),(undefined8 *)param_3);
      return uVar3;
    }
  }
  return 0;
}
