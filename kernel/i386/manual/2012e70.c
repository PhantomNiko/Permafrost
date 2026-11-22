/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define local_18 (*(uint *)(frame + 40))
#define local_1c (*(char * *)(frame + 36))
#define local_20 (*(undefined4 *)(frame + 32))
#define local_24 (*(char * *)(frame + 28))
char * recovered_2012e70(char *incoming_ecx,undefined4 incoming_edx,char *param_3)

{
  unsigned char frame[96] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;

  if ((incoming_ecx != (char *)0x0) && (uVar5 = *(uint *)(incoming_ecx + 4), 0x23 < uVar5)) {
    cVar2 = '\0';
    pcVar1 = incoming_ecx;
    uVar3 = uVar5;
    do {
      cVar2 = cVar2 + *pcVar1;
      pcVar1 = pcVar1 + 1;
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
    if ((cVar2 == '\0') && (uVar5 = uVar5 - 0x24 >> ((byte)incoming_edx & 0x1f | 2), uVar5 != 0)) {
      uVar3 = 0;
      local_20 = incoming_edx;
      do {
        local_18 = 0;
        local_1c = (char *)0x0;
        if ((char)local_20 == '\0') {
          local_24 = (char *)0x0;
          recovered_2001b70(&local_24,incoming_ecx + uVar3 * 4 + 0x24,4);
          local_18 = 0;
          local_1c = local_24;
        }
        else {
          recovered_2001b70(&local_1c,incoming_ecx + uVar3 * 8 + 0x24,8);
        }
        if ((((local_18 == 0 && (local_1c == (char *)0x0) <= local_18) && (param_3 != (char *)0x0))
            && (0x23 < *(uint *)(local_1c + 4))) &&
           (((*local_1c == *param_3 && (local_1c[1] == param_3[1])) &&
            ((local_1c[2] == param_3[2] && (local_1c[3] == param_3[3])))))) {
          uVar4 = 0;
          cVar2 = '\0';
          do {
            cVar2 = cVar2 + local_1c[uVar4];
            uVar4 = uVar4 + 1;
          } while (*(uint *)(local_1c + 4) != uVar4);
          if (cVar2 == '\0') {
            return local_1c;
          }
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar5);
    }
  }
  return (char *)0x0;
}
