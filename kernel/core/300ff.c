#include "functions.h"
#define local_10 (*(undefined1 * *)(frame + 16))
#define local_c (*(int *)(frame + 20))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x300ff
 */

undefined4 * FUN_000300ff(int param_1,float param_2)

{
  unsigned char frame[64] = {0};

  undefined4 uVar1;
  undefined4 *puVar2;

  local_10 = (undefined1 *)0x0;
  local_c = 0;
  puVar2 = (undefined4 *)0x0;
  if ((param_1 != 0) &&
     (uVar1 = recovered_2f9d3((char *)param_1,&local_10,&local_c), (char)uVar1 != '\0')) {
    puVar2 = recovered_2e9ec(local_10,local_c,param_2);
  }
  return puVar2;
}
