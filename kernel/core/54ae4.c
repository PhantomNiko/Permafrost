#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x54ae4
 */

int recovered_54ae4(int param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if ((((param_2 == 1) && (*(int *)(param_1 + 0x14) < 0)) && (*(int *)(param_1 + 0x28) == 4)) &&
     ((*(int *)(param_1 + 8) == 0x41 && ((*(byte *)(param_1 + 0x10) & 1) != 0)))) {
    param_2 = 6;
  }
  return param_2;
}
