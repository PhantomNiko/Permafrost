#include "functions.h"
#undef DAT_00070414
#define DAT_00070414 (*(int *)(0x70414U))
#undef str_0002de39
#define str_0002de39 (*(char (*)[1])(0x2de39U))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2af4b
 */

uint recovered_2af4b(void *context,char *name,void *output)

{
  unsigned char frame[64];

  uint uVar1;
  
  uVar1 = recovered_24fea((int)name);
  if ((int)uVar1 < 0) {
    recovered_2609c((uint)context,name,str_0002de39,name);
    return 0;
  }
  uVar1 = recovered_25048(output,(undefined4 *)(DAT_00070414 + uVar1 * 0x28 + 4));
  return uVar1;
}

