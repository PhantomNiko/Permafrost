/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8246650c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int *piVar2;
  long lVar3;

  bVar1 = false;
  if (param_1 != 0) {
    if (*(short *)(param_1 + 0x1fe) == -0x55ab) {
      piVar2 = (int *)(param_1 + 0x1ca);
      lVar3 = 4;
      while( true ) {
        bVar1 = lVar3 != 0;
        lVar3 = lVar3 + -1;
        if ((!bVar1) ||
           ((((char)piVar2[-2] != -0x12 && ((char)piVar2[-2] != '\0')) && (*piVar2 != 0)))) break;
        piVar2 = piVar2 + 4;
      }
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}
