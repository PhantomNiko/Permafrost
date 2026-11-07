/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20cd140(long param_1,long param_2,ulong param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;

  if ((param_1 != 0) && (recovered_2002110((void *)param_1,0,0xd), param_2 != 0)) {
    size = 0xc;
    if (param_3 < 0xc) {
      size = param_3;
    }
    if (param_3 != 0) {
      do {
        if (*(char *)(param_2 + -1 + size) != '\0') goto LAB_02055eb0;
        size = size - 1;
      } while (size != 0);
      size = 0;
    }
LAB_02055eb0:
    recovered_2001410((void *)param_1,(void *)param_2,size);
    *(undefined1 *)(param_1 + size) = 0;
  }
  return;
}
