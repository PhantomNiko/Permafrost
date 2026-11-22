/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_20a5b10(undefined4 *param_1,undefined4 *param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  uchar uVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined8 unaff_R12;

  if (((param_1 != (undefined4 *)0x0) && (param_2 != (undefined4 *)0x0 || param_3 == 0)) &&
     (puVar4 = recovered_2000ad0(0x20), puVar4 != (undefined4 *)0x0)) {
    *puVar4 = 1;
    *(undefined1 *)(puVar4 + 1) = 0;
    *(undefined8 *)(puVar4 + 2) = 0;
    *(undefined8 *)(puVar4 + 4) = 0;
    *(undefined8 *)(puVar4 + 6) = 0;
    recovered_205ec00((undefined8 *)param_1);
    *param_1 = 7;
    *(undefined4 **)(param_1 + 10) = puVar4;
    *(undefined1 *)(puVar4 + 1) = 1;
    uVar5 = (uint)CONCAT71((int7)((ulong)unaff_R12 >> 8),1);
    puVar1 = param_2;
    if (param_3 == 0) {
      return uVar5;
    }
    while (((puVar1 != (undefined4 *)0x0 &&
            (uVar2 = recovered_20a1b00((long)puVar4,*(long *)(puVar4 + 2) + 1), uVar2 != '\0')) &&
           (uVar3 = recovered_20a0670((undefined8 *)
                                      (*(long *)(puVar4 + 6) + *(long *)(puVar4 + 2) * 0x40 + -0x40)
                                      ,(undefined8 *)param_2), (char)uVar3 != '\0'))) {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return uVar5;
      }
      param_2 = (undefined4 *)((long)param_2 + 0x40);
      puVar4 = *(undefined4 **)(param_1 + 10);
      puVar1 = puVar4;
    }
    recovered_205ec00((undefined8 *)param_1);
  }
  return 0;
}
