/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20086b0(uint param_1,int param_2,undefined4 param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;

  if (param_1 != 0) {
    puVar1 = (undefined4 *)(ulong)param_1;
    if (param_2 != 4) {
      if (param_2 == 2) {
        if ((param_1 & 1) != 0) {
          return '\0';
        }
        *(short *)puVar1 = (short)param_3;
      }
      else {
        if (param_2 != 1) {
          return '\0';
        }
        *(char *)puVar1 = (char)param_3;
      }
      return '\x01';
    }
    if ((param_1 & 3) == 0) {
      *puVar1 = param_3;
      return '\x01';
    }
  }
  return '\0';
}
