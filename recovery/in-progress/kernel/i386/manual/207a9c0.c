/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"

bool recovered_207a9c0(char *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;

  if (incoming_edx == (char *)0x0 || incoming_ecx == (char *)0x0) {
    return false;
  }
  cVar1 = *incoming_ecx;
  while( true ) {
    if (cVar1 == '\0') {
      return *incoming_edx == '\0';
    }
    incoming_ecx = incoming_ecx + 1;
    cVar2 = *incoming_edx;
    if (cVar2 == '\0') break;
    if (cVar1 != cVar2) {
      if ((byte)(cVar1 + 0x9fU) < 0x1a) {
        cVar1 = cVar1 + -0x20;
      }
      if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        cVar2 = cVar2 + -0x20;
      }
      if (cVar1 != cVar2) {
        return false;
      }
    }
    incoming_edx = incoming_edx + 1;
    cVar1 = *incoming_ecx;
  }
  return false;
}
