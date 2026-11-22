/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_82419534(long *param_1,int *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;

  lVar1 = recovered_824195f0(param_1,param_2);
  if (lVar1 == -1) {
    lVar1 = param_1[1];
  }
  return *param_1 + lVar1 * 8;
}
