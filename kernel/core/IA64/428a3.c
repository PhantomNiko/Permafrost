#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x428a3
 */

void recovered_428a3(undefined2 *param_1)

{
  unsigned char frame[64];

  if (param_1 != (undefined2 *)0x0) {
    recovered_3134d((uint *)(param_1 + 2));
    recovered_21203(*(int *)(param_1 + 0xc));
    *(undefined4 *)(param_1 + 8) = 0;
    *(undefined4 *)(param_1 + 10) = 0;
    *(undefined4 *)(param_1 + 0xc) = 0;
    recovered_2c249(*(undefined4 **)(param_1 + 0xe),*(int *)(param_1 + 0x10));
    recovered_21203(*(int *)(param_1 + 0x14));
    recovered_21203(*(int *)(param_1 + 0x16));
    *(undefined4 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x12) = 0;
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(param_1 + 0x16) = 0;
    *param_1 = 1;
  }
  return;
}
