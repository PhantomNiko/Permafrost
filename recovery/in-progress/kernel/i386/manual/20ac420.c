/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20ac420(uchar in_CL,uint in_EDX,char param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  void *buffer;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;

  bVar1 = true;
  if (param_5 != 0) {
    if (in_CL == param_3) {
      bVar1 = recovered_20ac510((uint)in_CL,in_EDX,param_4,param_5);
    }
    else {
      buffer = recovered_2001650(0x7000);
      uVar3 = 0;
      if (buffer == (void *)0x0) {
LAB_0207bed9:
        bVar1 = false;
      }
      else {
        do {
          uVar4 = param_5 - uVar3;
          if (0x37 < uVar4) {
            uVar4 = 0x38;
          }
          uVar2 = recovered_204ed30((uint)in_CL,uVar3 + in_EDX,(int)buffer,uVar4 << 9);
          if ((char)uVar2 == '\0') {
LAB_0207bece:
            recovered_2001710(buffer);
            goto LAB_0207bed9;
          }
          uVar2 = recovered_2050b00((uint)(byte)param_3,uVar3 + param_4,(int)buffer,uVar4 << 9);
          if ((char)uVar2 == '\0') goto LAB_0207bece;
          uVar3 = uVar3 + uVar4;
        } while (uVar3 < param_5);
        recovered_2001710(buffer);
        bVar1 = true;
      }
    }
  }
  return bVar1;
}
