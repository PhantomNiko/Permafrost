/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_404df9bc(int param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;

  if (param_1 == 0 || param_2 == (int *)0x0) {
    return false;
  }
  iVar1 = recovered_40404c88();
  *param_2 = iVar1;
  return iVar1 != 0;
}
