#include "functions.h"
#undef DAT_8266ec48
#define DAT_8266ec48 (*(uint8_t volatile *)(0x8266ec48U))
#define uStack0000000000000000 (*(undefined1 *)(frame + 560))
#define acStack_220 (*(char (*)[512])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x824234a4
 */

void recovered_824234a4(char *format,...)

{
  unsigned char frame[592] __attribute__((aligned(16))) = {0};

  byte bVar1;

  bVar1 = DAT_8266ec48;
  if ((bVar1 & 1) == 0) {
    __builtin_va_list pf_arguments;
  __builtin_va_start(pf_arguments,format);
  recovered_82401998(acStack_220,0x200,format,pf_arguments);
  __builtin_va_end(pf_arguments);
    recovered_8242d468(acStack_220);
  }
  return;
}
