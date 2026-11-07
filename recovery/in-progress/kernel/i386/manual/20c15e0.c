/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_20c15e0(uint in_EDX,uint *param_2,uint *param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte *pcVar1;
  uint uVar2;

  recovered_2043a90(param_2,in_EDX);
  if (*param_3 != 0) {
    uVar2 = 0;
    do {
      recovered_2001710(*(void **)(*param_4 + uVar2 * 4));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_3);
  }
  recovered_2001710((void *)*param_4);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*(code *)pcVar1)();
}
