#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x23ab2
 */

uint recovered_23ab2(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;

  bVar4 = 0;
  uVar3 = 0;
  pbVar2 = (byte *)*param_1;
  do {
    *param_1 = pbVar2 + 1;
    bVar1 = *pbVar2;
    uVar3 = uVar3 | (bVar1 & 0x7f) << (bVar4 & 0x1f);
    bVar4 = bVar4 + 7;
    pbVar2 = pbVar2 + 1;
  } while ((char)bVar1 < '\0');
  return uVar3;
}
