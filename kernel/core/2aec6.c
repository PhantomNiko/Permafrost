#include "functions.h"
#undef DAT_0004ee14
#define DAT_0004ee14 (*(uint *)(0x4ee14U))
#undef DAT_0004ee34
#define DAT_0004ee34 (*(uint *)(0x4ee34U))
#undef DAT_0004ee5c
#define DAT_0004ee5c (*(uint *)(0x4ee5cU))
#undef DAT_0004ee60
#define DAT_0004ee60 (*(uint *)(0x4ee60U))
#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2aec6
 */

undefined4 recovered_2aec6(void)

{
  unsigned char frame[68];

  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  local_14 = DAT_0004ee5c;
  uVar4 = 0;
  uVar6 = 0;
  if (DAT_0004ee60 != 0) {
    uVar6 = ((DAT_0004ee60 + DAT_0004ee34) - 1) / DAT_0004ee34;
  }
  uVar5 = DAT_0004ee14 * 0x100;
  if (uVar5 != 0) {
    uVar4 = ((uVar5 + DAT_0004ee34) - 1) / DAT_0004ee34;
  }
  bVar1 = recovered_2aa34(&local_14,uVar6,uVar4);
  if (bVar1) {
    if (uVar4 != 0) {
      pcVar2 = recovered_211fa(DAT_0004ee34 * uVar4);
      uVar6 = 0;
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      recovered_213af((int)pcVar2,0,DAT_0004ee34 * uVar4);
      pcVar7 = pcVar2;
      for (; uVar6 < DAT_0004ee14; uVar6 = uVar6 + 1) {
        recovered_2b466(uVar6,pcVar7);
        pcVar7 = pcVar7 + 0x100;
      }
      bVar1 = recovered_2abed(local_14,(int)pcVar2,uVar5,uVar4);
      recovered_21203((int)pcVar2);
      if (!bVar1) goto LAB_0002afb9;
    }
    DAT_0004ee5c = local_14;
    DAT_0004ee60 = uVar5;
    uVar3 = recovered_2b1b6();
  }
  else {
LAB_0002afb9:
    uVar3 = 0;
  }
  return uVar3;
}
