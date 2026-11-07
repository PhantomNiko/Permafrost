/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e2dc (*(uint8_t *)(0x20c5084U))
#define DAT_02091a45 (*(uint8_t *)(0x20cf018U))
#define DAT_020c7930 (*(uint8_t volatile *)(0x223dd34U))
#define local_1f4 (*(char (*)[484])(frame + 28))
#define str_0208ed92 (*(char (*)[1])(0x20c526fU))
void recovered_20a0570(char *incoming_ecx,undefined1 *incoming_edx)

{
  unsigned char frame[560] __attribute__((aligned(16))) = {0};

  char cVar1;
  char cVar2;
  int iVar3;
  char *incoming_ecx_00;
  char *left;

  left = &DAT_0208e2dc;
  if (incoming_ecx != (char *)0x0) {
    left = incoming_ecx;
  }
  if (incoming_edx == (undefined1 *)0x0) {
    return;
  }
  *incoming_edx = 0;
  iVar3 = recovered_20022a0(left,&DAT_02091a45);
  if (iVar3 == 0) {
    incoming_ecx_00 = &DAT_0208e2dc;
    goto LAB_020751ed;
  }
  cVar1 = *left;
  if (cVar1 == '/') {
LAB_020751e2:
    incoming_ecx_00 = &DAT_020c7930;
    if (cVar1 == '\0') goto LAB_020751ed;
  }
  else {
    if ((cVar1 != '~') || ((left[1] != '\\' && (left[1] != '/')))) {
      cVar2 = DAT_020c7930;
      if ((cVar2 != '\0') && ((cVar1 != '\\' && (cVar1 != '\0')))) {
        pf_varargs_2003aa0__4__4_(local_1f4,0x1e4,str_0208ed92,0x223dd34U,(uint)left);
        recovered_202a060((int)local_1f4,incoming_edx);
        return;
      }
      goto LAB_020751e2;
    }
    left = left + 2;
  }
  incoming_ecx_00 = left;
LAB_020751ed:
  recovered_202a060((int)incoming_ecx_00,incoming_edx);
  return;
}
