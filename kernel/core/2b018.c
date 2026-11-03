#include "functions.h"
#undef DAT_0004ee64
#define DAT_0004ee64 (*(int *)(0x4ee64U))
#undef DAT_0004ee68
#define DAT_0004ee68 (*(uint *)(0x4ee68U))
#undef DAT_0004ee70
#define DAT_0004ee70 (*(uint *)(0x4ee70U))
#undef DAT_0004ee74
#define DAT_0004ee74 (*(uint *)(0x4ee74U))
#undef DAT_0004ee78
#define DAT_0004ee78 (*(char *)(0x4ee78U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b018
 */

void recovered_2b018(uint param_1,int param_2)

{
  unsigned char frame[64];

  if ((((1 < param_1) && (DAT_0004ee64 != 0)) && (param_1 < DAT_0004ee68)) &&
     ((*(int *)(DAT_0004ee64 + param_1 * 4) != param_2 &&
      (*(int *)(DAT_0004ee64 + param_1 * 4) = param_2, param_1 < DAT_0004ee68)))) {
    if (DAT_0004ee78 == '\0') {
      DAT_0004ee78 = '\x01';
      DAT_0004ee70 = param_1;
      DAT_0004ee74 = param_1;
    }
    else {
      if (param_1 < DAT_0004ee70) {
        DAT_0004ee70 = param_1;
      }
      if (DAT_0004ee74 < param_1) {
        DAT_0004ee74 = param_1;
      }
    }
  }
  return;
}
