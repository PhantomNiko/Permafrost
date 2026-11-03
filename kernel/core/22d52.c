#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d52
 */

undefined1 FUN_00022d52(int param_1)

{
  unsigned char frame[64] = {0};

  undefined1 uVar1;

  if (param_1 == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = *(undefined1 *)(param_1 + 0x115);
  }
  return uVar1;
}
