/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))


void recovered_202dd30(char *in_ECX,uint in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uint uVar2;
  char *pcVar3;
  char cVar4;
  ulong uVar5;

  if (in_EDX != 0 && in_ECX != (char *)0x0) {
    if ((*in_ECX != '\0') && (uVar1 = recovered_2002270(in_ECX), uVar1 + 1 < in_EDX)) {
      (in_ECX + uVar1)[0] = '\n';
      (in_ECX + uVar1)[1] = '\0';
    }
    uVar1 = recovered_2002270(in_ECX);
    if (uVar1 + 1 < in_EDX) {
      pcVar3 = &DAT_020c5084;
      if (param_3 != (char *)0x0) {
        pcVar3 = param_3;
      }
      cVar4 = *pcVar3;
      if (cVar4 == '\0') {
        uVar5 = uVar1;
      }
      else {
        do {
          pcVar3 = pcVar3 + 1;
          in_ECX[uVar1] = cVar4;
          cVar4 = *pcVar3;
          uVar5 = uVar1 + 1;
          if (cVar4 == '\0') break;
          uVar2 = uVar1 + 2;
          uVar1 = uVar5;
        } while (uVar2 < in_EDX);
      }
      in_ECX[uVar5] = '\0';
    }
  }
  return;
}
#undef DAT_020c5084
