#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x397b1
 */

bool recovered_397b1(void)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;

  uVar3 = 0;
  bVar5 = false;
  if (DAT_0005e71c == '\x01') {
    iVar4 = 0xfc;
    uVar2 = DAT_0005e6a0;
    for (; bVar5 = uVar2 <= uVar3, !bVar5; uVar3 = uVar3 + 1) {
      if ((DAT_0005e69c == 0) || ((*(byte *)(DAT_0005e69c + iVar4) & 2) == 0)) {
        uVar1 = recovered_38246(uVar3);
        if ((char)uVar1 == '\0') {
          return bVar5;
        }
        uVar2 = DAT_0005e6a0;
      }
      iVar4 = iVar4 + 0x10c;
    }
  }
  return bVar5;
}
