#include "functions.h"
#undef str_0005cd18
#define str_0005cd18 (*(char (*)[1])(0x5cd18U))
#undef str_0005cd29
#define str_0005cd29 (*(char (*)[1])(0x5cd29U))
#undef str_0005cd3a
#define str_0005cd3a (*(char (*)[1])(0x5cd3aU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x56765
 */

void recovered_56765(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76] = {0};


  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_0005cd29;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_0005cd18;
  }
  else {
    format = str_0005cd3a;
  }
  recovered_307b4(format,param_1,param_3,param_3);
  return;
}
