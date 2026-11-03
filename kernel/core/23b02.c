#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23b02
 */

uint recovered_23b02(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  uVar3 = 0;
  uVar4 = 0;
  pbVar2 = (byte *)*param_1;
  do {
    *param_1 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (bVar1 & 0x7f) << ((byte)uVar4 & 0x1f);
    uVar4 = uVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  uVar5 = -1 << ((byte)uVar4 & 0x1f);
  if (bVar1 < 0x40) {
    uVar5 = 0;
  }
  if (0x1f < uVar4) {
    uVar5 = 0;
  }
  return uVar3 | uVar5;
}
