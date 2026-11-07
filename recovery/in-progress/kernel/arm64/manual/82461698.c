/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

byte recovered_82461698(long param_1,long param_2,long *param_3,long *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = 0;
  if (((param_1 != 0) && (param_3 != (long *)0x0)) && (param_4 != (long *)0x0)) {
    while( true ) {
      bVar1 = *(byte *)(param_1 + param_2);
      if (bVar1 == 0) break;
      if (bVar1 - 0x30U < 10) {
        *param_3 = param_2;
        do {
          param_2 = param_2 + 1;
          *param_4 = param_2;
        } while (*(byte *)(param_1 + param_2) - 0x30U < 10);
        return 1;
      }
      param_2 = param_2 + 1;
    }
  }
  return bVar1;
}
