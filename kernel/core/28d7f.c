#include "functions.h"
#undef DAT_00006110
#define DAT_00006110 (*(uint8_t *)(0x6110U))
#undef DAT_00006114
#define DAT_00006114 (*(uint8_t *)(0x6114U))
#undef DAT_00042534
#define DAT_00042534 (*(uint8_t *)(0x42534U))
#undef DAT_00042614
#define DAT_00042614 (*(uint8_t *)(0x42614U))
#undef DAT_00042733
#define DAT_00042733 (*(uint8_t *)(0x42733U))
#undef DAT_00042bc3
#define DAT_00042bc3 (*(uint8_t *)(0x42bc3U))
#undef DAT_00042bcd
#define DAT_00042bcd (*(uint8_t *)(0x42bcdU))
#undef DAT_000475ec
#define DAT_000475ec (*(char *)(0x475ecU))
#undef DAT_00047e84
#define DAT_00047e84 (*(int *)(0x47e84U))
#undef DAT_00047e89
#define DAT_00047e89 (*(uint8_t *)(0x47e89U))
#undef DAT_0004c5a4
#define DAT_0004c5a4 (*(uint *)(0x4c5a4U))
#undef DAT_0004c5a8
#define DAT_0004c5a8 (*(uint8_t *)(0x4c5a8U))
#undef DAT_0004c6a8
#define DAT_0004c6a8 (*(uint16_t *)(0x4c6a8U))
#undef DAT_0007cfc0
#define DAT_0007cfc0 (*(uint *)(0x7cfc0U))
#undef DAT_0007cfc4
#define DAT_0007cfc4 (*(int *)(0x7cfc4U))
#undef DAT_0007cfc8
#define DAT_0007cfc8 (*(uint *)(0x7cfc8U))
#undef DAT_0007cfcc
#define DAT_0007cfcc (*(uint8_t *)(0x7cfccU))
#undef DAT_0007cfd0
#define DAT_0007cfd0 (*(uint8_t * *)(0x7cfd0U))
#undef _DAT_00006110
#define _DAT_00006110 (*(uint *)(0x6110U))
#undef _DAT_00006114
#define _DAT_00006114 (*(uint *)(0x6114U))
#undef str_00042548
#define str_00042548 (*(char (*)[1])(0x42548U))
#undef str_00042baa
#define str_00042baa (*(char (*)[1])(0x42baaU))
#undef str_00042bb6
#define str_00042bb6 (*(char (*)[1])(0x42bb6U))
#undef str_00042bc7
#define str_00042bc7 (*(char (*)[1])(0x42bc7U))
#undef str_00042bd1
#define str_00042bd1 (*(char (*)[1])(0x42bd1U))
#undef str_00042bf6
#define str_00042bf6 (*(char (*)[1])(0x42bf6U))
#undef str_00042c11
#define str_00042c11 (*(char (*)[1])(0x42c11U))
#undef str_00042c17
#define str_00042c17 (*(char (*)[1])(0x42c17U))
#undef str_00042c1d
#define str_00042c1d (*(char (*)[1])(0x42c1dU))
#undef str_00042c2b
#define str_00042c2b (*(char (*)[1])(0x42c2bU))
#define local_4e0 (*(char (*)[544])(frame + 40))
#define local_2c0 (*(undefined1 (*)[256])(frame + 584))
#define local_1c0 (*(char (*)[160])(frame + 840))
#define local_120 (*(char (*)[96])(frame + 1000))
#define local_c0 (*(char (*)[64])(frame + 1096))
#define local_80 (*(char (*)[32])(frame + 1160))
#define local_60 (*(char (*)[32])(frame + 1192))
#define local_40 (*(char (*)[32])(frame + 1224))
#define local_20 (*(uint *)(frame + 1256))
#define local_1c (*(uint *)(frame + 1260))
#define local_18 (*(uint *)(frame + 1264))
#define local_14 (*(undefined * *)(frame + 1268))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x28d7f
 */

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void recovered_28d7f(uint columns)

