/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
uint recovered_20a0540(long param_1,undefined8 *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  char *left;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;

  if (param_2 == (undefined8 *)0x0 || param_1 == 0) {
    return 0;
  }
  lVar7 = DAT_020e60e0;
  do {
    do {
      do {
        if (lVar7 == 0) {
          uVar3 = recovered_20e1a80(param_1,(long)param_2);
          return uVar3;
        }
        lVar5 = DAT_020e60f0;
        lVar7 = lVar7 + -1;
      } while (lVar5 == 0);
      plVar1 = (long *)(lVar5 + lVar7 * 0x18);
      uVar4 = plVar1[1];
    } while (uVar4 == 0);
    lVar5 = 0;
    uVar6 = 0;
    do {
      if ((*(char *)(*plVar1 + 0x48 + lVar5) == '\x01') &&
         (left = *(char **)(*plVar1 + lVar5), left != (char *)0x0)) {
        iVar2 = recovered_2002eb0(left,(char *)param_1);
        if (iVar2 == 0) {
          if (-1 < (int)(uint)uVar6) {
            lVar5 = DAT_020e60f0;
            uVar3 = recovered_20a0670((undefined8 *)
                                      (*(long *)(lVar5 + lVar7 * 0x18) +
                                       (ulong)((uint)uVar6 & 0x7fffffff) * 0x50 + 8),param_2);
            return uVar3;
          }
          break;
        }
        uVar4 = plVar1[1];
      }
      uVar6 = uVar6 + 1;
      lVar5 = lVar5 + 0x50;
    } while (uVar6 < uVar4);
  } while( true );
}
