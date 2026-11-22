/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020e60e0 (*(uint64_t volatile *)(0x2274170U))
#define DAT_020e60f0 (*(uint64_t volatile *)(0x2274180U))
void recovered_20b1250(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long *plVar1;
  long lVar2;
  long lVar3;
  ulong uVar4;

  lVar3 = DAT_020e60e0;
  if (lVar3 != 0) {
    DAT_020e60e0 = lVar3 + -1;
    lVar2 = DAT_020e60f0;
    if (lVar2 != 0) {
      plVar1 = (long *)(lVar2 + (lVar3 + -1) * 0x18);
      if (plVar1[1] != 0) {
        lVar3 = 8;
        uVar4 = 0;
        do {
          recovered_2000bb0(*(void **)(*plVar1 + -8 + lVar3));
          recovered_205ec00((undefined8 *)(*plVar1 + lVar3));
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x50;
        } while (uVar4 < (ulong)plVar1[1]);
      }
      recovered_2000bb0((void *)*plVar1);
      *plVar1 = 0;
      plVar1[1] = 0;
      plVar1[2] = 0;
    }
  }
  return;
}
