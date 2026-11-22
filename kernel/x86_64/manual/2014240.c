/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2014240(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((param_2 == (char *)0x0 || param_1 == (char *)0x0) || (*param_1 != *param_2)) ||
      (param_1[1] != param_2[1])) || (param_1[2] != param_2[2])) {
    return '\0';
  }
  return param_1[3] == param_2[3];
}
