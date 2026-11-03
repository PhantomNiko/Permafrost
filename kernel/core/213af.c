#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x213af
 */

uint recovered_213af(int param_1,undefined1 param_2,int param_3)

{
  unsigned char frame[64];

  int iVar1;

  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = param_2;
  }
  return param_1;
}
