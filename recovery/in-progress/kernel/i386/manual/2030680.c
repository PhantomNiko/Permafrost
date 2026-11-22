/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define left (*(char * *)(frame + 16))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c5359 (*(uint8_t *)(0x20c5359U))
#define DAT_020d9d5c (*(uint32_t volatile *)(0x20d9d5cU))
#define str_020c6ac7 (*(char (*)[1])(0x20c6ac7U))
#define str_020c6d20 (*(char (*)[1])(0x20c6d20U))
#define in_EDX (*(char * *)(frame + 16))
#define local_c0e0 (*(char (*)[241])(frame + 32))
#define local_bfef (*(char (*)[48143])(frame + 273))
#define local_3e0 (*(uchar (*)[241])(frame + 48416))
#define local_2ef (*(char (*)[241])(frame + 48657))
#define local_1fe (*(char (*)[241])(frame + 48898))
#define local_10d (*(char (*)[241])(frame + 49139))
#define local_1c (*(char * *)(frame + 49380))
#define local_18 (*(char * *)(frame + 49384))
#define local_14 (*(uint *)(frame + 49388))


uint recovered_2030680(char *path,char *entry)

{
  unsigned char frame[49440] __attribute__((aligned(16))) = {0};

  undefined4 uVar1;
  byte bVar2;
  uchar uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  char cVar7;
  undefined4 unaff_EBX = 0;
  char *pcVar8;

  local_14 = 0;
  if (path != (char *)0x0) {
    pcVar8 = (char *)0x20306a4;
    bVar2 = recovered_205e0e0();
    if (bVar2 != 0) {
      iVar4 = recovered_20022a0(path,&DAT_020c5359);
      if (iVar4 == 0) {
        uVar5 = CONCAT31((int3)((uint)unaff_EBX >> 8),1);
        if (entry == (char *)0x0) {
          return uVar5;
        }
        recovered_2001e00(entry,0,0x1f8);
        pf_varargs_20044f0__4_(entry,0xf1,&DAT_020c5119,0x20c5359);
        pf_varargs_20044f0__4_(entry + 0xf1,0xf1,&DAT_020c5119,0x20c6ac7);
        entry[0x1e8] = '\x02';
        entry[0x1e9] = '\0';
        entry[0x1ea] = '\0';
        entry[0x1eb] = '\0';
        entry[0x1ec] = '\x02';
        entry[0x1ed] = '\0';
        entry[0x1ee] = '\0';
        entry[0x1ef] = '\0';
        uVar1 = DAT_020d9d5c;
        *(undefined4 *)(entry + 0x1f0) = uVar1;
        return uVar5;
      }
      in_EDX = local_2ef;
      recovered_205ec70(path,in_EDX,local_1fe);
      local_1c = entry;
      if ((local_2ef[0] == '\0') || (iVar4 = recovered_20022a0(in_EDX,&DAT_020c5359), iVar4 == 0)) {
        in_EDX = pcVar8;
        pcVar8 = str_020c6ac7;
      }
      else {
        pcVar8 = str_020c6d20;
      }
      pf_varargs_20044f0__4_(local_10d,0xf1,pcVar8,(uint)in_EDX);
      recovered_2001e00(local_c0e0,0,0xbd00);
      iVar4 = DAT_020d9d5c;
      uVar5 = recovered_202b3a0(iVar4,local_10d,local_c0e0,0x60,&local_14);
      if (uVar5 != 0) {
        if (local_14 < 0x61) {
          if (local_14 == 0) {
            return 0;
          }
        }
        else {
          local_14 = 0x60;
        }
        uVar5 = 0;
        do {
          iVar4 = uVar5 * 0x1f8;
          local_18 = (char *)0x0;
          if (local_bfef[iVar4] != '\0') {
            recovered_202a060((int)local_10d,local_3e0);
            uVar3 = recovered_202a250(local_bfef + iVar4,(char *)local_3e0,(uint *)&local_18);
            if ((uVar3 != '\0') && (cVar7 = *local_18, cVar7 != '\0')) {
              pcVar8 = local_18;
              while (pcVar8 = pcVar8 + 1, cVar7 != '\0') {
                if ((cVar7 == '/') || (cVar7 == '\\')) goto LAB_02030820;
                cVar7 = *pcVar8;
              }
              iVar6 = recovered_20022a0(local_c0e0 + iVar4,local_1fe);
              if (iVar6 == 0) {
                uVar5 = CONCAT31((int3)((uint)iVar4 >> 8),1);
                if (local_1c == (char *)0x0) {
                  return uVar5;
                }
                recovered_2001b70(local_1c,local_c0e0 + iVar4,0x1f8);
                return uVar5;
              }
            }
          }
LAB_02030820:
          uVar5 = uVar5 + 1;
        } while (uVar5 < local_14);
      }
    }
  }
  return 0;
}
#undef left
#undef DAT_020c5119
#undef DAT_020c5359
#undef DAT_020d9d5c
#undef str_020c6ac7
#undef str_020c6d20
#undef in_EDX
#undef local_c0e0
#undef local_bfef
#undef local_3e0
#undef local_2ef
#undef local_1fe
#undef local_10d
#undef local_1c
#undef local_18
#undef local_14
