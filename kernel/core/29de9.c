#include "functions.h"
#undef DAT_00047e00
#define DAT_00047e00 (*(uint *)(0x47e00U))
#undef DAT_00047e20
#define DAT_00047e20 (*(uint *)(0x47e20U))
#undef DAT_00047e48
#define DAT_00047e48 (*(uint *)(0x47e48U))
#undef DAT_00047e4c
#define DAT_00047e4c (*(uint *)(0x47e4cU))
#define local_14 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29de9
 */

undefined4 recovered_29de9(void)

{
  unsigned char frame[68];

  bool bVar1;
  char *pcVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  local_14 = DAT_00047e48;
  uVar4 = 0;
  uVar6 = 0;
  if (DAT_00047e4c != 0) {
    uVar6 = ((DAT_00047e4c + DAT_00047e20) - 1) / DAT_00047e20;
  }
  uVar5 = DAT_00047e00 * 0x100;
  if (uVar5 != 0) {
    uVar4 = ((uVar5 + DAT_00047e20) - 1) / DAT_00047e20;
  }
  bVar1 = recovered_29957(&local_14,uVar6,uVar4);
  if (bVar1) {
    if (uVar4 != 0) {
      pcVar2 = recovered_20df4(DAT_00047e20 * uVar4);
      uVar6 = 0;
      if (pcVar2 == (char *)0x0) {
        return 0;
      }
      recovered_20fa9((int)pcVar2,0,DAT_00047e20 * uVar4);
      pcVar7 = pcVar2;
      for (; uVar6 < DAT_00047e00; uVar6 = uVar6 + 1) {
        recovered_2a289(uVar6,pcVar7);
        pcVar7 = pcVar7 + 0x100;
      }
      bVar1 = recovered_29b10(local_14,(int)pcVar2,uVar5,uVar4);
      recovered_20dfd((int)pcVar2);
      if (!bVar1) goto LAB_00029edc;
    }
    DAT_00047e48 = local_14;
    DAT_00047e4c = uVar5;
    uVar3 = recovered_2a056();
  }
  else {
LAB_00029edc:
    uVar3 = 0;
  }
  return uVar3;
}
