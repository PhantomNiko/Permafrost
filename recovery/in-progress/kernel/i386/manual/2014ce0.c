#include "functions.h"
#define local_c (*(undefined1 *)(frame + 20))
#define local_b (*(undefined1 *)(frame + 21))
#define local_a (*(undefined1 *)(frame + 22))
#define local_9 (*(undefined1 *)(frame + 23))
#define local_8 (*(undefined1 *)(frame + 24))
#define local_7 (*(undefined1 *)(frame + 25))
#define local_6 (*(undefined1 *)(frame + 26))
#define local_5 (*(undefined1 *)(frame + 27))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2014ce0
 */

void recovered_2014ce0(uint port,uint value)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};


  local_c = (undefined1)port;
  local_b = (undefined1)(port >> 8);
  local_a = (undefined1)(port >> 0x10);
  local_9 = (undefined1)(port >> 0x18);
  local_8 = (undefined1)value;
  local_7 = (undefined1)(value >> 8);
  local_6 = 1;
  local_5 = 0;
  recovered_2014d30(3,&local_c,8);
  return;
}
