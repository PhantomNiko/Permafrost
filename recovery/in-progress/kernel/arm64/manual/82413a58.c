/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_82413a58(uint *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  if (param_3 == 0) {
    return true;
  }
  lVar1 = recovered_8240f2f8(param_2,1,param_3,param_1);
  return lVar1 == param_3;
}
