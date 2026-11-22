/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8246e5e4(long param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  bVar1 = false;
  if ((param_1 != 0) && (param_2 != (int *)0x0)) {
    iVar2 = recovered_82402218(param_1);
    *param_2 = iVar2;
    bVar1 = iVar2 != 0;
  }
  return bVar1;
}
