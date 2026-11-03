#include "functions.h"
#undef str_0004d1c5
#define str_0004d1c5 (*(char (*)[1])(0x4d1c5U))
#undef str_0004d1ef
#define str_0004d1ef (*(char (*)[1])(0x4d1efU))
#undef str_0004d217
#define str_0004d217 (*(char (*)[1])(0x4d217U))
#undef str_0004d23c
#define str_0004d23c (*(char (*)[1])(0x4d23cU))
#undef str_0004d24d
#define str_0004d24d (*(char (*)[1])(0x4d24dU))
#undef str_0004d275
#define str_0004d275 (*(char (*)[1])(0x4d275U))
#define local_48 (*(int (*)[9])(frame + 28))
#define local_24 (*(ushort *)(frame + 64))
#define local_20 (*(float *)(frame + 68))
#define local_1c (*(float *)(frame + 72))
#define local_18 (*(float *)(frame + 76))
#define local_14 (*(uint *)(frame + 80))
#define format (*(char * *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x34a03
 */

undefined4 recovered_34a03(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5)

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
LAB_00034e12:
    uVar7 = 0;
  }
  else {
    local_1c = param_1;
    iVar3 = recovered_21415((int)param_2,0x4986b);
    if (iVar3 == 0) {
      uVar6 = *param_3;
      if ((uVar6 != 3) && (uVar1 = *param_4, uVar1 != 3)) {
        if ((5 < uVar6) ||
           ((((0x26U >> (uVar6 & 0x1f) & 1) == 0 || (5 < uVar1)) ||
            ((0x26U >> (uVar1 & 0x1f) & 1) == 0)))) {
          format = str_0004d1ef;
          goto LAB_00034e0d;
        }
        if (uVar6 != 2 && uVar1 != 2) {
          iVar3 = param_4[1] + param_3[1];
          goto LAB_00034ef2;
        }
        fVar9 = recovered_33943((int *)param_3);
        local_1c = (float)fVar9;
        fVar9 = recovered_33943((int *)param_4);
        fVar9 = (float10)local_1c + fVar9;
        goto LAB_00034fbb;
      }
      local_48[0] = 0;
      local_14 = 0;
      bVar2 = recovered_37af6((int *)param_3,local_48);
      if ((!bVar2) || (bVar2 = recovered_37af6((int *)param_4,(int *)&local_14), !bVar2)) {
LAB_00034dbf:
        recovered_21203(local_48[0]);
        recovered_21203(local_14);
        format = str_0004d1c5;
        goto LAB_00034e0d;
      }
      fVar4 = (float)recovered_213fa(local_48[0]);
      iVar3 = recovered_213fa(local_14);
      local_18 = fVar4;
      pvVar5 = recovered_211fa(iVar3 + (int)fVar4 + 1);
      fVar4 = local_18;
      if (pvVar5 == (void *)0x0) goto LAB_00034dbf;
      param_3 = (uint *)(iVar3 + 1);
      recovered_21348((int)pvVar5,local_48[0],(int)local_18);
      recovered_21348((int)pvVar5 + (int)fVar4,local_14,(int)param_3);
      recovered_25fea(param_5);
      *param_5 = 3;
      param_5[1] = 0;
      param_5[3] = (int)pvVar5;
      recovered_21203(local_48[0]);
      recovered_21203(local_14);
    }
    else {
      iVar3 = recovered_21415((int)param_2,0x4986d);
      if (((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x4986f), iVar3 == 0)) ||
         ((iVar3 = recovered_21415((int)param_2,0x49871), iVar3 == 0 ||
          (((iVar3 = recovered_21415((int)param_2,0x49873), iVar3 == 0 ||
            (iVar3 = recovered_21415((int)param_2,0x49875), iVar3 == 0)) ||
           (iVar3 = recovered_21415((int)param_2,0x49877), iVar3 == 0)))))) {
        if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
           ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
          format = str_0004d217;
          goto LAB_00034e0d;
        }
        fVar9 = recovered_33943((int *)param_3);
        local_20 = (float)fVar9;
        fVar9 = recovered_33943((int *)param_4);
        local_18 = (float)fVar9;
        iVar3 = recovered_21415((int)param_2,0x49871);
        if ((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x49873), iVar3 == 0)) {
          if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_00034dfb;
        }
        else {
          iVar3 = recovered_21415((int)param_2,0x49875);
          if (iVar3 == 0 && local_18 == 0.0) {
LAB_00034dfb:
            format = str_0004d23c;
            goto LAB_00034e0d;
          }
        }
        iVar3 = recovered_21415((int)param_2,0x49877);
        if (iVar3 == 0) {
          fVar9 = recovered_21861(local_20,local_18);
        }
        else {
          iVar3 = recovered_21415((int)param_2,0x49873);
          if (iVar3 == 0) {
            local_24 = in_FPUControlWord | 0xc00;
            iVar3 = (int)ROUND(local_20 / local_18);
LAB_00034ef2:
            recovered_336f8(local_48,iVar3);
            goto LAB_00034fc8;
          }
          iVar3 = recovered_21415((int)param_2,0x49871);
          if (iVar3 == 0) {
            fVar9 = (float10)local_20 / (float10)local_18;
          }
          else {
            if ((*param_3 != 2) && (*param_4 != 2)) {
              iVar3 = recovered_21415((int)param_2,0x4986d);
              if (iVar3 == 0) {
                iVar3 = param_3[1] - param_4[1];
              }
              else {
                iVar3 = recovered_21415((int)param_2,0x4986f);
                if (iVar3 == 0) {
                  iVar3 = param_4[1] * param_3[1];
                }
                else {
                  iVar3 = (int)param_3[1] % (int)param_4[1];
                }
              }
              goto LAB_00034ef2;
            }
            iVar3 = recovered_21415((int)param_2,0x4986d);
            if (iVar3 == 0) {
              fVar9 = (float10)local_20 - (float10)local_18;
            }
            else {
              iVar3 = recovered_21415((int)param_2,0x4986f);
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
LAB_00034fbb:
        recovered_2c9cd(local_48,(float)fVar9);
      }
      else {
        iVar3 = recovered_21415((int)param_2,0x49858);
        if (((iVar3 != 0) && (iVar3 = recovered_21415((int)param_2,0x4985b), iVar3 != 0)) &&
           (iVar3 = recovered_21415((int)param_2,0x4985e), iVar3 != 0)) {
          iVar3 = recovered_21415((int)param_2,0x49861);
          if (((iVar3 == 0) || (iVar3 = recovered_21415((int)param_2,0x49863), iVar3 == 0)) ||
             ((iVar3 = recovered_21415((int)param_2,0x49865), iVar3 == 0 ||
              (iVar3 = recovered_21415((int)param_2,0x49868), iVar3 == 0)))) {
            local_14 = 0;
            uVar7 = recovered_44084((int *)param_3,param_4,&local_14);
            if ((char)uVar7 == '\0') {
              recovered_310b6((uint)local_1c,param_2,str_0004d24d,param_2);
              return uVar7;
            }
            iVar3 = recovered_21415((int)param_2,0x49861);
            if (iVar3 == 0) {
              uVar6 = local_14;
            }
            else {
              iVar3 = recovered_21415((int)param_2,0x49863);
              if (iVar3 == 0) {
                uVar6 = (uint)(0 < (int)local_14);
                goto LAB_0003502a;
              }
              iVar3 = recovered_21415((int)param_2,0x49865);
              if (iVar3 == 0) {
                uVar6 = (uint)((int)local_14 < 1);
                goto LAB_0003502a;
              }
              uVar6 = ~local_14;
            }
            uVar6 = uVar6 >> 0x1f;
LAB_0003502a:
            recovered_36797(local_48,uVar6);
            piVar8 = local_48;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_5 = *piVar8;
              piVar8 = piVar8 + 1;
              param_5 = param_5 + 1;
            }
            return uVar7;
          }
          format = str_0004d275;
LAB_00034e0d:
          recovered_310b6((uint)local_1c,param_2,format);
          goto LAB_00034e12;
        }
        bVar2 = recovered_381ba(param_3,param_4);
        param_3 = (uint *)CONCAT31(extraout_var,bVar2);
        iVar3 = recovered_21415((int)param_2,0x49858);
        recovered_36797(local_48,(uint)((iVar3 != 0) != bVar2));
      }
LAB_00034fc8:
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
