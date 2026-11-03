#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x42260
 */

undefined4 recovered_42260(int param_1,int param_2,int *param_3,int *param_4,int *param_5,int *param_6)

{
  unsigned char frame[64];

  char cVar1;
  char *pcVar2;
  char *pcVar3;
  int iVar4;
  int iVar5;
  ushort uVar6;
  char *pcVar7;
  int iVar8;

  if (param_6 != (int *)0x0 &&
      ((param_5 != (int *)0x0 && param_4 != (int *)0x0) && (param_3 != (int *)0x0 && param_1 != 0)))
  {
    pcVar7 = (char *)(param_2 + param_1 + 2);
    for (; *(byte *)(param_1 + param_2) != 0; param_2 = param_2 + 1) {
      if ((byte)((*(byte *)(param_1 + param_2) & 0xdf) + 0xbf) < 0x1a) {
        pcVar3 = pcVar7;
        iVar5 = param_2;
        do {
          iVar4 = iVar5;
          pcVar2 = pcVar3;
          cVar1 = pcVar2[-1];
          if (cVar1 == '\0') goto LAB_000422d2;
          uVar6 = CONCAT11(cVar1,cVar1) & 0xdfff;
          pcVar3 = pcVar2 + 1;
          iVar5 = iVar4 + 1;
        } while ((byte)((char)(uVar6 >> 8) + 0xbfU) < 0x1a);
        if (((char)uVar6 == '-') && ((byte)(*pcVar2 - 0x30U) < 10)) {
          iVar4 = iVar4 + 2;
          iVar8 = iVar4;
          do {
            cVar1 = *pcVar3;
            iVar8 = iVar8 + 1;
            pcVar3 = pcVar3 + 1;
          } while ((byte)(cVar1 - 0x30U) < 10);
          *param_3 = param_2;
          *param_4 = iVar5;
          *param_5 = iVar4;
          *param_6 = iVar8;
          return CONCAT31((int3)((uint)param_6 >> 8),1);
        }
      }
LAB_000422d2:
      pcVar7 = pcVar7 + 1;
    }
  }
  return 0;
}
