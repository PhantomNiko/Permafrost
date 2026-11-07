/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494870 (*(uint64_t volatile *)(0x8266ede8U))
#define DAT_40494878 (*(uint64_t volatile *)(0x8266edf0U))
long recovered_82440a28(long param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  long lVar2;
  long lVar3;
  bool bVar4;
  long lVar5;
  ulong uVar6;
  long lVar7;

  lVar5 = 0;
  uVar6 = 0xffffffffffffffff;
  lVar3 = 0;
  while( true ) {
    lVar7 = lVar3;
    uVar1 = DAT_40494870;
    uVar6 = uVar6 + 1;
    if (uVar1 <= uVar6) {
      return 0;
    }
    lVar2 = DAT_40494878;
    bVar4 = recovered_82440ab4(lVar2 + lVar7 + 0x5f1,param_1);
    if (bVar4) break;
    lVar5 = lVar5 + 1;
    bVar4 = recovered_82440ab4(lVar2 + lVar7 + 0x500,param_1);
    lVar3 = lVar7 + 0x4370;
    if (bVar4) {
      return lVar2 + lVar7;
    }
  }
  return lVar2 + lVar5 * 0x4370;
}
