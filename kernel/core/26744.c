#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26744
 */

void recovered_26744(int enabled)

{
  unsigned char frame[64];

  undefined1 uVar1;

  out(0x3d4,10);
  uVar1 = 0x20;
  if (enabled != 0) {
    uVar1 = 0xd;
  }
  out(0x3d5,uVar1);
  out(0x3d4,0xb);
  out(0x3d5,0xe);
  return;
}
