/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_20ac510(uint incoming_ecx,uint incoming_edx,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *buffer;
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;

  bVar4 = true;
  if (incoming_edx != param_3 && param_4 != 0) {
    buffer = recovered_2001650(0x7000);
    if (buffer == (void *)0x0) {
      bVar4 = false;
    }
    else {
      if (incoming_edx < param_3 && param_3 < incoming_edx + param_4) {
        while (bVar4 = param_4 == 0, !bVar4) {
          uVar2 = param_4;
          if (0x37 < param_4) {
            uVar2 = 0x38;
          }
          param_4 = param_4 - uVar2;
          uVar1 = recovered_204ed30(incoming_ecx & 0xff,param_4 + incoming_edx,(int)buffer,
                                    uVar2 << 9);
          if (((char)uVar1 == '\0') ||
             (uVar1 = recovered_2050b00(incoming_ecx & 0xff,param_4 + param_3,(int)buffer,uVar2 << 9
                                       ), (char)uVar1 == '\0')) break;
        }
      }
      else {
        uVar2 = 0;
        do {
          uVar3 = param_4 - uVar2;
          if (0x37 < uVar3) {
            uVar3 = 0x38;
          }
          uVar1 = recovered_204ed30(incoming_ecx & 0xff,uVar2 + incoming_edx,(int)buffer,uVar3 << 9)
          ;
          if (((char)uVar1 == '\0') ||
             (uVar1 = recovered_2050b00(incoming_ecx & 0xff,uVar2 + param_3,(int)buffer,uVar3 << 9),
             (char)uVar1 == '\0')) {
            bVar4 = false;
            goto LAB_0207c03d;
          }
          uVar2 = uVar2 + uVar3;
        } while (uVar2 < param_4);
        bVar4 = true;
      }
LAB_0207c03d:
      recovered_2001710(buffer);
    }
  }
  return bVar4;
}
