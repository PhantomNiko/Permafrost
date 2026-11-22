/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))


void recovered_20633c0(char *in_ECX,char *in_EDX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  char *pcVar2;
  uint uVar3;

  if ((in_EDX != (char *)0x0 && in_ECX != (char *)0x0) && (*in_EDX != '\0')) {
    uVar1 = recovered_2002270(in_EDX);
    if (uVar1 != 0) {
      pcVar2 = in_ECX;
      while (pcVar2 = recovered_20025d0(pcVar2,in_EDX), pcVar2 != (char *)0x0) {
        if (((pcVar2 == in_ECX) || (pcVar2[-1] == ',')) || (pcVar2[-1] == '\0')) {
          if (pcVar2[uVar1] == '\0') {
            return;
          }
          if (pcVar2[uVar1] == ',') {
            return;
          }
        }
        pcVar2 = pcVar2 + uVar1;
      }
    }
    uVar1 = recovered_2002270(in_ECX);
    uVar3 = uVar1 + 1;
    if (uVar3 < 0x200) {
      if (uVar1 == 0) {
        uVar3 = 0;
      }
      else {
        (in_ECX + uVar1)[0] = ',';
        (in_ECX + uVar1)[1] = '\0';
      }
      pf_varargs_20044f0__4_(in_ECX + uVar3,0x200 - uVar3,&DAT_020c5119,(uint)in_EDX);
    }
  }
  return;
}
#undef DAT_020c5119
