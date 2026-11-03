#include "functions.h"
#undef str_00046799
#define str_00046799 (*(char (*)[1])(0x46799U))
#undef str_000467c3
#define str_000467c3 (*(char (*)[1])(0x467c3U))
#undef str_000467eb
#define str_000467eb (*(char (*)[1])(0x467ebU))
#undef str_00046810
#define str_00046810 (*(char (*)[1])(0x46810U))
#undef str_00046821
#define str_00046821 (*(char (*)[1])(0x46821U))
#undef str_00046849
#define str_00046849 (*(char (*)[1])(0x46849U))
#define local_14 (*(uint *)(frame + 80))
#define format (*(char * *)(frame + 16))
#define local_48 (*(int (*)[9])(frame + 28))
#define local_24 (*(ushort *)(frame + 64))
#define local_20 (*(float *)(frame + 68))
#define local_1c (*(float *)(frame + 72))
#define local_18 (*(float *)(frame + 76))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x31bfb
 */

undefined4 recovered_31bfb(float param_1,char *param_2,uint *param_3,uint *param_4,int *param_5)

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
LAB_0003200a:
    uVar7 = 0;
  }
  else {
    local_1c = param_1;
    iVar3 = recovered_2100f((int)param_2,0x43840);
    if (iVar3 == 0) {
      uVar6 = *param_3;
      if ((uVar6 != 3) && (uVar1 = *param_4, uVar1 != 3)) {
        if ((5 < uVar6) ||
           ((((0x26U >> (uVar6 & 0x1f) & 1) == 0 || (5 < uVar1)) ||
            ((0x26U >> (uVar1 & 0x1f) & 1) == 0)))) {
          format = str_000467c3;
          goto LAB_00032005;
        }
        if (uVar6 != 2 && uVar1 != 2) {
          iVar3 = param_4[1] + param_3[1];
          goto LAB_000320ea;
        }
        fVar9 = recovered_308a0((int *)param_3);
        local_1c = (float)fVar9;
        fVar9 = recovered_308a0((int *)param_4);
        fVar9 = (float10)local_1c + fVar9;
        goto LAB_000321b3;
      }
      local_48[0] = 0;
      local_14 = 0;
      bVar2 = recovered_34508((int *)param_3,local_48);
      if ((!bVar2) || (bVar2 = recovered_34508((int *)param_4,(int *)&local_14), !bVar2)) {
LAB_00031fb7:
        recovered_20dfd(local_48[0]);
        recovered_20dfd(local_14);
        format = str_00046799;
        goto LAB_00032005;
      }
      fVar4 = (float)recovered_20ff4(local_48[0]);
      iVar3 = recovered_20ff4(local_14);
      local_18 = fVar4;
      pvVar5 = recovered_20df4(iVar3 + (int)fVar4 + 1);
      fVar4 = local_18;
      if (pvVar5 == (void *)0x0) goto LAB_00031fb7;
      param_3 = (uint *)(iVar3 + 1);
      recovered_20f42((int)pvVar5,local_48[0],(int)local_18);
      recovered_20f42((int)pvVar5 + (int)fVar4,local_14,(int)param_3);
      recovered_2aec1(param_5);
      *param_5 = 3;
      param_5[1] = 0;
      param_5[3] = (int)pvVar5;
      recovered_20dfd(local_48[0]);
      recovered_20dfd(local_14);
    }
    else {
      iVar3 = recovered_2100f((int)param_2,0x43842);
      if (((iVar3 == 0) || (iVar3 = recovered_2100f((int)param_2,0x43844), iVar3 == 0)) ||
         ((iVar3 = recovered_2100f((int)param_2,0x43846), iVar3 == 0 ||
          (((iVar3 = recovered_2100f((int)param_2,0x43848), iVar3 == 0 ||
            (iVar3 = recovered_2100f((int)param_2,0x4384a), iVar3 == 0)) ||
           (iVar3 = recovered_2100f((int)param_2,0x4384c), iVar3 == 0)))))) {
        if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
           ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
          format = str_000467eb;
          goto LAB_00032005;
        }
        fVar9 = recovered_308a0((int *)param_3);
        local_20 = (float)fVar9;
        fVar9 = recovered_308a0((int *)param_4);
        local_18 = (float)fVar9;
        iVar3 = recovered_2100f((int)param_2,0x43846);
        if ((iVar3 == 0) || (iVar3 = recovered_2100f((int)param_2,0x43848), iVar3 == 0)) {
          if ((local_18 == 0.0) && (!NAN(local_18))) goto LAB_00031ff3;
        }
        else {
          iVar3 = recovered_2100f((int)param_2,0x4384a);
          if (iVar3 == 0 && local_18 == 0.0) {
LAB_00031ff3:
            format = str_00046810;
            goto LAB_00032005;
          }
        }
        iVar3 = recovered_2100f((int)param_2,0x4384c);
        if (iVar3 == 0) {
          fVar9 = recovered_2145b(local_20,local_18);
        }
        else {
          iVar3 = recovered_2100f((int)param_2,0x43848);
          if (iVar3 == 0) {
            local_24 = in_FPUControlWord | 0xc00;
            iVar3 = (int)ROUND(local_20 / local_18);
LAB_000320ea:
            recovered_30655(local_48,iVar3);
            goto LAB_000321c0;
          }
          iVar3 = recovered_2100f((int)param_2,0x43846);
          if (iVar3 == 0) {
            fVar9 = (float10)local_20 / (float10)local_18;
          }
          else {
            if ((*param_3 != 2) && (*param_4 != 2)) {
              iVar3 = recovered_2100f((int)param_2,0x43842);
              if (iVar3 == 0) {
                iVar3 = param_3[1] - param_4[1];
              }
              else {
                iVar3 = recovered_2100f((int)param_2,0x43844);
                if (iVar3 == 0) {
                  iVar3 = param_4[1] * param_3[1];
                }
                else {
                  iVar3 = (int)param_3[1] % (int)param_4[1];
                }
              }
              goto LAB_000320ea;
            }
            iVar3 = recovered_2100f((int)param_2,0x43842);
            if (iVar3 == 0) {
              fVar9 = (float10)local_20 - (float10)local_18;
            }
            else {
              iVar3 = recovered_2100f((int)param_2,0x43844);
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
LAB_000321b3:
        recovered_2b044(local_48,(float)fVar9);
      }
      else {
        iVar3 = recovered_2100f((int)param_2,0x4382d);
        if (((iVar3 != 0) && (iVar3 = recovered_2100f((int)param_2,0x43830), iVar3 != 0)) &&
           (iVar3 = recovered_2100f((int)param_2,0x43833), iVar3 != 0)) {
          iVar3 = recovered_2100f((int)param_2,0x43836);
          if (((iVar3 == 0) || (iVar3 = recovered_2100f((int)param_2,0x43838), iVar3 == 0)) ||
             ((iVar3 = recovered_2100f((int)param_2,0x4383a), iVar3 == 0 ||
              (iVar3 = recovered_2100f((int)param_2,0x4383d), iVar3 == 0)))) {
            local_14 = 0;
            uVar7 = recovered_3e9cb((int *)param_3,param_4,&local_14);
            if ((char)uVar7 == '\0') {
              recovered_2f9c3((uint)local_1c,param_2,str_00046821,param_2);
              return uVar7;
            }
            iVar3 = recovered_2100f((int)param_2,0x43836);
            if (iVar3 == 0) {
              uVar6 = local_14;
            }
            else {
              iVar3 = recovered_2100f((int)param_2,0x43838);
              if (iVar3 == 0) {
                uVar6 = (uint)(0 < (int)local_14);
                goto LAB_00032222;
              }
              iVar3 = recovered_2100f((int)param_2,0x4383a);
              if (iVar3 == 0) {
                uVar6 = (uint)((int)local_14 < 1);
                goto LAB_00032222;
              }
              uVar6 = ~local_14;
            }
            uVar6 = uVar6 >> 0x1f;
LAB_00032222:
            recovered_338d9(local_48,uVar6);
            piVar8 = local_48;
            for (iVar3 = 9; iVar3 != 0; iVar3 = iVar3 + -1) {
              *param_5 = *piVar8;
              piVar8 = piVar8 + 1;
              param_5 = param_5 + 1;
            }
            return uVar7;
          }
          format = str_00046849;
LAB_00032005:
          recovered_2f9c3((uint)local_1c,param_2,format);
          goto LAB_0003200a;
        }
        bVar2 = recovered_34abd(param_3,param_4);
        param_3 = (uint *)CONCAT31(extraout_var,bVar2);
        iVar3 = recovered_2100f((int)param_2,0x4382d);
        recovered_338d9(local_48,(uint)((iVar3 != 0) != bVar2));
      }
LAB_000321c0:
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
