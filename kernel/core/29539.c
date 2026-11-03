#include "functions.h"
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29539
 */

undefined4 * recovered_29539(undefined4 param_1,int param_2)

{
  unsigned char frame[64];

  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 *puVar4;
  
  puVar1 = recovered_20df4(0x4c);
  puVar4 = (undefined4 *)0x0;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = 1;
    puVar1[1] = param_1;
    *(undefined2 *)(puVar1 + 2) = 0;
    puVar1[3] = 0;
    puVar1[4] = 0;
    puVar1[5] = 0;
    puVar1[6] = 0;
    puVar1[7] = 0;
    puVar1[8] = 0;
    puVar1[9] = 0;
    puVar1[10] = 0;
    puVar1[0xb] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = 0;
    puVar1[0xe] = 0;
    puVar1[0xf] = 0;
    puVar1[0x10] = 0;
    puVar1[0x11] = 0;
    puVar1[0x12] = 0;
    if (param_2 != 0) {
      iVar2 = recovered_20ff4(param_2);
      pvVar3 = recovered_27c30(param_2,iVar2);
      puVar1[3] = pvVar3;
      if (pvVar3 == (void *)0x0) {
        recovered_20dfd((int)puVar1);
        return (undefined4 *)0x0;
      }
    }
    puVar4 = puVar1;
  }
  return puVar4;
}

