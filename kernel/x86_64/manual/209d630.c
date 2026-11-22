/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_209d630(long param_1,long param_2,long param_3,long param_4,long param_5,
                           undefined8 param_6,undefined1 param_7)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulonglong uVar1;
  long lVar2;

  uVar1 = recovered_20a98c0(0,param_1);
  if (uVar1 == 0) {
    if (param_2 != 0) {
      if (param_3 != 0) {
        lVar2 = 0;
        do {
          recovered_2000bb0(*(void **)(param_2 + lVar2 * 8));
          lVar2 = lVar2 + 1;
        } while (param_3 != lVar2);
      }
      recovered_2000bb0((void *)param_2);
    }
    if (param_4 != 0) {
      if (param_5 != 0) {
        lVar2 = 0;
        do {
          recovered_2000bb0(*(void **)(param_4 + lVar2 * 8));
          *(undefined8 *)(param_4 + lVar2 * 8) = 0;
          lVar2 = lVar2 + 1;
        } while (param_5 != lVar2);
      }
      recovered_2000bb0((void *)param_4);
    }
    uVar1 = 0;
  }
  else {
    *(undefined1 *)(uVar1 + 8) = param_7;
    *(long *)(uVar1 + 0x60) = param_2;
    *(long *)(uVar1 + 0x68) = param_3;
    *(long *)(uVar1 + 0x70) = param_4;
    *(long *)(uVar1 + 0x78) = param_5;
    *(undefined8 *)(uVar1 + 0x80) = param_6;
  }
  return uVar1;
}
