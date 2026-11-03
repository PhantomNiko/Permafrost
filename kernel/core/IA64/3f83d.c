#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_00046798
#define DAT_00046798 (*(uint8_t *)(0x46798U))
#undef str_00048775
#define str_00048775 (*(char (*)[1])(0x48775U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3f83d
 */

bool recovered_3f83d(uint param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;

  if (param_3 != param_4) {
    puVar1 = &DAT_00046798;
    if (param_4 == 1) {
      puVar1 = &DAT_0004627c;
    }
    recovered_30f0b(param_1,param_2,str_00048775,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}
