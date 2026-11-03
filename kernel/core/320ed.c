#include "functions.h"
#undef DAT_0003f336
#define DAT_0003f336 (*(uint8_t *)(0x3f336U))
#define abStack_125 (*(byte (*)[257])(frame + 16))
#define local_24 (*(uint *)(frame + 273))
#define local_20 (*(int *)(frame + 277))
#define local_1c (*(char * *)(frame + 281))
#define local_18 (*(uint *)(frame + 285))
#define local_11 (*(byte *)(frame + 292))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x320ed
 */

undefined4 recovered_320ed(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[341];

  byte *out;
  bool bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == (char *)0x0 || param_1 == 0) {
    return 0;
  }
  out = abStack_125 + 1;
  local_1c = param_2;
  recovered_219e1((char *)out,0x100,&DAT_0003f336,param_1);
  recovered_2659b(out);
  local_18 = recovered_20ff4((int)out);
  if (local_18 < 2) {
LAB_00032256:
    local_1c = (char *)recovered_219e1(local_1c,param_3,&DAT_0003f336,out);
  }
  else {
    local_24 = (uint)abStack_125[1];
    if (local_24 == 0x27) {
      if (out[local_18 - 1] != 0x27) goto LAB_00032256;
    }
    else if ((local_24 != 0x22) || (out[local_18 - 1] != 0x22)) goto LAB_00032256;
    uVar3 = 1;
    for (uVar4 = 1; (uVar3 + 1 < local_18 && (uVar4 < param_3)); uVar4 = uVar4 + 1) {
      bVar2 = abStack_125[uVar3 + 1];
      if (uVar3 + 2 < local_18 && bVar2 == 0x5c) {
        bVar2 = abStack_125[uVar3 + 2];
        if (((bVar2 != 0x22) && (bVar2 != 0x27)) && (bVar2 != 0x5c)) {
          if (bVar2 == 0x6e) {
            bVar2 = 10;
          }
          else {
            if (bVar2 == 0x78) {
              if (local_18 <= uVar3 + 3) {
                return 0;
              }
              bVar2 = abStack_125[uVar3 + 3];
              bVar1 = recovered_27d71(bVar2);
              if (!bVar1) {
                return 0;
              }
              local_20 = (int)(char)abStack_125[uVar3 + 4];
              bVar1 = recovered_27d71(abStack_125[uVar3 + 4]);
              if (!bVar1) {
                return 0;
              }
              local_11 = recovered_27d99(bVar2);
              local_11 = local_11 << 4;
              bVar2 = recovered_27d99((char)local_20);
              bVar2 = bVar2 | local_11;
              uVar3 = uVar3 + 3;
              goto LAB_000321e8;
            }
            if (bVar2 == 0x74) {
              bVar2 = 9;
            }
            else if (bVar2 == 0x72) {
              bVar2 = 0xd;
            }
          }
        }
        uVar3 = uVar3 + 1;
      }
      else if (bVar2 == (byte)local_24) break;
LAB_000321e8:
      local_1c[uVar4 - 1] = bVar2;
      uVar3 = uVar3 + 1;
    }
    local_1c[uVar4 - 1] = '\0';
  }
  return CONCAT31((int3)((uint)local_1c >> 8),1);
}

