/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_38 (*(char * *)(frame + 24))
bool recovered_8241b1e0(long *param_1,ulong *param_2,undefined8 *param_3)

{
  unsigned char frame[112] __attribute__((aligned(16))) = {0};

  char *text;
  long lVar1;
  bool bVar2;
  double dVar3;

  recovered_8241b334(param_1,param_2);
  if (*param_2 < (ulong)param_1[1]) {
    local_38 = (char *)0x0;
    text = (char *)(*param_1 + *param_2);
    dVar3 = recovered_824017f0(text,&local_38);
    *param_3 = dVar3;
    lVar1 = (long)local_38 - (long)text;
    bVar2 = lVar1 != 0;
    if (bVar2) {
      *param_2 = lVar1 + *param_2;
    }
  }
  else {
    bVar2 = false;
  }
  return bVar2;
}
