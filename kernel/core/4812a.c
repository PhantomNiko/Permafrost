#include "functions.h"
#undef str_0004d9cf
#define str_0004d9cf (*(char (*)[1])(0x4d9cfU))
#undef str_0004d9e0
#define str_0004d9e0 (*(char (*)[1])(0x4d9e0U))
#undef str_0004d9f1
#define str_0004d9f1 (*(char (*)[1])(0x4d9f1U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4812a
 */

void recovered_4812a(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76];


  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_0004d9e0;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_0004d9cf;
  }
  else {
    format = str_0004d9f1;
  }
  recovered_23390(format,param_1,param_3,param_3);
  return;
}
