/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047ff28 (*(uint8_t volatile *)(0x82561a08U))
char * recovered_8242ca00(int param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  if (param_1 != 0) {
    pcVar1 = &DAT_4047ff28;
    lVar2 = 0x10;
    do {
      if ((*pcVar1 == '\x01') && (*(int *)(pcVar1 + 4) == param_1)) {
        return pcVar1;
      }
      lVar2 = lVar2 + -1;
      pcVar1 = pcVar1 + 0x268;
    } while (lVar2 != 0);
  }
  return (char *)0x0;
}
