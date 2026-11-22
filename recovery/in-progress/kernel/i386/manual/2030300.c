/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020dc0e7 (*(uint8_t volatile *)(0x20dc0e7U))
#define DAT_020dc0e8 (*(uint8_t volatile *)(0x20dc0e8U))
#define DAT_020de0e8 (*(uint32_t volatile *)(0x20de0e8U))
#define DAT_021ec4e8 (*(uint8_t volatile *)(0x21ec4e8U))
#define local_d0 (*(char (*)[192])(frame + 16))
#define local_10 (*(undefined1 * *)(frame + 208))


void recovered_2030300(char *param_1,undefined1 param_2)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  char cVar1;
  ulong uVar2;
  int iVar3;
  char *out;

  cVar1 = DAT_021ec4e8;
  if (cVar1 == '\x01') {
    local_10 = &param_2;
    out = local_d0;
    recovered_2003af0(out,0xc0,param_1,local_10);
    uVar2 = recovered_2002270(out);
    if (uVar2 != 0) {
      do {
        iVar3 = DAT_020de0e8;
        if (iVar3 - 0x1fffU < 0xffffe000) {
          recovered_2001c30(&DAT_020dc0e7,&DAT_020dc0e8,iVar3 - 1);
          iVar3 = DAT_020de0e8;
          iVar3 = iVar3 + -1;
        }
        cVar1 = *out;
        out = out + 1;
        DAT_020de0e8 = iVar3 + 1;
        (&DAT_020dc0e7)[iVar3] = cVar1;
        uVar2 = uVar2 - 1;
      } while (uVar2 != 0);
      iVar3 = DAT_020de0e8;
      (&DAT_020dc0e7)[iVar3] = 0;
    }
    iVar3 = DAT_020de0e8;
    if (iVar3 - 0x1fffU < 0xffffe000) {
      recovered_2001c30(&DAT_020dc0e7,&DAT_020dc0e8,iVar3 - 1);
      iVar3 = DAT_020de0e8;
      iVar3 = iVar3 + -1;
    }
    DAT_020de0e8 = iVar3 + 1;
    (&DAT_020dc0e7)[iVar3] = 10;
    iVar3 = DAT_020de0e8;
    (&DAT_020dc0e7)[iVar3] = 0;
  }
  return;
}
#undef DAT_020dc0e7
#undef DAT_020dc0e8
#undef DAT_020de0e8
#undef DAT_021ec4e8
#undef local_d0
#undef local_10
