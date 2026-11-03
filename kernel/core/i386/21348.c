#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21348
 */

uint recovered_21348(int param_1,int param_2,int param_3)

{
  unsigned char frame[64];

  int iVar1;

  for (iVar1 = 0; param_3 != iVar1; iVar1 = iVar1 + 1) {
    *(undefined1 *)(param_1 + iVar1) = *(undefined1 *)(param_2 + iVar1);
  }
  return param_1;
}
