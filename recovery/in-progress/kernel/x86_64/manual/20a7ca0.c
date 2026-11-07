/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a445a (*(uint8_t *)(0x20f4c00U))
#define DAT_020de648 (*(uint64_t volatile *)(0x226c298U))
#define DAT_020de650 (*(uint64_t volatile *)(0x226c2a0U))
#define local_38 (*(char * *)(frame + 104))
#define local_40 (*(int * *)(frame + 96))
#define local_48 (*(char * *)(frame + 88))
#define local_88 (*(char (*)[64])(frame + 24))
#define str_020a445f (*(char (*)[1])(0x20f4c05U))
#define str_020a47a4 (*(char (*)[1])(0x20f4f31U))
#define str_020a47b0 (*(char (*)[1])(0x20f4f3dU))
#define str_020a47b6 (*(char (*)[1])(0x20f4f43U))
uint recovered_20a7ca0(int *param_1,int *param_2,undefined8 *param_3)

{
  unsigned char frame[192] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char *left;
  uchar uVar2;
  uint uVar3;
  int iVar4;
  undefined7 extraout_var = 0;
  ulonglong uVar5;
  char *extraout_RAX = 0;
  ulong uVar6;
  long lVar7;
  long lVar8;
  long *plVar9;
  ulong uVar10;

  local_38 = (char *)0x0;
  if (param_3 == (undefined8 *)0x0 || (param_2 == (int *)0x0 || param_1 == (int *)0x0)) {
    return 0;
  }
  iVar4 = *param_1;
  if (iVar4 == 3) {
    if (*param_2 != 1) {
      if (*param_2 != 3) {
        return 0;
      }
      if (*(ulonglong *)(param_2 + 4) == 0) {
        return 0;
      }
      pf_varargs_20039e0__8_(local_88,0x40,str_020a47b6,*(ulonglong *)(param_2 + 4));
      uVar2 = recovered_20a9990(param_3,(long)local_88,(long)param_1);
      local_48 = (char *)CONCAT71(extraout_var,uVar2);
      if (uVar2 == '\0') {
        *param_3 = 0;
        *(undefined4 *)(param_3 + 1) = 0;
        param_3[2] = 0;
        param_3[3] = 0;
        param_3[4] = 0;
        param_3[5] = 0;
        param_3[6] = 0;
        param_3[7] = 0;
      }
      goto LAB_0206a7f5;
    }
    local_48 = *(char **)(param_1 + 4);
    if (local_48 == (char *)0x0) {
      return 0;
    }
    iVar4 = param_2[1];
    if ((0 < (long)iVar4) &&
       (local_48 = (char *)recovered_2002e80(local_48), (char *)(long)iVar4 <= local_48)) {
      uVar3 = recovered_20a9af0((undefined4 *)param_3,
                                (undefined1 *)(*(long *)(param_1 + 4) + (long)param_2[1] + -1),1);
      return uVar3;
    }
  }
  else {
    if (iVar4 == 8) {
      if ((*(long *)(param_1 + 0xc) == 0) ||
         (local_48 = (char *)param_3, local_40 = param_2,
         uVar3 = recovered_20a8d30(param_2,&local_38), (char)uVar3 == '\0')) {
        recovered_2000bb0(local_38);
        return 0;
      }
      if (((*param_1 == 8) && (lVar8 = *(long *)(param_1 + 0xc), lVar8 != 0)) &&
         (uVar6 = *(ulong *)(lVar8 + 8), uVar6 != 0)) {
        lVar7 = 0;
        uVar10 = 0;
        do {
          pcVar1 = *(char **)(*(long *)(lVar8 + 0x18) + lVar7);
          if (pcVar1 != (char *)0x0) {
            iVar4 = recovered_2002eb0(pcVar1,str_020a47a4);
            if (iVar4 == 0) {
              if (-1 < (int)(uint)uVar10) {
                uVar6 = (ulong)((uint)uVar10 & 0x7fffffff);
                if (((*(int *)(*(long *)(lVar8 + 0x18) + 8 + uVar6 * 0x48) == 6) &&
                    (iVar4 = *(int *)(*(long *)(lVar8 + 0x18) + uVar6 * 0x48 + 0xc), iVar4 != 0)) &&
                   (lVar8 = DAT_020de648, lVar8 != 0)) {
                  lVar7 = DAT_020de650;
                  plVar9 = (long *)(lVar7 + 8);
                  goto LAB_0206a594;
                }
              }
              break;
            }
            uVar6 = *(ulong *)(lVar8 + 8);
          }
          uVar10 = uVar10 + 1;
          lVar7 = lVar7 + 0x48;
        } while (uVar10 < uVar6);
      }
      goto LAB_0206a736;
    }
    if (iVar4 != 7) {
      return 0;
    }
    local_48 = (char *)0x0;
    if ((((*param_2 == 1) && (local_48 = *(char **)(param_1 + 10), local_48 != (char *)0x0)) &&
        (uVar6 = (ulong)param_2[1], 0 < (long)uVar6)) && (uVar6 <= *(ulong *)(local_48 + 8))) {
      uVar3 = recovered_20a0670(param_3,(undefined8 *)
                                        (*(long *)(local_48 + 0x18) + uVar6 * 0x40 + -0x40));
      return uVar3;
    }
  }
  *param_3 = 0;
  *(undefined4 *)(param_3 + 1) = 0;
  param_3[2] = 0;
  param_3[3] = 0;
  param_3[4] = 0;
  param_3[5] = 0;
  param_3[6] = 0;
  param_3[7] = 0;
  goto LAB_0206a7f5;
  while( true ) {
    plVar9 = plVar9 + 2;
    lVar8 = lVar8 + -1;
    if (lVar8 == 0) break;
LAB_0206a594:
    if ((int)plVar9[-1] == iVar4) {
      if (((*plVar9 == 0) || (*local_40 != 3)) || (*(char **)(local_40 + 4) == (char *)0x0)) break;
      iVar4 = recovered_2002eb0(*(char **)(local_40 + 4),&DAT_020a445a);
      if (iVar4 == 0) {
        uVar5 = recovered_20a9a50(*(long *)(param_1 + 0xc),0x20f4f31U);
        uVar2 = recovered_20a9990((undefined8 *)local_48,0x20f4f02U,uVar5);
        if (uVar2 == '\0') goto LAB_0206a6a4;
      }
      else {
LAB_0206a6a4:
        iVar4 = recovered_2002eb0(*(char **)(local_40 + 4),str_020a445f);
        if (iVar4 == 0) {
          uVar5 = recovered_20a9a50(*(long *)(param_1 + 0xc),0x20f4f31U);
          uVar2 = recovered_20a9990((undefined8 *)local_48,0x20f4f11U,uVar5);
          if (uVar2 != '\0') goto LAB_0206a728;
        }
        iVar4 = recovered_2002eb0(*(char **)(local_40 + 4),str_020a47b0);
        if (iVar4 != 0) break;
        uVar5 = recovered_20a9a50(*(long *)(param_1 + 0xc),0x20f4f31U);
        uVar2 = recovered_20a9990((undefined8 *)local_48,0x20f4f21U,uVar5);
        if (uVar2 == '\0') break;
      }
LAB_0206a728:
      recovered_2000bb0(local_38);
      local_48 = extraout_RAX;
      goto LAB_0206a7f5;
    }
  }
LAB_0206a736:
  pcVar1 = local_38;
  lVar8 = *(long *)(param_1 + 0xc);
  if ((local_38 != (char *)0x0 && lVar8 != 0) && (uVar6 = *(ulong *)(lVar8 + 8), uVar6 != 0)) {
    lVar7 = 0;
    uVar10 = 0;
    do {
      left = *(char **)(*(long *)(lVar8 + 0x18) + lVar7);
      if (left != (char *)0x0) {
        iVar4 = recovered_2002eb0(left,pcVar1);
        if (iVar4 == 0) {
          recovered_2000bb0(local_38);
          if (-1 < (int)(uint)uVar10) {
            uVar3 = recovered_20a0670((undefined8 *)local_48,
                                      (undefined8 *)
                                      (*(long *)(*(long *)(param_1 + 0xc) + 0x18) +
                                       (ulong)((uint)uVar10 & 0x7fffffff) * 0x48 + 8));
            return uVar3;
          }
          goto LAB_0206a7d4;
        }
        uVar6 = *(ulong *)(lVar8 + 8);
      }
      uVar10 = uVar10 + 1;
      lVar7 = lVar7 + 0x48;
    } while (uVar10 < uVar6);
  }
  recovered_2000bb0(local_38);
LAB_0206a7d4:
  local_48[0] = '\0';
  local_48[1] = '\0';
  local_48[2] = '\0';
  local_48[3] = '\0';
  local_48[4] = '\0';
  local_48[5] = '\0';
  local_48[6] = '\0';
  local_48[7] = '\0';
  local_48[8] = '\0';
  local_48[9] = '\0';
  local_48[10] = '\0';
  local_48[0xb] = '\0';
  local_48[0x10] = '\0';
  local_48[0x11] = '\0';
  local_48[0x12] = '\0';
  local_48[0x13] = '\0';
  local_48[0x14] = '\0';
  local_48[0x15] = '\0';
  local_48[0x16] = '\0';
  local_48[0x17] = '\0';
  local_48[0x18] = '\0';
  local_48[0x19] = '\0';
  local_48[0x1a] = '\0';
  local_48[0x1b] = '\0';
  local_48[0x1c] = '\0';
  local_48[0x1d] = '\0';
  local_48[0x1e] = '\0';
  local_48[0x1f] = '\0';
  local_48[0x20] = '\0';
  local_48[0x21] = '\0';
  local_48[0x22] = '\0';
  local_48[0x23] = '\0';
  local_48[0x24] = '\0';
  local_48[0x25] = '\0';
  local_48[0x26] = '\0';
  local_48[0x27] = '\0';
  local_48[0x28] = '\0';
  local_48[0x29] = '\0';
  local_48[0x2a] = '\0';
  local_48[0x2b] = '\0';
  local_48[0x2c] = '\0';
  local_48[0x2d] = '\0';
  local_48[0x2e] = '\0';
  local_48[0x2f] = '\0';
  local_48[0x30] = '\0';
  local_48[0x31] = '\0';
  local_48[0x32] = '\0';
  local_48[0x33] = '\0';
  local_48[0x34] = '\0';
  local_48[0x35] = '\0';
  local_48[0x36] = '\0';
  local_48[0x37] = '\0';
  local_48[0x38] = '\0';
  local_48[0x39] = '\0';
  local_48[0x3a] = '\0';
  local_48[0x3b] = '\0';
  local_48[0x3c] = '\0';
  local_48[0x3d] = '\0';
  local_48[0x3e] = '\0';
  local_48[0x3f] = '\0';
LAB_0206a7f5:
  return (uint)CONCAT71((int7)((ulong)local_48 >> 8),1);
}
