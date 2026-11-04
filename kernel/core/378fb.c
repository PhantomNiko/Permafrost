#include "functions.h"
#undef DAT_00057288
#define DAT_00057288 (*(uint8_t *)(0x57288U))
#undef DAT_00057364
#define DAT_00057364 (*(uint8_t *)(0x57364U))
#undef DAT_000576ac
#define DAT_000576ac (*(uint8_t *)(0x576acU))
#undef DAT_00057b3c
#define DAT_00057b3c (*(uint8_t *)(0x57b3cU))
#undef DAT_00057b40
#define DAT_00057b40 (*(uint8_t *)(0x57b40U))
#undef DAT_00057b45
#define DAT_00057b45 (*(uint8_t *)(0x57b45U))
#undef DAT_0005d768
#define DAT_0005d768 (*(char *)(0x5d768U))
#undef DAT_0005e721
#define DAT_0005e721 (*(uint8_t *)(0x5e721U))
#undef DAT_00062e50
#define DAT_00062e50 (*(uint *)(0x62e50U))
#undef DAT_00062e54
#define DAT_00062e54 (*(uint8_t *)(0x62e54U))
#undef DAT_00062f54
#define DAT_00062f54 (*(uint16_t *)(0x62f54U))
#undef DAT_0009386c
#define DAT_0009386c (*(uint *)(0x9386cU))
#undef DAT_00093870
#define DAT_00093870 (*(int *)(0x93870U))
#undef DAT_00093874
#define DAT_00093874 (*(uint *)(0x93874U))
#undef DAT_00093878
#define DAT_00093878 (*(uint8_t *)(0x93878U))
#undef DAT_0009387c
#define DAT_0009387c (*(uint8_t * *)(0x9387cU))
#undef str_0005729c
#define str_0005729c (*(char (*)[1])(0x5729cU))
#undef str_00057b23
#define str_00057b23 (*(char (*)[1])(0x57b23U))
#undef str_00057b2f
#define str_00057b2f (*(char (*)[1])(0x57b2fU))
#undef str_00057b49
#define str_00057b49 (*(char (*)[1])(0x57b49U))
#undef str_00057b78
#define str_00057b78 (*(char (*)[1])(0x57b78U))
#undef str_00057b9d
#define str_00057b9d (*(char (*)[1])(0x57b9dU))
#undef str_00057bb8
#define str_00057bb8 (*(char (*)[1])(0x57bb8U))
#undef str_00057bbe
#define str_00057bbe (*(char (*)[1])(0x57bbeU))
#undef str_00057bc4
#define str_00057bc4 (*(char (*)[1])(0x57bc4U))
#undef str_00057bd3
#define str_00057bd3 (*(char (*)[1])(0x57bd3U))
#define local_500 (*(char (*)[544])(frame + 40))
#define local_2e0 (*(undefined1 (*)[256])(frame + 584))
#define local_1e0 (*(char (*)[160])(frame + 840))
#define local_140 (*(char (*)[64])(frame + 1000))
#define local_100 (*(char (*)[32])(frame + 1064))
#define local_e0 (*(char (*)[32])(frame + 1096))
#define local_c0 (*(char (*)[96])(frame + 1128))
#define local_60 (*(char (*)[32])(frame + 1224))
#define local_40 (*(char (*)[32])(frame + 1256))
#define local_20 (*(uint *)(frame + 1288))
#define local_1c (*(uint *)(frame + 1292))
#define local_18 (*(uint *)(frame + 1296))
#define local_14 (*(undefined * *)(frame + 1300))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x378fb
 */

void recovered_378fb(uint columns)

