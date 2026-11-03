#include "functions.h"
#undef DAT_0004ce14
#define DAT_0004ce14 (*(uint *)(0x4ce14U))
#undef DAT_0004ce34
#define DAT_0004ce34 (*(uint *)(0x4ce34U))
#undef DAT_0004ce5c
#define DAT_0004ce5c (*(uint *)(0x4ce5cU))
#undef DAT_0004ce60
#define DAT_0004ce60 (*(uint *)(0x4ce60U))
#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2aecc
 */

undefined4 recovered_2aecc(void)

{
  unsigned char frame[68];

  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  local_14 = DAT_0004ce5c;
  uVar4 = 0;
  uVar6 = 0;
  if (DAT_0004ce60 != 0) {
    uVar6 = ((DAT_0004ce60 + DAT_0004ce34) - 1) / DAT_0004ce34;
  }
  uVar5 = DAT_0004ce14 * 0x100;
  if (uVar5 != 0) {
    uVar4 = ((uVar5 + DAT_0004ce34) - 1) / DAT_0004ce34;
  }
  bVar1 = recovered_2aa3a(&local_14,uVar6,uVar4);
  if (bVar1) {
    if (uVar4 != 0) {
      pcVar2 = recovered_211fa(DAT_0004ce34 * uVar4);
      uVar6 = 0;
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      recovered_213af((int)pcVar2,0,DAT_0004ce34 * uVar4);
      pcVar7 = pcVar2;
      for (; uVar6 < DAT_0004ce14; uVar6 = uVar6 + 1) {
        recovered_2b46c(uVar6,pcVar7);
        pcVar7 = pcVar7 + 0x100;
      }
      bVar1 = recovered_2abf3(local_14,(int)pcVar2,uVar5,uVar4);
      recovered_21203((int)pcVar2);
      if (!bVar1) goto LAB_0002afbf;
    }
    DAT_0004ce5c = local_14;
    DAT_0004ce60 = uVar5;
    uVar3 = recovered_2b1bc();
  }
  else {
LAB_0002afbf:
    uVar3 = 0;
  }
  return uVar3;
}
