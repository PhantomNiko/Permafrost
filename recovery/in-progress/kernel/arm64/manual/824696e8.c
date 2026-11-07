/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ab8 (*(uint64_t volatile *)(0x8266f188U))
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define DAT_40494b6c (*(uint8_t volatile *)(0x8266f26cU))
bool recovered_824696e8(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  char cVar2;
  bool bVar3;
  undefined8 uVar4;
  ulong uVar5;
  ulong uVar6;
  long lVar7;

  cVar2 = DAT_40494b6c;
  if (cVar2 == '\x01') {
    uVar6 = 0;
    uVar5 = DAT_40494ac0;
    lVar7 = 0x104;
    for (; bVar3 = uVar5 <= uVar6, !bVar3; uVar6 = uVar6 + 1) {
      lVar1 = DAT_40494ab8;
      if ((lVar1 == 0) || ((*(byte *)(lVar1 + lVar7) >> 1 & 1) == 0)) {
        uVar4 = recovered_82421e9c(uVar6);
        if ((int)uVar4 == 0) {
          return bVar3;
        }
        uVar5 = DAT_40494ac0;
      }
      lVar7 = lVar7 + 0x118;
    }
  }
  else {
    bVar3 = false;
  }
  return bVar3;
}
