#include "functions.h"
#define uStack0000000000000000 (*(undefined1 *)(frame + 560))
#define acStack_220 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8246f020
 */

ulonglong recovered_8246f020(char *format,...)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  char *pcVar3;

  __builtin_va_list pf_arguments;
  __builtin_va_start(pf_arguments,format);
  recovered_82401998(acStack_220,0x200,format,pf_arguments);
  __builtin_va_end(pf_arguments);
  uVar2 = recovered_8242d468(acStack_220);
  pcVar3 = acStack_220;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  return uVar2;
}
