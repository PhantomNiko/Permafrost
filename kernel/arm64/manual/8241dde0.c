#include "functions.h"



#define bStack_11 (*(byte *)(frame + 31))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x8241dde0
 */

uint recovered_8241dde0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  ulong uVar3;
  uint uVar4;

  recovered_8241d99c();
  bStack_11 = 0;
  uVar2 = recovered_8241de60();
  uVar1 = 0;
  if (uVar2 != 0) {
    uVar3 = recovered_8241ded4((char *)&bStack_11);
    if ((int)uVar3 == 0) {
      uVar3 = recovered_8241df28();
      uVar1 = (uint)uVar3;
    }
    else {
      if (bStack_11 != 8) {
        if (bStack_11 == 10 || bStack_11 == 0xd) {
          return 0x1c0d;
        }
        if (bStack_11 != 0x7f) {
          uVar4 = (uint)bStack_11;
          uVar2 = uVar4;
          if (0x5e < uVar4 - 0x20) {
            uVar2 = 0;
          }
          uVar1 = (uint)uVar2;
          if (uVar4 == 0x1b) {
            uVar1 = 0x11b;
          }
          return uVar1;
        }
      }
      uVar1 = 0xe08;
    }
  }
  return uVar1;
}
