#include "functions.h"
#undef DAT_00046264
#define DAT_00046264 (*(uint8_t *)(0x46264U))
#undef DAT_00046780
#define DAT_00046780 (*(uint8_t *)(0x46780U))
#undef str_000487eb
#define str_000487eb (*(char (*)[1])(0x487ebU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f822
 */

bool recovered_3f822(uint param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;

  if (param_3 != param_4) {
    puVar1 = &DAT_00046780;
    if (param_4 == 1) {
      puVar1 = &DAT_00046264;
    }
    recovered_30ed3(param_1,param_2,str_000487eb,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}
