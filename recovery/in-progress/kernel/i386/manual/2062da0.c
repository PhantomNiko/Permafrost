/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



undefined1 recovered_2062da0(void *in_ECX,uint in_EDX,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  int iVar1;
  ulong uVar2;

  if ((((param_3 != (char *)0x0) && (size = recovered_2002270(param_3), in_ECX != (void *)0x0)) &&
      (size - 1 < in_EDX)) && (size <= in_EDX)) {
    uVar2 = size;
    do {
      iVar1 = recovered_2001ff0(in_ECX,param_3,size);
      if (iVar1 == 0) {
        return 1;
      }
      in_ECX = (void *)((int)in_ECX + 1);
      uVar2 = uVar2 + 1;
    } while (uVar2 <= in_EDX);
  }
  return 0;
}
