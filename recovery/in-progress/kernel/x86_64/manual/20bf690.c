/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_20bf690(long param_1,long param_2,char param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *left;
  long lVar1;
  int iVar2;
  void *pvVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong uVar6;
  long lVar7;
  ulong uVar8;

  if (param_2 == 0 || param_1 == 0) {
    return 0;
  }
  uVar4 = *(ulong *)(param_1 + 8);
  if (uVar4 != 0) {
    lVar7 = 0;
    uVar6 = 0;
    do {
      left = *(char **)(*(long *)(param_1 + 0x18) + lVar7);
      if (left != (char *)0x0) {
        iVar2 = recovered_2002eb0(left,(char *)param_2);
        if (iVar2 == 0) {
          if (-1 < (int)(uint)uVar6) {
            return *(long *)(param_1 + 0x18) + (ulong)((uint)uVar6 & 0x7fffffff) * 0x48 + 8;
          }
          break;
        }
        uVar4 = *(ulong *)(param_1 + 8);
      }
      uVar6 = uVar6 + 1;
      lVar7 = lVar7 + 0x48;
    } while (uVar6 < uVar4);
  }
  if (param_3 != '\0') {
    uVar4 = *(ulong *)(param_1 + 0x10);
    uVar6 = *(long *)(param_1 + 8) + 1;
    if (uVar4 < uVar6) {
      uVar8 = 4;
      if (uVar4 != 0) {
        uVar8 = uVar4;
      }
      for (; uVar8 < uVar6; uVar8 = uVar8 * 2) {
        if ((long)uVar8 < 0) {
          uVar8 = uVar6;
          break;
        }
      }
      pvVar3 = recovered_2000d40(*(void **)(param_1 + 0x18),uVar8 * 0x48);
      if (pvVar3 == (void *)0x0) {
        return 0;
      }
      uVar4 = *(ulong *)(param_1 + 0x10);
      if (uVar4 < uVar8) {
        uVar6 = uVar4;
        if (((int)uVar8 - (int)uVar4 & 1U) != 0) {
          puVar5 = (undefined8 *)((long)pvVar3 + uVar4 * 0x48);
          *puVar5 = 0;
          puVar5[1] = 0;
          *(undefined4 *)((long)pvVar3 + uVar4 * 0x48 + 0x10) = 0;
          puVar5 = (undefined8 *)((long)pvVar3 + uVar4 * 0x48 + 0x18);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5 = (undefined8 *)((long)pvVar3 + uVar4 * 0x48 + 0x28);
          *puVar5 = 0;
          puVar5[1] = 0;
          puVar5 = (undefined8 *)((long)pvVar3 + uVar4 * 0x48 + 0x38);
          *puVar5 = 0;
          puVar5[1] = 0;
          uVar6 = uVar4 + 1;
        }
        if (uVar8 != uVar4 + 1) {
          puVar5 = (undefined8 *)((long)pvVar3 + uVar6 * 0x48 + 0x88);
          lVar7 = uVar8 - uVar6;
          do {
            puVar5[-0x11] = 0;
            puVar5[-0x10] = 0;
            *(undefined4 *)(puVar5 + -0xf) = 0;
            puVar5[-0xe] = 0;
            puVar5[-0xd] = 0;
            puVar5[-0xc] = 0;
            puVar5[-0xb] = 0;
            puVar5[-10] = 0;
            puVar5[-9] = 0;
            puVar5[-8] = 0;
            puVar5[-7] = 0;
            *(undefined4 *)(puVar5 + -6) = 0;
            puVar5[-5] = 0;
            puVar5[-4] = 0;
            puVar5[-3] = 0;
            puVar5[-2] = 0;
            puVar5[-1] = 0;
            *puVar5 = 0;
            puVar5 = puVar5 + 0x12;
            lVar7 = lVar7 + -2;
          } while (lVar7 != 0);
        }
      }
      *(void **)(param_1 + 0x18) = pvVar3;
      *(ulong *)(param_1 + 0x10) = uVar8;
    }
    uVar4 = recovered_2002e80((char *)param_2);
    pvVar3 = recovered_2000ad0(uVar4 + 1);
    if (pvVar3 != (void *)0x0) {
      if (uVar4 != 0) {
        recovered_2001410(pvVar3,(void *)param_2,uVar4);
      }
      *(undefined1 *)((long)pvVar3 + uVar4) = 0;
      lVar7 = *(long *)(param_1 + 8);
      lVar1 = *(long *)(param_1 + 0x18);
      *(void **)(lVar1 + lVar7 * 0x48) = pvVar3;
      *(undefined8 *)(lVar1 + 8 + lVar7 * 0x48) = 0;
      *(undefined4 *)(lVar1 + 0x10 + lVar7 * 0x48) = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x18 + lVar7 * 0x48);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x28 + lVar7 * 0x48);
      *puVar5 = 0;
      puVar5[1] = 0;
      puVar5 = (undefined8 *)(lVar1 + 0x38 + lVar7 * 0x48);
      *puVar5 = 0;
      puVar5[1] = 0;
      lVar7 = *(long *)(param_1 + 8);
      *(long *)(param_1 + 8) = lVar7 + 1;
      return *(long *)(param_1 + 0x18) + lVar7 * 0x48 + 8;
    }
    *(undefined8 *)(*(long *)(param_1 + 0x18) + *(long *)(param_1 + 8) * 0x48) = 0;
  }
  return 0;
}
