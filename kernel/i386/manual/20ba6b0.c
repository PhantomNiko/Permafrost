#include "functions.h"



#undef DAT_021468f8
#undef DAT_021468fc
#undef DAT_021468ff
#undef DAT_02146970
#undef DAT_0214b320
#undef DAT_0214bc20
#undef DAT_022452bc
#undef DAT_022452d0

#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef str_020d59ab
#define str_020d59ab (*(char (*)[1])(0x20d59abU))
#undef str_020d59d1
#define str_020d59d1 (*(char (*)[1])(0x20d59d1U))
#undef str_020d59ec
#define str_020d59ec (*(char (*)[1])(0x20d59ecU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x20ba6b0
 */

void recovered_20ba6b0(void)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;

  uVar2 = recovered_2006ec0();
  uVar3 = 0;
  if (CONCAT31(extraout_var,uVar2) < 0x20) {
    uVar3 = CONCAT31(extraout_var,uVar2);
  }
  (&DAT_0214b364)[uVar3 * 0x12] = uVar3;
  iVar1 = (&DAT_0214b320)[uVar3 * 0x12];
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x6c);
    uVar4 = *(undefined4 *)(iVar1 + 0x10);
    uVar3 = iVar1 + 0x78U;
    recovered_2030300(str_020d59ab,(char)uVar4);
    if (*(code **)(iVar1 + 0x6c) == (code *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = (**(code **)(iVar1 + 0x6c))(*(undefined4 *)(iVar1 + 0x70),uVar4,uVar3,uVar5);
    }
    *(uint *)(iVar1 + 0x14) = uVar3;
    *(undefined1 *)(iVar1 + 2) = 1;
    recovered_2030300(str_020d59d1,(char)*(undefined4 *)(iVar1 + 0x10));
    if (*(char *)(iVar1 + 4) == '\x01') {
      pf_varargs_202ce90__4__4_(str_020d59ec,iVar1 + 0x78U,uVar3);
    }
  }
  recovered_2039960(1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}
