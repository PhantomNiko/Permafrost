/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uint recovered_209cd00(char *param_1,char *param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  char cVar3;

  if (param_2 == (char *)0x0 || param_1 == (char *)0x0) {
    return 0;
  }
  cVar2 = *param_1;
  while( true ) {
    if (cVar2 == '\0') {
      return (uint)(*param_2 == '\0');
    }
    param_1 = param_1 + 1;
    cVar1 = *param_2;
    if (cVar1 == '\0') break;
    if (cVar2 != cVar1) {
      cVar3 = cVar2 + -0x20;
      if (0x19 < (byte)(cVar2 + 0x9fU)) {
        cVar3 = cVar2;
      }
      cVar2 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar2 = cVar1;
      }
      if (cVar3 != cVar2) {
        return 0;
      }
    }
    param_2 = param_2 + 1;
    cVar2 = *param_1;
  }
  return 0;
}
