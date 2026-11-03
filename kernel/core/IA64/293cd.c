#include "functions.h"
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef DAT_000504c0
#define DAT_000504c0 (*(uint8_t *)(0x504c0U))
#undef DAT_000504c2
#define DAT_000504c2 (*(byte *)(0x504c2U))
#undef DAT_000504c3
#define DAT_000504c3 (*(byte *)(0x504c3U))
#undef DAT_000504c4
#define DAT_000504c4 (*(byte *)(0x504c4U))
#undef DAT_000504c5
#define DAT_000504c5 (*(byte *)(0x504c5U))
#undef DAT_000504c6
#define DAT_000504c6 (*(byte *)(0x504c6U))
#undef DAT_000504c7
#define DAT_000504c7 (*(uint8_t *)(0x504c7U))
#undef DAT_000505b8
#define DAT_000505b8 (*(void * *)(0x505b8U))
#undef _DAT_000504c0
#define _DAT_000504c0 (*(uint16_t *)(0x504c0U))
#undef str_000463e7
#define str_000463e7 (*(char (*)[1])(0x463e7U))
#undef str_000463fa
#define str_000463fa (*(char (*)[1])(0x463faU))
#undef str_00046413
#define str_00046413 (*(char (*)[1])(0x46413U))
#undef str_0004642d
#define str_0004642d (*(char (*)[1])(0x4642dU))
#undef str_00046445
#define str_00046445 (*(char (*)[1])(0x46445U))
#undef str_00046462
#define str_00046462 (*(char (*)[1])(0x46462U))
#undef str_0004648a
#define str_0004648a (*(char (*)[1])(0x4648aU))
#undef str_000464ba
#define str_000464ba (*(char (*)[1])(0x464baU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x293cd
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_293cd(int param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6,
               byte param_7,undefined1 *param_8,char *param_9)

{
  unsigned char frame[84];

  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;

  if (param_1 == 0 || param_2 == 0) {
    format = str_000463e7;
  }
  else if ((byte)(param_3 - 0x21) < 0xe0) {
    format = str_000463fa;
  }
  else if ((byte)(param_4 - 0x21) < 0xe0) {
    format = str_00046413;
  }
  else if (param_7 == 0) {
    format = str_0004642d;
  }
  else if ((uint)param_5 < param_3 + 7 >> 3) {
    format = str_00046445;
  }
  else if ((uint)param_6 + (uint)param_7 < 0x101) {
    iVar1 = (uint)param_5 * (uint)param_4;
    if ((iVar1 == 0) || (iVar1 * (uint)param_7 != param_2)) {
      format = str_0004648a;
    }
    else {
      pvVar2 = recovered_211fa(param_2);
      if (pvVar2 != (void *)0x0) {
        recovered_21348((int)pvVar2,param_1,param_2);
        recovered_2953a();
        _DAT_000504c0 = 0x101;
        DAT_000504c2 = param_6;
        DAT_000504c3 = param_7;
        DAT_000504c4 = param_3;
        DAT_000504c5 = param_4;
        DAT_000504c6 = param_5;
        puVar3 = &DAT_0004627c;
        if (param_8 != (undefined1 *)0x0) {
          puVar3 = param_8;
        }
        DAT_000505b8 = pvVar2;
        iVar1 = recovered_21de7(&DAT_000504c7,0xf1,&DAT_00046398,puVar3);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      format = str_000464ba;
    }
  }
  else {
    format = str_00046462;
  }
  recovered_21de7(param_9,0x80,format);
  return 0;
}
