/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define str_0208ebaa (*(char (*)[1])(0x20c5b64U))
void recovered_202ab40(char *incoming_ecx,int incoming_edx,char *param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  byte bVar1;
  uint uVar2;
  int iVar3;

  if (param_3 != (char *)0x0) {
    *param_3 = '\0';
    if (incoming_ecx == (char *)0x0) {
      if (incoming_edx == 0) {
        return;
      }
    }
    else if ((incoming_edx == 0) || (*incoming_ecx != '\0')) {
      uVar2 = 0;
      iVar3 = -0xc;
      do {
        bVar1 = incoming_ecx[iVar3 + 0xc];
        if ((bVar1 == 0) || (0x3f < uVar2 + 1)) break;
        if (bVar1 == 0x7f || bVar1 < 0x20) {
          if (0x3f < uVar2 + 4) break;
          pf_varargs_2003aa0__4_(param_3 + uVar2,0x40 - uVar2,str_0208ebaa,(uint)bVar1);
          uVar2 = uVar2 + 4;
        }
        else {
          param_3[uVar2] = bVar1;
          uVar2 = uVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 != 0);
      param_3[uVar2] = '\0';
      if (incoming_edx == 0) {
        return;
      }
      if (*param_3 != '\0') {
        return;
      }
    }
    pf_varargs_2003aa0__4_(param_3,0x40,&DAT_0208e323,incoming_edx);
  }
  return;
}
