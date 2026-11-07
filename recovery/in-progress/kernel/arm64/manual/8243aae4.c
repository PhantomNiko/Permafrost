/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494b20 (*(uint64_t volatile *)(0x8266f1f0U))
#define DAT_40494b34 (*(uint32_t volatile *)(0x8266f204U))
#define DAT_40494b38 (*(uint32_t volatile *)(0x8266f208U))
#define DAT_40494b3c (*(uint8_t volatile *)(0x8266f20cU))
#define Ram0000000040494b28 (*(uint64_t volatile *)(0x8266f1f8U))
void recovered_8243aae4(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  uint uVar3;
  byte bVar4;
  ulong uVar5;

  if ((((1 < param_1) && (lVar1 = DAT_40494b20, lVar1 != 0)) &&
      (uVar5 = Ram0000000040494b28, param_1 < uVar5)) &&
     ((uVar5 = (ulong)param_1, *(int *)(lVar1 + uVar5 * 4) != param_2 &&
      (*(int *)(lVar1 + uVar5 * 4) = param_2, uVar2 = Ram0000000040494b28, uVar5 < uVar2)))) {
    bVar4 = DAT_40494b3c;
    if ((bVar4 & 1) == 0) {
      DAT_40494b34 = param_1;
      DAT_40494b38 = param_1;
      DAT_40494b3c = 1;
      return;
    }
    uVar3 = DAT_40494b34;
    if (param_1 < uVar3) {
      DAT_40494b34 = param_1;
    }
    uVar3 = DAT_40494b38;
    if (uVar3 < param_1) {
      DAT_40494b38 = param_1;
    }
  }
  return;
}
