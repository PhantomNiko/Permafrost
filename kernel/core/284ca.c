#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x284ca
 */

uint recovered_284ca(int param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  
  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = recovered_20ff4(param_1);
    if (iVar1 != 0) {
      uVar2 = (iVar1 + 0xcU) / 0xd;
    }
  }
  return uVar2;
}

