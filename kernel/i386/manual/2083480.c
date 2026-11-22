/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_c (*(undefined4 *)(frame + 20))
undefined4 recovered_2083480(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  byte bVar2;
  int iVar3;
  char *pcVar4;
  char cVar5;

  iVar3 = 0;
  if ((incoming_ecx != (char *)0x0) && (cVar5 = *incoming_ecx, cVar5 != '\0')) {
    if ((cVar5 == '-') || (cVar5 == '+')) {
      cVar5 = incoming_ecx[1];
      iVar3 = 1;
    }
    if (cVar5 != '\0') {
      pcVar4 = incoming_ecx + iVar3 + 1;
      bVar2 = 0;
      local_c = 0;
      do {
        if ((byte)(cVar5 - 0x30U) < 10) {
          local_c = 1;
        }
        else {
          bVar1 = (bool)(cVar5 != '.' | bVar2);
          bVar2 = 1;
          if (bVar1) {
            return 0;
          }
        }
        cVar5 = *pcVar4;
        pcVar4 = pcVar4 + 1;
      } while (cVar5 != '\0');
      return local_c;
    }
  }
  return 0;
}
