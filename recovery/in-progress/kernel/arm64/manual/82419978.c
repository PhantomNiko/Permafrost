/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_82419978(long *param_1,double *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint extraout_w0 = 0;
  double dVar1;

  if (((char)param_1[3] == '\x01') &&
     (((double)param_1[6] != (double)param_1[4] || ((double)param_1[7] != (double)param_1[5])))) {
    recovered_82419a18(param_1,(double *)(param_1 + 4));
  }
  dVar1 = *param_2;
  param_1[5] = (long)param_2[1];
  param_1[4] = (long)dVar1;
  dVar1 = *param_2;
  param_1[7] = (long)param_2[1];
  param_1[6] = (long)dVar1;
  *(undefined1 *)(param_1 + 3) = 1;
  recovered_82419ecc((long)param_1,param_2);
  return extraout_w0;
}
