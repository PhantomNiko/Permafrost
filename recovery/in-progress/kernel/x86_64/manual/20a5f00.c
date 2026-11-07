/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

uchar recovered_20a5f00(char *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  bool bVar2;
  byte bVar3;
  long lVar4;
  char *pcVar5;

  if (param_1 == (char *)0x0) {
    return '\0';
  }
  cVar1 = *param_1;
  lVar4 = 0;
  if (cVar1 != '\0') {
    if ((cVar1 == '-') || (cVar1 == '+')) {
      cVar1 = param_1[1];
      lVar4 = 1;
    }
    if (cVar1 == '\0') {
      return '\0';
    }
    pcVar5 = param_1 + lVar4;
    bVar3 = 0;
    lVar4 = 0;
    do {
      pcVar5 = pcVar5 + 1;
      if ((byte)(cVar1 - 0x30U) < 10) {
        lVar4 = 1;
      }
      else {
        bVar2 = (bool)(cVar1 != '.' | bVar3);
        bVar3 = 1;
        if (bVar2) {
          lVar4 = 0;
          break;
        }
      }
      cVar1 = *pcVar5;
    } while (cVar1 != '\0');
  }
  return (uchar)lVar4;
}
