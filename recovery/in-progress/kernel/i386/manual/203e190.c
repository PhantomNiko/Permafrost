/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_40c (*(char (*)[1024])(frame + 20))
void recovered_203e190(char *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint incoming_edx_00;
  char *pcVar2;

  if (incoming_ecx == (char *)0x0) {
    pcVar2 = &DAT_0208e2dc;
    incoming_edx_00 = 0;
  }
  else {
    incoming_edx_00 = 0;
    while( true ) {
      do {
        pcVar2 = incoming_ecx + 1;
        cVar1 = *incoming_ecx;
        incoming_ecx = pcVar2;
      } while (cVar1 == '\r');
      if (cVar1 == '\0') break;
      if (cVar1 == '\n') {
        recovered_20a11d0(local_40c,incoming_edx_00,1,'\x01');
        incoming_edx_00 = 0;
      }
      else if (incoming_edx_00 + 1 < 0x400) {
        local_40c[incoming_edx_00] = cVar1;
        incoming_edx_00 = incoming_edx_00 + 1;
      }
    }
    pcVar2 = local_40c;
  }
  recovered_20a11d0(pcVar2,incoming_edx_00,1,'\x01');
  return;
}
