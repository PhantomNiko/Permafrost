#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31354
 */

uint recovered_31354(byte *param_1)

{
  unsigned char frame[64];

  byte bVar1;
  undefined4 in_EAX = 0;
  uint uVar2;
  byte *pbVar3;

  if (param_1 != (byte *)0x0) {
    bVar1 = *param_1;
    uVar2 = CONCAT31((int3)((uint)in_EAX >> 8),bVar1);
    if ((bVar1 != 0) &&
       ((((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a || (bVar1 == 0x5f)) ||
        (uVar2 = (uint)bVar1, uVar2 == 0x24)))) {
      pbVar3 = param_1 + 1;
      do {
        bVar1 = *pbVar3;
        uVar2 = CONCAT31((int3)(uVar2 >> 8),bVar1 == 0);
        if (bVar1 == 0) {
          return uVar2;
        }
        pbVar3 = pbVar3 + 1;
      } while (((bVar1 == 0x2e) || (bVar1 == 0x24)) ||
              ((bVar1 == 0x5f ||
               (((byte)(bVar1 - 0x30) < 10 || ((byte)((bVar1 & 0xdf) + 0xbf) < 0x1a))))));
      return uVar2;
    }
  }
  return 0;
}
