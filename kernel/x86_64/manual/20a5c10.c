/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_128 (*(char (*)[264])(frame + 24))
uchar recovered_20a5c10(char *param_1,undefined4 *param_2)

{
  unsigned char frame[352] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  ulong uVar3;
  void *out;

  if (param_2 == (undefined4 *)0x0 || param_1 == (char *)0x0) {
    return '\0';
  }
  uVar3 = recovered_2002e80(param_1);
  if (((1 < uVar3) &&
      (((cVar1 = *param_1, cVar1 == '\'' || (cVar1 == '\"')) && (param_1[uVar3 - 1] == cVar1)))) &&
     (uVar2 = recovered_20a9540((long)param_1,(long)local_128,(byte *)0x100), uVar2 != '\0')) {
    uVar3 = recovered_2002e80(local_128);
    out = recovered_2000ad0(uVar3 + 1);
    if (out != (void *)0x0) {
      if (uVar3 != 0) {
        recovered_2001410(out,local_128,uVar3);
      }
      *(undefined1 *)((long)out + uVar3) = 0;
      recovered_205ec00((undefined8 *)param_2);
      *param_2 = 3;
      *(void **)(param_2 + 4) = out;
      return '\x01';
    }
  }
  return '\0';
}
