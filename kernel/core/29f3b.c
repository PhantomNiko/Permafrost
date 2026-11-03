#include "functions.h"
#undef DAT_00047e50
#define DAT_00047e50 (*(int *)(0x47e50U))
#undef DAT_00047e54
#define DAT_00047e54 (*(uint *)(0x47e54U))
#undef DAT_00047e5c
#define DAT_00047e5c (*(uint *)(0x47e5cU))
#undef DAT_00047e60
#define DAT_00047e60 (*(uint *)(0x47e60U))
#undef DAT_00047e64
#define DAT_00047e64 (*(char *)(0x47e64U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29f3b
 */

void recovered_29f3b(uint param_1,int param_2)

{
  unsigned char frame[64];

  if ((((1 < param_1) && (DAT_00047e50 != 0)) && (param_1 < DAT_00047e54)) &&
     ((*(int *)(DAT_00047e50 + param_1 * 4) != param_2 &&
      (*(int *)(DAT_00047e50 + param_1 * 4) = param_2, param_1 < DAT_00047e54)))) {
    if (DAT_00047e64 == '\0') {
      DAT_00047e64 = '\x01';
      DAT_00047e5c = param_1;
      DAT_00047e60 = param_1;
    }
    else {
      if (param_1 < DAT_00047e5c) {
        DAT_00047e5c = param_1;
      }
      if (DAT_00047e60 < param_1) {
        DAT_00047e60 = param_1;
      }
    }
  }
  return;
}
