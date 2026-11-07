/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20d2530(byte param_1,uint param_2,uint param_3,uint param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  uint uVar3;
  void *buffer;
  bool bVar4;

  bVar4 = true;
  if (param_2 != param_3 && param_4 != 0) {
    buffer = recovered_2000ad0(0x7000);
    if (buffer == (void *)0x0) {
      bVar4 = false;
    }
    else {
      if (param_2 < param_3 && param_3 < param_2 + param_4) {
        while (bVar4 = param_4 == 0, !bVar4) {
          uVar2 = 0x38;
          if (param_4 < 0x38) {
            uVar2 = param_4;
          }
          param_4 = param_4 - uVar2;
          uVar1 = recovered_206b1b0(param_1,(ulong)(param_4 + param_2),(long)buffer,
                                    (ulong)(uVar2 << 9));
          if (((char)uVar1 == '\0') ||
             (uVar2 = recovered_206cfd0(param_1,(ulong)(param_4 + param_3),(long)buffer,
                                        (ulong)(uVar2 << 9)), (char)uVar2 == '\0')) break;
        }
      }
      else {
        uVar2 = 0;
        do {
          uVar1 = param_4 - uVar2;
          if (0x37 < uVar1) {
            uVar1 = 0x38;
          }
          uVar3 = recovered_206b1b0(param_1,(ulong)(uVar2 + param_2),(long)buffer,
                                    (ulong)(uVar1 << 9));
          if ((char)uVar3 == '\0') {
            bVar4 = false;
            goto LAB_0208ea1c;
          }
          uVar3 = recovered_206cfd0(param_1,(ulong)(uVar2 + param_3),(long)buffer,
                                    (ulong)(uVar1 << 9));
          if ((char)uVar3 == '\0') {
            bVar4 = false;
            goto LAB_0208ea1c;
          }
          uVar2 = uVar1 + uVar2;
        } while (uVar2 < param_4);
        bVar4 = true;
      }
LAB_0208ea1c:
      recovered_2000bb0(buffer);
    }
  }
  return bVar4;
}
