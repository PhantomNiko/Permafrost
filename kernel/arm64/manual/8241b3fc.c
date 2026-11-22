/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define lStack_40 (*(long *)(frame + 32))
#define local_38 (*(long *)(frame + 40))
#define local_48 (*(long *)(frame + 24))
#define local_50 (*(void * *)(frame + 16))
double recovered_8241b3fc(long *param_1,long param_2,ulong param_3)

{
  unsigned char frame[128] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  undefined8 uVar2;
  void *data;
  ulong uVar3;
  double extraout_d0 = 0;
  double extraout_d0_00 = 0;
  double extraout_d0_01 = 0;
  double dVar4;
  long lVar5;
  long lVar6;

  uVar1 = 0;
  if (param_2 != 0) {
    uVar1 = param_3;
  }
  local_38 = 0;
  uVar2 = recovered_8241b4e4(param_1,param_2,&local_38);
  if ((int)uVar2 == 0) {
    param_1[1] = 0;
    if ((undefined1 *)*param_1 != (undefined1 *)0x0) {
      *(undefined1 *)*param_1 = 0;
    }
    if (uVar1 == 0) {
      recovered_8241b1a8(param_1);
      dVar4 = extraout_d0_01;
    }
    else {
      recovered_8241b0b0(param_1,uVar1);
      for (uVar3 = 0; uVar1 != uVar3; uVar3 = uVar3 + 1) {
        *(undefined1 *)(*param_1 + uVar3) = *(undefined1 *)(param_2 + uVar3);
      }
      param_1[1] = uVar1;
      *(undefined1 *)(*param_1 + uVar1) = 0;
      dVar4 = extraout_d0_00;
    }
  }
  else {
    if ((ulong)(param_1[1] - local_38) <= uVar1) {
      uVar1 = param_1[1] - local_38;
    }
    recovered_8241b3c8((long *)&local_50,*param_1 + local_38,uVar1);
    data = (void *)*param_1;
    *param_1 = (long)local_50;
    lVar6 = param_1[2];
    lVar5 = param_1[1];
    param_1[2] = lStack_40;
    param_1[1] = local_48;
    local_50 = data;
    local_48 = lVar5;
    lStack_40 = lVar6;
    recovered_8240facc(data);
    dVar4 = extraout_d0;
  }
  return dVar4;
}
