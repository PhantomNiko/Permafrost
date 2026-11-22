/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020de638 (*(uint64_t volatile *)(0x226c288U))
#define DAT_020de640 (*(uint64_t volatile *)(0x226c290U))
void recovered_20b13e0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  long *plVar2;
  long lVar3;
  ulong uVar4;

  lVar3 = DAT_020de638;
  if (lVar3 != 0) {
    DAT_020de638 = lVar3 + -1;
    lVar1 = DAT_020de640;
    if (lVar1 != 0) {
      plVar2 = (long *)(lVar1 + (lVar3 + -1) * 0x10);
      if (plVar2[1] != 0) {
        lVar3 = 0;
        uVar4 = 0;
        do {
          recovered_205ec00((undefined8 *)(*plVar2 + lVar3));
          uVar4 = uVar4 + 1;
          lVar3 = lVar3 + 0x40;
        } while (uVar4 < (ulong)plVar2[1]);
      }
      recovered_2000bb0((void *)*plVar2);
      *plVar2 = 0;
      plVar2[1] = 0;
    }
  }
  return;
}
