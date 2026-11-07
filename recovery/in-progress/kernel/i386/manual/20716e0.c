/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define local_40c (*(char (*)[1024])(frame + 20))
undefined4 recovered_20716e0(char *param_1)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint incoming_edx;
  char *pcVar3;
  char *pcVar2;

  pcVar3 = &DAT_0208e2dc;
  if (param_1 != (char *)0x0) {
    pcVar3 = param_1;
  }
  incoming_edx = 0;
  while( true ) {
    do {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_20a11d0(local_40c,incoming_edx,1,'\x01');
      incoming_edx = 0;
    }
    else if (incoming_edx + 1 < 0x400) {
      local_40c[incoming_edx] = cVar1;
      incoming_edx = incoming_edx + 1;
    }
  }
  recovered_20a11d0(local_40c,incoming_edx,1,'\x01');
  return 1;
}
