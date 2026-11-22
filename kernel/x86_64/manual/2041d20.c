/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define str_020a2e6a (*(char (*)[1])(0x20ecfa2U))
void recovered_2041d20(char *param_1,long param_2,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  ulong uVar2;
  long lVar3;

  if (param_3 == (char *)0x0) {
    return;
  }
  *param_3 = '\0';
  if (param_1 == (char *)0x0) {
    if (param_2 == 0) {
      return;
    }
  }
  else if ((param_2 == 0) || (*param_1 != '\0')) {
    uVar2 = 0;
    lVar3 = 0;
    do {
      bVar1 = param_1[lVar3];
      if ((bVar1 == 0) || (0x3f < uVar2 + 1)) break;
      if (bVar1 == 0x7f || bVar1 < 0x20) {
        if (0x3f < uVar2 + 4) break;
        pf_varargs_20039e0__4_(param_3 + uVar2,0x40 - uVar2,str_020a2e6a,(uint)bVar1);
        uVar2 = uVar2 + 4;
      }
      else {
        param_3[uVar2] = bVar1;
        uVar2 = uVar2 + 1;
      }
      lVar3 = lVar3 + 1;
    } while (lVar3 != 0xc);
    param_3[uVar2] = '\0';
    if (param_2 == 0) {
      return;
    }
    if (*param_3 != '\0') {
      return;
    }
  }
  pf_varargs_20039e0__8_(param_3,0x40,&DAT_020a25e3,param_2);
  return;
}
