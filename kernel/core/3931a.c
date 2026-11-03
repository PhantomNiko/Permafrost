#include "functions.h"
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(int *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(uint *)(0x5e6f4U))
#undef DAT_0005e6f8
#define DAT_0005e6f8 (*(uint *)(0x5e6f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3931a
 */

void recovered_3931a(uint param_1)

{
  unsigned char frame[64] = {0};

  uint uVar1;

  do {
    if (DAT_0005e6f0 == 0) {
      return;
    }
    if (param_1 < 2) {
      return;
    }
    if (DAT_0005e6f4 <= param_1) {
      return;
    }
    uVar1 = *(uint *)(DAT_0005e6f0 + param_1 * 4);
    recovered_3936d(param_1,0);
    if (param_1 < DAT_0005e6f8 || DAT_0005e6f8 < 2) {
      DAT_0005e6f8 = param_1;
    }
    param_1 = uVar1;
  } while (1 < uVar1 + 1);
  return;
}
