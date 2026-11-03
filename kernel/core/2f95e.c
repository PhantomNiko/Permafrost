#include "functions.h"
#undef DAT_0005e69c
#define DAT_0005e69c (*(int *)(0x5e69cU))
#define local_14 (*(uint *)(frame + 20))
#define local_18 (*(uint *)(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2f95e
 */

int recovered_2f95e(char *path,uint *out)

{
  unsigned char frame[72] = {0};

  undefined4 uVar1;
  int iVar2;
  int iVar3;

  local_18 = 0;
  local_14 = 0;
  iVar3 = 0;
  if (out != (uint *)0x0 && path != (char *)0x0) {
    uVar1 = recovered_2f9d3(path,&local_18,&local_14);
    if ((char)uVar1 != '\0') {
      iVar2 = recovered_2fa58(path);
      if (iVar2 != -1) {
        *out = local_18;
        out[1] = local_14;
        out[2] = *(uint *)(DAT_0005e69c + 0xfc + iVar2 * 0x10c);
        iVar3 = 1;
      }
    }
  }
  return iVar3;
}
