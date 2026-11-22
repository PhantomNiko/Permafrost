#include "functions.h"
#define local_620 (*(char (*)[512])(frame + 16))
#define local_420 (*(char (*)[1024])(frame + 528))
#define local_c (*(undefined4 *)(frame + 1572))
#define local_8 (*(undefined4 *)(frame + 1576))
#define local_4 (*(undefined4 *)(frame + 1580))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4043bb94
 */

void recovered_4043bb94(char *format,...)

{
  unsigned char frame[1616] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 in_r1;
  uint uVar2;
  undefined4 in_r2;
  undefined4 in_r3;
  char *pcVar4;
  char *pcVar3;

  __builtin_va_list pf_arguments;
  __builtin_va_start(pf_arguments,format);
  recovered_40403dc0(local_620,0x200,format,pf_arguments);
  __builtin_va_end(pf_arguments);
  uVar2 = 0;
  pcVar4 = local_620;
  while( true ) {
    do {
      pcVar3 = pcVar4 + 1;
      cVar1 = *pcVar4;
      pcVar4 = pcVar3;
    } while (cVar1 == '\r');
    if (cVar1 == '\0') break;
    if (cVar1 == '\n') {
      recovered_404bf284((int)local_420,uVar2,1,1);
      uVar2 = 0;
    }
    else if (uVar2 + 1 >> 10 == 0) {
      local_420[uVar2] = cVar1;
      uVar2 = uVar2 + 1;
    }
  }
  recovered_404bf284((int)local_420,uVar2,1,1);
  return;
}
