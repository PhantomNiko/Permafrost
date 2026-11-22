/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e323 (*(uint8_t *)(0x20c5119U))
#define local_10 (*(undefined1 * *)(frame + 32))
#define local_14 (*(undefined4 *)(frame + 28))
#define local_18 (*(undefined4 *)(frame + 24))
undefined4 recovered_20c14b0(int incoming_ecx,char *incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  undefined1 *buffer;
  undefined4 extraout_EAX = 0;

  if (incoming_edx != (char *)0x0 && incoming_ecx != 0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = (undefined1 *)0x0;
    uVar1 = recovered_2086030((int *)incoming_ecx,(int)&local_18,0);
    if ((char)uVar1 != '\0') {
      buffer = local_10;
      if (local_10 == (undefined1 *)0x0) {
        buffer = recovered_2001650(1);
        if (buffer == (undefined1 *)0x0) goto LAB_0208aa6c;
        *buffer = 0;
      }
      pf_varargs_2003aa0__4_(incoming_edx,0xf1,&DAT_0208e323,(uint)buffer);
      recovered_2001710(buffer);
      return CONCAT31((int3)((uint)extraout_EAX >> 8),1);
    }
    recovered_2001710(local_10);
  }
LAB_0208aa6c:
  recovered_2001710((void *)0x0);
  return 0;
}