{
  unsigned char frame[1352] = {0};

  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined *puVar5;
  uint extraout_EDX = 0;
  uint uVar6;
  longlong lVar7;
  undefined8 uVar8;
  char *pcVar9;
  char *pcVar10;

  DAT_0009386c = 0;
  DAT_00093870 = 0;
  DAT_00093874 = 0;
  DAT_00093878 = 0;
  local_18 = columns;
  lVar7 = recovered_37d81();
  recovered_37cd5((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),local_40);
  uVar2 = recovered_20e79();
  recovered_37cd5(uVar2,0,local_100);
  uVar2 = recovered_37e62();
  recovered_37cd5(uVar2,extraout_EDX,local_e0);
  uVar8 = recovered_37e74();
  pcVar10 = local_60;
  recovered_37cd5((uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20),pcVar10);
  pcVar9 = &DAT_00057b40;
  recovered_22362(local_1e0,0xa0,str_00057b23,str_00057b2f,&DAT_00057b3c,&DAT_00057b40);
  if (local_e0[0] != '\0') {
    pcVar9 = &DAT_00057b45;
    iVar3 = recovered_214f9((int)local_e0,0x57b45);
    if (iVar3 != 0) {
      pcVar9 = pcVar10;
      iVar3 = recovered_214f9((int)local_e0,(int)pcVar10);
      if (iVar3 != 0) {
        pcVar9 = str_00057b49;
        pcVar10 = local_e0;
        goto LAB_00037a35;
      }
    }
  }
  if (local_60[0] != '\0') {
    pcVar9 = &DAT_00057b45;
    iVar3 = recovered_214f9((int)pcVar10,0x57b45);
    if (iVar3 != 0) {
      pcVar9 = str_00057b78;
      goto LAB_00037a35;
    }
  }
  pcVar10 = pcVar9;
  pcVar9 = str_00057b9d;
LAB_00037a35:
  recovered_22362(local_c0,0x60,pcVar9,local_40,local_100,pcVar10,local_60);
  recovered_22362(local_140,0x40,str_00057bb8,str_00057bbe);
  if (DAT_0005d768 == '\x01') {
    recovered_37e92(0x7306c,str_0005729c,1);
    recovered_37e92(0x7306c,&DAT_00057364,0);
    recovered_37e92(0x7306c,local_1e0,1);
    recovered_37e92(0x7306c,local_140,1);
    recovered_37e92(0x7306c,local_c0,1);
    recovered_37e92(0x7306c,&DAT_00057364,0);
    recovered_37e92(0x7306c,str_00057bc4,1);
    recovered_37e92(0x7306c,&DAT_00057364,0);
    recovered_37e92(0x7306c,str_00057bd3,1);
    recovered_37e92(0x7306c,&DAT_00057364,0);
  }
  local_18 = local_18 + (local_18 == 0);
  local_14 = &DAT_00062e54;
  uVar2 = 0;
  while (uVar2 < DAT_00062e50) {
    uVar4 = (uint)(ushort)(&DAT_00062f54)[uVar2 * 0x81];
    local_1c = uVar2;
    if (uVar4 == 0) {
      recovered_37e92(0x7306c,&DAT_00057364,0);
    }
    else {
      uVar2 = 0;
      local_20 = uVar4;
      while ((uVar1 = local_18, uVar2 < local_20 && (DAT_0009386c < 0x200))) {
        uVar6 = uVar4 - local_18;
        if (local_18 <= uVar4) {
          uVar4 = local_18;
        }
        recovered_37f26(0x7306c,(int)(local_14 + uVar2),uVar4,0);
        uVar2 = uVar2 + uVar1;
        uVar4 = uVar6;
      }
    }
    local_14 = local_14 + 0x102;
    uVar2 = local_1c + 1;
  }
  puVar5 = &DAT_00057288;
  if (DAT_0009387c != (undefined *)0x0) {
    puVar5 = DAT_0009387c;
  }
  recovered_22362(local_500,0x220,&DAT_000576ac,puVar5,&DAT_0005e721);
  uVar2 = 0;
  local_14 = (undefined *)recovered_214de((int)local_500);
  while( true ) {
    uVar4 = (int)local_14 - uVar2;
    if (local_14 < uVar2 || uVar4 == 0) break;
    if (0x1ff < DAT_0009386c) goto LAB_00037c7b;
    if (local_18 <= uVar4) {
      uVar4 = local_18;
    }
    recovered_21348((int)local_2e0,(int)(local_500 + uVar2),uVar4);
    local_2e0[uVar4] = 0;
    recovered_37e92(0x7306c,local_2e0,0);
    uVar2 = uVar2 + uVar4;
  }
  if (DAT_0009386c == 0) {
    recovered_37e92(0x7306c,&DAT_00057364,0);
  }
  if (local_14 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_00037c7b:
    uVar2 = 0;
    if ((uint)local_14 % local_18 == 0) {
      if (DAT_0009386c < 0x200) {
        recovered_37e92(0x7306c,&DAT_00057364,0);
      }
    }
    else {
      uVar2 = (uint)local_14 % local_18;
    }
  }
  DAT_00093870 = DAT_0009386c - 1;
  DAT_00093874 = uVar2;
  DAT_00093878 = 1;
  return;
}
