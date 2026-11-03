#include "functions.h"
#undef DAT_0004ce64
#define DAT_0004ce64 (*(int *)(0x4ce64U))
#undef DAT_0004ce68
#define DAT_0004ce68 (*(uint *)(0x4ce68U))
#undef DAT_0004ce6c
#define DAT_0004ce6c (*(uint *)(0x4ce6cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b041
 */

void recovered_2b041(uint param_1)

{
  unsigned char frame[64];

  uint uVar1;

  do {
    if (DAT_0004ce64 == 0) {
      return;
    }
    if (param_1 < 2) {
      return;
    }
    if (DAT_0004ce68 <= param_1) {
      return;
    }
    uVar1 = *(uint *)(DAT_0004ce64 + param_1 * 4);
    recovered_2b094(param_1,0);
    if (param_1 < DAT_0004ce6c || DAT_0004ce6c < 2) {
      DAT_0004ce6c = param_1;
    }
    param_1 = uVar1;
  } while (1 < uVar1 + 1);
  return;
}
