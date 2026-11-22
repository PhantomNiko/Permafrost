/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined4 recovered_404dfb48(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 unaff_r9;

  if (param_1 != 0x1a0) {
    unaff_r9 = 0;
    param_4 = 0x199;
  }
  if (param_1 == 0x1a0 || param_1 == param_4) {
    unaff_r9 = recovered_40412234();
  }
  return unaff_r9;
}
