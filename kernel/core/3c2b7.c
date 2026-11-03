#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00042b30
#define DAT_00042b30 (*(uint8_t *)(0x42b30U))
#undef str_00044912
#define str_00044912 (*(char (*)[1])(0x44912U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c2b7
 */

bool recovered_3c2b7(uint param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;

  if (param_3 != param_4) {
    puVar1 = &DAT_00042b30;
    if (param_4 == 1) {
      puVar1 = &DAT_00042614;
    }
    recovered_2f9c3(param_1,param_2,str_00044912,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}
