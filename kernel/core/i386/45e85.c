#include "functions.h"
#undef str_0004b27d
#define str_0004b27d (*(char (*)[1])(0x4b27dU))
#undef str_0004b28e
#define str_0004b28e (*(char (*)[1])(0x4b28eU))
#undef str_0004b29f
#define str_0004b29f (*(char (*)[1])(0x4b29fU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45e85
 */

void recovered_45e85(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76];


  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_0004b28e;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_0004b27d;
  }
  else {
    format = str_0004b29f;
  }
  recovered_233a3(format,param_1,param_3,param_3);
  return;
}
