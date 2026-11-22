/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_40451e2d (*(char (*)[1])(0x8247bcd5U))
ulong recovered_8245a0e0(long param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = recovered_82459d88();
  if (!bVar1) {
    pf_varargs_4042ecb8_0((void *)param_1,param_2,str_40451e2d);
  }
  return (ulong)bVar1;
}
