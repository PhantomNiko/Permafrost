/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5082 (*(uint8_t *)(0x20c5082U))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020c5ad8 (*(uint8_t *)(0x20c5ad8U))
#define str_020c526f (*(char (*)[1])(0x20c526fU))
#define local_3e3a (*(char (*)[241])(frame + 22))
#define local_3d49 (*(char (*)[15183])(frame + 263))
#define local_1fa (*(char (*)[241])(frame + 15446))
#define local_109 (*(char (*)[241])(frame + 15687))
#define local_18 (*(ulong *)(frame + 15928))
#define local_14 (*(uint *)(frame + 15932))


void recovered_2030400(char *path,char *cwd,char *output)

{
  unsigned char frame[15984] __attribute__((aligned(16))) = {0};

  char cVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  uint count;
  uint uVar5;
  uint uVar6;
  char *pcVar7;

  if (output == (char *)0x0) {
    return;
  }
  *output = '\0';
  if ((path == (char *)0x0) || (cVar1 = *path, cVar1 == '\0')) {
    if (cwd == (char *)0x0) {
      path = &DAT_020c5359;
    }
    else {
      path = &DAT_020c5359;
      if (*cwd != '\0') {
        path = cwd;
      }
    }
    cVar1 = *path;
  }
  if (cVar1 == '/') {
    pf_varargs_20044f0__4_(local_109,0xf1,&DAT_020c5119,(uint)path);
  }
  else {
    if (cwd == (char *)0x0) {
      pcVar7 = &DAT_020c5359;
    }
    else {
      pcVar7 = &DAT_020c5359;
      if (*cwd != '\0') {
        pcVar7 = cwd;
      }
    }
    pf_varargs_20044f0__4__4_(local_109,0xf1,str_020c526f,(uint)pcVar7,(uint)path);
  }
  pcVar7 = local_109;
  do {
    if (*pcVar7 == '\\') {
      *pcVar7 = '/';
    }
    else if (*pcVar7 == '\0') break;
    pcVar7 = pcVar7 + 1;
  } while( true );
  uVar6 = 0;
  local_18 = recovered_2002270(local_109);
  uVar4 = 0;
  do {
    for (uVar5 = 0; (cVar1 = (local_109 + uVar6)[uVar5], cVar1 != '\0' && (cVar1 != '/'));
        uVar5 = uVar5 + 1) {
    }
    if (uVar5 != 0) {
      count = uVar5;
      if (0xef < uVar5) {
        count = 0xf0;
      }
      local_14 = uVar4;
      recovered_2001b70(local_1fa,local_109 + uVar6,count);
      local_1fa[count] = '\0';
      iVar2 = recovered_20022a0(local_1fa,&DAT_020c5082);
      if (iVar2 == 0) {
        uVar4 = local_14;
      }
      else {
        iVar2 = recovered_20022a0(local_1fa,&DAT_020c5ad8);
        uVar4 = local_14;
        if (iVar2 == 0) {
          uVar4 = 0;
          if (local_14 != 0) {
            uVar4 = local_14 - 1;
          }
        }
        else if (local_14 < 0x40) {
          pf_varargs_20044f0__4_(local_3e3a + local_14 * 0xf1,0xf1,&DAT_020c5119,(uint)local_1fa);
          uVar4 = uVar4 + 1;
        }
      }
    }
    uVar6 = uVar6 + 1 + uVar5;
  } while (uVar6 <= local_18);
  if (uVar4 == 0) {
    pf_varargs_20044f0___(output,0xf1,&DAT_020c5359);
  }
  else {
    *output = '/';
    uVar3 = recovered_2002270(local_3e3a);
    uVar6 = uVar3 + 1;
    uVar5 = 1;
    if ((uVar6 < 0xf1) &&
       (recovered_2001b70(output + 1,local_3e3a,uVar3), uVar5 = uVar6, uVar4 != 1)) {
      iVar2 = uVar4 - 1;
      pcVar7 = local_3d49;
      do {
        uVar3 = recovered_2002270(pcVar7);
        uVar6 = 0xf0;
        if (uVar5 < 0xf0) {
          output[uVar5] = '/';
          uVar6 = uVar5 + 1;
        }
        uVar5 = uVar6 + uVar3;
        if (0xf0 < uVar5) {
          uVar5 = uVar6;
          break;
        }
        recovered_2001b70(output + uVar6,pcVar7,uVar3);
        pcVar7 = pcVar7 + 0xf1;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
    }
    output[uVar5] = '\0';
  }
  return;
}
#undef DAT_020c5082
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020c5ad8
#undef str_020c526f
#undef local_3e3a
#undef local_3d49
#undef local_1fa
#undef local_109
#undef local_18
#undef local_14
