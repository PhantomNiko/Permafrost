/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8244ccd4(byte *param_1,byte *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;
  byte bVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;

  bVar4 = false;
  if ((param_1 != (byte *)0x0) && (param_2 != (byte *)0x0)) {
    while( true ) {
      bVar2 = *param_1;
      bVar3 = *param_2;
      uVar6 = (uint)bVar2;
      uVar5 = (uint)bVar3;
      if ((bVar2 == 0) || (bVar3 == 0)) break;
      if (bVar2 != bVar3) {
        uVar1 = uVar6 - 0x20;
        if (0x19 < uVar6 - 0x61) {
          uVar1 = uVar6;
        }
        uVar6 = uVar5 - 0x20;
        if (0x19 < uVar5 - 0x61) {
          uVar6 = uVar5;
        }
        if ((uVar1 & 0xff) != (uVar6 & 0xff)) {
          return false;
        }
      }
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
    }
    bVar4 = bVar2 == 0 && bVar3 == 0;
  }
  return bVar4;
}
