#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2017800
 */

void recovered_2017800(void *out,uint a,uint b,uint c,uint d)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  *(char *)out = (char)a;
  *(char *)((int)out + 1) = (char)(a >> 8);
  *(char *)((int)out + 2) = (char)(a >> 0x10);
  *(char *)((int)out + 3) = (char)(a >> 0x18);
  *(char *)((int)out + 4) = (char)b;
  *(char *)((int)out + 5) = (char)(b >> 8);
  *(char *)((int)out + 6) = (char)(b >> 0x10);
  *(char *)((int)out + 7) = (char)(b >> 0x18);
  *(char *)((int)out + 8) = (char)c;
  *(char *)((int)out + 9) = (char)(c >> 8);
  *(char *)((int)out + 10) = (char)(c >> 0x10);
  *(char *)((int)out + 0xb) = (char)(c >> 0x18);
  *(char *)((int)out + 0xc) = (char)d;
  *(char *)((int)out + 0xd) = (char)(d >> 8);
  *(char *)((int)out + 0xe) = (char)(d >> 0x10);
  *(char *)((int)out + 0xf) = (char)(d >> 0x18);
  return;
}
