/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208e315 (*(char (*)[1])(0x20c50bdU))
char * recovered_2012fc0(char *incoming_ecx,int incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  int iVar2;
  char *pcVar3;

  pcVar3 = incoming_ecx + incoming_edx;
  if (incoming_ecx + 0x14 <= pcVar3) {
    do {
      iVar2 = recovered_2001ff0(incoming_ecx,str_0208e315,8);
      if (((incoming_ecx != (char *)0x0) && (iVar2 == 0)) &&
         ((char)(incoming_ecx[1] + *incoming_ecx + incoming_ecx[2] + incoming_ecx[3] +
                 incoming_ecx[4] + incoming_ecx[5] + incoming_ecx[6] + incoming_ecx[7] +
                 incoming_ecx[8] + incoming_ecx[9] + incoming_ecx[10] + incoming_ecx[0xb] +
                 incoming_ecx[0xc] + incoming_ecx[0xd] + incoming_ecx[0xe] + incoming_ecx[0xf] +
                 incoming_ecx[0x10] + incoming_ecx[0x11] + incoming_ecx[0x12] + incoming_ecx[0x13])
          == '\0')) {
        return incoming_ecx;
      }
      pcVar1 = incoming_ecx + 0x24;
      incoming_ecx = incoming_ecx + 0x10;
    } while (pcVar1 <= pcVar3);
  }
  return (char *)0x0;
}
