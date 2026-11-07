/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_8240a138(int *param_1,int param_2,uint param_3,long param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;

  bVar1 = false;
  if ((param_1 != (int *)0x0) && (param_4 != 0)) {
    if ((*param_1 == param_2) &&
       ((*(ushort *)(param_1 + 1) == param_3 && (*(short *)((long)param_1 + 6) == 0x11d3)))) {
      iVar2 = recovered_82400bb4(param_1 + 2,(void *)param_4,8);
      bVar1 = iVar2 == 0;
    }
    else {
      bVar1 = false;
    }
  }
  return bVar1;
}
