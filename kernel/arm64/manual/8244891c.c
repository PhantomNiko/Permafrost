/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
undefined8 recovered_8244891c(undefined1 *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;

  pcVar1 = &DAT_4044e204;
  if (param_1 != (undefined1 *)0x0) {
    pcVar1 = param_1;
  }
  recovered_8242d468(pcVar1);
  return 1;
}
