/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020dc0e7 (*(uint8_t volatile *)(0x20dc0e7U))
#define DAT_020de0e8 (*(uint32_t volatile *)(0x20de0e8U))


uint recovered_202da40(undefined1 *param_1,uint param_2)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint uVar1;
  int iVar2;
  uint count;

  recovered_2026f10();
  uVar1 = 0;
  if (param_2 != 0 && param_1 != (undefined1 *)0x0) {
    *param_1 = 0;
    count = DAT_020de0e8;
    if (count != 0) {
      if (param_2 < count + 1) {
        count = param_2 - 1;
      }
      if (count != 0) {
        recovered_2001b70(param_1,&DAT_020dc0e7,count);
        param_1[count] = 0;
        uVar1 = DAT_020de0e8;
        iVar2 = 0;
        if (count <= uVar1 && uVar1 - count != 0) {
          recovered_2001c30(&DAT_020dc0e7,&DAT_020dc0e7 + count,uVar1 - count);
          iVar2 = DAT_020de0e8;
          iVar2 = iVar2 - count;
        }
        DAT_020de0e8 = iVar2;
        (&DAT_020dc0e7)[iVar2] = 0;
        uVar1 = count;
      }
    }
  }
  return uVar1;
}
#undef DAT_020dc0e7
#undef DAT_020de0e8
