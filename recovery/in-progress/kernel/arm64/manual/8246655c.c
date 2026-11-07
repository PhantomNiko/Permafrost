/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

undefined8 recovered_8246655c(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  if (param_1 == 0) {
    return 0;
  }
  if (*(short *)(param_1 + 0x1fe) == -0x55ab) {
    lVar2 = 0;
    do {
      if (lVar2 == 0x1b8) {
        lVar2 = 0;
        do {
          if (lVar2 == 0x42) {
            return 1;
          }
          pcVar1 = (char *)(param_1 + 0x1bc + lVar2);
          lVar2 = lVar2 + 1;
        } while (*pcVar1 == '\0');
        return 0;
      }
      pcVar1 = (char *)(param_1 + lVar2);
      lVar2 = lVar2 + 1;
    } while (*pcVar1 == '\0');
  }
  return 0;
}
