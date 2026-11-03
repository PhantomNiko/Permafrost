#include "functions.h"
#undef str_000489f8
#define str_000489f8 (*(char (*)[1])(0x489f8U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3faa6
 */

undefined4 recovered_3faa6(uint param_1,char *param_2)

{
  unsigned char frame[64];

  bool bVar1;
  undefined3 extraout_var = 0;

  bVar1 = recovered_3f781();
  if (!bVar1) {
    recovered_30ed3(param_1,param_2,str_000489f8);
  }
  return CONCAT31(extraout_var,bVar1);
}
