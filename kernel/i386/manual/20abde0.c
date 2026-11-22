/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20abde0(void *incoming_ecx,uint incoming_edx,undefined1 *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;

  if (((incoming_edx != 0 && incoming_ecx != (void *)0x0) &&
      (recovered_2001e00(incoming_ecx,0,incoming_edx), param_3 != (undefined1 *)0x0)) &&
     (uVar1 = recovered_2002270(param_3), uVar1 != 0)) {
    uVar2 = 1;
    do {
      if (incoming_edx <= uVar2) {
        return;
      }
      *(undefined1 *)((int)incoming_ecx + (uVar2 - 1)) = *param_3;
      param_3 = param_3 + 1;
      uVar2 = uVar2 + 2;
      uVar1 = uVar1 - 1;
    } while (uVar1 != 0);
  }
  return;
}
