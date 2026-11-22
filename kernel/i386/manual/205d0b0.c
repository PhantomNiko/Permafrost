#include "functions.h"



#undef DAT_020c5119
#undef str_020c693f
#undef str_020c695a
#undef vararg0
#undef local_20
#undef local_1c
#undef local_18
#undef local_14

#undef DAT_0214b320
#define DAT_0214b320 (*(uint32_t volatile *)(0x214b320U))
#undef DAT_0214b364
#define DAT_0214b364 (*(uint32_t volatile *)(0x214b364U))
#undef str_020c6912
#define str_020c6912 (*(char (*)[1])(0x20c6912U))
#define local_410 (*(uchar (*)[1024])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x205d0b0
 */

void recovered_205d0b0(void)

{
  unsigned char frame[1088] __attribute__((aligned(16))) = {0};

  int iVar1;
  uchar uVar2;
  undefined3 extraout_var = 0;
  uint uVar3;
  uchar *puVar5;
  uchar *puVar4;

  uVar2 = recovered_2006ec0();
  uVar3 = 0;
  if (CONCAT31(extraout_var,uVar2) < 0x20) {
    uVar3 = CONCAT31(extraout_var,uVar2);
  }
  (&DAT_0214b364)[uVar3 * 0x12] = uVar3;
  iVar1 = (&DAT_0214b320)[uVar3 * 0x12];
  uVar3 = 0;
  puVar5 = (uchar *)str_020c6912;
  while( true ) {
    do {
      puVar4 = puVar5 + 1;
      uVar2 = *puVar5;
      puVar5 = puVar4;
    } while (uVar2 == '\r');
    if (uVar2 == '\0') break;
    if (uVar2 == '\n') {
      recovered_20a11d0(local_410,uVar3,'\x01','\x01');
      uVar3 = 0;
    }
    else if (uVar3 + 1 < 0x400) {
      local_410[uVar3] = uVar2;
      uVar3 = uVar3 + 1;
    }
  }
  recovered_20a11d0(local_410,uVar3,'\x01','\x01');
  if (iVar1 != 0) {
    *(undefined1 *)(iVar1 + 2) = 1;
  }
  recovered_2039960(1);
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}
