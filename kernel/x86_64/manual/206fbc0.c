/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf408 (*(uint64_t volatile *)(0x215a818U))
#define DAT_020cf410 (*(uint64_t volatile *)(0x215a820U))
#define DAT_020cf41c (*(uint32_t volatile *)(0x215a82cU))
#define DAT_020cf420 (*(uint32_t volatile *)(0x215a830U))
#define DAT_020cf424 (*(uint8_t volatile *)(0x215a834U))
void recovered_206fbc0(uint param_1,int param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;
  uint uVar3;
  char cVar4;
  ulong uVar5;

  lVar1 = DAT_020cf408;
  if (1 < param_1 && lVar1 != 0) {
    uVar5 = (ulong)param_1;
    uVar2 = DAT_020cf410;
    if ((uVar5 < uVar2) && (*(int *)(lVar1 + uVar5 * 4) != param_2)) {
      *(int *)(lVar1 + uVar5 * 4) = param_2;
      uVar2 = DAT_020cf410;
      if (uVar5 < uVar2) {
        cVar4 = DAT_020cf424;
        if (cVar4 == '\0') {
          DAT_020cf41c = param_1;
          DAT_020cf420 = param_1;
          DAT_020cf424 = 1;
        }
        else {
          uVar3 = DAT_020cf41c;
          if (param_1 < uVar3) {
            DAT_020cf41c = param_1;
          }
          uVar3 = DAT_020cf420;
          if (uVar3 < param_1) {
            DAT_020cf420 = param_1;
          }
        }
      }
    }
  }
  return;
}
