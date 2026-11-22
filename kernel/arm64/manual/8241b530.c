/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

long recovered_8241b530(long *param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  long lVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;

  lVar5 = *param_1;
  if (lVar5 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = param_2 - lVar5;
    uVar4 = param_3 - lVar5;
    lVar3 = uVar4 - uVar2;
    if (uVar2 <= uVar4 && lVar3 != 0) {
      uVar6 = uVar2;
      for (; uVar4 < (ulong)param_1[1]; uVar4 = uVar4 + 1) {
        *(undefined1 *)(*param_1 + uVar6) = *(undefined1 *)(*param_1 + uVar4);
        uVar6 = uVar6 + 1;
      }
      param_1[1] = param_1[1] - lVar3;
      lVar5 = *param_1;
      lVar3 = lVar5 + uVar2;
      goto LAB_4041581c;
    }
  }
  lVar3 = lVar5 + uVar2;
LAB_4041581c:
  lVar1 = 0;
  if (lVar5 != 0) {
    lVar1 = lVar3;
  }
  return lVar1;
}
