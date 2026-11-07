/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulong recovered_8243faf0(uint *param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;

  if (param_2 == 0) {
    return (ulong)*param_1;
  }
  uVar1 = recovered_8243e3e4(param_1);
  return (ulong)uVar1;
}
