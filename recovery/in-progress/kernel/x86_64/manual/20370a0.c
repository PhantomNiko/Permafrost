/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a1460 (*(double *)(0x20eae40U))
#define DAT_020a1ff0 (*(double *)(0x20eb638U))
#define _DAT_020a1fc0 (*(double *)(0x20eb600U))
#define dRam00000000020a1fc8 (*(uint64_t *)(0x20eb608U))
#define dStack_30 (*(double *)(frame + 64))
#define dStack_40 (*(double *)(frame + 48))
#define dStack_50 (*(double *)(frame + 32))
#define local_38 (*(double *)(frame + 56))
#define local_48 (*(double *)(frame + 40))
#define local_58 (*(double *)(frame + 24))
void recovered_20370a0(long *param_1,double *param_2,double *param_3,double *param_4,int param_5)

{
  unsigned char frame[144] __attribute__((aligned(16))) = {0};

  double dVar1;
  double dVar2;
  double dVar3;
  double dVar4;

  if (param_5 < 10) {
    dVar1 = *param_3;
    dVar2 = param_3[1];
    dVar4 = dVar1 - (*param_2 + *param_4) * DAT_020a1460;
    dVar3 = dVar2 - (param_2[1] + param_4[1]) * DAT_020a1460;
    if (DAT_020a1ff0 < dVar4 * dVar4 + dVar3 * dVar3) {
      local_58 = (*param_2 + dVar1) * _DAT_020a1fc0;
      dStack_50 = (param_2[1] + dVar2) * dRam00000000020a1fc8;
      local_48 = (*param_4 + dVar1) * _DAT_020a1fc0;
      dStack_40 = (param_4[1] + dVar2) * dRam00000000020a1fc8;
      local_38 = (local_48 + local_58) * _DAT_020a1fc0;
      dStack_30 = (dStack_40 + dStack_50) * dRam00000000020a1fc8;
      recovered_20370a0(param_1,param_2,&local_58,&local_38,param_5 + 1);
      recovered_20370a0(param_1,&local_38,&local_48,param_4,param_5 + 1);
      return;
    }
  }
  recovered_2036d60(param_1,param_4);
  return;
}
