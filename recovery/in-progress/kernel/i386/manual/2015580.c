#include "functions.h"
#define local_1c (*(uint (*)[3])(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2015580
 */

uint recovered_2015580(void *ring,uint *cursor,uint *cycle)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  byte bVar2;

  local_1c[1] = 0;
  local_1c[0] = 0;
  if ((cycle == (uint *)0x0 || (cursor == (uint *)0x0 || ring == (void *)0x0)) ||
     (uVar1 = recovered_20091e0((uint)ring,0x100,local_1c), (char)uVar1 == '\0')) {
    return 0;
  }
  recovered_2001e00(ring,0,0x100);
  *cursor = 0;
  *cycle = 1;
  *(char *)((int)ring + 0xf0) = (char)local_1c[0];
  *(char *)((int)ring + 0xf1) = (char)(local_1c[0] >> 8);
  *(char *)((int)ring + 0xf2) = (char)(local_1c[0] >> 0x10);
  *(char *)((int)ring + 0xf3) = (char)(local_1c[0] >> 0x18);
  *(char *)((int)ring + 0xf4) = (char)local_1c[1];
  *(char *)((int)ring + 0xf5) = (char)(local_1c[1] >> 8);
  *(char *)((int)ring + 0xf6) = (char)(local_1c[1] >> 0x10);
  bVar2 = (byte)(local_1c[1] >> 0x18);
  *(byte *)((int)ring + 0xf7) = bVar2;
  *(undefined1 *)((int)ring + 0xf8) = 0;
  *(undefined1 *)((int)ring + 0xf9) = 0;
  *(undefined1 *)((int)ring + 0xfa) = 0;
  *(undefined1 *)((int)ring + 0xfb) = 0;
  *(undefined1 *)((int)ring + 0xfc) = 3;
  *(undefined1 *)((int)ring + 0xfd) = 0x18;
  *(undefined1 *)((int)ring + 0xfe) = 0;
  *(undefined1 *)((int)ring + 0xff) = 0;
  return CONCAT31((uint3)bVar2,1);
}
