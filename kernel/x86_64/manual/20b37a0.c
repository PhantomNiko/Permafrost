/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

double recovered_20b37a0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uchar uVar1;
  uint uVar2;
  int iVar3;
  double in_XMM0_Qa;
  double extraout_XMM0_Qa = 0;

  do {
    if (param_1 == 0) {
      return in_XMM0_Qa;
    }
    uVar2 = 1000;
    if (param_1 < 1000) {
      uVar2 = param_1;
    }
    uVar1 = recovered_200bef0(uVar2 * 1000);
    if (uVar1 == '\0') {
      uVar2 = 0;
      do {
        iVar3 = 0;
        do {
          iVar3 = iVar3 + 6;
        } while (iVar3 != 6000);
        uVar2 = uVar2 + 1;
      } while (uVar2 != param_1);
    }
    else {
      param_1 = param_1 - uVar2;
    }
    in_XMM0_Qa = extraout_XMM0_Qa;
  } while (uVar1 != '\0');
  return extraout_XMM0_Qa;
}
