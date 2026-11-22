/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cf3a0 (*(uint64_t volatile *)(0x215a7b0U))
#define DAT_020cf3b0 (*(uint64_t volatile *)(0x215a7c0U))
#define DAT_020cf3b8 (*(uint64_t volatile *)(0x215a7c8U))
uchar recovered_2069380(ulong param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong uVar1;
  uchar uVar2;
  void *pvVar3;
  ulong uVar4;
  ulong uVar5;
  long lVar6;
  void *out;
  bool bVar7;

  uVar5 = DAT_020cf3b0;
  uVar2 = '\x01';
  if (uVar5 < param_1) {
    uVar1 = DAT_020cf3b8;
    if (uVar1 == 0 || param_1 <= uVar1) {
      uVar4 = 0x10;
      if (uVar5 != 0) {
        uVar4 = uVar5;
      }
      do {
        if (param_1 <= uVar4) {
LAB_0204bc02:
          uVar5 = uVar1;
          if (uVar4 < uVar1) {
            uVar5 = uVar4;
          }
          if (uVar1 == 0) {
            uVar5 = uVar4;
          }
          pvVar3 = (void *)DAT_020cf3a0;
          pvVar3 = recovered_2000d40(pvVar3,uVar5 * 0x118);
          if (pvVar3 == (void *)0x0) {
            bVar7 = false;
          }
          else {
            uVar1 = DAT_020cf3b0;
            lVar6 = uVar5 - uVar1;
            if (uVar1 <= uVar5 && lVar6 != 0) {
              out = (void *)((long)pvVar3 + uVar1 * 0x118);
              do {
                recovered_2002110(out,0,0x118);
                out = (void *)((long)out + 0x118);
                lVar6 = lVar6 + -1;
              } while (lVar6 != 0);
            }
            DAT_020cf3a0 = pvVar3;
            DAT_020cf3b0 = uVar5;
            bVar7 = param_1 <= uVar5;
          }
          return bVar7;
        }
        if ((long)uVar4 < 0) {
          uVar4 = param_1;
          goto LAB_0204bc02;
        }
        uVar4 = uVar4 * 2;
      } while( true );
    }
    uVar2 = '\0';
  }
  return uVar2;
}
