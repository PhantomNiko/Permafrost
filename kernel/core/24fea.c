#include "functions.h"
#undef DAT_00070410
#define DAT_00070410 (*(uint *)(0x70410U))
#undef DAT_00070414
#define DAT_00070414 (*(int *)(0x70414U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x24fea
 */

uint recovered_24fea(int param_1)

{
  unsigned char frame[64];

  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  
  if (param_1 != 0) {
    iVar3 = 0;
    uVar2 = DAT_00070410;
    for (uVar4 = 0; uVar4 < uVar2; uVar4 = uVar4 + 1) {
      if ((*(char *)(DAT_00070414 + 0x24 + iVar3) == '\x01') &&
         (*(int *)(DAT_00070414 + iVar3) != 0)) {
        iVar1 = recovered_20cea(*(int *)(DAT_00070414 + iVar3),param_1);
        if (iVar1 == 0) {
          return uVar4;
        }
        uVar2 = DAT_00070410;
      }
      iVar3 = iVar3 + 0x28;
    }
  }
  return 0xffffffff;
}

