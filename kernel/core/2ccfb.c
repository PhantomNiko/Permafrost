#include "functions.h"
#define local_14 (*(int *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2ccfb
 */

bool recovered_2ccfb(int *param_1,uint *param_2,double *param_3)

{
  unsigned char frame[68] = {0};

  byte *pbVar1;
  bool bVar2;
  float10 fVar3;

  recovered_2cdd5(param_1,param_2);
  if (*param_2 < (uint)param_1[1]) {
    local_14 = 0;
    pbVar1 = (byte *)(*param_2 + *param_1);
    fVar3 = recovered_21e92(pbVar1,&local_14);
    *param_3 = (double)fVar3;
    local_14 = local_14 - (int)pbVar1;
    bVar2 = local_14 != 0;
    if (bVar2) {
      *param_2 = *param_2 + local_14;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
