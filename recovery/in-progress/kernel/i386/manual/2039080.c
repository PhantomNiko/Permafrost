/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020cccbe (*(char (*)[1])(0x20cccbeU))
#define str_020ccce3 (*(char (*)[1])(0x20ccce3U))
#define str_020ccd49 (*(char (*)[1])(0x20ccd49U))
#define local_20c (*(char (*)[504])(frame + 20))
#define local_14 (*(char * *)(frame + 524))


undefined4 recovered_2039080(char *in_ECX,uint in_EDX)

{
  unsigned char frame[576] __attribute__((aligned(16))) = {0};

  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  ulong uVar4;
  char cVar5;
  int iVar6;

  uVar2 = recovered_2030680(str_020cccbe,local_20c);
  uVar3 = 0;
  if (((char)uVar2 != '\0') && (uVar3 = 1, in_EDX != 0 && in_ECX != (char *)0x0)) {
    if (*in_ECX != '\0') {
      uVar4 = recovered_2002270(in_ECX);
      if (uVar4 + 1 < in_EDX) {
        (in_ECX + uVar4)[0] = '\n';
        (in_ECX + uVar4)[1] = '\0';
      }
    }
    uVar4 = recovered_2002270(in_ECX);
    if (uVar4 + 1 < in_EDX) {
      cVar5 = 'c';
      iVar6 = 0;
      do {
        in_ECX[iVar6 + uVar4] = cVar5;
        cVar5 = str_020ccce3[iVar6 + 1];
        iVar1 = iVar6 + 1;
        if (cVar5 == '\0') break;
        uVar2 = iVar6 + uVar4 + 2;
        iVar6 = iVar1;
      } while (uVar2 < in_EDX);
      in_ECX[iVar1 + uVar4] = '\0';
      local_14 = in_ECX;
    }
    if (*in_ECX != '\0') {
      uVar4 = recovered_2002270(in_ECX);
      if (uVar4 + 1 < in_EDX) {
        (in_ECX + uVar4)[0] = '\n';
        (in_ECX + uVar4)[1] = '\0';
      }
    }
    uVar4 = recovered_2002270(in_ECX);
    if (uVar4 + 1 < in_EDX) {
      cVar5 = 'c';
      iVar6 = 0;
      do {
        in_ECX[iVar6 + uVar4] = cVar5;
        cVar5 = str_020ccd49[iVar6 + 1];
        iVar1 = iVar6 + 1;
        if (cVar5 == '\0') break;
        uVar2 = iVar6 + uVar4 + 2;
        iVar6 = iVar1;
      } while (uVar2 < in_EDX);
      in_ECX[iVar1 + uVar4] = '\0';
    }
    uVar3 = 1;
  }
  return uVar3;
}
#undef str_020cccbe
#undef str_020ccce3
#undef str_020ccd49
#undef local_20c
#undef local_14
