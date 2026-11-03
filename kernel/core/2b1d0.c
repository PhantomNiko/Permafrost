#include "functions.h"
#undef DAT_0002cb77
#define DAT_0002cb77 (*(uint8_t *)(0x2cb77U))
#define abStack_121 (*(byte (*)[257])(frame + 16))
#define local_20 (*(uint *)(frame + 273))
#define local_1c (*(char * *)(frame + 277))
#define local_18 (*(uint *)(frame + 281))
#define local_11 (*(undefined1 *)(frame + 288))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2b1d0
 */

undefined1 recovered_2b1d0(int param_1,int param_2,uint param_3)

{
  unsigned char frame[337];

  byte *out;
  uint uVar1;
  byte bVar2;
  uint uVar3;
  
  local_11 = param_2 != 0 && param_1 != 0;
  if (param_2 == 0 || param_1 == 0) {
    return (bool)local_11;
  }
  out = abStack_121 + 1;
  local_1c = (char *)param_2;
  recovered_216bc((char *)out,0x100,&DAT_0002cb77,param_1);
  recovered_243a7(out);
  local_18 = recovered_20ccf((int)out);
  if (local_18 < 2) {
LAB_0002b2e1:
    recovered_216bc(local_1c,param_3,&DAT_0002cb77,out);
  }
  else {
    local_20 = (uint)abStack_121[1];
    if (local_20 == 0x27) {
      if (out[local_18 - 1] != 0x27) goto LAB_0002b2e1;
    }
    else if ((local_20 != 0x22) || (out[local_18 - 1] != 0x22)) goto LAB_0002b2e1;
    uVar3 = 1;
    for (uVar1 = 1; (uVar3 + 1 < local_18 && (uVar1 < param_3)); uVar1 = uVar1 + 1) {
      bVar2 = abStack_121[uVar3 + 1];
      if (uVar3 + 2 < local_18 && bVar2 == 0x5c) {
        bVar2 = abStack_121[uVar3 + 2];
        if (((bVar2 != 0x22) && (bVar2 != 0x27)) && (bVar2 != 0x5c)) {
          if (bVar2 == 0x6e) {
            bVar2 = 10;
          }
          else if (bVar2 == 0x74) {
            bVar2 = 9;
          }
          else if (bVar2 == 0x72) {
            bVar2 = 0xd;
          }
        }
        uVar3 = uVar3 + 1;
      }
      else if (bVar2 == abStack_121[1]) break;
      local_1c[uVar1 - 1] = bVar2;
      uVar3 = uVar3 + 1;
    }
    local_1c[uVar1 - 1] = '\0';
  }
  return local_11;
}

