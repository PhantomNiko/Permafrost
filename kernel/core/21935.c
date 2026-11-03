#include "functions.h"
#undef DAT_0003f255
#define DAT_0003f255 (*(uint8_t *)(0x3f255U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21935
 */

void recovered_21935(int *out,uint *remaining,int *total,char *text)

{
  unsigned char frame[64];

  char *pcVar1;

  pcVar1 = &DAT_0003f255;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_21917(out,remaining,total,*pcVar1);
  }
  return;
}
