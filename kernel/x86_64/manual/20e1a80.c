/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e6110 (*(uint64_t volatile *)(0x22741a0U))
#define DAT_020e6118 (*(uint64_t volatile *)(0x22741a8U))
#define DAT_020e6120 (*(uint64_t volatile *)(0x22741b0U))
uint recovered_20e1a80(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  ulong uVar3;
  void *pvVar4;
  long lVar5;
  undefined1 *puVar6;
  long lVar7;
  ulong uVar8;
  ulong uVar9;

  if (param_2 != 0) {
    uVar3 = DAT_020e6118;
    if (uVar3 == 0) {
      uVar3 = 0;
    }
    else {
      lVar5 = DAT_020e6110;
      lVar7 = 0;
      uVar8 = 0;
      do {
        if ((*(char *)(lVar5 + 0x48 + lVar7) == '\x01') &&
           (*(char **)(lVar5 + lVar7) != (char *)0x0)) {
          iVar1 = recovered_2002eb0(*(char **)(lVar5 + lVar7),(char *)param_1);
          if (iVar1 == 0) {
            if (-1 < (int)(uint)uVar8) {
              lVar5 = DAT_020e6110;
              uVar3 = (ulong)((uint)uVar8 & 0x7fffffff);
              goto LAB_0209be90;
            }
            uVar3 = DAT_020e6118;
            break;
          }
          lVar5 = DAT_020e6110;
          uVar3 = DAT_020e6118;
        }
        uVar8 = uVar8 + 1;
        lVar7 = lVar7 + 0x50;
      } while (uVar8 < uVar3);
    }
    uVar3 = uVar3 + 1;
    uVar8 = DAT_020e6120;
    if (uVar8 < uVar3) {
      uVar9 = 0x10;
      if (uVar8 != 0) {
        uVar9 = uVar8;
      }
      for (; uVar9 < uVar3; uVar9 = uVar9 * 2) {
        if ((long)uVar9 < 0) {
          uVar9 = uVar3;
          break;
        }
      }
      pvVar4 = (void *)DAT_020e6110;
      pvVar4 = recovered_2000d40(pvVar4,uVar9 * 0x50);
      if (pvVar4 == (void *)0x0) {
        return 0;
      }
      uVar3 = DAT_020e6120;
      lVar5 = uVar9 - uVar3;
      if (uVar3 <= uVar9 && lVar5 != 0) {
        puVar6 = (undefined1 *)((long)pvVar4 + uVar3 * 0x50 + 0x48);
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
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      DAT_020e6110 = pvVar4;
      DAT_020e6120 = uVar9;
    }
    uVar3 = recovered_2002e80((char *)param_1);
    pvVar4 = recovered_2000ad0(uVar3 + 1);
    if (pvVar4 != (void *)0x0) {
      if (param_1 != 0 && uVar3 != 0) {
        recovered_2001410(pvVar4,(void *)param_1,uVar3);
      }
      *(undefined1 *)((long)pvVar4 + uVar3) = 0;
      lVar7 = DAT_020e6118;
      DAT_020e6118 = lVar7 + 1;
      lVar5 = DAT_020e6110;
      uVar3 = (ulong)(int)lVar7;
      *(void **)(lVar5 + uVar3 * 0x50) = pvVar4;
      *(undefined1 *)(lVar5 + 0x48 + uVar3 * 0x50) = 1;
LAB_0209be90:
      uVar2 = recovered_20a0670((undefined8 *)(lVar5 + uVar3 * 0x50 + 8),(undefined8 *)param_2);
      return uVar2;
    }
  }
  return 0;
}
