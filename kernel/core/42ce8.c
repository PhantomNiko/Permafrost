#include "functions.h"
#undef str_0005c25a
#define str_0005c25a (*(char (*)[1])(0x5c25aU))
#undef str_0005c284
#define str_0005c284 (*(char (*)[1])(0x5c284U))
#undef str_0005c2ac
#define str_0005c2ac (*(char (*)[1])(0x5c2acU))
#undef str_0005c2d1
#define str_0005c2d1 (*(char (*)[1])(0x5c2d1U))
#undef str_0005c2e2
#define str_0005c2e2 (*(char (*)[1])(0x5c2e2U))
#undef str_0005c30a
#define str_0005c30a (*(char (*)[1])(0x5c30aU))
#define local_48 (*(int (*)[9])(frame + 28))
#define local_24 (*(ushort *)(frame + 64))
#define local_20 (*(float *)(frame + 68))
#define local_1c (*(float *)(frame + 72))
#define local_18 (*(float *)(frame + 76))
#define local_14 (*(uint *)(frame + 80))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42ce8
 */

undefined4 recovered_42ce8(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5)

{
  unsigned char frame[132] = {0};

  uint uVar1;
  bool bVar2;
  int iVar3;
  float fVar4;
  void *pvVar5;
  undefined3 extraout_var = 0;
  uint uVar6;
  undefined4 uVar7;
  int *piVar8;
  ushort in_FPUControlWord = pf_fpu_control();
  float10 fVar9;
  double dVar10;

  if (param_5 == (int *)0x0 || (param_4 == (uint *)0x0 || param_3 == (uint *)0x0)) {
LAB_000430f7:
    uVar7 = 0;
  }
  else {
    local_1c = param_1;
    iVar3 = recovered_214f9((int)param_2,0x588d6);
    if (iVar3 == 0) {
      uVar6 = *param_3;
      if ((uVar6 != 3) && (uVar1 = *param_4, uVar1 != 3)) {
        if ((5 < uVar6) ||
           ((((0x26U >> (uVar6 & 0x1f) & 1) == 0 || (5 < uVar1)) ||
            ((0x26U >> (uVar1 & 0x1f) & 1) == 0)))) {
          format = str_0005c284;
          goto LAB_000430f2;
        }
        if (uVar6 != 2 && uVar1 != 2) {
          iVar3 = param_4[1] + param_3[1];
          goto LAB_000431d7;
        }
        fVar9 = recovered_41c28((int *)param_3);
        local_1c = (float)fVar9;
        fVar9 = recovered_41c28((int *)param_4);
        fVar9 = (float10)local_1c + fVar9;
        goto LAB_000432a0;
      }
      local_48[0] = 0;
      local_14 = 0;
      bVar2 = recovered_45ddb((int *)param_3,local_48);
      if ((!bVar2) || (bVar2 = recovered_45ddb((int *)param_4,(int *)&local_14), !bVar2)) {
LAB_000430a4:
        recovered_21203(local_48[0]);
        recovered_21203(local_14);
        format = str_0005c25a;
        goto LAB_000430f2;
      }
      fVar4 = (float)recovered_214de(local_48[0]);
      iVar3 = recovered_214de(local_14);
      local_18 = fVar4;
      pvVar5 = recovered_211fa(iVar3 + (int)fVar4 + 1);
      fVar4 = local_18;
      if (pvVar5 == (void *)0x0) goto LAB_000430a4;
      param_3 = (uint *)(iVar3 + 1);
      recovered_21348((int)pvVar5,local_48[0],(int)local_18);
      recovered_21348((int)pvVar5 + (int)fVar4,local_14,(int)param_3);
      recovered_3352a(param_5);
      *param_5 = 3;
      param_5[1] = 0;
      param_5[3] = (int)pvVar5;
      recovered_21203(local_48[0]);
      recovered_21203(local_14);
    }
    else {
      iVar3 = recovered_214f9((int)param_2,0x588d8);
      if (((iVar3 == 0) || (iVar3 = recovered_214f9((int)param_2,0x588da), iVar3 == 0)) ||
         ((iVar3 = recovered_214f9((int)param_2,0x588dc), iVar3 == 0 ||
          (((iVar3 = recovered_214f9((int)param_2,0x588de), iVar3 == 0 ||
            (iVar3 = recovered_214f9((int)param_2,0x588e0), iVar3 == 0)) ||
           (iVar3 = recovered_214f9((int)param_2,0x588e2), iVar3 == 0)))))) {
        if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
           ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
          format = str_0005c2ac;
          goto LAB_000430f2;
        }
        fVar9 = recovered_41c28((int *)param_3);
        local_20 = (float)fVar9;
        fVar9 = recovered_41c28((int *)param_4);
        local_18 = (float)fVar9;
        iVar3 = recovered_214f9((int)param_2,0x588dc);
        if ((iVar3 == 0) || (iVar3 = recovered_214f9((int)param_2,0x588de), iVar3 == 0)) {
          if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_000430e0;
        }
        else {
          iVar3 = recovered_214f9((int)param_2,0x588e0);
          if (iVar3 == 0 && local_18 == 0.0) {
LAB_000430e0:
            format = str_0005c2d1;
            goto LAB_000430f2;
          }
        }
        iVar3 = recovered_214f9((int)param_2,0x588e2);
        if (iVar3 == 0) {
          fVar9 = recovered_21aec(local_20,local_18);
        }
        else {
          iVar3 = recovered_214f9((int)param_2,0x588de);
          if (iVar3 == 0) {
            local_24 = in_FPUControlWord | 0xc00;
            iVar3 = (int)ROUND(local_20 / local_18);
LAB_000431d7:
            recovered_419dd(local_48,iVar3);
            goto LAB_000432ad;
          }
          iVar3 = recovered_214f9((int)param_2,0x588dc);
          if (iVar3 == 0) {
            fVar9 = (float10)local_20 / (float10)local_18;
          }
          else {
            if ((*param_3 != 2) && (*param_4 != 2)) {
              iVar3 = recovered_214f9((int)param_2,0x588d8);
              if (iVar3 == 0) {
                iVar3 = param_3[1] - param_4[1];
              }
              else {
                iVar3 = recovered_214f9((int)param_2,0x588da);
                if (iVar3 == 0) {
                  iVar3 = param_4[1] * param_3[1];
                }
                else {
                  iVar3 = (int)param_3[1] % (int)param_4[1];
                }
              }
              goto LAB_000431d7;
            }
            iVar3 = recovered_214f9((int)param_2,0x588d8);
            if (iVar3 == 0) {
              fVar9 = (float10)local_20 - (float10)local_18;
            }
            else {
              iVar3 = recovered_214f9((int)param_2,0x588da);
              if (iVar3 == 0) {
                fVar9 = (float10)local_18 * (float10)local_20;
              }
              else {
                dVar10 = recovered_21a51(local_20,local_18);
                fVar9 = (float10)dVar10;
              }
            }
          }
        }
LAB_000432a0:
        recovered_3acca(local_48,(float)fVar9);
      }
      else {
        iVar3 = recovered_214f9((int)param_2,0x588c3);
        if (((iVar3 != 0) && (iVar3 = recovered_214f9((int)param_2,0x588c6), iVar3 != 0)) &&
           (iVar3 = recovered_214f9((int)param_2,0x588c9), iVar3 != 0)) {
          iVar3 = recovered_214f9((int)param_2,0x588cc);
          if (((iVar3 == 0) || (iVar3 = recovered_214f9((int)param_2,0x588ce), iVar3 == 0)) ||
             ((iVar3 = recovered_214f9((int)param_2,0x588d0), iVar3 == 0 ||
              (iVar3 = recovered_214f9((int)param_2,0x588d3), iVar3 == 0)))) {
            local_14 = 0;
            uVar7 = recovered_5235c((int *)param_3,param_4,&local_14);
            if ((char)uVar7 == '\0') {
              recovered_3f39b((uint)local_1c,param_2,str_0005c2e2,param_2);
              return uVar7;
            }
            iVar3 = recovered_214f9((int)param_2,0x588cc);
            if (iVar3 == 0) {
              uVar6 = local_14;
            }
            else {
              iVar3 = recovered_214f9((int)param_2,0x588ce);
              if (iVar3 == 0) {
                uVar6 = (uint)(0 < (int)local_14);
                goto LAB_0004330f;
              }
              iVar3 = recovered_214f9((int)param_2,0x588d0);
              if (iVar3 == 0) {
                uVar6 = (uint)((int)local_14 < 1);
                goto LAB_0004330f;
              }
              uVar6 = ~local_14;
            }
            uVar6 = uVar6 >> 0x1f;
LAB_0004330f:
            recovered_44a7c(local_48,uVar6);
            piVar8 = local_48;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_5 = *piVar8;
              piVar8 = piVar8 + 1;
              param_5 = param_5 + 1;
            }
            return uVar7;
          }
          format = str_0005c30a;
LAB_000430f2:
          recovered_3f39b((uint)local_1c,param_2,format);
          goto LAB_000430f7;
        }
        bVar2 = recovered_4649f(param_3,param_4);
        param_3 = (uint *)CONCAT31(extraout_var,bVar2);
        iVar3 = recovered_214f9((int)param_2,0x588c3);
        recovered_44a7c(local_48,(uint)((iVar3 != 0) != bVar2));
      }
LAB_000432ad:
      piVar8 = local_48;
      for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
        *param_5 = *piVar8;
        piVar8 = piVar8 + 1;
        param_5 = param_5 + 1;
      }
    }
    uVar7 = CONCAT31((int3)((uint)param_3 >> 8),1);
  }
  return uVar7;
}
