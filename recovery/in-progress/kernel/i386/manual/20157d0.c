#include "functions.h"
#define local_1c (*(uint *)(frame + 20))
#define local_18 (*(int *)(frame + 24))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20157d0
 */

uint recovered_20157d0(uint ring,uint *cursor,uchar *cycle,uint low,uint high,uint size,uint control
                      ,uint *out)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  byte bVar1;
  undefined4 uVar2;
  uint uVar3;

  local_18 = 0;
  local_1c = 0;
  if (((cycle == (uchar *)0x0 || (cursor == (uint *)0x0 || ring == 0)) || (0xe < *cursor)) ||
     (uVar3 = recovered_20091e0(ring,0x100,&local_1c), (char)uVar3 == '\0')) {
    return 0;
  }
  uVar3 = *cursor * 0x10;
  if (out != (uint *)0x0) {
    *out = local_1c + uVar3;
    out[1] = local_18 + (uint)CARRY4(local_1c,uVar3);
  }
  uVar2 = *(undefined4 *)cycle;
  *(char *)(ring + uVar3) = (char)low;
  *(char *)(ring + 1 + uVar3) = (char)(low >> 8);
  *(char *)(ring + 2 + uVar3) = (char)(low >> 0x10);
  *(char *)(ring + 3 + uVar3) = (char)(low >> 0x18);
  *(char *)(ring + 4 + uVar3) = (char)high;
  *(char *)(ring + 5 + uVar3) = (char)(high >> 8);
  *(char *)(ring + 6 + uVar3) = (char)(high >> 0x10);
  *(char *)(ring + 7 + uVar3) = (char)(high >> 0x18);
  *(char *)(ring + 8 + uVar3) = (char)size;
  *(char *)(ring + 9 + uVar3) = (char)(size >> 8);
  *(char *)(ring + 10 + uVar3) = (char)(size >> 0x10);
  *(char *)(ring + 0xb + uVar3) = (char)(size >> 0x18);
  *(byte *)(ring + 0xc + uVar3) = (byte)uVar2 & 1 | (byte)control;
  *(char *)(ring + 0xd + uVar3) = (char)(control >> 8);
  *(char *)(ring + 0xe + uVar3) = (char)(control >> 0x10);
  *(char *)(ring + 0xf + uVar3) = (char)(control >> 0x18);
  uVar3 = *cursor + 1;
  *cursor = uVar3;
  if (uVar3 == 0xf) {
    bVar1 = *cycle;
    *(char *)(ring + 0xf0) = (char)local_1c;
    *(char *)(ring + 0xf1) = (char)(local_1c >> 8);
    *(char *)(ring + 0xf2) = (char)(local_1c >> 0x10);
    *(char *)(ring + 0xf3) = (char)(local_1c >> 0x18);
    *(char *)(ring + 0xf4) = (char)local_18;
    *(char *)(ring + 0xf5) = (char)((uint)local_18 >> 8);
    *(char *)(ring + 0xf6) = (char)((uint)local_18 >> 0x10);
    *(char *)(ring + 0xf7) = (char)((uint)local_18 >> 0x18);
    *(undefined1 *)(ring + 0xf8) = 0;
    *(undefined1 *)(ring + 0xf9) = 0;
    *(undefined1 *)(ring + 0xfa) = 0;
    *(undefined1 *)(ring + 0xfb) = 0;
    *(byte *)(ring + 0xfc) = bVar1 & 1 | 2;
    *(undefined1 *)(ring + 0xfd) = 0x18;
    *(undefined1 *)(ring + 0xfe) = 0;
    *(undefined1 *)(ring + 0xff) = 0;
    *cursor = 0;
    *cycle = *cycle ^ 1;
    return 1;
  }
  return CONCAT31((int3)(uVar3 >> 8),1);
}
