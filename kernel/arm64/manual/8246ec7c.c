/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

char * recovered_8246ec7c(char *text)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  for (; ((byte *)text != (byte *)0x0 &&
         ((byte)*text < 0x21 && (1L << ((ulong)(byte)*text & 0x3f) & 0x100003e00U) != 0));
      text = text + 1) {
  }
  return text;
}
