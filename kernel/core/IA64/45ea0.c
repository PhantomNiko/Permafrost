#include "functions.h"
#undef str_0004b29a
#define str_0004b29a (*(char (*)[1])(0x4b29aU))
#undef str_0004b2ab
#define str_0004b2ab (*(char (*)[1])(0x4b2abU))
#undef str_0004b2bc
#define str_0004b2bc (*(char (*)[1])(0x4b2bcU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45ea0
 */

void recovered_45ea0(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76];


  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_0004b2ab;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_0004b29a;
  }
  else {
    format = str_0004b2bc;
  }
  recovered_233b7(format,param_1,param_3,param_3);
  return;
}
