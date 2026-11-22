/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044e204 (*(uint8_t *)(0x82473985U))
char * recovered_824409ec(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;

  pcVar2 = param_1;
  if (param_1 == (char *)0x0) {
    pcVar3 = &DAT_4044e204;
  }
  else {
    do {
      do {
        pcVar3 = param_1;
        pcVar4 = pcVar2 + 1;
        cVar1 = *pcVar2;
        param_1 = pcVar4;
        pcVar2 = pcVar4;
      } while (cVar1 == '/');
    } while ((cVar1 == '\\') || (param_1 = pcVar3, cVar1 != '\0'));
  }
  return pcVar3;
}
