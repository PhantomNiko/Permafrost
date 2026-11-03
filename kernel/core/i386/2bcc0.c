#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bcc0
 */

uint recovered_2bcc0(int param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  uVar2 = 0;
  if (param_1 != 0) {
    iVar1 = recovered_213fa(param_1);
    if (iVar1 != 0) {
      uVar2 = (iVar1 + 0xcU) / 0xd;
    }
  }
  return uVar2;
}
