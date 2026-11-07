/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

void recovered_8246a4b8(undefined8 param_1,undefined8 param_2,char *param_3,ulong param_4,
                       uint param_5,long param_6)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  ulong uVar2;
  ulong uVar3;
  char cVar4;

  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    uVar1 = recovered_8240221c();
    if (0 < (int)uVar1) {
      uVar3 = 0;
      uVar2 = uVar1 & 0xffffffff;
      if (param_4 <= (uVar1 & 0xffffffff)) {
        uVar2 = param_4 - 1;
      }
      for (; uVar2 != uVar3; uVar3 = uVar3 + 1) {
        if ((byte)param_3[uVar3] == 0) {
          cVar4 = ',';
LAB_404484dc:
          param_3[uVar3] = cVar4;
        }
        else if ((byte)param_3[uVar3] - 0x7f < 0xffffffa1) {
          cVar4 = '.';
          goto LAB_404484dc;
        }
      }
      while ((uVar2 != 0 &&
             ((byte)param_3[uVar2 - 1] < 0x2f &&
              (1L << ((ulong)(byte)param_3[uVar2 - 1] & 0x3f) & 0x500100000000U) != 0))) {
        uVar2 = uVar2 - 1;
      }
      param_3[uVar2] = '\0';
      if (*param_3 != '\0') {
        *(uint *)(param_6 + 0x10) = *(uint *)(param_6 + 0x10) | param_5;
      }
    }
  }
  return;
}
