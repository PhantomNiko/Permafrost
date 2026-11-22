/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a25e3 (*(uint8_t *)(0x20ec4d3U))
#define auStack_84 (*(undefined1 (*)[4])(frame + 44))
#define local_19 (*(undefined1 *)(frame + 151))
#define local_1d (*(undefined1 (*)[4])(frame + 147))
#define local_21 (*(undefined1 (*)[4])(frame + 143))
#define local_25 (*(undefined1 (*)[4])(frame + 139))
#define local_28 (*(undefined1 *)(frame + 136))
#define local_58 (*(byte (*)[8])(frame + 88))
#define local_88 (*(undefined4 *)(frame + 40))
#define local_98 (*(uint (*)[4])(frame + 24))
#define str_020a39d7 (*(char (*)[1])(0x20fcec0U))
#define uStack_50 (*(undefined8 *)(frame + 96))
#define uStack_60 (*(undefined8 *)(frame + 80))
#define uStack_70 (*(undefined8 *)(frame + 64))
#define uStack_80 (*(undefined8 *)(frame + 48))
uint recovered_2053500(char *param_1)

{
  unsigned char frame[208] __attribute__((aligned(16))) = {0};

  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  uchar uVar5;
  uint in_EAX = 0;
  uint uVar6;
  long lVar7;
  byte *pbVar8;

  if (param_1 != (char *)0x0) {
    *param_1 = '\0';
    uVar5 = recovered_2013820(-0x80000000,0,local_98);
    if (((uVar5 != '\0') && (0x80000003 < local_98[0])) &&
       (uVar5 = recovered_2013820(-0x7ffffffe,0,(undefined4 *)local_58), uVar5 != '\0')) {
      uStack_80 = uStack_50;
      uVar5 = recovered_2013820(-0x7ffffffd,0,(undefined4 *)local_58);
      if (uVar5 != '\0') {
        uStack_70 = uStack_50;
        uVar5 = recovered_2013820(-0x7ffffffc,0,(undefined4 *)local_58);
        if (uVar5 != '\0') {
          uStack_60 = uStack_50;
          recovered_2001410(local_58,&local_88,0x30);
          local_28 = 0;
          if (local_58[0] == 0) {
            lVar7 = 0;
          }
          else {
            pbVar8 = local_58;
            lVar7 = 0;
            bVar2 = 0;
            bVar3 = 0;
            bVar1 = local_58[0];
            do {
              pbVar8 = pbVar8 + 1;
              bVar4 = bVar3;
              if ((4 < bVar1 - 9) && (bVar1 != 0x20)) {
                if ((bool)(lVar7 != 0 & bVar2)) {
                  local_58[lVar7] = 0x20;
                  lVar7 = lVar7 + 1;
                  bVar2 = 0;
                }
                local_58[lVar7] = bVar1;
                lVar7 = lVar7 + 1;
                bVar3 = 1;
                bVar4 = bVar2;
              }
              bVar2 = bVar4;
              bVar1 = *pbVar8;
            } while (bVar1 != 0);
          }
          local_58[lVar7] = 0;
          if (local_58[0] != 0) {
            uVar6 = pf_varargs_20039e0__8_(param_1,0x60,&DAT_020a25e3,(ulonglong)local_58);
            return uVar6;
          }
        }
      }
    }
    uVar5 = recovered_2013820(0,0,&local_88);
    if (uVar5 != '\0') {
      recovered_2001410(local_25,auStack_84,4);
      recovered_2001410(local_21,(void *)((long)&uStack_80 + 4),4);
      recovered_2001410(local_1d,&uStack_80,4);
      local_19 = 0;
      uVar6 = pf_varargs_20039e0__8_(param_1,0x60,&DAT_020a25e3,(ulonglong)local_25);
      if (*param_1 != '\0') {
        return uVar6;
      }
    }
    in_EAX = pf_varargs_20039e0___(param_1,0x60,str_020a39d7);
  }
  return in_EAX;
}
