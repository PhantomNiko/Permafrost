#include "functions.h"
#undef str_000581c6
#define str_000581c6 (*(char (*)[1])(0x581c6U))
#undef str_000581d1
#define str_000581d1 (*(char (*)[1])(0x581d1U))
#undef str_000581dc
#define str_000581dc (*(char (*)[1])(0x581dcU))
#undef str_000581e8
#define str_000581e8 (*(char (*)[1])(0x581e8U))
#undef str_000581f4
#define str_000581f4 (*(char (*)[1])(0x581f4U))
#undef str_000581fd
#define str_000581fd (*(char (*)[1])(0x581fdU))
#undef str_00058209
#define str_00058209 (*(char (*)[1])(0x58209U))
#undef str_00058214
#define str_00058214 (*(char (*)[1])(0x58214U))
#undef str_00058220
#define str_00058220 (*(char (*)[1])(0x58220U))
#undef str_0005822b
#define str_0005822b (*(char (*)[1])(0x5822bU))
#define local_19 (*(char (*)[13])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x3c01b
 */

void recovered_3c01b(int param_1)

{
  unsigned char frame[73] = {0};

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
      pcVar2 = str_000581c6;
      break;
    case 2:
      pcVar2 = str_000581d1;
      break;
    case 3:
      pcVar2 = str_000581dc;
      break;
    case 4:
      pcVar2 = str_000581e8;
      break;
    default:
      if ((*(byte *)(param_1 + 4) & 0xf8) == 0x70) {
        pcVar2 = str_000581f4;
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        pcVar2 = str_000581fd;
      }
      else {
        pcVar2 = str_00058209;
      }
    }
  }
  else {
    if (-1 < iVar1) {
      recovered_22362(local_19,0xd,str_0005822b,iVar1);
      recovered_3c4eb(param_1 + 0x19,(int)local_19);
      return;
    }
    pcVar2 = str_00058220;
    if (*(char *)(param_1 + 0x18) != '\0') {
      pcVar2 = str_00058214;
    }
  }
  recovered_3c4eb(param_1 + 0x19,(int)pcVar2);
  return;
}
