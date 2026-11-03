#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#undef DAT_00057334
#define DAT_00057334 (*(uint8_t *)(0x57334U))
#undef DAT_00057336
#define DAT_00057336 (*(byte *)(0x57336U))
#undef DAT_00057337
#define DAT_00057337 (*(byte *)(0x57337U))
#undef DAT_00057338
#define DAT_00057338 (*(byte *)(0x57338U))
#undef DAT_00057339
#define DAT_00057339 (*(byte *)(0x57339U))
#undef DAT_0005733a
#define DAT_0005733a (*(byte *)(0x5733aU))
#undef DAT_0005733b
#define DAT_0005733b (*(uint8_t *)(0x5733bU))
#undef DAT_0005742c
#define DAT_0005742c (*(void * *)(0x5742cU))
#undef _DAT_00057334
#define _DAT_00057334 (*(uint16_t *)(0x57334U))
#undef str_0003f388
#define str_0003f388 (*(char (*)[1])(0x3f388U))
#undef str_0003f39b
#define str_0003f39b (*(char (*)[1])(0x3f39bU))
#undef str_0003f3b4
#define str_0003f3b4 (*(char (*)[1])(0x3f3b4U))
#undef str_0003f3ce
#define str_0003f3ce (*(char (*)[1])(0x3f3ceU))
#undef str_0003f3e6
#define str_0003f3e6 (*(char (*)[1])(0x3f3e6U))
#undef str_0003f403
#define str_0003f403 (*(char (*)[1])(0x3f403U))
#undef str_0003f42b
#define str_0003f42b (*(char (*)[1])(0x3f42bU))
#undef str_0003f45b
#define str_0003f45b (*(char (*)[1])(0x3f45bU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x26f53
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_26f53(int param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6,
               byte param_7,undefined1 *param_8,char *param_9)

{
  unsigned char frame[84];

  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;
  
  if (param_1 == 0 || param_2 == 0) {
    format = str_0003f388;
  }
  else if ((byte)(param_3 - 0x21) < 0xe0) {
    format = str_0003f39b;
  }
  else if ((byte)(param_4 - 0x21) < 0xe0) {
    format = str_0003f3b4;
  }
  else if (param_7 == 0) {
    format = str_0003f3ce;
  }
  else if ((uint)param_5 < param_3 + 7 >> 3) {
    format = str_0003f3e6;
  }
  else if ((uint)param_6 + (uint)param_7 < 0x101) {
    iVar1 = (uint)param_5 * (uint)param_4;
    if ((iVar1 == 0) || (iVar1 * (uint)param_7 != param_2)) {
      format = str_0003f42b;
    }
    else {
      pvVar2 = recovered_20df4(param_2);
      if (pvVar2 != (void *)0x0) {
        recovered_20f42((int)pvVar2,param_1,param_2);
        recovered_270c0();
        _DAT_00057334 = 0x101;
        DAT_00057336 = param_6;
        DAT_00057337 = param_7;
        DAT_00057338 = param_3;
        DAT_00057339 = param_4;
        DAT_0005733a = param_5;
        puVar3 = &DAT_0003f254;
        if (param_8 != (undefined1 *)0x0) {
          puVar3 = param_8;
        }
        DAT_0005742c = pvVar2;
        iVar1 = recovered_219e1(&DAT_0005733b,0xf1,&DAT_0003f336,puVar3);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      format = str_0003f45b;
    }
  }
  else {
    format = str_0003f403;
  }
  recovered_219e1(param_9,0x80,format);
  return 0;
}

