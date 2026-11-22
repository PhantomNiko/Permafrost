/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208eba8 (*(uint8_t *)(0x20c5359U))
bool recovered_20b45e0(char *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  int iVar1;
  uint uVar2;
  char *pcVar3;

  if (incoming_edx == (char *)0x0) {
    return false;
  }
  size = recovered_2002270(incoming_edx);
  if ((incoming_ecx != (char *)0x0) &&
     (iVar1 = recovered_20022a0(incoming_ecx,incoming_edx), iVar1 != 0)) {
    iVar1 = recovered_20022a0(incoming_edx,&DAT_0208eba8);
    if (iVar1 == 0) {
      uVar2 = (uint)(*incoming_ecx == '/');
      if (incoming_ecx[uVar2] != '\0') goto LAB_0208258f;
    }
    else {
      iVar1 = recovered_2019320(incoming_ecx,incoming_edx,size);
      if (((iVar1 == 0) && (incoming_ecx[size] == '/')) && (incoming_ecx[size + 1] != '\0')) {
        uVar2 = size + 1;
LAB_0208258f:
        pcVar3 = recovered_20024f0(incoming_ecx + uVar2,'/');
        return pcVar3 == (char *)0x0;
      }
    }
  }
  return false;
}
