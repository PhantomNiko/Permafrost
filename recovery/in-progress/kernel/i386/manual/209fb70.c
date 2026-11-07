/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_209fb70(int *incoming_ecx,int incoming_edx,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *incoming_ecx_00;
  undefined4 uVar1;

  if ((((incoming_ecx != (int *)0x0) && (*incoming_ecx == 8)) && (param_3 != 0)) &&
     ((incoming_edx != 0 && (incoming_ecx[7] != 0)))) {
    incoming_ecx_00 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],(char *)incoming_edx,'\x01');
    if (incoming_ecx_00 != (undefined4 *)0x0) {
      uVar1 = recovered_207e1d0(incoming_ecx_00,(undefined4 *)param_3);
      return uVar1;
    }
  }
  return 0;
}
