#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28ab1
 */

void recovered_28ab1(uint *param_1)

{
  unsigned char frame[64];

  uint uVar1;
  int iVar2;
  
  if (param_1 != (uint *)0x0) {
    iVar2 = 0;
    for (uVar1 = 0; uVar1 < *param_1; uVar1 = uVar1 + 1) {
      recovered_24daf((undefined4 *)(param_1[2] + iVar2));
      iVar2 = iVar2 + 0x20;
    }
    recovered_20aee(param_1[2]);
    *param_1 = 0;
    param_1[1] = 0;
    param_1[2] = 0;
  }
  return;
}

