#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#define local_24 (*(uint *)(frame + 273))
#define local_20 (*(int *)(frame + 277))
#define local_1c (*(char * *)(frame + 281))
#define local_18 (*(uint *)(frame + 285))
#define local_11 (*(byte *)(frame + 292))
#define abStack_125 (*(byte (*)[257])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x46142
 */

undefined4 recovered_46142(int param_1,char *param_2,uint param_3)

{
  unsigned char frame[341] = {0};

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
  recovered_22362((char *)out,0x100,&DAT_00057391,param_1);
  recovered_3677d(out);
  local_18 = recovered_214de((int)out);
  if (local_18 < 2) {
LAB_000462ab:
    local_1c = (char *)recovered_22362(local_1c,param_3,&DAT_00057391,out);
  }
  else {
    local_24 = (uint)abStack_125[1];
    if (local_24 == 0x27) {
      if (out[local_18 - 1] != 0x27) goto LAB_000462ab;
    }
    else if ((local_24 != 0x22) || (out[local_18 - 1] != 0x22)) goto LAB_000462ab;
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
              bVar1 = recovered_3787c(bVar2);
              if (!bVar1) {
                return 0;
              }
              local_20 = (int)(char)abStack_125[uVar3 + 4];
              bVar1 = recovered_3787c(abStack_125[uVar3 + 4]);
              if (!bVar1) {
                return 0;
              }
              local_11 = recovered_378a4(bVar2);
              local_11 = local_11 << 4;
              bVar2 = recovered_378a4((char)local_20);
              bVar2 = bVar2 | local_11;
              uVar3 = uVar3 + 3;
              goto LAB_0004623d;
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
LAB_0004623d:
      local_1c[uVar4 - 1] = bVar2;
      uVar3 = uVar3 + 1;
    }
    local_1c[uVar4 - 1] = '\0';
  }
  return CONCAT31((int3)((uint)local_1c >> 8),1);
}
