/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_110 (*(char (*)[256])(frame + 16))
undefined4 recovered_20831d0(char *incoming_ecx,undefined4 *incoming_edx)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  undefined4 uVar3;
  void *pf_output_slot;
  undefined4 extraout_EAX = 0;
  uint extraout_EDX = 0;
  uint extraout_EDX_00 = 0;
  uint incoming_edx_00;

  if (incoming_edx == (undefined4 *)0x0 || incoming_ecx == (char *)0x0) {
    return 0;
  }
  uVar2 = recovered_2002270(incoming_ecx);
  if ((1 < uVar2) &&
     (((cVar1 = *incoming_ecx, cVar1 == '\'' || (cVar1 == '\"')) &&
      (incoming_ecx[uVar2 - 1] == cVar1)))) {
    uVar3 = recovered_2086560((int)incoming_ecx,local_110,0x100);
    if ((char)uVar3 != '\0') {
      uVar2 = recovered_2002270(local_110);
      pf_output_slot = recovered_2001650(uVar2 + 1);
      if (pf_output_slot != (void *)0x0) {
        incoming_edx_00 = extraout_EDX;
        if (uVar2 != 0) {
          recovered_2001b70(pf_output_slot,local_110,uVar2);
          incoming_edx_00 = extraout_EDX_00;
        }
        *(undefined1 *)((int)pf_output_slot + uVar2) = 0;
        recovered_2043a90(incoming_edx,incoming_edx_00);
        *incoming_edx = 3;
        incoming_edx[3] = pf_output_slot;
        return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
      }
    }
  }
  return 0;
}
