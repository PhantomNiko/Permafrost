#include "functions.h"
#undef str_0004915b
#define str_0004915b (*(char (*)[1])(0x4915bU))
#undef str_00049166
#define str_00049166 (*(char (*)[1])(0x49166U))
#undef str_00049171
#define str_00049171 (*(char (*)[1])(0x49171U))
#undef str_0004917d
#define str_0004917d (*(char (*)[1])(0x4917dU))
#undef str_00049189
#define str_00049189 (*(char (*)[1])(0x49189U))
#undef str_00049192
#define str_00049192 (*(char (*)[1])(0x49192U))
#undef str_0004919e
#define str_0004919e (*(char (*)[1])(0x4919eU))
#undef str_000491a9
#define str_000491a9 (*(char (*)[1])(0x491a9U))
#undef str_000491b5
#define str_000491b5 (*(char (*)[1])(0x491b5U))
#undef str_000491c0
#define str_000491c0 (*(char (*)[1])(0x491c0U))
#define local_19 (*(char (*)[13])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dd1e
 */

void recovered_2dd1e(int param_1)

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
      pcVar2 = str_0004915b;
      break;
    case 2:
      pcVar2 = str_00049166;
      break;
    case 3:
      pcVar2 = str_00049171;
      break;
    case 4:
      pcVar2 = str_0004917d;
      break;
    default:
      if ((*(byte *)(param_1 + 4) & 0xf8) == 0x70) {
        pcVar2 = str_00049189;
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        pcVar2 = str_00049192;
      }
      else {
        pcVar2 = str_0004919e;
      }
    }
  }
  else {
    if (-1 < iVar1) {
      recovered_21de7(local_19,0xd,str_000491c0,iVar1);
      recovered_2e206(param_1 + 0x19,(int)local_19);
      return;
    }
    pcVar2 = str_000491b5;
    if (*(char *)(param_1 + 0x18) != '\0') {
      pcVar2 = str_000491a9;
    }
  }
  recovered_2e206(param_1 + 0x19,(int)pcVar2);
  return;
}
