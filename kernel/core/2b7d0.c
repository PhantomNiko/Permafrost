#include "functions.h"
#undef DAT_00056810
#define DAT_00056810 (*(uint8_t *)(0x56810U))
#undef DAT_00057040
#define DAT_00057040 (*(uint8_t *)(0x57040U))
#undef _DAT_00056810
#define _DAT_00056810 (*(float *)(0x56810U))
#undef _DAT_00057040
#define _DAT_00057040 (*(double *)(0x57040U))
#define local_54 (*(double *)(frame + 16))
#define local_4c (*(double *)(frame + 24))
#define local_44 (*(double *)(frame + 32))
#define local_3c (*(double *)(frame + 40))
#define local_34 (*(double *)(frame + 48))
#define local_2c (*(double *)(frame + 56))
#define local_24 (*(double *)(frame + 64))
#define local_1c (*(double *)(frame + 72))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b7d0
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_2b7d0(int *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  unsigned char frame[132] = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  local_34 = *param_4;
  local_1c = (double)_DAT_00056810;
  local_2c = param_4[1];
  dVar1 = *param_3;
  dVar4 = dVar1 - (local_34 + *param_2) * local_1c;
  dVar2 = param_3[1];
  dVar3 = dVar2 - (local_2c + param_2[1]) * local_1c;
  if ((param_5 < 10) && (_DAT_00057040 < dVar4 * dVar4 + dVar3 * dVar3)) {
    local_54 = (*param_2 + dVar1) * local_1c;
    local_4c = (param_2[1] + dVar2) * local_1c;
    local_44 = (local_34 + dVar1) * local_1c;
    local_3c = (local_2c + dVar2) * local_1c;
    local_24 = (local_54 + local_44) * local_1c;
    local_1c = local_1c * (local_4c + local_3c);
    recovered_2b7d0(param_1,param_2,&local_54,&local_24,param_5 + 1);
    recovered_2b7d0(param_1,&local_24,&local_44,param_4,param_5 + 1);
    return;
  }
  recovered_2b252(param_1,param_4);
  return;
}
