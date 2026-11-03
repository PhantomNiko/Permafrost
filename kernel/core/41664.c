#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_00048a38
#define DAT_00048a38 (*(uint8_t *)(0x48a38U))
#undef str_0004ab2b
#define str_0004ab2b (*(char (*)[1])(0x4ab2bU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x41664
 */

bool recovered_41664(uint param_1,char *param_2,int param_3,int param_4)

{
  unsigned char frame[64];

  undefined1 *puVar1;

  if (param_3 != param_4) {
    puVar1 = &DAT_00048a38;
    if (param_4 == 1) {
      puVar1 = &DAT_0004851c;
    }
    recovered_310b6(param_1,param_2,str_0004ab2b,param_2,param_4,puVar1);
  }
  return param_3 == param_4;
}
