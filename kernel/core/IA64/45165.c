#include "functions.h"
#define local_24 (*(uint *)(frame + 52))
#define local_48 (*(int (*)[4])(frame + 16))
#define local_38 (*(uint *)(frame + 32))
#define local_30 (*(uint *)(frame + 40))
#define local_2c (*(uint *)(frame + 44))
#define local_28 (*(uint *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x45165
 */

void recovered_45165(int context)

{
  unsigned char frame[120];

  undefined4 *puVar1;
  undefined4 uVar2;
  char cVar3;

  cVar3 = *(char *)(context + 4);
  puVar1 = recovered_44c20(cVar3);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = recovered_2d6e3((uint)*(byte *)(puVar1 + 1),puVar1[3],local_48,0);
    if ((char)uVar2 == '\0') {
      cVar3 = *(char *)(context + 4);
    }
    else {
      if (local_48[0] == 2) {
        recovered_44c4f(*(char *)(context + 4),local_28,1);
        recovered_44c4f(*(char *)(context + 4),local_38,local_30);
        recovered_44c4f(*(char *)(context + 4),local_2c,local_30);
        cVar3 = *(char *)(context + 4);
        goto LAB_000451c3;
      }
      if (local_48[0] != 1) {
        return;
      }
      cVar3 = *(char *)(context + 4);
    }
  }
  local_24 = 0;
LAB_000451c3:
  recovered_44c4f(cVar3,local_24,1);
  return;
}
