#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d1d
 */

void recovered_21d1d(int *param_1,uint *param_2,int *param_3,undefined1 param_4)

{
  unsigned char frame[64];

  if (1 < *param_2) {
    *(undefined1 *)*param_1 = param_4;
    *param_1 = *param_1 + 1;
    *param_2 = *param_2 - 1;
  }
  *param_3 = *param_3 + 1;
  return;
}
