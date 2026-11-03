#include "functions.h"
#undef DAT_0005e6f0
#define DAT_0005e6f0 (*(int *)(0x5e6f0U))
#undef DAT_0005e6f4
#define DAT_0005e6f4 (*(uint *)(0x5e6f4U))
#undef DAT_0005e6fc
#define DAT_0005e6fc (*(uint *)(0x5e6fcU))
#undef DAT_0005e700
#define DAT_0005e700 (*(uint *)(0x5e700U))
#undef DAT_0005e704
#define DAT_0005e704 (*(char *)(0x5e704U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3936d
 */

void recovered_3936d(uint param_1,int param_2)

{
  unsigned char frame[64] = {0};

  if ((((1 < param_1) && (DAT_0005e6f0 != 0)) && (param_1 < DAT_0005e6f4)) &&
     ((*(int *)(DAT_0005e6f0 + param_1 * 4) != param_2 &&
      (*(int *)(DAT_0005e6f0 + param_1 * 4) = param_2, param_1 < DAT_0005e6f4)))) {
    if (DAT_0005e704 == '\0') {
      DAT_0005e704 = '\x01';
      DAT_0005e6fc = param_1;
      DAT_0005e700 = param_1;
    }
    else {
      if (param_1 < DAT_0005e6fc) {
        DAT_0005e6fc = param_1;
      }
      if (DAT_0005e700 < param_1) {
        DAT_0005e700 = param_1;
      }
    }
  }
  return;
}
