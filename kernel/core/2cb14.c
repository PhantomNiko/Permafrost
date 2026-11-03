#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cb14
 */

void recovered_2cb14(int param_1)

{
  unsigned char frame[64] = {0};

  int iVar1;

  iVar1 = 0xbf4;
  do {
    recovered_2caa8((undefined4 *)(param_1 + iVar1));
    iVar1 = iVar1 + -0xc;
  } while (iVar1 != -0xc);
  return;
}
