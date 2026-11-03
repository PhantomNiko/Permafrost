#include "functions.h"
#undef DAT_0003f1d4
#define DAT_0003f1d4 (*(uint32_t *)(0x3f1d4U))
#undef DAT_0003f1d8
#define DAT_0003f1d8 (*(uint32_t *)(0x3f1d8U))
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#undef str_0003f8a6
#define str_0003f8a6 (*(char (*)[1])(0x3f8a6U))
#define local_30b (*(undefined1 (*)[241])(frame + 16))
#define local_21a (*(char (*)[241])(frame + 257))
#define local_129 (*(char (*)[241])(frame + 498))
#define local_38 (*(int *)(frame + 739))
#define local_34 (*(int (*)[4])(frame + 743))
#define local_24 (*(int *)(frame + 759))
#define local_20 (*(int *)(frame + 763))
#define local_1c (*(uint *)(frame + 767))
#define local_18 (*(uint *)(frame + 771))
#define local_14 (*(uint *)(frame + 775))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3d83c
 */

uint recovered_3d83c(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,int param_7
               ,int param_8,uint param_9,char *param_10)

{
  unsigned char frame[827];

  byte bVar1;
  char cVar2;
  ushort uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  
  uVar4 = 0;
  if (param_8 != 0) {
    local_129[0] = '\0';
    iVar10 = param_8;
    local_24 = param_2;
    local_20 = param_1;
    while (local_1c = uVar4 + 0x20, local_1c <= param_9) {
      if (*(char *)(param_8 + uVar4) == -0x1b) {
LAB_0003d9ca:
        local_129[0] = '\0';
      }
      else {
        if (*(char *)(param_8 + uVar4) == '\0') break;
        bVar1 = *(byte *)(param_8 + 0xb + uVar4);
        if (bVar1 == 0xf) {
          uVar4 = 0;
          iVar6 = 0;
          while( true ) {
            if (iVar6 == 3) break;
            uVar9 = (&DAT_0003f1d8)[iVar6 * 2];
            local_14 = uVar9;
            for (uVar8 = (&DAT_0003f1d4)[iVar6 * 2]; local_38 = iVar6, uVar8 < uVar9;
                uVar8 = uVar8 + 2) {
              uVar3 = *(ushort *)(iVar10 + uVar8);
              uVar11 = uVar4;
              if (uVar3 != 0xffff) {
                if ((uVar3 == 0) || (uVar11 = uVar4 + 1, 0xd < uVar11)) goto LAB_0003d9dc;
                if (0xff < uVar3) {
                  uVar3 = 0x3f;
                }
                *(char *)((int)local_34 + uVar4) = (char)uVar3;
                uVar9 = local_14;
              }
              uVar4 = uVar11;
            }
            iVar6 = iVar6 + 1;
          }
LAB_0003d9dc:
          *(undefined1 *)((int)local_34 + uVar4) = 0;
          iVar6 = recovered_20ff4((int)local_129);
          if (0xf0 < iVar6 + uVar4) {
            return 0;
          }
          recovered_20f63((uint)(local_129 + uVar4),(uint)local_129,iVar6 + 1);
          recovered_20f42((int)local_129,(int)local_34,uVar4);
        }
        else {
          if ((bVar1 & 8) != 0) goto LAB_0003d9ca;
          iVar6 = uVar4 + param_8;
          local_14 = (uint)bVar1;
          recovered_28347(iVar6,(int)local_30b);
          if (local_129[0] == '\0') {
            recovered_219e1(local_129,0xf1,&DAT_0003f336,local_30b);
          }
          iVar5 = recovered_2100f((int)local_129,0x3f252);
          if ((iVar5 != 0) && (iVar5 = recovered_2100f((int)local_129,0x3f348), iVar5 != 0)) {
            if ((param_10 == (char *)0x0) || (*param_10 == '\0')) {
              recovered_219e1(local_21a,0xf1,&DAT_0003f336,local_129);
            }
            else {
              recovered_219e1(local_21a,0xf1,str_0003f8a6,param_10,local_129);
            }
            uVar8 = CONCAT22(*(undefined2 *)(iVar6 + 0x14),*(undefined2 *)(iVar6 + 0x1a));
            uVar4 = local_14 & 1;
            if ((local_14 & 0x10) == 0) {
              uVar9 = *(uint *)(iVar6 + 0x1c);
              local_34[0] = 0;
              local_18 = 0;
              local_14 = uVar4;
              if (uVar9 != 0) {
                uVar7 = recovered_3d721(local_20,local_24,param_3,param_4,param_5,param_6,param_7,
                                        uVar8,local_34,(int *)&local_18);
                if ((char)uVar7 == '\0') {
                  return 0;
                }
                if (local_18 < uVar9) {
                  recovered_20dfd(local_34[0]);
                  return 0;
                }
              }
              uVar7 = recovered_3dbfa((int)local_21a,local_34[0],uVar9,local_14);
              cVar2 = (char)uVar7;
            }
            else {
              local_34[0] = 0;
              local_18 = 0;
              uVar7 = recovered_3dbfa((int)local_21a,0,0,uVar4 | 2);
              if ((char)uVar7 == '\0') {
                return 0;
              }
              if (uVar8 < 2) goto LAB_0003db6e;
              uVar7 = recovered_3d721(local_20,local_24,param_3,param_4,param_5,param_6,param_7,
                                      uVar8,local_34,(int *)&local_18);
              if ((char)uVar7 == '\0') {
                return 0;
              }
              uVar4 = recovered_3d83c(local_20,local_24,param_3,param_4,param_5,param_6,param_7,
                                      local_34[0],local_18,local_21a);
              recovered_20dfd(local_34[0]);
              cVar2 = (char)uVar4;
            }
            if (cVar2 == '\0') {
              return 0;
            }
          }
LAB_0003db6e:
          local_129[0] = '\0';
        }
      }
      iVar10 = iVar10 + 0x20;
      uVar4 = local_1c;
    }
    uVar4 = CONCAT31((int3)(local_1c >> 8),1);
  }
  return uVar4;
}

