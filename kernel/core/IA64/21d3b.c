#include "functions.h"
#undef DAT_0004627d
#define DAT_0004627d (*(uint8_t *)(0x4627dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21d3b
 */

void recovered_21d3b(int *out,uint *remaining,int *total,char *text)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = &DAT_0004627d;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_21d1d(out,remaining,total,*pcVar1);
  }
  return;
}
