#include "functions.h"
#undef DAT_0004ee64
#define DAT_0004ee64 (*(int *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(uint *)(0x4ee68U))
#undef DAT_0004ee6c
#define DAT_0004ee6c (*(uint *)(0x4ee6cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2afc5
 */

void recovered_2afc5(uint param_1)

{
  unsigned char frame[64];

  uint uVar1;

  do {
    if (DAT_0004ee64 == 0) {
      return;
    }
    if (param_1 < 2) {
      return;
    }
    if (DAT_0004ee68 <= param_1) {
      return;
    }
    uVar1 = *(uint *)(DAT_0004ee64 + param_1 * 4);
    recovered_2b018(param_1,0);
    if (param_1 < DAT_0004ee6c || DAT_0004ee6c < 2) {
      DAT_0004ee6c = param_1;
    }
    param_1 = uVar1;
  } while (1 < uVar1 + 1);
  return;
}
