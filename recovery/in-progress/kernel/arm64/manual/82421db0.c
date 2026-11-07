/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ab8 (*(uint64_t volatile *)(0x8266f188U))
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define DAT_40494ad8 (*(uint64_t volatile *)(0x8266f1a8U))
#define DAT_40494ae0 (*(uint32_t volatile *)(0x8266f1b0U))
ulong recovered_82421db0(byte *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  uint uVar2;
  long lVar3;
  ulong uVar4;
  uint uVar5;
  int iVar6;
  ulong uVar7;
  long lVar8;
  uint uVar9;
  uint uVar10;

  if ((param_1 != (byte *)0x0) && (*param_1 != 0)) {
    lVar8 = DAT_40494ad8;
    if ((lVar8 == 0) || (uVar10 = DAT_40494ae0, uVar10 == 0)) {
      lVar8 = 0;
      for (uVar7 = 0; uVar4 = DAT_40494ac0, uVar7 < uVar4; uVar7 = uVar7 + 1) {
        lVar3 = DAT_40494ab8;
        iVar6 = recovered_82400e0c((char *)(lVar3 + lVar8),(char *)param_1);
        if (iVar6 == 0) {
          return uVar7;
        }
        lVar8 = lVar8 + 0x118;
      }
    }
    else {
      uVar2 = uVar10 - 1;
      uVar5 = recovered_8243910c(param_1);
      for (uVar9 = 0; uVar9 < uVar10; uVar9 = uVar9 + 1) {
        uVar5 = uVar5 & uVar2;
        lVar8 = DAT_40494ad8;
        uVar1 = *(uint *)(lVar8 + (ulong)uVar5 * 4);
        if (uVar1 == 0xffffffff) {
          return 0xffffffffffffffff;
        }
        uVar7 = DAT_40494ac0;
        if (uVar1 < uVar7) {
          lVar8 = DAT_40494ab8;
          iVar6 = recovered_82400e0c((char *)(lVar8 + (ulong)uVar1 * 0x118),(char *)param_1);
          if (iVar6 == 0) {
            return (ulong)uVar1;
          }
          uVar10 = DAT_40494ae0;
        }
        uVar5 = uVar5 + 1;
      }
    }
  }
  return 0xffffffffffffffff;
}
