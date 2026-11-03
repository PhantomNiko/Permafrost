#include "functions.h"
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
#define local_134 (*(byte (*)[256])(frame + 16))
#define local_34 (*(int * *)(frame + 272))
#define local_28 (*(undefined4 *)(frame + 284))
#define local_24 (*(int * *)(frame + 288))
#define local_20 (*(byte * *)(frame + 292))
#define local_18 (*(uint *)(frame + 300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2bc43
 */

undefined4 recovered_2bc43(int *param_1,int *param_2)

{
  unsigned char frame[356];

  byte bVar1;
  ulonglong uVar2;
  bool bVar3;
  byte bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 extraout_EDX = 0;
  
  if (param_2 == (int *)0x0 || param_1 == (int *)0x0) {
LAB_0002bdc5:
    uVar5 = 0;
  }
  else {
    iVar6 = *param_1;
    uVar5 = 0;
    switch((uintptr_t)(iVar6)) {
    case 1:
    case 5:
    case 6:
      local_24 = (int *)param_1[1];
      if ((int)local_24 < 0) {
        if (iVar6 == 3) goto switchD_0002bc73_caseD_3;
        if (iVar6 != 2) goto LAB_0002bdc5;
        goto switchD_0002bc73_caseD_2;
      }
      break;
    case 2:
switchD_0002bc73_caseD_2:
      if (pf_bits_float((uint32_t)param_1[2]) < 0.0) goto LAB_0002bdc5;
      local_34 = (int *)(longlong)ROUND(pf_bits_float((uint32_t)param_1[2]));
      local_24 = local_34;
      break;
    case 3:
switchD_0002bc73_caseD_3:
      if (param_1[3] != 0) {
        recovered_216bc((char *)local_134,0x100,&DAT_0002cb77,param_1[3]);
        recovered_243a7(local_134);
        if (local_134[0] != 0) {
          local_18 = 0x10;
          local_28 = CONCAT31((int3)((uint)extraout_EDX >> 8),1);
          local_24 = param_2;
          if (local_134[0] == 0x24) {
            iVar6 = 1;
          }
          else if ((local_134[0] == 0x30) && ((local_134[1] & 0xdf) == 0x58)) {
            iVar6 = 2;
          }
          else {
            local_28 = 0;
            local_18 = 10;
            iVar6 = 0;
          }
          local_20 = local_134 + iVar6;
          uVar2 = 0;
          bVar3 = false;
          do {
            bVar1 = *local_20;
            iVar6 = (int)(char)bVar1;
            if (iVar6 == 0) {
              if (bVar3) {
                *local_24 = (int)uVar2;
                goto LAB_0002bd22;
              }
              break;
            }
            if ((char)local_28 == '\0') {
              if (9 < (byte)(bVar1 - 0x30)) break;
              iVar6 = iVar6 + -0x30;
            }
            else {
              bVar3 = recovered_2b303(bVar1);
              if (!bVar3) break;
              if ((byte)(bVar1 - 0x30) < 10) {
                iVar6 = iVar6 + -0x30;
              }
              else {
                bVar4 = bVar1 - 0x20;
                if (0x19 < (byte)(bVar1 + 0x9f)) {
                  bVar4 = bVar1;
                }
                iVar6 = (char)bVar4 + -0x37;
              }
            }
            uVar2 = (uVar2 & 0xffffffff) * (ulonglong)local_18 +
                    CONCAT44((int)(uVar2 >> 0x20) * local_18,iVar6);
            local_20 = local_20 + 1;
            bVar3 = true;
          } while ((int)(uVar2 >> 0x20) == 0);
        }
      }
      goto LAB_0002bdc5;
    default:
      goto switchD_0002bc73_caseD_4;
    }
    *param_2 = (int)local_24;
LAB_0002bd22:
    uVar5 = CONCAT31((int3)((uint)local_24 >> 8),1);
  }
switchD_0002bc73_caseD_4:
  return uVar5;
}

