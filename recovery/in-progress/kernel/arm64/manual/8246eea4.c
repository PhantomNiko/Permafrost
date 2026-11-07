/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_12 (*(undefined2 *)(frame + 30))
ulong recovered_8246eea4(long *param_1,undefined2 param_2)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;

  local_12 = param_2;
  bVar1 = recovered_824531b8(param_1,(char *)&local_12,2);
  return (ulong)bVar1;
}
