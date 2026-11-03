#include "functions.h"
#undef str_0004ade6
#define str_0004ade6 (*(char (*)[1])(0x4ade6U))
#undef str_0004ae10
#define str_0004ae10 (*(char (*)[1])(0x4ae10U))
#undef str_0004ae38
#define str_0004ae38 (*(char (*)[1])(0x4ae38U))
#undef str_0004ae5d
#define str_0004ae5d (*(char (*)[1])(0x4ae5dU))
#undef str_0004ae6e
#define str_0004ae6e (*(char (*)[1])(0x4ae6eU))
#undef str_0004ae96
#define str_0004ae96 (*(char (*)[1])(0x4ae96U))
#define format (*(char * *)(frame + 16))
#define local_48 (*(int (*)[9])(frame + 28))
#define local_24 (*(ushort *)(frame + 64))
#define local_20 (*(float *)(frame + 68))
#define local_1c (*(float *)(frame + 72))
#define local_18 (*(float *)(frame + 76))
#define local_14 (*(uint *)(frame + 80))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x330ff
 */

undefined4 recovered_330ff(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5)

{
  unsigned char frame[132];

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
LAB_0003350e:
    uVar7 = 0;
  }
  else {
    local_1c = param_1;
    iVar3 = recovered_21415((int)param_2,0x47591);
    if (iVar3 == 0) {
      uVar6 = *param_3;
      if ((uVar6 != 3) && (uVar1 = *param_4, uVar1 != 3)) {
        if ((5 < uVar6) ||
           ((((0x26U >> (uVar6 & 0x1f) & 1) == 0 || (5 < uVar1)) ||
            ((0x26U >> (uVar1 & 0x1f) & 1) == 0)))) {
          format = str_0004ae10;
          goto LAB_00033509;
        }
        if (uVar6 != 2 && uVar1 != 2) {
          iVar3 = param_4[1] + param_3[1];
          goto LAB_000335ee;
        }
        fVar9 = recovered_31da4((int *)param_3);
        local_1c = (float)fVar9;
        fVar9 = recovered_31da4((int *)param_4);
        fVar9 = (float10)local_1c + fVar9;
        goto LAB_000336b7;
      }
      local_48[0] = 0;
      local_14 = 0;
      bVar2 = recovered_35e4a((int *)param_3,local_48);
      if ((!bVar2) || (bVar2 = recovered_35e4a((int *)param_4,(int *)&local_14), !bVar2)) {
LAB_000334bb:
        recovered_21203(local_48[0]);
        recovered_21203(local_14);
        format = str_0004ade6;
        goto LAB_00033509;
      }
      fVar4 = (float)recovered_213fa(local_48[0]);
      iVar3 = recovered_213fa(local_14);
      local_18 = fVar4;
      pvVar5 = recovered_211fa(iVar3 + (int)fVar4 + 1);
      fVar4 = local_18;
      if (pvVar5 == (void *)0x0) goto LAB_000334bb;
      param_3 = (uint *)(iVar3 + 1);
      recovered_21348((int)pvVar5,local_48[0],(int)local_18);
      recovered_21348((int)pvVar5 + (int)fVar4,local_14,(int)param_3);
      recovered_2603e(param_5);
      *param_5 = 3;
      param_5[1] = 0;
      param_5[3] = (int)pvVar5;
      recovered_21203(local_48[0]);
      recovered_21203(local_14);
    }
    else {
      iVar3 = recovered_21415((int)param_2,0x47593);
      if (((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x47595), iVar3 == 0)) ||
         ((iVar3 = recovered_21415((int)param_2,0x47597), iVar3 == 0 ||
          (((iVar3 = recovered_21415((int)param_2,0x47599), iVar3 == 0 ||
            (iVar3 = recovered_21415((int)param_2,0x4759b), iVar3 == 0)) ||
           (iVar3 = recovered_21415((int)param_2,0x4759d), iVar3 == 0)))))) {
        if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
           ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
          format = str_0004ae38;
          goto LAB_00033509;
        }
        fVar9 = recovered_31da4((int *)param_3);
        local_20 = (float)fVar9;
        fVar9 = recovered_31da4((int *)param_4);
        local_18 = (float)fVar9;
        iVar3 = recovered_21415((int)param_2,0x47597);
        if ((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x47599), iVar3 == 0)) {
          if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_000334f7;
        }
        else {
          iVar3 = recovered_21415((int)param_2,0x4759b);
          if (iVar3 == 0 && local_18 == 0.0) {
LAB_000334f7:
            format = str_0004ae5d;
            goto LAB_00033509;
          }
        }
        iVar3 = recovered_21415((int)param_2,0x4759d);
        if (iVar3 == 0) {
          fVar9 = recovered_21861(local_20,local_18);
        }
        else {
          iVar3 = recovered_21415((int)param_2,0x47599);
          if (iVar3 == 0) {
            local_24 = in_FPUControlWord | 0xc00;
            iVar3 = (int)ROUND(local_20 / local_18);
LAB_000335ee:
            recovered_31b59(local_48,iVar3);
            goto LAB_000336c4;
          }
          iVar3 = recovered_21415((int)param_2,0x47597);
          if (iVar3 == 0) {
            fVar9 = (float10)local_20 / (float10)local_18;
          }
          else {
            if ((*param_3 != 2) && (*param_4 != 2)) {
              iVar3 = recovered_21415((int)param_2,0x47593);
              if (iVar3 == 0) {
                iVar3 = param_3[1] - param_4[1];
              }
              else {
                iVar3 = recovered_21415((int)param_2,0x47595);
                if (iVar3 == 0) {
                  iVar3 = param_4[1] * param_3[1];
                }
                else {
                  iVar3 = (int)param_3[1] % (int)param_4[1];
                }
              }
              goto LAB_000335ee;
            }
            iVar3 = recovered_21415((int)param_2,0x47593);
            if (iVar3 == 0) {
              fVar9 = (float10)local_20 - (float10)local_18;
            }
            else {
              iVar3 = recovered_21415((int)param_2,0x47595);
              if (iVar3 == 0) {
                fVar9 = (float10)local_18 * (float10)local_20;
              }
              else {
                dVar10 = recovered_217c6(local_20,local_18);
                fVar9 = (float10)dVar10;
              }
            }
          }
        }
