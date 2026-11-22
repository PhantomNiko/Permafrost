/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define DAT_020a40d3 (*(uint8_t *)(0x20f4894U))
#define DAT_020a40d4 (*(uint8_t *)(0x20f4895U))
#define DAT_020a40d5 (*(uint8_t *)(0x20f4896U))
#define DAT_020a40d6 (*(uint8_t *)(0x20f4897U))
#define local_40 (*(ulong *)(frame + 64))
#define local_50 (*(ulong *)(frame + 48))
#define local_60 (*(ulong *)(frame + 32))
#define local_70 (*(ulong *)(frame + 16))
#define ram0x020a23c0 (*(float *)(0x20ebb60U))
#define uStack_38 (*(ulong *)(frame + 72))
#define uStack_48 (*(ulong *)(frame + 56))
#define uStack_58 (*(ulong *)(frame + 40))
#define uStack_64 (*(undefined4 *)(frame + 28))
#define uStack_68 (*(undefined4 *)(frame + 24))
uchar recovered_20a1dc0(ulonglong *param_1,ulong *param_2)

{
  unsigned char frame[160] __attribute__((aligned(16))) = {0};

  char cVar1;
  char *left;
  uchar uVar2;
  uchar uVar3;
  int iVar4;
  ulong *puVar5;
  ulong uVar6;
  char cVar7;
  char *pcVar8;
  bool bVar9;

  uVar2 = recovered_20a2020(param_1,param_2);
  if (uVar2 == '\0') {
LAB_02064705:
    uVar2 = '\0';
  }
  else {
    puVar5 = (ulong *)param_1[1];
    uVar6 = param_1[2];
    uVar2 = '\x01';
    if (uVar6 < *puVar5) {
      do {
        left = *(char **)(puVar5[2] + uVar6 * 8);
        if (left == (char *)0x0) {
LAB_020645b5:
          iVar4 = recovered_2002eb0(left,&DAT_020a40d6);
          if (iVar4 != 0) {
            return '\x01';
          }
        }
        else {
          cVar1 = *left;
          pcVar8 = &DAT_020a40d3;
          if (cVar1 != '\0') {
            if (cVar1 != 'o') {
              cVar7 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar7 = cVar1;
              }
              if (cVar7 != 'O') goto LAB_020645b5;
            }
            cVar1 = left[1];
            pcVar8 = &DAT_020a40d4;
            if (cVar1 != '\0') {
              if (cVar1 != 'r') {
                cVar7 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar7 = cVar1;
                }
                if (cVar7 != 'R') goto LAB_020645b5;
              }
              pcVar8 = &DAT_020a40d5;
              if (left[2] != '\0') goto LAB_020645b5;
            }
          }
          if (*pcVar8 != '\0') goto LAB_020645b5;
        }
        if (param_2 == (ulong *)0x0) goto switchD_020645e6_default;
        switch((uintptr_t)((int)*param_2)) {
        case 1:
        case 5:
        case 6:
          bVar9 = *(int *)((long)param_2 + 4) == 0;
          break;
        case 2:
          bVar9 = *(float *)(param_2 + 1) != ram0x020a23c0;
          goto LAB_02064643;
        case 3:
          if ((char *)param_2[2] == (char *)0x0) goto switchD_020645e6_default;
          bVar9 = *(char *)param_2[2] == '\0';
          break;
        case 4:
          bVar9 = param_2[4] == 0;
          break;
        case 7:
          uVar6 = param_2[5];
          if (uVar6 == 0) goto switchD_020645e6_default;
LAB_0206460a:
          bVar9 = *(long *)(uVar6 + 8) == 0;
          break;
        case 8:
          uVar6 = param_2[6];
          if (uVar6 != 0) goto LAB_0206460a;
        default:
switchD_020645e6_default:
          bVar9 = false;
          goto LAB_02064643;
        case 9:
          bVar9 = param_2[7] == 0;
        }
        bVar9 = !bVar9;
LAB_02064643:
        param_1[2] = param_1[2] + 1;
        local_70 = 0;
        uStack_68 = 0;
        local_60 = 0;
        uStack_58 = 0;
        local_50 = 0;
        uStack_48 = 0;
        local_40 = 0;
        uStack_38 = 0;
        uVar3 = recovered_20a2020(param_1,&local_70);
        if (uVar3 == '\0') {
          recovered_205ec00(param_2);
          goto LAB_02064705;
        }
        if ((!bVar9) && (recovered_205ec00(param_2), param_2 != (ulong *)0x0)) {
          recovered_205ec00(param_2);
          param_2[6] = local_40;
          param_2[7] = uStack_38;
          param_2[4] = local_50;
          param_2[5] = uStack_48;
          param_2[2] = local_60;
          param_2[3] = uStack_58;
          *param_2 = local_70;
          param_2[1] = CONCAT44(uStack_64,uStack_68);
          local_70 = 0;
          uStack_68 = 0;
          local_60 = 0;
          uStack_58 = 0;
          local_50 = 0;
          uStack_48 = 0;
          local_40 = 0;
          uStack_38 = 0;
        }
        recovered_205ec00(&local_70);
        puVar5 = (ulong *)param_1[1];
        uVar6 = param_1[2];
      } while (uVar6 < *puVar5);
    }
  }
  return uVar2;
}
