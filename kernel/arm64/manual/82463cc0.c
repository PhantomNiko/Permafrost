/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494ab8 (*(uint64_t volatile *)(0x8266f188U))
#define DAT_40494ac0 (*(uint64_t volatile *)(0x8266f190U))
#define DAT_40494af0 (*(uint32_t volatile *)(0x8266f1c0U))
#define DAT_40494b6c (*(uint8_t volatile *)(0x8266f26cU))
long recovered_82463cc0(void)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int *piVar1;
  uint uVar2;
  long lVar3;
  uint uVar4;
  char cVar5;
  long lVar6;
  long lVar7;

  cVar5 = DAT_40494b6c;
  uVar4 = DAT_40494af0;
  lVar6 = 0;
  if (cVar5 == '\x01' && uVar4 != 0) {
    lVar3 = DAT_40494ab8;
    lVar7 = DAT_40494ac0;
    piVar1 = (int *)(lVar3 + 0x100);
    for (; lVar7 != 0; lVar7 = lVar7 + -1) {
      uVar2 = 0;
      if (uVar4 != 0) {
        uVar2 = ((uVar4 - 1) + *piVar1) / uVar4;
      }
      lVar6 = lVar6 + (ulong)uVar2;
      piVar1 = piVar1 + 0x46;
    }
  }
  return lVar6;
}