LAB_000336b7:
        recovered_2c909(local_48,(float)fVar9);
      }
      else {
        iVar3 = recovered_21415((int)param_2,0x4757e);
        if (((iVar3 != 0) && (iVar3 = recovered_21415((int)param_2,0x47581), iVar3 != 0)) &&
           (iVar3 = recovered_21415((int)param_2,0x47584), iVar3 != 0)) {
          iVar3 = recovered_21415((int)param_2,0x47587);
          if (((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x47589), iVar3 == 0)) ||
             ((iVar3 = recovered_21415((int)param_2,0x4758b), iVar3 == 0 ||
              (iVar3 = recovered_21415((int)param_2,0x4758e), iVar3 == 0)))) {
            local_14 = 0;
            uVar7 = recovered_42282((int *)param_3,param_4,&local_14);
            if ((char)uVar7 == '\0') {
              recovered_30ed3((uint)local_1c,param_2,str_0004ae6e,param_2);
              return uVar7;
            }
            iVar3 = recovered_21415((int)param_2,0x47587);
            if (iVar3 == 0) {
              uVar6 = local_14;
            }
            else {
              iVar3 = recovered_21415((int)param_2,0x47589);
              if (iVar3 == 0) {
                uVar6 = (uint)(0 < (int)local_14);
                goto LAB_00033726;
              }
              iVar3 = recovered_21415((int)param_2,0x4758b);
              if (iVar3 == 0) {
                uVar6 = (uint)((int)local_14 < 1);
                goto LAB_00033726;
              }
              uVar6 = ~local_14;
            }
            uVar6 = uVar6 >> 0x1f;
LAB_00033726:
            recovered_34e14(local_48,uVar6);
            piVar8 = local_48;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_5 = *piVar8;
              piVar8 = piVar8 + 1;
              param_5 = param_5 + 1;
            }
            return uVar7;
          }
          format = str_0004ae96;
LAB_00033509:
          recovered_30ed3((uint)local_1c,param_2,format);
          goto LAB_0003350e;
        }
        bVar2 = recovered_3650e(param_3,param_4);
        param_3 = (uint *)CONCAT31(extraout_var,bVar2);
        iVar3 = recovered_21415((int)param_2,0x4757e);
        recovered_34e14(local_48,(uint)((iVar3 != 0) != bVar2));
      }
LAB_000336c4:
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
