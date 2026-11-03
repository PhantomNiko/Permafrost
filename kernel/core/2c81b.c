#include "functions.h"
#undef str_0002e489
#define str_0002e489 (*(char (*)[1])(0x2e489U))
#undef str_0002e49a
#define str_0002e49a (*(char (*)[1])(0x2e49aU))
#undef str_0002e4ab
#define str_0002e4ab (*(char (*)[1])(0x2e4abU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c81b
 */

void recovered_2c81b(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76];

  
  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_0002e49a;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_0002e489;
  }
  else {
    format = str_0002e4ab;
  }
  recovered_21c41(format,param_1,param_3,param_3);
  return;
}

