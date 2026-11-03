#include "functions.h"
#undef DAT_0003f254
#define DAT_0003f254 (*(uint8_t *)(0x3f254U))
#define local_34 (*(undefined4 *)(frame + 16))
#define local_30 (*(undefined4 *)(frame + 20))
#define local_2c (*(undefined4 *)(frame + 24))
#define local_28 (*(undefined4 *)(frame + 28))
#define local_24 (*(undefined4 *)(frame + 32))
#define local_20 (*(undefined4 *)(frame + 36))
#define local_1c (*(undefined4 *)(frame + 40))
#define local_18 (*(undefined4 *)(frame + 44))
#define local_14 (*(undefined4 *)(frame + 48))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3cd7d
 */

int recovered_3cd7d(int *container,int key,char *value)

{
  unsigned char frame[100];

  uint uVar1;
  int iVar2;
  char *pcVar3;
  
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  local_1c = 0;
  local_18 = 0;
  local_14 = 0;
  pcVar3 = &DAT_0003f254;
  if (value != (char *)0x0) {
    pcVar3 = value;
  }
  uVar1 = recovered_285ce(&local_34,pcVar3);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_28cbe(container,key,(int)&local_34);
    recovered_28761(&local_34);
  }
  return iVar2;
}

