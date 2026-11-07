/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_418 (*(char (*)[1024])(frame + 24))
undefined8 recovered_2092ab0(char *param_1)

{
  unsigned char frame[1104] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  char *pcVar4;
  char *pcVar3;

  pcVar4 = &DAT_020a259c;
  if (param_1 != (char *)0x0) {
    pcVar4 = param_1;
  }
  uVar2 = 0;
  while( true ) {
    do {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar3;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_20c6270(local_418,uVar2,1,'\x01');
      uVar2 = 0;
    }
    else if (uVar2 + 1 < 0x400) {
      local_418[uVar2] = cVar1;
      uVar2 = uVar2 + 1;
    }
  }
  recovered_20c6270(local_418,uVar2,1,'\x01');
  return 1;
}
