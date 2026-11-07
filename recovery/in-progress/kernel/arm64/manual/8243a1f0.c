/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8243a1f0(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;

  bVar4 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar2 = *param_1;
      bVar3 = *param_2;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      bVar1 = bVar2 - 0x20;
      if (0x19 < bVar2 - 0x61U) {
        bVar1 = bVar2;
      }
      bVar2 = bVar3 - 0x20;
      if (0x19 < bVar3 - 0x61U) {
        bVar2 = bVar3;
      }
      if (bVar1 != bVar2) {
        return false;
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}
