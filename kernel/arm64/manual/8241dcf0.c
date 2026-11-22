/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494730 (*(uint8_t volatile *)(0x8266ec08U))
#define DAT_40494788 (*(uint32_t volatile *)(0x8266ec68U))
#define DAT_40494790 (*(uint32_t volatile *)(0x8266ec70U))
#define DAT_40494798 (*(uint32_t volatile *)(0x8266ec78U))
void recovered_8241dcf0(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  long lVar5;

  cVar1 = DAT_40494730;
  if ((cVar1 == '\x01') && (uVar2 = DAT_40494790, lVar5 = recovered_824358d8(uVar2), lVar5 != 0)) {
    if (param_1 == 8) {
      iVar3 = DAT_40494798;
      if (iVar3 != 0) {
        DAT_40494798 = iVar3 - 1U;
        *(undefined1 *)(lVar5 + (ulong)(iVar3 - 1U)) = 0x20;
      }
    }
    else {
      if (param_1 == 10) {
LAB_40417c7c:
        recovered_82436ab8();
        return;
      }
      if (param_1 == 0xd) {
        DAT_40494798 = 0;
      }
      else if (0x1f < param_1) {
        uVar4 = DAT_40494798;
        *(char *)(lVar5 + (ulong)uVar4) = (char)param_1;
        uVar2 = DAT_40494788;
        if (uVar2 <= uVar4 + 1) goto LAB_40417c7c;
        DAT_40494798 = uVar4 + 1;
      }
    }
  }
  return;
}
