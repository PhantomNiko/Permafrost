/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_824336e8(long param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  ulong uVar2;
  ulong uVar3;

  if ((param_1 != 0) && (param_2 != (byte *)0x0)) {
    uVar2 = recovered_82400de8((char *)param_1);
    uVar3 = recovered_82400de8((char *)param_2);
    if (uVar3 <= uVar2) {
      bVar1 = recovered_8243a1f0((byte *)((param_1 + uVar2) - uVar3),param_2);
      return bVar1;
    }
  }
  return false;
}
