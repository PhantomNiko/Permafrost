#include "functions.h"
#undef DAT_00057391
#define DAT_00057391 (*(uint8_t *)(0x57391U))
#define local_111 (*(undefined1 (*)[241])(frame + 15681))
#define local_20 (*(uint *)(frame + 15922))
#define local_1c (*(undefined1 * *)(frame + 15926))
#define local_18 (*(uint *)(frame + 15930))
#define local_14 (*(uint *)(frame + 15934))
#define local_3e42 (*(char (*)[15424])(frame + 16))
#define local_202 (*(char (*)[241])(frame + 15440))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x37f88
 */

void recovered_37f88(int param_1,undefined1 *param_2)

{
  unsigned char frame[15986] = {0};

  char cVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  char *pcVar6;
  bool bVar7;

  if (param_2 == (undefined1 *)0x0) {
    return;
  }
  *param_2 = 0;
  if (param_1 == 0) {
    return;
  }
  pcVar6 = local_202;
  local_1c = param_2;
  recovered_22362(pcVar6,0xf1,&DAT_00057391,param_1);
  do {
    if (*pcVar6 == '\\') {
      *pcVar6 = '/';
    }
    else if (*pcVar6 == '\0') break;
    pcVar6 = pcVar6 + 1;
  } while( true );
  local_20 = recovered_214de((int)local_202);
  local_18 = 0;
  for (uVar3 = 0; uVar3 <= local_20; uVar3 = uVar3 + uVar5 + 1) {
    for (uVar5 = 0; (cVar1 = (local_202 + uVar3)[uVar5], cVar1 != '\0' && (cVar1 != '/'));
        uVar5 = uVar5 + 1) {
    }
    if (uVar5 != 0) {
      uVar4 = 0xf0;
      if (uVar5 < 0xf0) {
        uVar4 = uVar5;
      }
      local_14 = uVar3;
      recovered_21348((int)local_111,(int)(local_202 + uVar3),uVar4);
      local_111[uVar4] = 0;
      iVar2 = recovered_214f9((int)local_111,0x57362);
      if (iVar2 != 0) {
        iVar2 = recovered_214f9((int)local_111,0x57c14);
        uVar3 = local_18;
        if (iVar2 == 0) {
          bVar7 = local_18 == 0;
          local_18 = local_18 - 1;
          if (bVar7) {
            local_18 = 0;
          }
        }
        else if (local_18 < 0x40) {
          recovered_22362(local_3e42 + local_18 * 0xf1,0xf1,&DAT_00057391,local_111);
          local_18 = uVar3 + 1;
        }
      }
      uVar3 = local_14;
    }
  }
  pcVar6 = local_3e42;
  uVar5 = 0;
  uVar3 = 0;
  while (local_18 != uVar5) {
    iVar2 = recovered_214de((int)pcVar6);
    if (uVar3 < 0xf0 && uVar5 != 0) {
      local_1c[uVar3] = 0x2f;
      uVar3 = uVar3 + 1;
    }
    if (0xf0 < uVar3 + iVar2) break;
    recovered_21348((int)(local_1c + uVar3),(int)pcVar6,iVar2);
    uVar5 = uVar5 + 1;
    pcVar6 = pcVar6 + 0xf1;
    uVar3 = uVar3 + iVar2;
  }
  local_1c[uVar3] = 0;
  return;
}
