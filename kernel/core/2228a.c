#include "functions.h"
#undef DAT_00047dfc
#define DAT_00047dfc (*(int *)(0x47dfcU))
#define uStack_18 (*(uint *)(frame + 16))
#define uStack_14 (*(uint *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2228a
 */

int recovered_2228a(char *path,uint *out)

{
  unsigned char frame[72];

  undefined4 uVar1;
  uint uVar2;
  int iVar3;

  uStack_18 = 0;
  uStack_14 = 0;
  iVar3 = 0;
  if (out != (uint *)0x0 && path != (char *)0x0) {
    uVar1 = recovered_222ff((int)path,&uStack_18,&uStack_14);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_2236c((int)path);
      if (uVar2 != 0xffffffff) {
        *out = uStack_18;
        out[1] = uStack_14;
        out[2] = *(uint *)(DAT_00047dfc + 0xfc + uVar2 * 0x108);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}
