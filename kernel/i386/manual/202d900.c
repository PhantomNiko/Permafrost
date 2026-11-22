/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020dc0e7 (*(uint8_t volatile *)(0x20dc0e7U))
#define DAT_020dc0e8 (*(uint8_t volatile *)(0x20dc0e8U))
#define DAT_020de0e8 (*(uint32_t volatile *)(0x20de0e8U))


int recovered_202d900(int param_1,int param_2,int param_3)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  int iVar1;
  int iVar2;

  recovered_2026f10();
  iVar2 = 0;
  if ((0xfffffffd < param_1 - 3U) && (param_2 != 0 || param_3 == 0)) {
    if (param_3 != 0 && param_2 != 0) {
      iVar2 = 0;
      do {
        iVar1 = DAT_020de0e8;
        if (iVar1 - 0x1fffU < 0xffffe000) {
          recovered_2001c30(&DAT_020dc0e7,&DAT_020dc0e8,iVar1 - 1);
          iVar1 = DAT_020de0e8;
          iVar1 = iVar1 + -1;
          DAT_020de0e8 = iVar1;
        }
        DAT_020de0e8 = iVar1 + 1;
        (&DAT_020dc0e7)[iVar1] = *(undefined1 *)(param_2 + iVar2);
        iVar2 = iVar2 + 1;
      } while (param_3 != iVar2);
      iVar2 = DAT_020de0e8;
      (&DAT_020dc0e7)[iVar2] = 0;
    }
    iVar2 = param_3;
  }
  return iVar2;
}
#undef DAT_020dc0e7
#undef DAT_020dc0e8
#undef DAT_020de0e8
