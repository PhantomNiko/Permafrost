/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20e07f0(long *param_1,long *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  uint uVar2;
  void *pvVar3;
  ulong uVar4;
  undefined1 *puVar5;
  ulong uVar6;
  ulong uVar7;
  long lVar8;

  if (param_2 != (long *)0x0 && param_1 != (long *)0x0) {
    if (param_1[1] != 0) {
      lVar8 = 8;
      uVar6 = 0;
      do {
        recovered_2000bb0(*(void **)(*param_1 + -8 + lVar8));
        recovered_205ec00((undefined8 *)(*param_1 + lVar8));
        uVar6 = uVar6 + 1;
        lVar8 = lVar8 + 0x50;
      } while (uVar6 < (ulong)param_1[1]);
    }
    recovered_2000bb0((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
    uVar6 = param_2[1];
    if (uVar6 == 0) {
      return '\x01';
    }
    uVar7 = 8;
    if (8 < uVar6) {
      uVar4 = 8;
      while( true ) {
        uVar7 = uVar4 * 2;
        if ((((uVar6 <= uVar4 * 2) || (uVar7 = uVar4 * 4, uVar6 <= uVar4 * 4)) ||
            (uVar7 = uVar4 * 8, uVar6 <= uVar4 * 8)) || (uVar7 = uVar4 << 4, uVar6 <= uVar7))
        goto LAB_0209ab55;
        if ((long)uVar7 < 0) break;
        uVar7 = uVar4 << 5;
        if (((uVar6 <= uVar4 << 5) || (uVar7 = uVar4 << 6, uVar6 <= uVar4 << 6)) ||
           ((uVar7 = uVar4 << 7, uVar6 <= uVar4 << 7 ||
            (uVar4 = uVar4 << 8, uVar7 = uVar4, uVar6 <= uVar4)))) goto LAB_0209ab55;
      }
      uVar7 = uVar6;
    }
LAB_0209ab55:
    pvVar3 = recovered_2000d40((void *)0x0,uVar7 * 0x50);
    if (pvVar3 != (void *)0x0) {
      uVar6 = param_1[2];
      lVar8 = uVar7 - uVar6;
      if (uVar6 <= uVar7 && lVar8 != 0) {
        puVar5 = (undefined1 *)((long)pvVar3 + uVar6 * 0x50 + 0x48);
        do {
          *(undefined8 *)(puVar5 + -0x48) = 0;
          *(undefined8 *)(puVar5 + -0x40) = 0;
          *(undefined4 *)(puVar5 + -0x38) = 0;
          *(undefined8 *)(puVar5 + -0x30) = 0;
          *(undefined8 *)(puVar5 + -0x28) = 0;
          *(undefined8 *)(puVar5 + -0x20) = 0;
          *(undefined8 *)(puVar5 + -0x18) = 0;
          *(undefined8 *)(puVar5 + -0x10) = 0;
          *(undefined8 *)(puVar5 + -8) = 0;
          *puVar5 = 0;
          puVar5 = puVar5 + 0x50;
          lVar8 = lVar8 + -1;
        } while (lVar8 != 0);
      }
      *param_1 = (long)pvVar3;
      param_1[2] = uVar7;
      uVar6 = param_2[1];
      if (uVar6 == 0) {
        return '\x01';
      }
      lVar8 = 0;
      uVar7 = 0;
      do {
        lVar1 = *param_2;
        if ((*(char *)(lVar1 + 0x48 + lVar8) == '\x01') && (*(long *)(lVar1 + lVar8) != 0)) {
          uVar2 = recovered_20df440(param_1,*(long *)(lVar1 + lVar8),lVar1 + lVar8 + 8);
          if ((char)uVar2 == '\0') {
            if (param_1[1] != 0) {
              lVar8 = 8;
              uVar6 = 0;
              do {
                recovered_2000bb0(*(void **)(*param_1 + -8 + lVar8));
                recovered_205ec00((undefined8 *)(*param_1 + lVar8));
                uVar6 = uVar6 + 1;
                lVar8 = lVar8 + 0x50;
              } while (uVar6 < (ulong)param_1[1]);
            }
            recovered_2000bb0((void *)*param_1);
            *param_1 = 0;
            param_1[1] = 0;
            param_1[2] = 0;
            return '\0';
          }
          uVar6 = param_2[1];
        }
        uVar7 = uVar7 + 1;
        lVar8 = lVar8 + 0x50;
      } while (uVar7 < uVar6);
      return '\x01';
    }
  }
  return '\0';
}
