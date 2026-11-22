/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_10 (*(undefined4 *)(frame + 48))
#define local_14 (*(undefined4 *)(frame + 44))
#define local_18 (*(undefined4 *)(frame + 40))
#define local_1c (*(undefined4 *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_24 (*(undefined4 *)(frame + 28))
#define local_2c (*(undefined4 (*)[2])(frame + 20))
#define local_c (*(undefined4 *)(frame + 52))
undefined4 recovered_209fae0(int *incoming_ecx,int incoming_edx)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  undefined4 *incoming_ecx_00;
  undefined4 uVar1;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;

  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  local_2c[0] = 6;
  if (((incoming_ecx != (int *)0x0) && (*incoming_ecx == 8)) &&
     (incoming_edx != 0 && incoming_ecx[7] != 0)) {
    incoming_ecx_00 = (undefined4 *)recovered_209b1b0(incoming_ecx[7],(char *)incoming_edx,'\x01');
    incoming_edx = extraout_EDX;
    if (incoming_ecx_00 != (undefined4 *)0x0) {
      uVar1 = recovered_207e1d0(incoming_ecx_00,local_2c);
      incoming_edx = extraout_EDX_00;
      goto LAB_0207467f;
    }
  }
  uVar1 = 0;
LAB_0207467f:
  recovered_2043a90(local_2c,incoming_edx);
  return uVar1;
}
