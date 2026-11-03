#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e6a0
#define DAT_0005e6a0 (*(int *)(0x5e6a0U))
#define local_109 (*(byte (*)[241])(frame + 16))
#define local_18 (*(int *)(frame + 257))
#define local_14 (*(char * *)(frame + 261))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x39f65
 */

undefined4 recovered_39f65(int param_1,int param_2,int param_3,uint param_4,undefined4 param_5,
               undefined4 param_6)

{
  unsigned char frame[313] = {0};

  bool bVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;

  if ((((param_1 == 0) || (recovered_37f88(param_1,local_109), local_109[0] == 0)) ||
      (uVar3 = recovered_38140(local_109), uVar3 != 0xffffffff)) ||
     (bVar1 = recovered_38a82(DAT_0005e6a0 + 1), !bVar1)) {
    recovered_21203(param_2);
  }
  else {
    local_18 = DAT_0005e69c;
    iVar4 = DAT_0005e6a0 * 0x10c;
    local_14 = (char *)(DAT_0005e69c + iVar4);
    DAT_0005e6a0 = DAT_0005e6a0 + 1;
    recovered_213af((int)local_14,0,0x10c);
    recovered_22362(local_14,0xf1,&DAT_00057391,local_109);
    *(int *)(local_18 + 0xf4 + iVar4) = param_2;
    *(int *)(local_18 + 0xf8 + iVar4) = param_3;
    *(uint *)(local_18 + 0xfc + iVar4) = param_4;
    bVar2 = (byte)(param_4 >> 1) & 1;
    if (param_3 == 0) {
      bVar2 = 1;
    }
    *(undefined4 *)(local_18 + 0x100 + iVar4) = param_5;
    if (param_2 != 0) {
      bVar2 = 1;
    }
    *(undefined4 *)(local_18 + 0x104 + iVar4) = param_6;
    *(byte *)(local_18 + 0x108 + iVar4) = bVar2;
    uVar3 = recovered_38b45(DAT_0005e6a0 - 1);
    if ((char)uVar3 != '\0') {
      return CONCAT31((int3)(uVar3 >> 8),1);
    }
    recovered_21203(param_2);
    recovered_213af((int)local_14,0,0x10c);
    DAT_0005e6a0 = DAT_0005e6a0 + -1;
  }
  return 0;
}
