#include "functions.h"
#undef str_000489b6
#define str_000489b6 (*(char (*)[1])(0x489b6U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3fac1
 */

undefined4 recovered_3fac1(uint param_1,char *param_2)

{
  unsigned char frame[64];

  bool bVar1;
  undefined3 extraout_var = 0;

  bVar1 = recovered_3f805();
  if (!bVar1) {
    recovered_30f0b(param_1,param_2,str_000489b6);
  }
  return CONCAT31(extraout_var,bVar1);
}
