#include "functions.h"
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#define local_34 (*(uint (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x4060a
 */

int recovered_4060a(int *container,int key,char *value)

{
  unsigned char frame[100];

  uint uVar1;
  int iVar2;
  char *text;

  local_34[0] = 0;
  local_34[1] = 0;
  local_34[2] = 0;
  local_34[3] = 0;
  local_34[4] = 0;
  local_34[5] = 0;
  local_34[6] = 0;
  local_34[7] = 0;
  local_34[8] = 0;
  text = &DAT_00042614;
  if (value != (char *)0x0) {
    text = value;
  }
  uVar1 = recovered_2ad2e(local_34,text);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_2b41e(container,key,(int)local_34);
    recovered_2aec1(local_34);
  }
  return iVar2;
}
