/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_14 (*(undefined4 * *)(frame + 28))
#define local_1c (*(uint (*)[2])(frame + 20))
bool recovered_207a3b0(uint incoming_ecx,char *incoming_edx)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  char *pcVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  bool bVar6;

  uVar1 = recovered_207a500((char *)incoming_ecx,local_1c);
  bVar6 = false;
  if (((char)uVar1 != '\0') && (local_1c[0] != 0)) {
    pcVar2 = (char *)*local_14;
    uVar5 = 0;
    bVar6 = false;
    if (incoming_edx != (char *)0x0 && pcVar2 != (char *)0x0) {
      cVar3 = *pcVar2;
      while (cVar3 != '\0') {
        pcVar2 = pcVar2 + 1;
        cVar4 = *incoming_edx;
        if (cVar4 == '\0') {
          bVar6 = false;
          goto LAB_020500d0;
        }
        if (cVar3 != cVar4) {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if ((byte)(cVar4 + 0x9fU) < 0x1a) {
            cVar4 = cVar4 + -0x20;
          }
          if (cVar3 != cVar4) {
            bVar6 = false;
            goto LAB_020500d0;
          }
        }
        incoming_edx = incoming_edx + 1;
        cVar3 = *pcVar2;
      }
      bVar6 = *incoming_edx == '\0';
    }
LAB_020500d0:
    do {
      recovered_2001710((void *)local_14[uVar5]);
      uVar5 = uVar5 + 1;
    } while (uVar5 < local_1c[0]);
    recovered_2001710(local_14);
  }
  return bVar6;
}
