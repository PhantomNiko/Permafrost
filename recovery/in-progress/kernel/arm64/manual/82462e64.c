/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_82462e64(long param_1,long param_2,long param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  long lVar3;

  bVar1 = false;
  if ((param_1 != 0) && (param_3 != 0)) {
    lVar3 = param_2 + 1;
    do {
      lVar3 = lVar3 + -1;
      bVar1 = lVar3 != 0;
      if (lVar3 == 0) {
        return false;
      }
      iVar2 = recovered_82400e0c((char *)param_1,(char *)param_3);
      param_1 = (long)(param_1 + 0xf1);
    } while (iVar2 != 0);
  }
  return bVar1;
}
