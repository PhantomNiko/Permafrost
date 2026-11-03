#include "functions.h"
#undef str_00042e43
#define str_00042e43 (*(char (*)[1])(0x42e43U))
#undef str_00042e6d
#define str_00042e6d (*(char (*)[1])(0x42e6dU))
#undef str_00042e95
#define str_00042e95 (*(char (*)[1])(0x42e95U))
#undef str_00042eba
#define str_00042eba (*(char (*)[1])(0x42ebaU))
#undef str_00042ecb
#define str_00042ecb (*(char (*)[1])(0x42ecbU))
#undef str_00042ef3
#define str_00042ef3 (*(char (*)[1])(0x42ef3U))
#define local_48 (*(int (*)[9])(frame + 28))
#define local_24 (*(ushort *)(frame + 64))
#define local_20 (*(float *)(frame + 68))
#define local_1c (*(float *)(frame + 72))
#define local_18 (*(float *)(frame + 76))
#define local_14 (*(uint *)(frame + 80))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f479
 */

undefined4 recovered_2f479(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5)

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
LAB_0002f888:
    uVar7 = 0;
  }
  else {
    local_1c = param_1;
    iVar3 = recovered_2100f((int)param_2,0x403bf);
    if (iVar3 == 0) {
      uVar6 = *param_3;
      if ((uVar6 != 3) && (uVar1 = *param_4, uVar1 != 3)) {
        if ((5 < uVar6) ||
           ((((0x26U >> (uVar6 & 0x1f) & 1) == 0 || (5 < uVar1)) ||
            ((0x26U >> (uVar1 & 0x1f) & 1) == 0)))) {
          format = str_00042e6d;
          goto LAB_0002f883;
        }
        if (uVar6 != 2 && uVar1 != 2) {
          iVar3 = param_4[1] + param_3[1];
          goto LAB_0002f968;
        }
        fVar9 = recovered_2e11e((int *)param_3);
        local_1c = (float)fVar9;
        fVar9 = recovered_2e11e((int *)param_4);
        fVar9 = (float10)local_1c + fVar9;
        goto LAB_0002fa31;
      }
      local_48[0] = 0;
      local_14 = 0;
      bVar2 = recovered_31d86((int *)param_3,local_48);
      if ((!bVar2) || (bVar2 = recovered_31d86((int *)param_4,(int *)&local_14), !bVar2)) {
LAB_0002f835:
        recovered_20dfd(local_48[0]);
        recovered_20dfd(local_14);
        format = str_00042e43;
        goto LAB_0002f883;
      }
      fVar4 = (float)recovered_20ff4(local_48[0]);
      iVar3 = recovered_20ff4(local_14);
      local_18 = fVar4;
      pvVar5 = recovered_20df4(iVar3 + (int)fVar4 + 1);
      fVar4 = local_18;
      if (pvVar5 == (void *)0x0) goto LAB_0002f835;
      param_3 = (uint *)(iVar3 + 1);
      recovered_20f42((int)pvVar5,local_48[0],(int)local_18);
      recovered_20f42((int)pvVar5 + (int)fVar4,local_14,(int)param_3);
      recovered_28761(param_5);
      *param_5 = 3;
      param_5[1] = 0;
      param_5[3] = (int)pvVar5;
      recovered_20dfd(local_48[0]);
      recovered_20dfd(local_14);
    }
    else {
      iVar3 = recovered_2100f((int)param_2,0x403c1);
      if (((iVar3 == 0) || (iVar3 = recovered_2100f((int)param_2,0x403c3), iVar3 == 0)) ||
         ((iVar3 = recovered_2100f((int)param_2,0x403c5), iVar3 == 0 ||
          (((iVar3 = recovered_2100f((int)param_2,0x403c7), iVar3 == 0 ||
            (iVar3 = recovered_2100f((int)param_2,0x403c9), iVar3 == 0)) ||
           (iVar3 = recovered_2100f((int)param_2,0x403cb), iVar3 == 0)))))) {
        if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
           ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
          format = str_00042e95;
          goto LAB_0002f883;
        }
        fVar9 = recovered_2e11e((int *)param_3);
        local_20 = (float)fVar9;
        fVar9 = recovered_2e11e((int *)param_4);
        local_18 = (float)fVar9;
        iVar3 = recovered_2100f((int)param_2,0x403c5);
        if ((iVar3 == 0) || (iVar3 = recovered_2100f((int)param_2,0x403c7), iVar3 == 0)) {
          if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_0002f871;
        }
        else {
          iVar3 = recovered_2100f((int)param_2,0x403c9);
          if (iVar3 == 0 && local_18 == 0.0) {
LAB_0002f871:
            format = str_00042eba;
            goto LAB_0002f883;
          }
        }
        iVar3 = recovered_2100f((int)param_2,0x403cb);
        if (iVar3 == 0) {
          fVar9 = recovered_2145b(local_20,local_18);
        }
        else {
          iVar3 = recovered_2100f((int)param_2,0x403c7);
          if (iVar3 == 0) {
            local_24 = in_FPUControlWord | 0xc00;
            iVar3 = (int)ROUND(local_20 / local_18);
LAB_0002f968:
            recovered_2ded3(local_48,iVar3);
            goto LAB_0002fa3e;
          }
          iVar3 = recovered_2100f((int)param_2,0x403c5);
          if (iVar3 == 0) {
            fVar9 = (float10)local_20 / (float10)local_18;
          }
          else {
            if ((*param_3 != 2) && (*param_4 != 2)) {
              iVar3 = recovered_2100f((int)param_2,0x403c1);
              if (iVar3 == 0) {
                iVar3 = param_3[1] - param_4[1];
              }
              else {
                iVar3 = recovered_2100f((int)param_2,0x403c3);
                if (iVar3 == 0) {
                  iVar3 = param_4[1] * param_3[1];
                }
                else {
                  iVar3 = (int)param_3[1] % (int)param_4[1];
                }
              }
              goto LAB_0002f968;
            }
            iVar3 = recovered_2100f((int)param_2,0x403c1);
            if (iVar3 == 0) {
              fVar9 = (float10)local_20 - (float10)local_18;
            }
            else {
              iVar3 = recovered_2100f((int)param_2,0x403c3);
              if (iVar3 == 0) {
                fVar9 = (float10)local_18 * (float10)local_20;
              }
              else {
                dVar10 = recovered_213c0(local_20,local_18);
                fVar9 = (float10)dVar10;
              }
            }
          }
        }
LAB_0002fa31:
        recovered_288e4(local_48,(float)fVar9);
      }
      else {
        iVar3 = recovered_2100f((int)param_2,0x403ac);
        if (((iVar3 != 0) && (iVar3 = recovered_2100f((int)param_2,0x403af), iVar3 != 0)) &&
           (iVar3 = recovered_2100f((int)param_2,0x403b2), iVar3 != 0)) {
          iVar3 = recovered_2100f((int)param_2,0x403b5);
          if (((iVar3 == 0) || (iVar3 = recovered_2100f((int)param_2,0x403b7), iVar3 == 0)) ||
             ((iVar3 = recovered_2100f((int)param_2,0x403b9), iVar3 == 0 ||
              (iVar3 = recovered_2100f((int)param_2,0x403bc), iVar3 == 0)))) {
            local_14 = 0;
            uVar7 = recovered_3b872((int *)param_3,param_4,&local_14);
            if ((char)uVar7 == '\0') {
              recovered_2d241((uint)local_1c,param_2,str_00042ecb,param_2);
              return uVar7;
            }
            iVar3 = recovered_2100f((int)param_2,0x403b5);
            if (iVar3 == 0) {
              uVar6 = local_14;
            }
            else {
              iVar3 = recovered_2100f((int)param_2,0x403b7);
              if (iVar3 == 0) {
                uVar6 = (uint)(0 < (int)local_14);
                goto LAB_0002faa0;
              }
              iVar3 = recovered_2100f((int)param_2,0x403b9);
              if (iVar3 == 0) {
                uVar6 = (uint)((int)local_14 < 1);
                goto LAB_0002faa0;
              }
              uVar6 = ~local_14;
            }
            uVar6 = uVar6 >> 0x1f;
LAB_0002faa0:
            recovered_31157(local_48,uVar6);
            piVar8 = local_48;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_5 = *piVar8;
              piVar8 = piVar8 + 1;
              param_5 = param_5 + 1;
            }
            return uVar7;
          }
          format = str_00042ef3;
LAB_0002f883:
          recovered_2d241((uint)local_1c,param_2,format);
          goto LAB_0002f888;
        }
        bVar2 = recovered_3233b(param_3,param_4);
        param_3 = (uint *)CONCAT31(extraout_var,bVar2);
        iVar3 = recovered_2100f((int)param_2,0x403ac);
        recovered_31157(local_48,(uint)((iVar3 != 0) != bVar2));
      }
LAB_0002fa3e:
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

