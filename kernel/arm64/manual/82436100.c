/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_40494970 (*(uint32_t volatile *)(0x8266eef8U))
#define DAT_40494974 (*(uint32_t volatile *)(0x8266eefcU))
#define DAT_40494978 (*(uint64_t volatile *)(0x8266ef00U))
void recovered_82436100(uint param_1,uint param_2,long param_3,ulong param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  ulong size;
  uint uVar1;
  long lVar2;

  lVar2 = DAT_40494978;
  if (((lVar2 != 0) && (uVar1 = DAT_40494974, (param_4 == 0 || param_3 != 0) && param_1 < uVar1)) &&
     (uVar1 = DAT_40494970, param_2 < uVar1)) {
    size = (ulong)(uVar1 - param_2);
    if (param_4 <= uVar1 - param_2) {
      size = param_4;
    }
    if (size != 0) {
      recovered_82400928((void *)(lVar2 + (ulong)uVar1 * (ulong)param_1 + (ulong)param_2),
                         (void *)param_3,size);
      return;
    }
  }
  return;
}
