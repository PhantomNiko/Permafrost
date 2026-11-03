#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_00048638
#define DAT_00048638 (*(uint8_t *)(0x48638U))
#undef DAT_000524c0
#define DAT_000524c0 (*(uint8_t *)(0x524c0U))
#undef DAT_000524c2
#define DAT_000524c2 (*(byte *)(0x524c2U))
#undef DAT_000524c3
#define DAT_000524c3 (*(byte *)(0x524c3U))
#undef DAT_000524c4
#define DAT_000524c4 (*(byte *)(0x524c4U))
#undef DAT_000524c5
#define DAT_000524c5 (*(byte *)(0x524c5U))
#undef DAT_000524c6
#define DAT_000524c6 (*(byte *)(0x524c6U))
#undef DAT_000524c7
#define DAT_000524c7 (*(uint8_t *)(0x524c7U))
#undef DAT_000525b8
#define DAT_000525b8 (*(void * *)(0x525b8U))
#undef _DAT_000524c0
#define _DAT_000524c0 (*(uint16_t *)(0x524c0U))
#undef str_00048687
#define str_00048687 (*(char (*)[1])(0x48687U))
#undef str_0004869a
#define str_0004869a (*(char (*)[1])(0x4869aU))
#undef str_000486b3
#define str_000486b3 (*(char (*)[1])(0x486b3U))
#undef str_000486cd
#define str_000486cd (*(char (*)[1])(0x486cdU))
#undef str_000486e5
#define str_000486e5 (*(char (*)[1])(0x486e5U))
#undef str_00048702
#define str_00048702 (*(char (*)[1])(0x48702U))
#undef str_0004872a
#define str_0004872a (*(char (*)[1])(0x4872aU))
#undef str_0004875a
#define str_0004875a (*(char (*)[1])(0x4875aU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x293b3
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_293b3(int param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6,
               byte param_7,undefined1 *param_8,char *param_9)

{
  unsigned char frame[84];

  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;

  if (param_1 == 0 || param_2 == 0) {
    format = str_00048687;
  }
  else if ((byte)(param_3 - 0x21) < 0xe0) {
    format = str_0004869a;
  }
  else if ((byte)(param_4 - 0x21) < 0xe0) {
    format = str_000486b3;
  }
  else if (param_7 == 0) {
    format = str_000486cd;
  }
  else if ((uint)param_5 < param_3 + 7 >> 3) {
    format = str_000486e5;
  }
  else if ((uint)param_6 + (uint)param_7 < 0x101) {
    iVar1 = (uint)param_5 * (uint)param_4;
    if ((iVar1 == 0) || (iVar1 * (uint)param_7 != param_2)) {
      format = str_0004872a;
    }
    else {
      pvVar2 = recovered_211fa(param_2);
      if (pvVar2 != (void *)0x0) {
        recovered_21348((int)pvVar2,param_1,param_2);
        recovered_29520();
        _DAT_000524c0 = 0x101;
        DAT_000524c2 = param_6;
        DAT_000524c3 = param_7;
        DAT_000524c4 = param_3;
        DAT_000524c5 = param_4;
        DAT_000524c6 = param_5;
        puVar3 = &DAT_0004851c;
        if (param_8 != (undefined1 *)0x0) {
          puVar3 = param_8;
        }
        DAT_000525b8 = pvVar2;
        iVar1 = recovered_21de7(&DAT_000524c7,0xf1,&DAT_00048638,puVar3);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      format = str_0004875a;
    }
  }
  else {
    format = str_00048702;
  }
  recovered_21de7(param_9,0x80,format);
  return 0;
}
