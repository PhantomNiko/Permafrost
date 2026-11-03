#include "functions.h"
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef DAT_00061d4c
#define DAT_00061d4c (*(uint8_t *)(0x61d4cU))
#undef DAT_00061d4e
#define DAT_00061d4e (*(byte *)(0x61d4eU))
#undef DAT_00061d4f
#define DAT_00061d4f (*(byte *)(0x61d4fU))
#undef DAT_00061d50
#define DAT_00061d50 (*(byte *)(0x61d50U))
#undef DAT_00061d51
#define DAT_00061d51 (*(byte *)(0x61d51U))
#undef DAT_00061d52
#define DAT_00061d52 (*(byte *)(0x61d52U))
#undef DAT_00061d53
#define DAT_00061d53 (*(uint8_t *)(0x61d53U))
#undef DAT_00061e44
#define DAT_00061e44 (*(void * *)(0x61e44U))
#undef _DAT_00061d4c
#define _DAT_00061d4c (*(uint16_t *)(0x61d4cU))
#undef str_000576f8
#define str_000576f8 (*(char (*)[1])(0x576f8U))
#undef str_0005770b
#define str_0005770b (*(char (*)[1])(0x5770bU))
#undef str_00057724
#define str_00057724 (*(char (*)[1])(0x57724U))
#undef str_0005773e
#define str_0005773e (*(char (*)[1])(0x5773eU))
#undef str_00057756
#define str_00057756 (*(char (*)[1])(0x57756U))
#undef str_00057773
#define str_00057773 (*(char (*)[1])(0x57773U))
#undef str_0005779b
#define str_0005779b (*(char (*)[1])(0x5779bU))
#undef str_000577cb
#define str_000577cb (*(char (*)[1])(0x577cbU))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x36ecc
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 recovered_36ecc(int param_1,uint param_2,byte param_3,byte param_4,byte param_5,byte param_6,
               byte param_7,undefined1 *param_8,char *param_9)

{
  unsigned char frame[84] = {0};

  int iVar1;
  void *pvVar2;
  undefined1 *puVar3;

  if (param_1 == 0 || param_2 == 0) {
    format = str_000576f8;
  }
  else if ((byte)(param_3 - 0x21) < 0xe0) {
    format = str_0005770b;
  }
  else if ((byte)(param_4 - 0x21) < 0xe0) {
    format = str_00057724;
  }
  else if (param_7 == 0) {
    format = str_0005773e;
  }
  else if ((uint)param_5 < param_3 + 7 >> 3) {
    format = str_00057756;
  }
  else if ((uint)param_6 + (uint)param_7 < 0x101) {
    iVar1 = (uint)param_5 * (uint)param_4;
    if ((iVar1 == 0) || (iVar1 * (uint)param_7 != param_2)) {
      format = str_0005779b;
    }
    else {
      pvVar2 = recovered_211fa(param_2);
      if (pvVar2 != (void *)0x0) {
        recovered_21348((int)pvVar2,param_1,param_2);
        recovered_37039();
        _DAT_00061d4c = 0x101;
        DAT_00061d4e = param_6;
        DAT_00061d4f = param_7;
        DAT_00061d50 = param_3;
        DAT_00061d51 = param_4;
        DAT_00061d52 = param_5;
        puVar3 = &DAT_00057364;
        if (param_8 != (undefined1 *)0x0) {
          puVar3 = param_8;
        }
        DAT_00061e44 = pvVar2;
        iVar1 = recovered_22362(&DAT_00061d53,0xf1,&DAT_00057391,puVar3);
        return CONCAT31((int3)((uint)iVar1 >> 8),1);
      }
      format = str_000577cb;
    }
  }
  else {
    format = str_00057773;
  }
  recovered_22362(param_9,0x80,format);
  return 0;
}
