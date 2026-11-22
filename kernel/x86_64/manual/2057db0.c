/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a259c (*(uint8_t *)(0x20ec670U))
#define local_418 (*(char (*)[1024])(frame + 24))
void recovered_2057db0(char *param_1)

{
  unsigned char frame[1104] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  ulong uVar3;

  if (param_1 == (char *)0x0) {
    recovered_20c6270(&DAT_020a259c,0,1,'\x01');
    return;
  }
  uVar3 = 0;
  while( true ) {
    do {
      pcVar2 = param_1 + 1;
      cVar1 = *param_1;
      param_1 = pcVar2;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_20c6270(local_418,uVar3,1,'\x01');
      uVar3 = 0;
    }
    else if (uVar3 + 1 < 0x400) {
      local_418[uVar3] = cVar1;
      uVar3 = uVar3 + 1;
    }
  }
  recovered_20c6270(local_418,uVar3,1,'\x01');
  return;
}
