/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_20bd5b0(int param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  bool bVar2;

  bVar2 = false;
  if (param_2 != (int *)0x0 && param_1 != 0) {
    iVar1 = recovered_20046f0();
    *param_2 = iVar1;
    bVar2 = iVar1 != 0;
  }
  return bVar2;
}
