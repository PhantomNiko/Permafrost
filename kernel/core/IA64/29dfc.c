#include "functions.h"
#undef DAT_0004619c
#define DAT_0004619c (*(uint8_t *)(0x4619cU))
#undef DAT_0004627c
#define DAT_0004627c (*(uint8_t *)(0x4627cU))
#undef DAT_0004639b
#define DAT_0004639b (*(uint8_t *)(0x4639bU))
#undef DAT_0004682b
#define DAT_0004682b (*(uint8_t *)(0x4682bU))
#undef DAT_00046840
#define DAT_00046840 (*(uint8_t *)(0x46840U))
#undef DAT_0004c5fc
#define DAT_0004c5fc (*(char *)(0x4c5fcU))
#undef DAT_000502b0
#define DAT_000502b0 (*(uint8_t *)(0x502b0U))
#undef DAT_000515c4
#define DAT_000515c4 (*(uint *)(0x515c4U))
#undef DAT_000515c8
#define DAT_000515c8 (*(uint8_t *)(0x515c8U))
#undef DAT_000516c8
#define DAT_000516c8 (*(uint16_t *)(0x516c8U))
#undef DAT_00081fe0
#define DAT_00081fe0 (*(uint *)(0x81fe0U))
#undef DAT_00081fe4
#define DAT_00081fe4 (*(int *)(0x81fe4U))
#undef DAT_00081fe8
#define DAT_00081fe8 (*(uint *)(0x81fe8U))
#undef DAT_00081fec
#define DAT_00081fec (*(uint8_t *)(0x81fecU))
#undef DAT_00081ff0
#define DAT_00081ff0 (*(uint8_t * *)(0x81ff0U))
#undef str_000461b0
#define str_000461b0 (*(char (*)[1])(0x461b0U))
#undef str_00046812
#define str_00046812 (*(char (*)[1])(0x46812U))
#undef str_0004681e
#define str_0004681e (*(char (*)[1])(0x4681eU))
#undef str_0004682f
#define str_0004682f (*(char (*)[1])(0x4682fU))
#undef str_00046835
#define str_00046835 (*(char (*)[1])(0x46835U))
#undef str_00046844
#define str_00046844 (*(char (*)[1])(0x46844U))
#undef str_00046873
#define str_00046873 (*(char (*)[1])(0x46873U))
#undef str_00046898
#define str_00046898 (*(char (*)[1])(0x46898U))
#undef str_000468b3
#define str_000468b3 (*(char (*)[1])(0x468b3U))
#undef str_000468b9
#define str_000468b9 (*(char (*)[1])(0x468b9U))
#undef str_000468bf
#define str_000468bf (*(char (*)[1])(0x468bfU))
#undef str_000468cd
#define str_000468cd (*(char (*)[1])(0x468cdU))
#define local_540 (*(char (*)[544])(frame + 40))
#define local_320 (*(undefined1 (*)[256])(frame + 584))
#define local_220 (*(char (*)[160])(frame + 840))
#define local_180 (*(char (*)[64])(frame + 1000))
#define local_140 (*(char (*)[64])(frame + 1064))
#define local_100 (*(char (*)[32])(frame + 1128))
#define local_e0 (*(char (*)[32])(frame + 1160))
#define local_c0 (*(char (*)[96])(frame + 1192))
#define local_60 (*(char (*)[32])(frame + 1288))
#define local_40 (*(char (*)[32])(frame + 1320))
#define local_20 (*(uint *)(frame + 1352))
#define local_1c (*(uint *)(frame + 1356))
#define local_18 (*(uint *)(frame + 1360))
#define local_14 (*(undefined * *)(frame + 1364))
/* Recovered working notes; Pooka's Free Software License.
 * Address: 0x29dfc
 */

void recovered_29dfc(uint columns)

