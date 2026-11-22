/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_207d2b0(int *incoming_ecx,int *incoming_edx,int *param_3,byte param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined4 *incoming_ecx_00;
  undefined4 uVar2;

  if (param_3 != (int *)0x0 && (incoming_edx != (int *)0x0 && incoming_ecx != (int *)0x0)) {
    if (*incoming_ecx == 3) {
      if ((((*incoming_edx == 1) && (*param_3 == 3)) && ((char *)incoming_ecx[3] != (char *)0x0)) &&
         (param_3[3] != 0)) {
        uVar1 = recovered_2002270((char *)incoming_ecx[3]);
        if (incoming_edx[1] < 1) {
          return 0;
        }
        if (uVar1 < (uint)incoming_edx[1]) {
          return 0;
        }
        uVar1 = recovered_2002270((char *)param_3[3]);
        if (uVar1 == 1) {
          *(undefined1 *)(incoming_ecx[3] + -1 + incoming_edx[1]) = *(undefined1 *)param_3[3];
          return 1;
        }
      }
    }
    else {
      incoming_ecx_00 = (undefined4 *)recovered_207d030(incoming_ecx,incoming_edx,param_4);
      if (incoming_ecx_00 != (undefined4 *)0x0) {
        uVar2 = recovered_207e1d0(incoming_ecx_00,param_3);
        return uVar2;
      }
    }
  }
  return 0;
}
