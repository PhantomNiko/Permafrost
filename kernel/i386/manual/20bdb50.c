/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 *)(frame + 60))
#define local_18 (*(undefined4 *)(frame + 56))
#define local_1c (*(undefined4 *)(frame + 52))
#define local_20 (*(undefined4 *)(frame + 48))
#define local_24 (*(undefined4 *)(frame + 44))
#define local_28 (*(undefined4 *)(frame + 40))
#define local_2c (*(undefined4 *)(frame + 36))
#define local_30 (*(undefined4 *)(frame + 32))
#define local_34 (*(undefined4 *)(frame + 28))
uint recovered_20bdb50(int *incoming_ecx,int incoming_edx,char *in_stack_00000004)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  int incoming_ecx_00;
  undefined4 uVar1;
  undefined4 *incoming_ecx_01;
  uint extraout_EDX = 0;
  uint incoming_edx_00;
  uint extraout_EDX_00 = 0;
  uint extraout_EDX_01 = 0;
  uint uVar2;

  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  uVar1 = recovered_2084d80(&local_34,in_stack_00000004);
  uVar2 = 0;
  incoming_edx_00 = extraout_EDX;
  if ((incoming_ecx != (int *)0x0) && ((char)uVar1 != '\0')) {
    if (*incoming_ecx == 8) {
      incoming_ecx_00 = incoming_ecx[7];
      incoming_edx_00 =
           CONCAT31((int3)(extraout_EDX >> 8),incoming_edx == 0 || incoming_ecx_00 == 0);
      if (incoming_edx != 0 && incoming_ecx_00 != 0) {
        incoming_ecx_01 =
             (undefined4 *)recovered_209b1b0(incoming_ecx_00,(char *)incoming_edx,'\x01');
        incoming_edx_00 = extraout_EDX_00;
        if (incoming_ecx_01 != (undefined4 *)0x0) {
          uVar2 = recovered_207e1d0(incoming_ecx_01,&local_34);
          incoming_edx_00 = extraout_EDX_01;
          goto LAB_0208bb59;
        }
      }
    }
    uVar2 = 0;
  }
LAB_0208bb59:
  recovered_2043a90(&local_34,incoming_edx_00);
  return uVar2;
}
