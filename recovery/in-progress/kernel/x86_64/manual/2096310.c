/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_2096310(long param_1,long param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  void *out;

  out = recovered_2000ad0(param_2 + 1);
  if (out != (void *)0x0) {
    if (param_1 != 0 && param_2 != 0) {
      recovered_2001410(out,(void *)param_1,param_2);
    }
    *(undefined1 *)((long)out + param_2) = 0;
  }
  return (ulonglong)out;
}
