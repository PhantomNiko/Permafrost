#include "functions.h"
#define local_c (*(undefined4 *)(frame + 1572))
#define local_8 (*(undefined4 *)(frame + 1576))
#define local_4 (*(undefined4 *)(frame + 1580))
#define local_620 (*(char (*)[512])(frame + 16))
#define local_420 (*(char (*)[1024])(frame + 528))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x404e261c
 */

ulonglong recovered_404e261c(char *format,...)

{
  unsigned char frame[1616] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *pcVar2;
  undefined4 in_r1;
  uint uVar3;
  undefined4 in_r2;
  undefined4 in_r3;
  char *pcVar4;

  __builtin_va_list pf_arguments;
  __builtin_va_start(pf_arguments,format);
  recovered_40403dc0(local_620,0x200,format,pf_arguments);
  __builtin_va_end(pf_arguments);
  uVar3 = 0;
  pcVar2 = local_620;
  while( true ) {
    do {
      pcVar4 = pcVar2 + 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar4;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_404bf284((int)local_420,uVar3,1,1);
      uVar3 = 0;
    }
    else if (uVar3 + 1 >> 10 == 0) {
      local_420[uVar3] = cVar1;
      uVar3 = uVar3 + 1;
    }
  }
  recovered_404bf284((int)local_420,uVar3,1,1);
  pcVar2 = local_620;
  do {
    pcVar4 = pcVar2 + 1;
    cVar1 = *pcVar2;
    pcVar2 = pcVar4;
  } while (cVar1 != '\0');
  return ZEXT48(pcVar4);
}
