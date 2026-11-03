#include "functions.h"
#undef DAT_000461f4
#define DAT_000461f4 (*(uint32_t *)(0x461f4U))
#undef DAT_000461f8
#define DAT_000461f8 (*(uint32_t *)(0x461f8U))
#undef DAT_00046398
#define DAT_00046398 (*(uint8_t *)(0x46398U))
#undef str_000469a4
#define str_000469a4 (*(char (*)[1])(0x469a4U))
#define local_317 (*(undefined1 (*)[241])(frame + 16))
#define local_226 (*(char (*)[241])(frame + 257))
#define local_135 (*(char (*)[241])(frame + 498))
#define local_44 (*(int *)(frame + 739))
#define local_40 (*(uint *)(frame + 743))
#define local_3c (*(int (*)[4])(frame + 747))
#define local_2c (*(int *)(frame + 763))
#define local_28 (*(uint *)(frame + 767))
#define local_24 (*(int *)(frame + 771))
#define local_20 (*(int *)(frame + 775))
#define local_1c (*(uint *)(frame + 779))
#define local_18 (*(uint *)(frame + 783))
#define local_14 (*(uint *)(frame + 787))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x43b75
 */

uint recovered_43b75(int param_1,int param_2,int param_3,uint param_4,int param_5,int param_6,
               uint param_7,int param_8,uint param_9,char *param_10)

{
  unsigned char frame[839];

  byte bVar1;
  uint uVar2;
  char cVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;

  uVar5 = 0;
  if (param_8 != 0) {
    local_135[0] = '\0';
    local_44 = param_7 - 1;
    local_2c = param_8;
    local_24 = param_2;
    local_20 = param_1;
    while (local_1c = uVar5 + 0x20, local_1c <= param_9) {
      if (*(char *)(param_8 + uVar5) == -0x1b) {
LAB_00043cf7:
        local_135[0] = '\0';
      }
      else {
        if (*(char *)(param_8 + uVar5) == '\0') break;
        bVar1 = *(byte *)(param_8 + 0xb + uVar5);
        if (bVar1 == 0xf) {
          uVar5 = 0;
          uVar10 = 0;
          while (uVar10 != 3) {
            uVar2 = (&DAT_000461f8)[uVar10 * 2];
            local_14 = uVar10;
            for (uVar9 = (&DAT_000461f4)[uVar10 * 2]; uVar9 < uVar2; uVar9 = uVar9 + 2) {
              uVar4 = *(ushort *)(local_2c + uVar9);
              uVar10 = uVar5;
              if (uVar4 != 0xffff) {
                if ((uVar4 == 0) || (uVar10 = uVar5 + 1, 0xd < uVar10)) goto LAB_00043d03;
                if (0xff < uVar4) {
                  uVar4 = 0x3f;
                }
                *(char *)((int)local_3c + uVar5) = (char)uVar4;
              }
              uVar5 = uVar10;
            }
            uVar10 = local_14 + 1;
          }
LAB_00043d03:
          *(undefined1 *)((int)local_3c + uVar5) = 0;
          iVar7 = recovered_213fa((int)local_135);
          if (0xf0 < iVar7 + uVar5) {
            return 0;
          }
          recovered_21369((uint)(local_135 + uVar5),(uint)local_135,iVar7 + 1);
          recovered_21348((int)local_135,(int)local_3c,uVar5);
        }
        else {
          if ((bVar1 & 8) != 0) goto LAB_00043cf7;
          iVar7 = uVar5 + param_8;
          local_14 = (uint)bVar1;
          recovered_2bbb3(iVar7,(int)local_317);
          if (local_135[0] == '\0') {
            recovered_21de7(local_135,0xf1,&DAT_00046398,local_317);
          }
          iVar6 = recovered_21415((int)local_135,0x4627a);
          if ((iVar6 != 0) && (iVar6 = recovered_21415((int)local_135,0x46940), iVar6 != 0)) {
            if ((param_10 == (char *)0x0) || (*param_10 == '\0')) {
              recovered_21de7(local_226,0xf1,&DAT_00046398,local_135);
            }
            else {
              recovered_21de7(local_226,0xf1,str_000469a4,param_10,local_135);
            }
            uVar10 = CONCAT22(*(undefined2 *)(iVar7 + 0x14),*(undefined2 *)(iVar7 + 0x1a));
            uVar5 = local_14 & 1;
            if ((local_14 & 0x10) == 0) {
              uVar9 = *(uint *)(iVar7 + 0x1c);
              local_3c[0] = 0;
              local_18 = 0;
              local_14 = uVar5;
              if (uVar9 == 0) {
                local_28 = 0;
              }
              else {
                local_40 = uVar9;
                uVar8 = recovered_43a54(local_20,local_24,param_3,param_4,param_5,param_6,param_7,
                                        uVar10,local_3c,&local_18);
                if ((char)uVar8 == '\0') {
                  return 0;
                }
                if (local_18 < local_40) {
                  recovered_21203(local_3c[0]);
                  return 0;
                }
                local_28 = (local_44 + local_40) / param_7;
                uVar9 = local_40;
              }
              uVar8 = recovered_2be9f((int)local_226,local_3c[0],uVar9,local_14,uVar10,local_28);
              cVar3 = (char)uVar8;
            }
            else {
              local_3c[0] = 0;
              local_18 = 0;
              uVar8 = recovered_2be9f((int)local_226,0,0,uVar5 | 2,uVar10,0);
              if ((char)uVar8 == '\0') {
                return 0;
              }
              if (uVar10 < 2) goto LAB_00043ec1;
              uVar8 = recovered_43a54(local_20,local_24,param_3,param_4,param_5,param_6,param_7,
                                      uVar10,local_3c,&local_18);
              if ((char)uVar8 == '\0') {
                return 0;
              }
              uVar5 = recovered_43b75(local_20,local_24,param_3,param_4,param_5,param_6,param_7,
                                      local_3c[0],local_18,local_226);
              recovered_21203(local_3c[0]);
              cVar3 = (char)uVar5;
            }
            if (cVar3 == '\0') {
              return 0;
            }
          }
LAB_00043ec1:
          local_135[0] = '\0';
        }
      }
      local_2c = local_2c + 0x20;
      uVar5 = local_1c;
    }
    uVar5 = CONCAT31((int3)(local_1c >> 8),1);
  }
  return uVar5;
}
