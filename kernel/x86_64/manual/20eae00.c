/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

ulonglong recovered_20eae00(undefined8 *param_1,ulong *param_2,long *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  code *pcVar1;
  ulong uVar2;

  recovered_205ec00(param_1);
  if (*param_2 != 0) {
    uVar2 = 0;
    do {
      recovered_2000bb0(*(void **)(*param_3 + uVar2 * 8));
      uVar2 = uVar2 + 1;
    } while (uVar2 < *param_2);
  }
  recovered_2000bb0((void *)*param_3);
                    /* WARNING: Does not return */
  pcVar1 = (code *)invalidInstructionException();
  (*pcVar1)();
}
