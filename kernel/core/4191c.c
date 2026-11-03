#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4191c
 */

void recovered_4191c(uint param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;

  while( true ) {
    if (param_1 == 0) {
      return;
    }
    uVar2 = 1000;
    if (param_1 < 1000) {
      uVar2 = param_1;
    }
    iVar1 = FUN_0002069f(uVar2 * 1000);
    if (iVar1 == 0) break;
    param_1 = param_1 - uVar2;
  }
  recovered_44930(param_1);
  return;
}
