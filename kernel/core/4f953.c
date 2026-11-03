#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_00057aa9
#define DAT_00057aa9 (*(uint8_t *)(0x57aa9U))
#undef str_00059b96
#define str_00059b96 (*(char (*)[1])(0x59b96U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4f953
 */

bool recovered_4f953(uint param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64] = {0};

  undefined1 *puVar1;

  if (param_3 != param_4) {
    puVar1 = &DAT_00057aa9;
    if (param_4 == 1) {
      puVar1 = &DAT_00057364;
    }
    recovered_3f39b(param_1,param_2,str_00059b96,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}
