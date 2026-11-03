#include "functions.h"
#define local_10c (*(char (*)[256])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x34fcd
 */

uint recovered_34fcd(int param_1,uint *param_2)

{
  unsigned char frame[316];

  bool bVar1;
  undefined4 uVar2;
  uint uVar3;

  if (((param_2 != (uint *)0x0 && param_1 != 0) && (bVar1 = recovered_34f94((char *)param_1), bVar1)
      ) && (uVar2 = recovered_361b1(param_1,local_10c,0x100), (char)uVar2 != '\0')) {
    uVar3 = recovered_2c654(param_2,local_10c);
    return uVar3;
  }
  return 0;
}
