/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8240a19c(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;

  bVar1 = false;
  if ((param_1 != (char *)0x0) && (param_2 != (char *)0x0)) {
    if ((*param_1 == *param_2) && ((param_1[1] == param_2[1] && (param_1[2] == param_2[2])))) {
      bVar1 = param_1[3] == param_2[3];
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}
