/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208f2a2 (*(char (*)[1])(0x20c65acU))
#define str_0208f2b4 (*(char (*)[1])(0x20c65beU))
#define str_0208f2c4 (*(char (*)[1])(0x20c65ceU))
undefined4 recovered_205b0f0(int incoming_ecx,uint incoming_edx,byte param_3,int param_4)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined4 in_EAX = 0;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  char *left;
  char *left_00;
  char *pcVar6;
  uint uVar7;

  if (incoming_ecx == 0) {
LAB_02043ffa:
    uVar5 = 0;
  }
  else {
    uVar5 = CONCAT31((int3)((uint)in_EAX >> 8),1);
    if (*(int *)(incoming_ecx + 0x4348) != 0) {
      pcVar6 = (char *)(incoming_ecx + 0x6c7);
      uVar7 = 0;
LAB_02043f56:
      left = (char *)(uVar7 * 0xf1 + incoming_ecx + 0x6c6);
      pcVar2 = pcVar6;
      left_00 = left;
      do {
        cVar1 = pcVar2[-1];
        if ((cVar1 == '/') || (cVar1 == '\\')) {
          left_00 = pcVar2;
        }
        else if (cVar1 == '\0') goto code_r0x02043f85;
        pcVar2 = pcVar2 + 1;
      } while( true );
    }
  }
  return uVar5;
code_r0x02043f85:
  iVar3 = recovered_20022a0(left_00,str_0208f2a2);
  iVar4 = 0;
  if (iVar3 != 0) {
    iVar3 = recovered_20022a0(left_00,str_0208f2b4);
    iVar4 = 0;
    if (iVar3 != 0) {
      iVar3 = recovered_20022a0(left,str_0208f2c4);
      iVar4 = 0;
      if (((iVar3 != 0) &&
          (iVar4 = recovered_205ba40(left,incoming_edx,param_3,param_4), (char)iVar4 == '\0')) &&
         (iVar4 = incoming_ecx, *(char *)(incoming_ecx + 0x4306 + uVar7) != '\x01'))
      goto LAB_02043ffa;
    }
  }
  uVar7 = uVar7 + 1;
  pcVar6 = pcVar6 + 0xf1;
  if (*(uint *)(incoming_ecx + 0x4348) <= uVar7) {
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  goto LAB_02043f56;
}
