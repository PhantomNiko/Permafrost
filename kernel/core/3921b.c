#include "functions.h"
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(uint *)(0x5e6a0U))
#undef DAT_0005e6c0
#define DAT_0005e6c0 (*(uint *)(0x5e6c0U))
#undef DAT_0005e6e8
#define DAT_0005e6e8 (*(uint *)(0x5e6e8U))
#undef DAT_0005e6ec
#define DAT_0005e6ec (*(uint *)(0x5e6ecU))
#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3921b
 */

undefined4 recovered_3921b(void)

{
  unsigned char frame[68] = {0};

  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  local_14 = DAT_0005e6e8;
  uVar4 = 0;
  uVar6 = 0;
  if (DAT_0005e6ec != 0) {
    uVar6 = ((DAT_0005e6ec + DAT_0005e6c0) - 1) / DAT_0005e6c0;
  }
  uVar5 = DAT_0005e6a0 * 0x100;
  if (uVar5 != 0) {
    uVar4 = ((uVar5 + DAT_0005e6c0) - 1) / DAT_0005e6c0;
  }
  bVar1 = recovered_38d89(&local_14,uVar6,uVar4);
  if (bVar1) {
    if (uVar4 != 0) {
      pcVar2 = recovered_211fa(DAT_0005e6c0 * uVar4);
      uVar6 = 0;
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      recovered_213af((int)pcVar2,0,DAT_0005e6c0 * uVar4);
      pcVar7 = pcVar2;
      for (; uVar6 < DAT_0005e6a0; uVar6 = uVar6 + 1) {
        recovered_3967b(uVar6,pcVar7);
        pcVar7 = pcVar7 + 0x100;
      }
      bVar1 = recovered_38f42(local_14,(int)pcVar2,uVar5,uVar4);
      recovered_21203((int)pcVar2);
      if (!bVar1) goto LAB_0003930e;
    }
    DAT_0005e6e8 = local_14;
    DAT_0005e6ec = uVar5;
    uVar3 = recovered_394d5();
  }
  else {
LAB_0003930e:
    uVar3 = 0;
  }
  return uVar3;
}
