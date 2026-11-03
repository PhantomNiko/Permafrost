#include "functions.h"
#undef str_0004ae03
#define str_0004ae03 (*(char (*)[1])(0x4ae03U))
#undef str_0004ae2d
#define str_0004ae2d (*(char (*)[1])(0x4ae2dU))
#undef str_0004ae55
#define str_0004ae55 (*(char (*)[1])(0x4ae55U))
#undef str_0004ae7a
#define str_0004ae7a (*(char (*)[1])(0x4ae7aU))
#undef str_0004ae8b
#define str_0004ae8b (*(char (*)[1])(0x4ae8bU))
#undef str_0004aeb3
#define str_0004aeb3 (*(char (*)[1])(0x4aeb3U))
#define local_48 (*(int (*)[9])(frame + 28))
#define local_24 (*(ushort *)(frame + 64))
#define local_20 (*(float *)(frame + 68))
#define local_1c (*(float *)(frame + 72))
#define local_18 (*(float *)(frame + 76))
#define local_14 (*(uint *)(frame + 80))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x33137
 */

undefined4 recovered_33137(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5)

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
LAB_00033546:
    uVar7 = 0;
  }
  else {
    local_1c = param_1;
    iVar3 = recovered_21415((int)param_2,0x475e6);
    if (iVar3 == 0) {
      uVar6 = *param_3;
      if ((uVar6 != 3) && (uVar1 = *param_4, uVar1 != 3)) {
        if ((5 < uVar6) ||
           ((((0x26U >> (uVar6 & 0x1f) & 1) == 0 || (5 < uVar1)) ||
            ((0x26U >> (uVar1 & 0x1f) & 1) == 0)))) {
          format = str_0004ae2d;
          goto LAB_00033541;
        }
        if (uVar6 != 2 && uVar1 != 2) {
          iVar3 = param_4[1] + param_3[1];
          goto LAB_00033626;
        }
        fVar9 = recovered_31ddc((int *)param_3);
        local_1c = (float)fVar9;
        fVar9 = recovered_31ddc((int *)param_4);
        fVar9 = (float10)local_1c + fVar9;
        goto LAB_000336ef;
      }
      local_48[0] = 0;
      local_14 = 0;
      bVar2 = recovered_35e82((int *)param_3,local_48);
      if ((!bVar2) || (bVar2 = recovered_35e82((int *)param_4,(int *)&local_14), !bVar2)) {
LAB_000334f3:
        recovered_21203(local_48[0]);
        recovered_21203(local_14);
        format = str_0004ae03;
        goto LAB_00033541;
      }
      fVar4 = (float)recovered_213fa(local_48[0]);
      iVar3 = recovered_213fa(local_14);
      local_18 = fVar4;
      pvVar5 = recovered_211fa(iVar3 + (int)fVar4 + 1);
      fVar4 = local_18;
      if (pvVar5 == (void *)0x0) goto LAB_000334f3;
      param_3 = (uint *)(iVar3 + 1);
      recovered_21348((int)pvVar5,local_48[0],(int)local_18);
      recovered_21348((int)pvVar5 + (int)fVar4,local_14,(int)param_3);
      recovered_26052(param_5);
      *param_5 = 3;
      param_5[1] = 0;
      param_5[3] = (int)pvVar5;
      recovered_21203(local_48[0]);
      recovered_21203(local_14);
    }
    else {
      iVar3 = recovered_21415((int)param_2,0x475e8);
      if (((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x475ea), iVar3 == 0)) ||
         ((iVar3 = recovered_21415((int)param_2,0x475ec), iVar3 == 0 ||
          (((iVar3 = recovered_21415((int)param_2,0x475ee), iVar3 == 0 ||
            (iVar3 = recovered_21415((int)param_2,0x475f0), iVar3 == 0)) ||
           (iVar3 = recovered_21415((int)param_2,0x475f2), iVar3 == 0)))))) {
        if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
           ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
          format = str_0004ae55;
          goto LAB_00033541;
        }
        fVar9 = recovered_31ddc((int *)param_3);
        local_20 = (float)fVar9;
        fVar9 = recovered_31ddc((int *)param_4);
        local_18 = (float)fVar9;
        iVar3 = recovered_21415((int)param_2,0x475ec);
        if ((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x475ee), iVar3 == 0)) {
          if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_0003352f;
        }
        else {
          iVar3 = recovered_21415((int)param_2,0x475f0);
          if (iVar3 == 0 && local_18 == 0.0) {
LAB_0003352f:
            format = str_0004ae7a;
            goto LAB_00033541;
          }
        }
        iVar3 = recovered_21415((int)param_2,0x475f2);
        if (iVar3 == 0) {
          fVar9 = recovered_21861(local_20,local_18);
        }
        else {
          iVar3 = recovered_21415((int)param_2,0x475ee);
          if (iVar3 == 0) {
            local_24 = in_FPUControlWord | 0xc00;
            iVar3 = (int)ROUND(local_20 / local_18);
LAB_00033626:
            recovered_31b91(local_48,iVar3);
            goto LAB_000336fc;
          }
          iVar3 = recovered_21415((int)param_2,0x475ec);
          if (iVar3 == 0) {
            fVar9 = (float10)local_20 / (float10)local_18;
          }
          else {
            if ((*param_3 != 2) && (*param_4 != 2)) {
              iVar3 = recovered_21415((int)param_2,0x475e8);
              if (iVar3 == 0) {
                iVar3 = param_3[1] - param_4[1];
              }
              else {
                iVar3 = recovered_21415((int)param_2,0x475ea);
                if (iVar3 == 0) {
                  iVar3 = param_4[1] * param_3[1];
                }
                else {
                  iVar3 = (int)param_3[1] % (int)param_4[1];
                }
              }
              goto LAB_00033626;
            }
            iVar3 = recovered_21415((int)param_2,0x475e8);
            if (iVar3 == 0) {
              fVar9 = (float10)local_20 - (float10)local_18;
            }
            else {
              iVar3 = recovered_21415((int)param_2,0x475ea);
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
LAB_000336ef:
        recovered_2c941(local_48,(float)fVar9);
      }
      else {
        iVar3 = recovered_21415((int)param_2,0x475d3);
        if (((iVar3 != 0) && (iVar3 = recovered_21415((int)param_2,0x475d6), iVar3 != 0)) &&
           (iVar3 = recovered_21415((int)param_2,0x475d9), iVar3 != 0)) {
          iVar3 = recovered_21415((int)param_2,0x475dc);
          if (((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x475de), iVar3 == 0)) ||
             ((iVar3 = recovered_21415((int)param_2,0x475e0), iVar3 == 0 ||
              (iVar3 = recovered_21415((int)param_2,0x475e3), iVar3 == 0)))) {
            local_14 = 0;
            uVar7 = recovered_42306((int *)param_3,param_4,&local_14);
            if ((char)uVar7 == '\0') {
              recovered_30f0b((uint)local_1c,param_2,str_0004ae8b,param_2);
              return uVar7;
            }
            iVar3 = recovered_21415((int)param_2,0x475dc);
            if (iVar3 == 0) {
              uVar6 = local_14;
            }
            else {
              iVar3 = recovered_21415((int)param_2,0x475de);
              if (iVar3 == 0) {
                uVar6 = (uint)(0 < (int)local_14);
                goto LAB_0003375e;
              }
              iVar3 = recovered_21415((int)param_2,0x475e0);
              if (iVar3 == 0) {
                uVar6 = (uint)((int)local_14 < 1);
                goto LAB_0003375e;
              }
              uVar6 = ~local_14;
            }
            uVar6 = uVar6 >> 0x1f;
LAB_0003375e:
            recovered_34e4c(local_48,uVar6);
            piVar8 = local_48;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_5 = *piVar8;
              piVar8 = piVar8 + 1;
              param_5 = param_5 + 1;
            }
            return uVar7;
          }
          format = str_0004aeb3;
LAB_00033541:
          recovered_30f0b((uint)local_1c,param_2,format);
          goto LAB_00033546;
        }
        bVar2 = recovered_36546(param_3,param_4);
        param_3 = (uint *)CONCAT31(extraout_var,bVar2);
        iVar3 = recovered_21415((int)param_2,0x475d3);
        recovered_34e4c(local_48,(uint)((iVar3 != 0) != bVar2));
      }
LAB_000336fc:
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
