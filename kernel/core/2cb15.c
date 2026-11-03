#include "functions.h"
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#define local_34 (*(uint (*)[9])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2cb15
 */

int recovered_2cb15(int *container,int key,char *value)

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
  text = &DAT_0004851c;
  if (value != (char *)0x0) {
    text = value;
  }
  uVar1 = recovered_2c718(local_34,text);
  if ((char)uVar1 == '\0') {
    iVar2 = 0;
  }
  else {
    iVar2 = recovered_2cacf(container,key,(int)local_34);
    recovered_25fea(local_34);
  }
  return iVar2;
}
