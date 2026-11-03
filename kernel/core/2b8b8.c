#include "functions.h"
#undef PTR_recovered_2b8b8_0005d128
#define PTR_recovered_2b8b8_0005d128 (*(void * *)(0x5d128U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b8b8
 */

void recovered_2b8b8(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_2b8b8_0005d128;
  recovered_2cb3e((int)(param_1 + 0x30b));
  recovered_2cac0(param_1 + 0x308);
  recovered_2cb14((int)(param_1 + 8));
  return;
}
