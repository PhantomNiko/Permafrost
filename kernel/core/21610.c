#include "functions.h"
#undef str_0002ca9d
#define str_0002ca9d (*(char (*)[1])(0x2ca9dU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x21610
 */

void recovered_21610(int *out,uint *remaining,int *total,char *text)

{
  unsigned char frame[64];

  char *pcVar1;
  
  pcVar1 = str_0002ca9d;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_215f2(out,remaining,total,*pcVar1);
  }
  return;
}

