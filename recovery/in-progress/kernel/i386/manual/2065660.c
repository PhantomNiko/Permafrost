/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"



bool recovered_2065660(int in_ECX,char *in_EDX,undefined4 *param_3,int *param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  uint *puVar1;
  char *left;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;

  if ((in_EDX != (char *)0x0 && in_ECX != 0) && (*in_EDX != '\0')) {
    uVar4 = *(uint *)(in_ECX + 0x18);
    uVar6 = 0;
    if (uVar4 != 0) {
      do {
        left = *(char **)(in_ECX + 0x1820 + uVar6 * 4);
        if (left != (char *)0x0) {
          iVar5 = recovered_20022a0(left,in_EDX);
          if (iVar5 == 0) {
            if ((int)uVar6 < 0) {
              return false;
            }
            iVar5 = *(int *)(in_ECX + 0x19a0);
            if (iVar5 == 0) {
              return false;
            }
            if (param_3 != (undefined4 *)0x0) {
              uVar2 = *(undefined4 *)(iVar5 + 0xbd4 + uVar6 * 8);
              param_3[1] = *(undefined4 *)(iVar5 + 0xbd8 + uVar6 * 8);
              *param_3 = uVar2;
            }
            if (param_4 != (int *)0x0) {
              uVar4 = *(uint *)(iVar5 + 0xed4 + uVar6 * 8);
              puVar1 = (uint *)(iVar5 + 0xbd4 + uVar6 * 8);
              uVar3 = *puVar1;
              param_4[1] = *(int *)(iVar5 + 0xed8 + uVar6 * 8) + *(int *)(iVar5 + 0xbd8 + uVar6 * 8)
                           + (uint)CARRY4(uVar4,*puVar1);
              *param_4 = uVar4 + uVar3;
            }
            if (*(int *)(iVar5 + 0xbd4 + uVar6 * 8) == 0 && *(int *)(iVar5 + 0xbd8 + uVar6 * 8) == 0
               ) {
              return *(int *)(iVar5 + 0xed4 + uVar6 * 8) == 0 &&
                     *(int *)(iVar5 + 0xed8 + uVar6 * 8) == 0;
            }
            return true;
          }
          uVar4 = *(uint *)(in_ECX + 0x18);
        }
        uVar6 = uVar6 + 1;
      } while (uVar6 < uVar4);
    }
  }
  return false;
}
