/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_20a7730(void *incoming_ecx,void *incoming_edx,uint param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint size;

  if ((incoming_ecx != (void *)0x0) &&
     (recovered_2001e00(incoming_ecx,0,0xd), incoming_edx != (void *)0x0)) {
    size = param_3;
    if (0xb < param_3) {
      size = 0xc;
    }
    if (param_3 != 0) {
      do {
        if (*(char *)((int)incoming_edx + (size - 1)) != '\0') goto LAB_02047dcc;
        size = size - 1;
      } while (size != 0);
      size = 0;
    }
LAB_02047dcc:
    recovered_2001b70(incoming_ecx,incoming_edx,size);
    *(undefined1 *)((int)incoming_ecx + size) = 0;
  }
  return;
}
