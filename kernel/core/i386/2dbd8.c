#include "functions.h"
#undef str_00046e8b
#define str_00046e8b (*(char (*)[1])(0x46e8bU))
#undef str_00046e96
#define str_00046e96 (*(char (*)[1])(0x46e96U))
#undef str_00046ea1
#define str_00046ea1 (*(char (*)[1])(0x46ea1U))
#undef str_00046ead
#define str_00046ead (*(char (*)[1])(0x46eadU))
#undef str_00046eb9
#define str_00046eb9 (*(char (*)[1])(0x46eb9U))
#undef str_00046ec2
#define str_00046ec2 (*(char (*)[1])(0x46ec2U))
#undef str_00046ece
#define str_00046ece (*(char (*)[1])(0x46eceU))
#undef str_00046ed9
#define str_00046ed9 (*(char (*)[1])(0x46ed9U))
#undef str_00046ee5
#define str_00046ee5 (*(char (*)[1])(0x46ee5U))
#undef str_00046ef0
#define str_00046ef0 (*(char (*)[1])(0x46ef0U))
#define local_19 (*(char (*)[13])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dbd8
 */

void recovered_2dbd8(int param_1)

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
    switch((uintptr_t)(*(undefined4 *)(param_1 + 0x28))) {
    case 1:
      pcVar2 = str_00046e8b;
      break;
    case 2:
      pcVar2 = str_00046e96;
      break;
    case 3:
      pcVar2 = str_00046ea1;
      break;
    case 4:
      pcVar2 = str_00046ead;
      break;
    default:
      if ((*(byte *)(param_1 + 4) & 0xf8) == 0x70) {
        pcVar2 = str_00046eb9;
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        pcVar2 = str_00046ec2;
      }
      else {
        pcVar2 = str_00046ece;
      }
    }
  }
  else {
    if (-1 < iVar1) {
      recovered_21de7(local_19,0xd,str_00046ef0,iVar1);
      recovered_2e0c0(param_1 + 0x19,(int)local_19);
      return;
    }
    pcVar2 = str_00046ee5;
    if (*(char *)(param_1 + 0x18) != '\0') {
      pcVar2 = str_00046ed9;
    }
  }
  recovered_2e0c0(param_1 + 0x19,(int)pcVar2);
  return;
}
