#include "functions.h"
#undef DAT_0002ca9c
#define DAT_0002ca9c (*(uint8_t *)(0x2ca9cU))
#undef str_0002de4f
#define str_0002de4f (*(char (*)[1])(0x2de4fU))
#undef str_0002de79
#define str_0002de79 (*(char (*)[1])(0x2de79U))
#undef str_0002dea1
#define str_0002dea1 (*(char (*)[1])(0x2dea1U))
#undef str_0002dec6
#define str_0002dec6 (*(char (*)[1])(0x2dec6U))
#undef str_0002ded7
#define str_0002ded7 (*(char (*)[1])(0x2ded7U))
#undef str_0002deff
#define str_0002deff (*(char (*)[1])(0x2deffU))
#define local_3c (*(int (*)[8])(frame + 24))
#define format (*(char * *)(frame + 16))
#define local_1c (*(float *)(frame + 56))
#define local_18 (*(int *)(frame + 60))
#define local_14 (*(float *)(frame + 64))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2729c
 */

undefined4 __fastcall
recovered_2729c(int *param_1,char *param_2,uint *param_3,uint *param_4,undefined4 *param_5)

{
  unsigned char frame[116];

  bool bVar1;
  int iVar2;
  float fVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined1 *puVar6;
  uint uVar7;
  undefined1 *puVar8;
  uint uVar9;
  int *piVar10;
  float10 fVar11;
  double dVar12;
  
  if (param_5 == (undefined4 *)0x0 || (param_4 == (uint *)0x0 || param_3 == (uint *)0x0)) {
    return 0;
  }
  iVar2 = recovered_20cea((int)param_2,0x2ce7d);
  if (iVar2 == 0) {
    uVar9 = *param_3;
    if ((uVar9 == 3) || (uVar7 = *param_4, uVar7 == 3)) {
      local_3c[0] = 0;
      local_18 = 0;
      bVar1 = recovered_2b32b((int *)param_3,local_3c);
      if ((bVar1) && (bVar1 = recovered_2b32b((int *)param_4,&local_18), bVar1)) {
        fVar3 = (float)recovered_20ccf(local_3c[0]);
        iVar2 = recovered_20ccf(local_18);
        local_14 = fVar3;
        pvVar4 = recovered_20ae5(iVar2 + (int)fVar3 + 1);
        fVar3 = local_14;
        if (pvVar4 != (void *)0x0) {
          recovered_20c1d((int)pvVar4,local_3c[0],(int)local_14);
          recovered_20c1d((int)pvVar4 + (int)fVar3,local_18,iVar2 + 1);
          recovered_24daf(param_5);
          *param_5 = 3;
          param_5[1] = 0;
          param_5[3] = pvVar4;
          recovered_20aee(local_3c[0]);
          puVar5 = (undefined4 *)recovered_20aee(local_18);
          goto LAB_000277f2;
        }
      }
      recovered_20aee(local_3c[0]);
      recovered_20aee(local_18);
      format = str_0002de4f;
      goto LAB_000276c4;
    }
    if ((((5 < uVar9) || ((0x26U >> (uVar9 & 0x1f) & 1) == 0)) || (5 < uVar7)) ||
       ((0x26U >> (uVar7 & 0x1f) & 1) == 0)) {
      format = str_0002de79;
      goto LAB_000276c4;
    }
    if (!(uVar9 != 2 && uVar7 != 2)) {
      fVar11 = recovered_2c1d8((int *)param_3);
      local_14 = (float)fVar11;
      fVar11 = recovered_2c1d8((int *)param_4);
      fVar11 = (float10)local_14 + fVar11;
      goto LAB_000277bc;
    }
    iVar2 = param_4[1] + param_3[1];
LAB_000277e5:
    puVar5 = recovered_28508(local_3c,iVar2);
  }
  else {
    iVar2 = recovered_20cea((int)param_2,0x2ce7f);
    if (((iVar2 != 0) && (iVar2 = recovered_20cea((int)param_2,0x2ce81), iVar2 != 0)) &&
       ((iVar2 = recovered_20cea((int)param_2,0x2ce83), iVar2 != 0 &&
        (iVar2 = recovered_20cea((int)param_2,0x2ce85), iVar2 != 0)))) {
      iVar2 = recovered_20cea((int)param_2,0x2ce6a);
      if (((iVar2 == 0) || (iVar2 = recovered_20cea((int)param_2,0x2ce6d), iVar2 == 0)) ||
         (iVar2 = recovered_20cea((int)param_2,0x2ce70), iVar2 == 0)) {
        bVar1 = recovered_2bab4(param_3,param_4);
        iVar2 = recovered_20cea((int)param_2,0x2ce6a);
        uVar9 = (uint)((iVar2 != 0) != bVar1);
        goto LAB_000276a9;
      }
      iVar2 = recovered_20cea((int)param_2,0x2ce73);
      if ((((iVar2 != 0) && (iVar2 = recovered_20cea((int)param_2,0x2ce75), iVar2 != 0)) &&
          (iVar2 = recovered_20cea((int)param_2,0x2ce77), iVar2 != 0)) &&
         (iVar2 = recovered_20cea((int)param_2,0x2ce7a), iVar2 != 0)) {
        format = str_0002deff;
        goto LAB_000276c4;
      }
      uVar9 = *param_3;
      if (uVar9 - 1 < 2) {
LAB_00027776:
        uVar7 = *param_4;
        if ((uVar7 < 6) && ((0x26U >> (uVar7 & 0x1f) & 1) != 0)) {
          fVar11 = recovered_2c1d8((int *)param_3);
          local_14 = (float)fVar11;
          fVar11 = recovered_2c1d8((int *)param_4);
          if (fVar11 <= (float10)local_14) {
            uVar9 = (uint)(fVar11 < (float10)local_14);
          }
          else {
            uVar9 = 0xffffffff;
          }
LAB_00027858:
          iVar2 = recovered_20cea((int)param_2,0x2ce73);
          if (iVar2 == 0) {
LAB_00027896:
            uVar9 = uVar9 >> 0x1f;
          }
          else {
            iVar2 = recovered_20cea((int)param_2,0x2ce75);
            if (iVar2 == 0) {
              uVar9 = (uint)(0 < (int)uVar9);
            }
            else {
              iVar2 = recovered_20cea((int)param_2,0x2ce77);
              if (iVar2 != 0) {
                uVar9 = ~uVar9;
                goto LAB_00027896;
              }
              uVar9 = (uint)((int)uVar9 < 1);
            }
          }
LAB_000276a9:
          puVar5 = recovered_27014(local_3c,uVar9);
          goto LAB_000277ea;
        }
        if (uVar9 == 3) goto LAB_00027825;
      }
      else if (uVar9 == 3) {
        uVar7 = *param_4;
LAB_00027825:
        if (uVar7 == 3) {
          puVar6 = (undefined1 *)param_3[3];
          if (puVar6 == (undefined1 *)0x0) {
            puVar6 = &DAT_0002ca9c;
          }
          puVar8 = (undefined1 *)param_4[3];
          if (puVar8 == (undefined1 *)0x0) {
            puVar8 = &DAT_0002ca9c;
          }
          iVar2 = recovered_20cea((int)puVar6,(int)puVar8);
          uVar9 = (uint)(iVar2 != 0);
          if (iVar2 < 0) {
            uVar9 = 0xffffffff;
          }
          goto LAB_00027858;
        }
      }
      else if (uVar9 == 5) goto LAB_00027776;
      format = str_0002ded7;
LAB_000276c4:
      recovered_2609c((uint)param_1,param_2,format);
      return 0;
    }
    if (((5 < *param_3) || ((0x26U >> (*param_3 & 0x1f) & 1) == 0)) ||
       ((5 < *param_4 || ((0x26U >> (*param_4 & 0x1f) & 1) == 0)))) {
      format = str_0002dea1;
      goto LAB_000276c4;
    }
    fVar11 = recovered_2c1d8((int *)param_3);
    local_1c = (float)fVar11;
    fVar11 = recovered_2c1d8((int *)param_4);
    local_14 = (float)fVar11;
    iVar2 = recovered_20cea((int)param_2,0x2ce83);
    if (iVar2 == 0) {
      if ((local_14 == 0.0) && (!NAN(local_14))) goto LAB_00027625;
    }
    else {
      iVar2 = recovered_20cea((int)param_2,0x2ce85);
      if (iVar2 == 0 && local_14 == 0.0) {
LAB_00027625:
        format = str_0002dec6;
        goto LAB_000276c4;
      }
    }
    if ((*param_3 != 2) && (*param_4 != 2)) {
      iVar2 = recovered_20cea((int)param_2,0x2ce7f);
      if (iVar2 == 0) {
        iVar2 = param_3[1] - param_4[1];
      }
      else {
        iVar2 = recovered_20cea((int)param_2,0x2ce81);
        if (iVar2 == 0) {
          iVar2 = param_4[1] * param_3[1];
        }
        else {
          iVar2 = recovered_20cea((int)param_2,0x2ce83);
          if (iVar2 == 0) {
            iVar2 = (int)param_3[1] / (int)param_4[1];
          }
          else {
            iVar2 = (int)param_3[1] % (int)param_4[1];
          }
        }
      }
      goto LAB_000277e5;
    }
    iVar2 = recovered_20cea((int)param_2,0x2ce7f);
    if (iVar2 == 0) {
      fVar11 = (float10)local_1c - (float10)local_14;
    }
    else {
      iVar2 = recovered_20cea((int)param_2,0x2ce81);
      if (iVar2 == 0) {
        fVar11 = (float10)local_14 * (float10)local_1c;
      }
      else {
        iVar2 = recovered_20cea((int)param_2,0x2ce83);
        if (iVar2 == 0) {
          fVar11 = (float10)local_1c / (float10)local_14;
        }
        else {
          dVar12 = recovered_2109b(local_1c,local_14);
          fVar11 = (float10)dVar12;
        }
      }
    }
LAB_000277bc:
    puVar5 = recovered_24f15(local_3c,(float)fVar11);
  }
LAB_000277ea:
  piVar10 = local_3c;
  for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
    *param_5 = *piVar10;
    piVar10 = piVar10 + 1;
    param_5 = param_5 + 1;
  }
LAB_000277f2:
  return CONCAT31((int3)((uint)puVar5 >> 8),1);
}

