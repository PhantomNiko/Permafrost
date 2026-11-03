#include "functions.h"
#undef str_0004ad52
#define str_0004ad52 (*(char (*)[1])(0x4ad52U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x418e8
 */

undefined4 recovered_418e8(uint param_1,char *param_2)

{
  unsigned char frame[64];

  bool bVar1;
  undefined3 extraout_var = 0;

  bVar1 = recovered_415c3();
  if (!bVar1) {
    recovered_310b6(param_1,param_2,str_0004ad52);
  }
  return CONCAT31(extraout_var,bVar1);
}
