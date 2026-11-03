#include "functions.h"
#undef DAT_0004ce64
#define DAT_0004ce64 (*(int *)(0x4ce64U))
#undef DAT_0004ce68
#define DAT_0004ce68 (*(uint *)(0x4ce68U))
#undef DAT_0004ce70
#define DAT_0004ce70 (*(uint *)(0x4ce70U))
#undef DAT_0004ce74
#define DAT_0004ce74 (*(uint *)(0x4ce74U))
#undef DAT_0004ce78
#define DAT_0004ce78 (*(char *)(0x4ce78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b094
 */

void recovered_2b094(uint param_1,int param_2)

{
  unsigned char frame[64];

  if ((((1 < param_1) && (DAT_0004ce64 != 0)) && (param_1 < DAT_0004ce68)) &&
     ((*(int *)(DAT_0004ce64 + param_1 * 4) != param_2 &&
      (*(int *)(DAT_0004ce64 + param_1 * 4) = param_2, param_1 < DAT_0004ce68)))) {
    if (DAT_0004ce78 == '\0') {
      DAT_0004ce78 = '\x01';
      DAT_0004ce70 = param_1;
      DAT_0004ce74 = param_1;
    }
    else {
      if (param_1 < DAT_0004ce70) {
        DAT_0004ce70 = param_1;
      }
      if (DAT_0004ce74 < param_1) {
        DAT_0004ce74 = param_1;
      }
    }
  }
  return;
}
