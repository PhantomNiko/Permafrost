/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_0208e31e (*(uint8_t *)(0x20c50c6U))
#define str_0208e315 (*(char (*)[1])(0x20c50bdU))
char * recovered_2012ce0(char *incoming_ecx,char *incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  bool bVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  char cVar5;
  char *pcVar6;

  if (((incoming_edx != (char *)0x0 && incoming_ecx != (char *)0x0) &&
      (iVar2 = recovered_2001ff0(incoming_ecx,str_0208e315,8), iVar2 == 0)) &&
     ((char)(incoming_ecx[1] + *incoming_ecx + incoming_ecx[2] + incoming_ecx[3] + incoming_ecx[4] +
             incoming_ecx[5] + incoming_ecx[6] + incoming_ecx[7] + incoming_ecx[8] + incoming_ecx[9]
             + incoming_ecx[10] + incoming_ecx[0xb] + incoming_ecx[0xc] + incoming_ecx[0xd] +
             incoming_ecx[0xe] + incoming_ecx[0xf] + incoming_ecx[0x10] + incoming_ecx[0x11] +
             incoming_ecx[0x12] + incoming_ecx[0x13]) == '\0')) {
    if (((1 < (byte)incoming_ecx[0xf]) && (uVar3 = *(uint *)(incoming_ecx + 0x14), 0x23 < uVar3)) &&
       (pcVar4 = *(char **)(incoming_ecx + 0x18),
       iVar2 = *(int *)(incoming_ecx + 0x1c) + -1 + (uint)(pcVar4 != (char *)0x0),
       iVar2 == 0 && (uint)((char *)0xfffffffe < pcVar4 + -1) <= (uint)-iVar2)) {
      cVar5 = '\0';
      pcVar6 = incoming_ecx;
      do {
        cVar5 = cVar5 + *pcVar6;
        pcVar6 = pcVar6 + 1;
        uVar3 = uVar3 - 1;
      } while (uVar3 != 0);
      if (((cVar5 == '\0') && (bVar1 = recovered_2012e30(pcVar4,&DAT_0208e31e), bVar1)) &&
         (pcVar4 = recovered_2012e70(pcVar4,1,incoming_edx), pcVar4 != (char *)0x0)) {
        return pcVar4;
      }
    }
    pcVar4 = *(char **)(incoming_ecx + 0x10);
    if ((((pcVar4 != (char *)0x0) && (*pcVar4 == 'R')) && (pcVar4[1] == 'S')) && (pcVar4[2] == 'D'))
    {
      if (pcVar4[3] == 'T') {
        pcVar4 = recovered_2012e70(pcVar4,0,incoming_edx);
        return pcVar4;
      }
      return (char *)0x0;
    }
  }
  return (char *)0x0;
}
