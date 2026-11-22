/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20d2430(char param_1,uint param_2,char param_3,uint param_4,uint param_5)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  void *buffer;
  uint uVar3;
  uint uVar4;

  uVar1 = '\x01';
  if (param_5 != 0) {
    if (param_1 == param_3) {
      uVar1 = recovered_20d2530(param_1,param_2,param_4,param_5);
      return uVar1;
    }
    buffer = recovered_2000ad0(0x7000);
    uVar4 = 0;
    if (buffer == (void *)0x0) {
LAB_0208e8ac:
      uVar1 = '\0';
    }
    else {
      do {
        uVar3 = param_5 - uVar4;
        if (0x37 < uVar3) {
          uVar3 = 0x38;
        }
        uVar2 = recovered_206b1b0(param_1,(ulong)(uVar4 + param_2),(long)buffer,(ulong)(uVar3 << 9))
        ;
        if (((char)uVar2 == '\0') ||
           (uVar2 = recovered_206cfd0(param_3,(ulong)(uVar4 + param_4),(long)buffer,
                                      (ulong)(uVar3 << 9)), (char)uVar2 == '\0')) {
          recovered_2000bb0(buffer);
          goto LAB_0208e8ac;
        }
        uVar4 = uVar3 + uVar4;
      } while (uVar4 < param_5);
      recovered_2000bb0(buffer);
      uVar1 = '\x01';
    }
  }
  return uVar1;
}
