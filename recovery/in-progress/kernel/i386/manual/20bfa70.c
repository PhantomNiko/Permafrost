/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_10 (*(undefined1 * *)(frame + 1552))
#define local_210 (*(char (*)[512])(frame + 1040))
#define local_610 (*(char (*)[1024])(frame + 16))
#define uStack00000008 (*(undefined1 *)(frame + 1576))
ulonglong recovered_20bfa70(char *format,...)

{
  unsigned char frame[1600] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint incoming_edx;
  undefined4 extraout_EDX = 0;
  char *pcVar3;
  char *pcVar2;

  local_10 = &uStack00000008;
  recovered_2003af0(local_210,0x200,format,local_10);
  incoming_edx = 0;
  pcVar3 = local_210;
  while( true ) {
    do {
      pcVar2 = pcVar3 + 1;
      cVar1 = *pcVar3;
      pcVar3 = pcVar2;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_20a11d0(local_610,incoming_edx,1,'\x01');
      incoming_edx = 0;
    }
    else if (incoming_edx + 1 < 0x400) {
      local_610[incoming_edx] = cVar1;
      incoming_edx = incoming_edx + 1;
    }
  }
  recovered_20a11d0(local_610,incoming_edx,1,'\x01');
  if (local_210[0] != '\0') {
    pcVar3 = local_210;
    do {
      pcVar3 = pcVar3 + 1;
      out(0xe9,local_210[0]);
      local_210[0] = *pcVar3;
    } while (local_210[0] != '\0');
  }
  out(0xe9,10);
  return CONCAT44(extraout_EDX,10);
}
