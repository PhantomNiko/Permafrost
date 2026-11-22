/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_2033140(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  short sVar1;
  short sVar2;

  sVar1 = (short)*(undefined4 *)(param_1 + 0xac);
  sVar2 = 0;
  if (0 < sVar1) {
    sVar2 = sVar1;
  }
  return (double)(int)sVar2;
}
