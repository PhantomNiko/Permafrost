#include "functions.h"
#undef str_00046c30
#define str_00046c30 (*(char (*)[1])(0x46c30U))
#undef str_00046c41
#define str_00046c41 (*(char (*)[1])(0x46c41U))
#undef str_00046c52
#define str_00046c52 (*(char (*)[1])(0x46c52U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4229a
 */

void recovered_4229a(undefined4 param_1,int param_2,uint param_3)

{
  unsigned char frame[76];


  if (param_2 == 2) {
    param_3 = param_3 & 0xffff;
    format = str_00046c41;
  }
  else if (param_2 == 1) {
    param_3 = param_3 & 0xff;
    format = str_00046c30;
  }
  else {
    format = str_00046c52;
  }
  recovered_22fa2(format,param_1,param_3,param_3);
  return;
}
