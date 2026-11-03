#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#undef DAT_0005e71c
#define DAT_0005e71c (*(char *)(0x5e71cU))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f9d3
 */

undefined4 recovered_2f9d3(char *param_1,undefined4 *param_2,undefined4 *param_3)

{
  unsigned char frame[64] = {0};

  uint uVar1;
  undefined4 uVar2;

  if ((((param_3 == (undefined4 *)0x0) || (param_2 == (undefined4 *)0x0)) ||
      (param_1 == (char *)0x0)) ||
     ((((DAT_0005e71c == '\0' || (uVar1 = recovered_2fa58(param_1), uVar1 == 0xffffffff)) ||
       ((DAT_0005e69c != 0 && ((*(byte *)(DAT_0005e69c + 0xfc + uVar1 * 0x10c) & 2) != 0)))) ||
      (uVar2 = recovered_38246(uVar1), (char)uVar2 == '\0')))) {
    return 0;
  }
  *param_2 = *(undefined4 *)(DAT_0005e69c + 0xf4 + uVar1 * 0x10c);
  uVar2 = *(undefined4 *)(DAT_0005e69c + 0xf8 + uVar1 * 0x10c);
  *param_3 = uVar2;
  return CONCAT31((int3)((uint)uVar2 >> 8),1);
}
