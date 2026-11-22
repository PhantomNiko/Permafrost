/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a35bc (*(uint8_t *)(0x20eda40U))
uchar recovered_207a800(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  ulong uVar3;
  ulong uVar4;
  char cVar5;
  char cVar6;
  bool bVar7;

  if (param_1 == 0) {
    recovered_2002e80(&DAT_020a35bc);
  }
  else {
    uVar2 = recovered_2002e80((char *)param_1);
    uVar3 = recovered_2002e80(&DAT_020a35bc);
    if (uVar3 - 1 < uVar2) {
      uVar4 = 0;
      while( true ) {
        cVar1 = *(char *)(param_1 + (uVar2 - uVar3) + uVar4);
        cVar5 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar5 = cVar1;
        }
        cVar1 = (&DAT_020a35bc)[uVar4];
        cVar6 = cVar1 + ' ';
        if (0x19 < (byte)(cVar1 + 0xbfU)) {
          cVar6 = cVar1;
        }
        if (cVar5 != cVar6) break;
        bVar7 = uVar3 - 1 == uVar4;
        uVar4 = uVar4 + 1;
        if (bVar7) {
          return '\x01';
        }
      }
      return '\0';
    }
  }
  return '\0';
}
