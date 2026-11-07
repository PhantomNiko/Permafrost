/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_2012e30(char *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if ((((incoming_edx == (char *)0x0 || incoming_ecx == (char *)0x0) ||
       (*incoming_ecx != *incoming_edx)) || (incoming_ecx[1] != incoming_edx[1])) ||
     (incoming_ecx[2] != incoming_edx[2])) {
    return false;
  }
  return incoming_ecx[3] == incoming_edx[3];
}
