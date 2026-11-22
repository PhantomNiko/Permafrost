/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_20830f0(undefined4 *incoming_ecx,int incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  undefined4 *incoming_ecx_00;
  undefined4 uVar2;
  uint incoming_edx_00;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint incoming_edx_01;

  if (((incoming_ecx != (undefined4 *)0x0) && (incoming_edx != 0 || param_3 == 0)) &&
     (incoming_ecx_00 = recovered_2001650(0x14), incoming_ecx_00 != (undefined4 *)0x0)) {
    *incoming_ecx_00 = 1;
    *(undefined1 *)(incoming_ecx_00 + 1) = 0;
    incoming_ecx_00[2] = 0;
    incoming_ecx_00[3] = 0;
    incoming_ecx_00[4] = 0;
    recovered_2043a90(incoming_ecx,incoming_edx_00);
    *incoming_ecx = 7;
    incoming_ecx[6] = incoming_ecx_00;
    *(undefined1 *)(incoming_ecx_00 + 1) = 1;
    incoming_edx_01 = extraout_EDX;
    puVar1 = (undefined4 *)incoming_edx;
    if (param_3 == 0) {
      return CONCAT31((int3)((uint)incoming_ecx >> 8),1);
    }
    while (((puVar1 != (undefined4 *)0x0 &&
            (uVar2 = recovered_207f4d0((int)incoming_ecx_00,incoming_ecx_00[2] + 1),
            incoming_edx_01 = extraout_EDX_00, (char)uVar2 != '\0')) &&
           (uVar2 = recovered_207e1d0((undefined4 *)
                                      (incoming_ecx_00[4] + -0x24 + incoming_ecx_00[2] * 0x24),
                                      (undefined4 *)incoming_edx), incoming_edx_01 = extraout_EDX_01
           , (char)uVar2 != '\0'))) {
      param_3 = param_3 + -1;
      if (param_3 == 0) {
        return CONCAT31((int3)((uint)uVar2 >> 8),1);
      }
      incoming_edx = incoming_edx + 0x24;
      incoming_ecx_00 = (undefined4 *)incoming_ecx[6];
      puVar1 = incoming_ecx_00;
    }
    recovered_2043a90(incoming_ecx,incoming_edx_01);
  }
  return 0;
}
