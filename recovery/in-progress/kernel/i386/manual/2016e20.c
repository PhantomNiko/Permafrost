#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2016e20
 */

void recovered_2016e20(void *out,uint a,uint b,uint c)

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
  *(undefined1 *)((int)out + 0xc) = 0;
  *(undefined1 *)((int)out + 0xd) = 0;
  *(undefined1 *)((int)out + 0xe) = 0;
  *(undefined1 *)((int)out + 0xf) = 0;
  return;
}
