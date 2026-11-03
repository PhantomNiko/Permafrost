#include "functions.h"
#undef PTR_recovered_28b68_0005d0e8
#define PTR_recovered_28b68_0005d0e8 (*(void * *)(0x5d0e8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28b68
 */

void recovered_28b68(undefined4 *param_1)

{
  unsigned char frame[64] = {0};

  *param_1 = &PTR_recovered_28b68_0005d0e8;
  recovered_29980((int)(param_1 + 0x2b));
  recovered_28b1c(param_1 + 0x28);
  recovered_2de4c(param_1 + 0x20);
  recovered_28b36(param_1 + 4);
  recovered_2de18(param_1 + 1);
  return;
}
