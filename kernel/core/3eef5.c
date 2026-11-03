#include "functions.h"
#undef str_000432de
#define str_000432de (*(char (*)[1])(0x432deU))
#undef str_000432ef
#define str_000432ef (*(char (*)[1])(0x432efU))
#undef str_00043300
#define str_00043300 (*(char (*)[1])(0x43300U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3eef5
 */

void recovered_3eef5(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76];

  
  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_000432ef;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_000432de;
  }
  else {
    format = str_00043300;
  }
  recovered_236f9(format,param_1,param_3,param_3);
  return;
}

