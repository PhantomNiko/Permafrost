#include "functions.h"
#undef str_00048640
#define str_00048640 (*(char (*)[1])(0x48640U))
#define local_24 (*(undefined4 *)(frame + 216))
#define local_20 (*(undefined4 *)(frame + 220))
#define local_1c (*(undefined4 *)(frame + 224))
#define local_18 (*(undefined4 * *)(frame + 228))
#define local_14 (*(uint ***** *)(frame + 232))
#define local_ec (*(char (*)[160])(frame + 16))
#define local_4c (*(undefined4 *)(frame + 176))
#define local_48 (*(undefined4 *)(frame + 180))
#define local_44 (*(undefined4 *)(frame + 184))
#define local_40 (*(undefined4 *)(frame + 188))
#define local_3c (*(undefined4 *)(frame + 192))
#define local_38 (*(undefined4 *)(frame + 196))
#define local_34 (*(undefined4 *)(frame + 200))
#define local_30 (*(undefined4 *)(frame + 204))
#define local_2c (*(undefined4 *)(frame + 208))
#define local_28 (*(undefined4 *)(frame + 212))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x2e2bc
 */

uint recovered_2e2bc(char *path)

{
  unsigned char frame[284];

  undefined4 uVar1;
  uint uVar2;

  local_18 = (undefined4 *)0x0;
  local_14 = (uint *****)0x0;
  local_1c = 0;
  PF_PART2(local_4c, 0) = 1;
  local_48 = 0;
  local_44 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_28 = 0;
  local_24 = 0;
  local_20 = 0;
  uVar1 = recovered_47f5b((int)path,&local_4c,local_ec);
  if ((char)uVar1 != '\0') {
    uVar1 = recovered_4468b((int)&local_4c,&local_18,(uint *)&local_14,&local_1c,local_ec,0xa0);
    if ((char)uVar1 != '\0') {
      uVar2 = recovered_2e536((int)local_18,local_14);
      recovered_2c297(local_18,(int)local_14);
      recovered_44621((undefined2 *)&local_4c);
      return uVar2;
    }
    recovered_44621((undefined2 *)&local_4c);
  }
  recovered_23390(str_00048640,local_ec);
  return 0;
}