{
  unsigned char frame[1416];

  uint uVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  uint uVar5;
  undefined *puVar6;
  uint extraout_EDX = 0;
  uint uVar7;
  longlong lVar8;
  undefined8 uVar9;
  char *pcVar10;
  char *pcVar11;

  DAT_00081fe0 = 0;
  DAT_00081fe4 = 0;
  DAT_00081fe8 = 0;
  DAT_00081fec = 0;
  local_18 = columns;
  lVar8 = recovered_2a2b0();
  recovered_2a204((uint)lVar8,(uint)((ulonglong)lVar8 >> 0x20),local_40);
  uVar2 = recovered_20e79();
  recovered_2a204(uVar2,0,local_100);
  uVar2 = recovered_2a391();
  recovered_2a204(uVar2,extraout_EDX,local_e0);
  uVar9 = recovered_2a3a3();
  recovered_2a204((uint)uVar9,(uint)((ulonglong)uVar9 >> 0x20),local_60);
  recovered_21de7(local_220,0xa0,str_00046812,str_0004681e,&DAT_0004682b,str_0004682f);
  pcVar3 = recovered_2a3c1();
  pcVar11 = str_00046835;
  pcVar10 = (char *)0x40;
  recovered_21de7(local_180,0x40,str_00046835,pcVar3);
  if (local_e0[0] != '\0') {
    pcVar10 = &DAT_00046840;
    iVar4 = recovered_21415((int)local_e0,0x46840);
    if (iVar4 != 0) {
      pcVar10 = local_60;
      iVar4 = recovered_21415((int)local_e0,(int)local_60);
      if (iVar4 != 0) {
        pcVar3 = str_00046844;
        pcVar10 = local_e0;
        pcVar11 = local_60;
        goto LAB_00029f52;
      }
    }
  }
  if (local_60[0] != '\0') {
    pcVar10 = &DAT_00046840;
    iVar4 = recovered_21415((int)local_60,0x46840);
    if (iVar4 != 0) {
      pcVar3 = str_00046873;
      pcVar10 = local_60;
      goto LAB_00029f52;
    }
  }
  pcVar3 = str_00046898;
LAB_00029f52:
  recovered_21de7(local_c0,0x60,pcVar3,local_40,local_100,pcVar10,pcVar11);
  recovered_21de7(local_140,0x40,str_000468b3,str_000468b9);
  if (DAT_0004c5fc == '\x01') {
    recovered_2a3f5(0x617e0,str_000461b0,1);
    recovered_2a3f5(0x617e0,&DAT_0004627c,0);
    recovered_2a3f5(0x617e0,local_220,1);
    recovered_2a3f5(0x617e0,local_180,1);
    recovered_2a3f5(0x617e0,local_140,1);
    recovered_2a3f5(0x617e0,local_c0,1);
    recovered_2a3f5(0x617e0,&DAT_0004627c,0);
    recovered_2a3f5(0x617e0,str_000468bf,1);
    recovered_2a3f5(0x617e0,&DAT_0004627c,0);
    recovered_2a3f5(0x617e0,str_000468cd,1);
    recovered_2a3f5(0x617e0,&DAT_0004627c,0);
  }
  local_18 = local_18 + (local_18 == 0);
  local_14 = &DAT_000515c8;
  uVar2 = 0;
  while (uVar2 < DAT_000515c4) {
    uVar5 = (uint)(ushort)(&DAT_000516c8)[uVar2 * 0x81];
    local_1c = uVar2;
    if (uVar5 == 0) {
      recovered_2a3f5(0x617e0,&DAT_0004627c,0);
    }
    else {
      uVar2 = 0;
      local_20 = uVar5;
      while ((uVar1 = local_18, uVar2 < local_20 && (DAT_00081fe0 < 0x200))) {
        uVar7 = uVar5 - local_18;
        if (local_18 <= uVar5) {
          uVar5 = local_18;
        }
        recovered_2a489(0x617e0,(int)(local_14 + uVar2),uVar5,0);
        uVar2 = uVar2 + uVar1;
        uVar5 = uVar7;
      }
    }
    local_14 = local_14 + 0x102;
    uVar2 = local_1c + 1;
  }
  puVar6 = &DAT_0004619c;
  if (DAT_00081ff0 != (undefined *)0x0) {
    puVar6 = DAT_00081ff0;
  }
  recovered_21de7(local_540,0x220,&DAT_0004639b,puVar6,&DAT_000502b0);
  uVar2 = 0;
  local_14 = (undefined *)recovered_213fa((int)local_540);
  while( true ) {
    uVar5 = (int)local_14 - uVar2;
    if (local_14 < uVar2 || uVar5 == 0) break;
    if (0x1ff < DAT_00081fe0) goto LAB_0002a1aa;
    if (local_18 <= uVar5) {
      uVar5 = local_18;
    }
    recovered_21348((int)local_320,(int)(local_540 + uVar2),uVar5);
    local_320[uVar5] = 0;
    recovered_2a3f5(0x617e0,local_320,0);
    uVar2 = uVar2 + uVar5;
  }
  if (DAT_00081fe0 == 0) {
    recovered_2a3f5(0x617e0,&DAT_0004627c,0);
  }
  if (local_14 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_0002a1aa:
    uVar2 = 0;
    if ((uint)local_14 % local_18 == 0) {
      if (DAT_00081fe0 < 0x200) {
        recovered_2a3f5(0x617e0,&DAT_0004627c,0);
      }
    }
    else {
      uVar2 = (uint)local_14 % local_18;
    }
  }
  DAT_00081fe4 = DAT_00081fe0 - 1;
  DAT_00081fe8 = uVar2;
  DAT_00081fec = 1;
  return;
}
