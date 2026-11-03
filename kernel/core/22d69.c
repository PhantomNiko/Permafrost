#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x22d69
 */

void FUN_00022d69(int param_1)

{
  unsigned char frame[64] = {0};

  if (param_1 != 0) {
    *(undefined2 *)(param_1 + 0x114) = 0;
    *(undefined4 *)(param_1 + 0x10c) = 0xffffffff;
  }
  return;
}
