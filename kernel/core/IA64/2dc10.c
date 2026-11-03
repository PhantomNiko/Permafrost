#include "functions.h"
#undef str_00046ee0
#define str_00046ee0 (*(char (*)[1])(0x46ee0U))
#undef str_00046eeb
#define str_00046eeb (*(char (*)[1])(0x46eebU))
#undef str_00046ef6
#define str_00046ef6 (*(char (*)[1])(0x46ef6U))
#undef str_00046f02
#define str_00046f02 (*(char (*)[1])(0x46f02U))
#undef str_00046f0e
#define str_00046f0e (*(char (*)[1])(0x46f0eU))
#undef str_00046f17
#define str_00046f17 (*(char (*)[1])(0x46f17U))
#undef str_00046f23
#define str_00046f23 (*(char (*)[1])(0x46f23U))
#undef str_00046f2e
#define str_00046f2e (*(char (*)[1])(0x46f2eU))
#undef str_00046f3a
#define str_00046f3a (*(char (*)[1])(0x46f3aU))
#undef str_00046f45
#define str_00046f45 (*(char (*)[1])(0x46f45U))
#define local_19 (*(char (*)[13])(frame + 16))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2dc10
 */

void recovered_2dc10(int param_1)

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
      pcVar2 = str_00046ee0;
      break;
    case 2:
      pcVar2 = str_00046eeb;
      break;
    case 3:
      pcVar2 = str_00046ef6;
      break;
    case 4:
      pcVar2 = str_00046f02;
      break;
    default:
      if ((*(byte *)(param_1 + 4) & 0xf8) == 0x70) {
        pcVar2 = str_00046f0e;
      }
      else if (*(char *)(param_1 + 0x18) == '\x01') {
        pcVar2 = str_00046f17;
      }
      else {
        pcVar2 = str_00046f23;
      }
    }
  }
  else {
    if (-1 < iVar1) {
      recovered_21de7(local_19,0xd,str_00046f45,iVar1);
      recovered_2e0f8(param_1 + 0x19,(int)local_19);
      return;
    }
    pcVar2 = str_00046f3a;
    if (*(char *)(param_1 + 0x18) != '\0') {
      pcVar2 = str_00046f2e;
    }
  }
  recovered_2e0f8(param_1 + 0x19,(int)pcVar2);
  return;
}
