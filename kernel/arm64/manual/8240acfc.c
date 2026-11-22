/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4047af70 (*(uint64_t volatile *)(0x825420b8U))
ulong recovered_8240acfc(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  long lVar1;
  ulong uVar2;

  uVar2 = recovered_82403e90();
  if ((int)uVar2 != 0) {
    lVar1 = DAT_4047af70;
    uVar2 = (ulong)(param_2 << (ulong)(*(uint *)(lVar1 + 0x74) & 0x1f) & *(uint *)(lVar1 + 0x68) |
                    param_1 << (ulong)(*(uint *)(lVar1 + 0x70) & 0x1f) & *(uint *)(lVar1 + 100) |
                   param_3 << (ulong)(*(uint *)(lVar1 + 0x78) & 0x1f) & *(uint *)(lVar1 + 0x6c));
  }
  return uVar2;
}
