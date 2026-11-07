/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_4044fd1d (*(uint8_t *)(0x82479be3U))
#define DAT_4044fd28 (*(uint8_t *)(0x82479beeU))
#define auStack_78 (*(ulong (*)[2])(frame + 24))
#define puStack_68 (*(undefined8 * *)(frame + 40))
#define str_4044fd21 (*(char (*)[1])(0x82479be7U))
#define str_4044fd2d (*(char (*)[1])(0x82479bf3U))
bool recovered_8244e8ac(long param_1,ulong param_2,ulong param_3,ulong *param_4,undefined1 *param_5)

{
  unsigned char frame[176] __attribute__((aligned(16))) = {0};

  long lVar1;
  bool bVar2;
  undefined8 uVar3;
  undefined1 uVar4;
  long lVar5;
  byte *pbVar6;

  lVar5 = 0;
  do {
    if (param_2 <= param_3) {
LAB_40430db4:
      return param_3 < param_2;
    }
    uVar3 = recovered_8244c9fc(*(long *)(param_1 + param_3 * 8),auStack_78);
    if (((int)uVar3 != 0) && (auStack_78[0] != 0)) {
      uVar3 = recovered_8246b2ec((long *)auStack_78);
      if ((int)uVar3 == 0) {
        pbVar6 = (byte *)*puStack_68;
        bVar2 = recovered_8244ccd4(pbVar6,&DAT_4044fd1d);
        if (bVar2) {
          if (lVar5 == 0) {
            uVar4 = 0;
            goto LAB_40430da8;
          }
          recovered_8244cc8c(auStack_78);
          lVar5 = lVar5 + -1;
        }
        else {
          bVar2 = recovered_8244ccd4(pbVar6,(byte *)str_4044fd2d);
          if (bVar2) {
            recovered_8244cc8c(auStack_78);
            bVar2 = lVar5 != 0;
            lVar1 = lVar5 + -1;
            lVar5 = 0;
            if (bVar2) {
              lVar5 = lVar1;
            }
          }
          else {
            if (lVar5 == 0) {
              bVar2 = recovered_8244ccd4(pbVar6,(byte *)str_4044fd21);
              if (bVar2) {
                uVar4 = 1;
              }
              else {
                bVar2 = recovered_8244ccd4(pbVar6,&DAT_4044fd28);
                if (!bVar2) goto LAB_40430d98;
                uVar4 = 2;
              }
LAB_40430da8:
              recovered_8244cc8c(auStack_78);
              *param_4 = param_3;
              *param_5 = uVar4;
              goto LAB_40430db4;
            }
LAB_40430d98:
            recovered_8244cc8c(auStack_78);
          }
        }
      }
      else {
        recovered_8244cc8c(auStack_78);
        lVar5 = lVar5 + 1;
      }
    }
    param_3 = param_3 + 1;
  } while( true );
}
