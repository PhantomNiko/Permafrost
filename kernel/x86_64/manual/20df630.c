/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20df630(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined8 *puVar1;
  uint uVar2;
  void *pvVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;

  if ((param_1 != (long *)0x0) && (param_2 != 0 || param_3 == 0)) {
    if (param_1[1] != 0) {
      lVar5 = 0;
      uVar6 = 0;
      do {
        recovered_205ec00((undefined8 *)(*param_1 + lVar5));
        uVar6 = uVar6 + 1;
        lVar5 = lVar5 + 0x40;
      } while (uVar6 < (ulong)param_1[1]);
    }
    recovered_2000bb0((void *)*param_1);
    *param_1 = 0;
    param_1[1] = 0;
    if (param_3 == 0) {
      return '\x01';
    }
    pvVar3 = recovered_2000ad0(param_3 << 6);
    *param_1 = (long)pvVar3;
    if (pvVar3 != (void *)0x0) {
      param_1[1] = param_3;
      if (param_3 == 1) {
        uVar6 = 0;
      }
      else {
        lVar5 = 0;
        uVar6 = 0;
        do {
          lVar4 = *param_1;
          *(undefined8 *)(lVar4 + lVar5) = 0;
          *(undefined4 *)(lVar4 + 8 + lVar5) = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x10 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x20 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x30 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          lVar4 = *param_1;
          *(undefined8 *)(lVar4 + 0x40 + lVar5) = 0;
          *(undefined4 *)(lVar4 + 0x48 + lVar5) = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x50 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x60 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          puVar1 = (undefined8 *)(lVar4 + 0x70 + lVar5);
          *puVar1 = 0;
          puVar1[1] = 0;
          uVar6 = uVar6 + 2;
          lVar5 = lVar5 + 0x80;
        } while ((param_3 & 0xfffffffffffffffe) != uVar6);
      }
      if ((param_3 & 1) != 0) {
        lVar5 = *param_1;
        lVar4 = uVar6 * 0x40;
        *(undefined8 *)(lVar5 + lVar4) = 0;
        *(undefined4 *)(lVar5 + 8 + lVar4) = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x10 + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x20 + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1 = (undefined8 *)(lVar5 + 0x30 + lVar4);
        *puVar1 = 0;
        puVar1[1] = 0;
      }
      lVar5 = 0;
      while (uVar2 = recovered_20a0670((undefined8 *)(*param_1 + lVar5),
                                       (undefined8 *)(param_2 + lVar5)), (char)uVar2 != '\0') {
        lVar5 = lVar5 + 0x40;
        param_3 = param_3 - 1;
        if (param_3 == 0) {
          return '\x01';
        }
      }
      if (param_1[1] != 0) {
        lVar5 = 0;
        uVar6 = 0;
        do {
          recovered_205ec00((undefined8 *)(*param_1 + lVar5));
          uVar6 = uVar6 + 1;
          lVar5 = lVar5 + 0x40;
        } while (uVar6 < (ulong)param_1[1]);
      }
      recovered_2000bb0((void *)*param_1);
      *param_1 = 0;
      param_1[1] = 0;
    }
  }
  return '\0';
}
