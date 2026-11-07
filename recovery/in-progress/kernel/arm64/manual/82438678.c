/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494a38 (*(uint8_t volatile *)(0x8266f108U))
char * recovered_82438678(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  long lVar2;

  if ((param_1 & 0xf8) == 0x70) {
    pcVar1 = &DAT_40494a38;
    lVar2 = 8;
    do {
      if ((*pcVar1 == '\x01') && ((byte)pcVar1[1] == param_1)) {
        return pcVar1;
      }
      lVar2 = lVar2 + -1;
      pcVar1 = pcVar1 + 0x10;
    } while (lVar2 != 0);
  }
  return (char *)0x0;
}
