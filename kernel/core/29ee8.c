#include "functions.h"
#undef DAT_00047e50
#define DAT_00047e50 (*(int *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(uint *)(0x47e54U))
#undef DAT_00047e58
#define DAT_00047e58 (*(uint *)(0x47e58U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29ee8
 */

void recovered_29ee8(uint param_1)

{
  unsigned char frame[64];

  uint uVar1;

  do {
    if (DAT_00047e50 == 0) {
      return;
    }
    if (param_1 < 2) {
      return;
    }
    if (DAT_00047e54 <= param_1) {
      return;
    }
    uVar1 = *(uint *)(DAT_00047e50 + param_1 * 4);
    recovered_29f3b(param_1,0);
    if (param_1 < DAT_00047e58 || DAT_00047e58 < 2) {
      DAT_00047e58 = param_1;
    }
    param_1 = uVar1;
  } while (1 < uVar1 + 1);
  return;
}