{
  unsigned char frame[1320];

  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined *puVar4;
  uint uVar5;
  uint uVar6;
  longlong lVar7;
  char *pcVar8;
  char *pcVar9;

  DAT_0007cfc0 = 0;
  DAT_0007cfc4 = 0;
  DAT_0007cfc8 = 0;
  DAT_0007cfcc = 0;
  local_18 = columns;
  lVar7 = recovered_291bb();
  recovered_2910f((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),local_40);
  uVar2 = recovered_20a97();
  uVar6 = 0;
  recovered_2910f(uVar2,0,local_80);
  if (DAT_00047e84 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = _DAT_00006110;
    uVar6 = _DAT_00006114;
  }
  pcVar9 = local_60;
  recovered_2910f(uVar2,uVar6,pcVar9);
  pcVar8 = str_00042bc7;
  recovered_219e1(local_1c0,0xa0,str_00042baa,str_00042bb6,&DAT_00042bc3,str_00042bc7);
  if (local_60[0] != '\0') {
    pcVar8 = &DAT_00042bcd;
    iVar3 = recovered_2100f((int)pcVar9,0x42bcd);
    if (iVar3 != 0) {
      pcVar8 = str_00042bd1;
      goto LAB_00028e6f;
    }
  }
  pcVar9 = pcVar8;
  pcVar8 = str_00042bf6;
LAB_00028e6f:
  recovered_219e1(local_120,0x60,pcVar8,local_40,local_80,pcVar9);
  recovered_219e1(local_c0,0x40,str_00042c11,str_00042c17);
  if (DAT_000475ec == '\x01') {
    recovered_2929c(0x5c7c0,str_00042548,1);
    recovered_2929c(0x5c7c0,&DAT_00042614,0);
    recovered_2929c(0x5c7c0,local_1c0,1);
    recovered_2929c(0x5c7c0,local_c0,1);
    recovered_2929c(0x5c7c0,local_120,1);
    recovered_2929c(0x5c7c0,&DAT_00042614,0);
    recovered_2929c(0x5c7c0,str_00042c1d,1);
    recovered_2929c(0x5c7c0,&DAT_00042614,0);
    recovered_2929c(0x5c7c0,str_00042c2b,1);
    recovered_2929c(0x5c7c0,&DAT_00042614,0);
  }
  local_18 = local_18 + (local_18 == 0);
  local_14 = &DAT_0004c5a8;
  uVar6 = 0;
  while (uVar6 < DAT_0004c5a4) {
    uVar2 = (uint)(ushort)(&DAT_0004c6a8)[uVar6 * 0x81];
    local_1c = uVar6;
    if (uVar2 == 0) {
      recovered_2929c(0x5c7c0,&DAT_00042614,0);
    }
    else {
      uVar6 = 0;
      local_20 = uVar2;
      while ((uVar1 = local_18, uVar6 < local_20 && (DAT_0007cfc0 < 0x200))) {
        uVar5 = uVar2 - local_18;
        if (local_18 <= uVar2) {
          uVar2 = local_18;
        }
        recovered_29330(0x5c7c0,(int)(local_14 + uVar6),uVar2,0);
        uVar6 = uVar6 + uVar1;
        uVar2 = uVar5;
      }
    }
    local_14 = local_14 + 0x102;
    uVar6 = local_1c + 1;
  }
  puVar4 = &DAT_00042534;
  if (DAT_0007cfd0 != (undefined *)0x0) {
    puVar4 = DAT_0007cfd0;
  }
  recovered_219e1(local_4e0,0x220,&DAT_00042733,puVar4,&DAT_00047e89);
  uVar6 = 0;
  local_14 = (undefined *)recovered_20ff4((int)local_4e0);
  while( true ) {
    uVar2 = (int)local_14 - uVar6;
    if (local_14 < uVar6 || uVar2 == 0) break;
    if (0x1ff < DAT_0007cfc0) goto LAB_000290b5;
    if (local_18 <= uVar2) {
      uVar2 = local_18;
    }
    recovered_20f42((int)local_2c0,(int)(local_4e0 + uVar6),uVar2);
    local_2c0[uVar2] = 0;
    recovered_2929c(0x5c7c0,local_2c0,0);
    uVar6 = uVar6 + uVar2;
  }
  if (DAT_0007cfc0 == 0) {
    recovered_2929c(0x5c7c0,&DAT_00042614,0);
  }
  if (local_14 == (undefined *)0x0) {
    uVar6 = 0;
  }
  else {
LAB_000290b5:
    uVar6 = 0;
    if ((uint)local_14 % local_18 == 0) {
      if (DAT_0007cfc0 < 0x200) {
        recovered_2929c(0x5c7c0,&DAT_00042614,0);
      }
    }
    else {
      uVar6 = (uint)local_14 % local_18;
    }
  }
  DAT_0007cfc4 = DAT_0007cfc0 - 1;
  DAT_0007cfc8 = uVar6;
  DAT_0007cfcc = 1;
  return;
}
