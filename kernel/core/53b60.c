#include "functions.h"
#undef DAT_000572e0
#define DAT_000572e0 (*(uint32_t *)(0x572e0U))
#undef DAT_000572e4
#define DAT_000572e4 (*(uint32_t *)(0x572e4U))
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef str_00057c78
#define str_00057c78 (*(char (*)[1])(0x57c78U))
#define local_21e (*(char (*)[241])(frame + 257))
#define local_12d (*(char (*)[241])(frame + 498))
#define local_3c (*(int (*)[4])(frame + 739))
#define local_2c (*(int *)(frame + 755))
#define local_28 (*(int *)(frame + 759))
#define local_24 (*(uint *)(frame + 763))
#define local_20 (*(int *)(frame + 767))
#define local_1c (*(int *)(frame + 771))
#define local_18 (*(uint *)(frame + 775))
#define local_14 (*(uint *)(frame + 779))
#define local_30f (*(undefined1 (*)[241])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x53b60
 */

uint recovered_53b60(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
               uint param_7,int param_8,uint param_9,char *param_10)

{
  unsigned char frame[831] = {0};

  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  int iVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;

  uVar4 = 0;
  if (param_8 != 0) {
    local_12d[0] = '\0';
    local_28 = param_7 - 1;
    iVar11 = param_8;
    local_20 = param_2;
    local_1c = param_1;
    while (local_18 = uVar4 + 0x20, local_18 <= param_9) {
      if (*(char *)(param_8 + uVar4) == -0x1b) {
LAB_00053cf0:
        local_12d[0] = '\0';
      }
      else {
        if (*(char *)(param_8 + uVar4) == '\0') break;
        bVar1 = *(byte *)(param_8 + 0xb + uVar4);
        if (bVar1 == 0xf) {
          uVar4 = 0;
          iVar8 = 0;
          while (iVar8 != 3) {
            uVar6 = (&DAT_000572e4)[iVar8 * 2];
            local_2c = iVar8;
            local_14 = uVar6;
            for (uVar9 = (&DAT_000572e0)[iVar8 * 2]; uVar9 < uVar6; uVar9 = uVar9 + 2) {
              uVar3 = *(ushort *)(iVar11 + uVar9);
              uVar10 = uVar4;
              if (uVar3 != 0xffff) {
                if ((uVar3 == 0) || (uVar10 = uVar4 + 1, 0xd < uVar10)) goto LAB_00053d02;
                if (0xff < uVar3) {
                  uVar3 = 0x3f;
                }
                *(char *)((int)local_3c + uVar4) = (char)uVar3;
                uVar6 = local_14;
              }
              uVar4 = uVar10;
            }
            iVar8 = local_2c + 1;
          }
LAB_00053d02:
          *(undefined1 *)((int)local_3c + uVar4) = 0;
          iVar8 = recovered_214de((int)local_12d);
          if (0xf0 < iVar8 + uVar4) {
            return 0;
          }
          recovered_21369((uint)(local_12d + uVar4),(uint)local_12d,iVar8 + 1);
          recovered_21348((int)local_12d,(int)local_3c,uVar4);
        }
        else {
          if ((bVar1 & 8) != 0) goto LAB_00053cf0;
          iVar8 = uVar4 + param_8;
          local_14 = (uint)bVar1;
          recovered_39da9(iVar8,(int)local_30f);
          if (local_12d[0] == '\0') {
            recovered_22362(local_12d,0xf1,&DAT_00057391,local_30f);
          }
          iVar5 = recovered_214f9((int)local_12d,0x57362);
          if ((iVar5 == 0) || (iVar5 = recovered_214f9((int)local_12d,0x57c14), iVar5 == 0)) {
            local_12d[0] = '\0';
            goto LAB_00053e94;
          }
          if ((param_10 == (char *)0x0) || (*param_10 == '\0')) {
            recovered_22362(local_21e,0xf1,&DAT_00057391,local_12d);
          }
          else {
            recovered_22362(local_21e,0xf1,str_00057c78,param_10,local_12d);
          }
          uVar9 = CONCAT22(*(undefined2 *)(iVar8 + 0x14),*(undefined2 *)(iVar8 + 0x1a));
          uVar4 = local_14 & 1;
          if ((local_14 & 0x10) == 0) {
            iVar8 = *(int *)(iVar8 + 0x1c);
            if (iVar8 == 0) {
              uVar6 = 0;
            }
            else {
              uVar6 = (uint)(local_28 + iVar8) / param_7;
            }
            local_14 = uVar9;
            uVar7 = recovered_39f65((int)local_21e,0,iVar8,uVar4,uVar9,uVar6);
            cVar2 = (char)uVar7;
joined_r0x00053e61:
            if (cVar2 == '\0') {
              return 0;
            }
          }
          else {
            local_3c[0] = 0;
            local_24 = 0;
            uVar7 = recovered_39f65((int)local_21e,0,0,uVar4 | 2,uVar9,0);
            if ((char)uVar7 == '\0') {
              return 0;
            }
            if (1 < uVar9) {
              uVar7 = recovered_388cc(local_1c,local_20,param_3,param_4,param_5,param_6,param_7,
                                      uVar9,local_3c,&local_24);
              if ((char)uVar7 == '\0') {
                return 0;
              }
              uVar4 = recovered_53b60(local_1c,local_20,param_3,param_4,param_5,param_6,param_7,
                                      local_3c[0],local_24,local_21e);
              recovered_21203(local_3c[0]);
              cVar2 = (char)uVar4;
              goto joined_r0x00053e61;
            }
          }
          local_12d[0] = '\0';
        }
      }
LAB_00053e94:
      iVar11 = iVar11 + 0x20;
      uVar4 = local_18;
    }
    uVar4 = CONCAT31((int3)(local_18 >> 8),1);
  }
  return uVar4;
}
