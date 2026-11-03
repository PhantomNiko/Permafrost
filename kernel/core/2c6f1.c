#include "functions.h"
#undef str_0004315a
#define str_0004315a (*(char (*)[1])(0x4315aU))
#undef str_00043165
#define str_00043165 (*(char (*)[1])(0x43165U))
#undef str_00043170
#define str_00043170 (*(char (*)[1])(0x43170U))
#undef str_0004317c
#define str_0004317c (*(char (*)[1])(0x4317cU))
#undef str_00043188
#define str_00043188 (*(char (*)[1])(0x43188U))
#undef str_00043193
#define str_00043193 (*(char (*)[1])(0x43193U))
#undef str_0004319f
#define str_0004319f (*(char (*)[1])(0x4319fU))
#define local_19 (*(char (*)[13])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2c6f1
 */

void recovered_2c6f1(int param_1)

{
  unsigned char frame[73];

  int iVar1;
  char *pcVar2;

  if (param_1 == 0) {
    return;
  }
  local_19[0] = '\0';
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 0) {
    iVar1 = *(int *)(param_1 + 0x28);
    if (iVar1 == 3) {
      pcVar2 = str_00043170;
    }
    else if (iVar1 == 2) {
      pcVar2 = str_00043165;
    }
    else if (iVar1 == 1) {
      pcVar2 = str_0004315a;
    }
    else if (*(char *)(param_1 + 0x18) == '\x01') {
      pcVar2 = str_0004317c;
    }
    else {
      pcVar2 = str_00043188;
    }
  }
  else {
    if (-1 < iVar1) {
      recovered_219e1(local_19,0xd,str_0004319f,iVar1);
      recovered_2cbb0(param_1 + 0x19,(int)local_19);
      return;
    }
    pcVar2 = str_00043193;
  }
  recovered_2cbb0(param_1 + 0x19,(int)pcVar2);
  return;
}
