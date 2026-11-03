#include "functions.h"
#undef str_00059dbd
#define str_00059dbd (*(char (*)[1])(0x59dbdU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4fbd7
 */

undefined4 recovered_4fbd7(uint param_1,char *param_2)

{
  unsigned char frame[64] = {0};

  bool bVar1;
  undefined3 extraout_var = 0;

  bVar1 = recovered_4f8b2();
  if (!bVar1) {
    recovered_3f39b(param_1,param_2,str_00059dbd);
  }
  return CONCAT31(extraout_var,bVar1);
}
