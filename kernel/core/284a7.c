#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00042730
#define DAT_00042730 (*(uint8_t *)(0x42730U))
#undef DAT_0004b4a0
#define DAT_0004b4a0 (*(uint8_t *)(0x4b4a0U))
#undef DAT_0004b4a2
#define DAT_0004b4a2 (*(byte *)(0x4b4a2U))
#undef DAT_0004b4a3
#define DAT_0004b4a3 (*(byte *)(0x4b4a3U))
#undef DAT_0004b4a4
#define DAT_0004b4a4 (*(byte *)(0x4b4a4U))
#undef DAT_0004b4a5
#define DAT_0004b4a5 (*(byte *)(0x4b4a5U))
#undef DAT_0004b4a6
#define DAT_0004b4a6 (*(byte *)(0x4b4a6U))
#undef DAT_0004b4a7
#define DAT_0004b4a7 (*(uint8_t *)(0x4b4a7U))
#undef DAT_0004b598
#define DAT_0004b598 (*(void * *)(0x4b598U))
#undef _DAT_0004b4a0
#define _DAT_0004b4a0 (*(uint16_t *)(0x4b4a0U))
#undef str_0004277f
#define str_0004277f (*(char (*)[1])(0x4277fU))
#undef str_00042792
#define str_00042792 (*(char (*)[1])(0x42792U))
#undef str_000427ab
#define str_000427ab (*(char (*)[1])(0x427abU))
#undef str_000427c5
#define str_000427c5 (*(char (*)[1])(0x427c5U))
#undef str_000427dd
#define str_000427dd (*(char (*)[1])(0x427ddU))
#undef str_000427fa
#define str_000427fa (*(char (*)[1])(0x427faU))
#undef str_00042822
#define str_00042822 (*(char (*)[1])(0x42822U))
#undef str_00042852
#define str_00042852 (*(char (*)[1])(0x42852U))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x284a7
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_284a7(int param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6,
               byte param_7,undefined1 *param_8,char *param_9)

{
  unsigned char frame[84];

  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;

  if (param_1 == 0 || param_2 == 0) {
    format = str_0004277f;
  }
  else if ((byte)(param_3 - 0x21) < 0xe0) {
    format = str_00042792;
  }
  else if ((byte)(param_4 - 0x21) < 0xe0) {
    format = str_000427ab;
  }
  else if (param_7 == 0) {
    format = str_000427c5;
  }
  else if ((uint)param_5 < param_3 + 7 >> 3) {
    format = str_000427dd;
  }
  else if ((uint)param_6 + (uint)param_7 < 0x101) {
    iVar1 = (uint)param_5 * (uint)param_4;
    if ((iVar1 == 0) || (iVar1 * (uint)param_7 != param_2)) {
      format = str_00042822;
    }
    else {
      pvVar2 = recovered_20df4(param_2);
      if (pvVar2 != (void *)0x0) {
        recovered_20f42((int)pvVar2,param_1,param_2);
        recovered_28614();
        _DAT_0004b4a0 = 0x101;
        DAT_0004b4a2 = param_6;
        DAT_0004b4a3 = param_7;
        DAT_0004b4a4 = param_3;
        DAT_0004b4a5 = param_4;
        DAT_0004b4a6 = param_5;
        puVar3 = &DAT_00042614;
        if (param_8 != (undefined1 *)0x0) {
          puVar3 = param_8;
        }
        DAT_0004b598 = pvVar2;
        iVar1 = recovered_219e1(&DAT_0004b4a7,0xf1,&DAT_00042730,puVar3);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      format = str_00042852;
    }
  }
  else {
    format = str_000427fa;
  }
  recovered_219e1(param_9,0x80,format);
  return 0;
}
