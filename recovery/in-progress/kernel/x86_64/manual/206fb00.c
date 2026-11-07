/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
#define DAT_020cf418 (*(uint32_t volatile *)(0x215a828U))
#define DAT_020cf41c (*(uint32_t volatile *)(0x215a82cU))
#define DAT_020cf420 (*(uint32_t volatile *)(0x215a830U))
#define DAT_020cf424 (*(uint8_t volatile *)(0x215a834U))
void recovered_206fb00(uint param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  uint uVar5;
  byte bVar6;
  ulong uVar7;

  lVar2 = DAT_020cf408;
  if (lVar2 != 0) {
    uVar3 = DAT_020cf410;
    bVar6 = DAT_020cf424;
    do {
      if (param_1 < 2) {
        return;
      }
      uVar7 = (ulong)param_1;
      if (uVar3 <= uVar7) {
        return;
      }
      uVar1 = *(uint *)(lVar2 + uVar7 * 4);
      if (uVar1 != 0) {
        *(undefined4 *)(lVar2 + uVar7 * 4) = 0;
        uVar4 = DAT_020cf410;
        if (uVar7 < uVar4) {
          if ((bVar6 & 1) == 0) {
            DAT_020cf41c = param_1;
            DAT_020cf420 = param_1;
            DAT_020cf424 = 1;
            bVar6 = 1;
          }
          else {
            uVar5 = DAT_020cf41c;
            if (param_1 < uVar5) {
              DAT_020cf41c = param_1;
            }
            uVar5 = DAT_020cf420;
            if (uVar5 < param_1) {
              DAT_020cf420 = param_1;
            }
          }
        }
      }
      uVar5 = DAT_020cf418;
      if ((uVar5 < 2) || (param_1 < uVar5)) {
        DAT_020cf418 = param_1;
      }
      param_1 = uVar1;
    } while (1 < uVar1 + 1);
  }
  return;
}
