/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8241d568(int param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = param_2 == 0x20 || param_2 == 0x40;
  if (param_1 != 3) {
    bVar1 = param_1 == 1 && (param_2 - 8U & 0xffe7) == 0;
  }
  return bVar1;
}
