/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_20e65f0(long param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;

  bVar2 = false;
  if (param_2 != (int *)0x0 && param_1 != 0) {
    uVar1 = recovered_2005cc0();
    *param_2 = uVar1;
    bVar2 = uVar1 != 0;
  }
  return bVar2;
}
