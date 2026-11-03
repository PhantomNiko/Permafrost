#include "functions.h"
#undef DAT_00057365
#define DAT_00057365 (*(uint8_t *)(0x57365U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x222b6
 */

void recovered_222b6(int *out,uint *remaining,int *total,char *text)

{
  unsigned char frame[64] = {0};

  char *pcVar1;

  pcVar1 = &DAT_00057365;
  if (text != (char *)0x0) {
    pcVar1 = text;
  }
  for (; *pcVar1 != '\0'; pcVar1 = pcVar1 + 1) {
    recovered_22298(out,remaining,total,*pcVar1);
  }
  return;
}
