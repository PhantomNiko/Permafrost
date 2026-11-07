/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ab8 (*(uint64_t volatile *)(0x8266f188U))
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define DAT_40494ad8 (*(uint64_t volatile *)(0x8266f1a8U))
#define DAT_40494ae0 (*(uint32_t volatile *)(0x8266f1b0U))
undefined1 recovered_82437660(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  uint uVar3;
  undefined8 uVar4;
  ulong uVar5;
  undefined1 uVar6;

  uVar5 = DAT_40494ac0;
  if (uVar5 == 0) {
    lVar2 = DAT_40494ad8;
    if (lVar2 != 0) {
      for (uVar5 = 0; uVar3 = DAT_40494ae0, uVar5 < uVar3; uVar5 = uVar5 + 1) {
        *(undefined4 *)(lVar2 + uVar5 * 4) = 0xffffffff;
      }
    }
    uVar6 = 1;
  }
  else {
    uVar4 = recovered_82438f68(&DAT_40494ab8,uVar5);
    if ((int)uVar4 == 0) {
      uVar6 = 0;
    }
    else {
      uVar5 = 0;
      lVar2 = DAT_40494ad8;
      for (; uVar3 = DAT_40494ae0, uVar5 < uVar3; uVar5 = uVar5 + 1) {
        *(undefined4 *)(lVar2 + uVar5 * 4) = 0xffffffff;
      }
      uVar5 = 0;
      do {
        uVar1 = DAT_40494ac0;
        if (uVar1 <= uVar5) {
          return 1;
        }
        lVar2 = DAT_40494ad8;
        uVar3 = DAT_40494ae0;
        uVar3 = recovered_82439048(&DAT_40494ab8,lVar2,uVar3,uVar5);
        uVar5 = uVar5 + 1;
        uVar6 = 0;
      } while ((uVar3 & 1) != 0);
    }
  }
  return uVar6;
}
