#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e1a0
 */

undefined4 recovered_2e1a0(int param_1,uint param_2,uint param_3,uint param_4,undefined4 *param_5)

{
  unsigned char frame[64] = {0};

  longlong lVar1;
  void *pvVar2;

  recovered_2e184((int)param_5);
  if ((((param_3 == 0) || (param_2 == 0)) || (param_1 == 0)) ||
     (((param_5 == (undefined4 *)0x0 ||
       (lVar1 = (ulonglong)(param_2 * 4) * (ulonglong)param_3,
       ((uint)lVar1 != param_4 || (int)((ulonglong)lVar1 >> 0x20) + (param_2 >> 0x1e) * param_3 != 0
       ) || 0x3fffffff < param_2)) || (pvVar2 = recovered_211fa(param_4), pvVar2 == (void *)0x0))))
  {
    return 0;
  }
  recovered_21348((int)pvVar2,param_1,param_4);
  *param_5 = pvVar2;
  param_5[1] = param_4;
  param_5[2] = param_2;
  param_5[3] = param_3;
  param_5[4] = param_2 * 4;
  return CONCAT31((int3)((uint)param_5 >> 8),1);
}
