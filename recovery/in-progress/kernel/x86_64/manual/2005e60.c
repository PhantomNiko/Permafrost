/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_2005e60(undefined4 param_1,int param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  if (param_2 == 4) {
    out((undefined2)param_1,(int)param_3);
  }
  else if (param_2 == 2) {
    out((undefined2)param_1,(short)param_3);
  }
  else {
    if (param_2 != 1) {
      return '\0';
    }
    out((undefined2)param_1,(char)param_3);
  }
  return '\x01';
}
