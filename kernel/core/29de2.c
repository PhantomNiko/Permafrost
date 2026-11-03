#include "functions.h"
#undef DAT_00048438
#define DAT_00048438 (*(uint8_t *)(0x48438U))
#undef DAT_0004851c
#define DAT_0004851c (*(uint8_t *)(0x4851cU))
#undef DAT_0004863b
#define DAT_0004863b (*(uint8_t *)(0x4863bU))
#undef DAT_00048acb
#define DAT_00048acb (*(uint8_t *)(0x48acbU))
#undef DAT_00048acf
#define DAT_00048acf (*(uint8_t *)(0x48acfU))
#undef DAT_00048ad4
#define DAT_00048ad4 (*(uint8_t *)(0x48ad4U))
#undef DAT_0004e5fc
#define DAT_0004e5fc (*(char *)(0x4e5fcU))
#undef DAT_000522b0
#define DAT_000522b0 (*(uint8_t *)(0x522b0U))
#undef DAT_000535c4
#define DAT_000535c4 (*(uint *)(0x535c4U))
#undef DAT_000535c8
#define DAT_000535c8 (*(uint8_t *)(0x535c8U))
#undef DAT_000536c8
#define DAT_000536c8 (*(uint16_t *)(0x536c8U))
#undef DAT_00083fe0
#define DAT_00083fe0 (*(uint *)(0x83fe0U))
#undef DAT_00083fe4
#define DAT_00083fe4 (*(int *)(0x83fe4U))
#undef DAT_00083fe8
#define DAT_00083fe8 (*(uint *)(0x83fe8U))
#undef DAT_00083fec
#define DAT_00083fec (*(uint8_t *)(0x83fecU))
#undef DAT_00083ff0
#define DAT_00083ff0 (*(uint8_t * *)(0x83ff0U))
#undef str_0004844c
#define str_0004844c (*(char (*)[1])(0x4844cU))
#undef str_00048ab2
#define str_00048ab2 (*(char (*)[1])(0x48ab2U))
#undef str_00048abe
#define str_00048abe (*(char (*)[1])(0x48abeU))
#undef str_00048ad8
#define str_00048ad8 (*(char (*)[1])(0x48ad8U))
#undef str_00048b07
#define str_00048b07 (*(char (*)[1])(0x48b07U))
#undef str_00048b2c
#define str_00048b2c (*(char (*)[1])(0x48b2cU))
#undef str_00048b47
#define str_00048b47 (*(char (*)[1])(0x48b47U))
#undef str_00048b4d
#define str_00048b4d (*(char (*)[1])(0x48b4dU))
#undef str_00048b53
#define str_00048b53 (*(char (*)[1])(0x48b53U))
#undef str_00048b62
#define str_00048b62 (*(char (*)[1])(0x48b62U))
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
 * Address: 0x29de2
 */

void recovered_29de2(uint columns)

{
  unsigned char frame[1352];

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

  DAT_00083fe0 = 0;
  DAT_00083fe4 = 0;
  DAT_00083fe8 = 0;
  DAT_00083fec = 0;
  local_18 = columns;
  lVar7 = recovered_2a268();
  recovered_2a1bc((uint)lVar7,(uint)((ulonglong)lVar7 >> 0x20),local_40);
  uVar2 = recovered_20e79();
  recovered_2a1bc(uVar2,0,local_100);
  uVar2 = recovered_2a349();
  recovered_2a1bc(uVar2,extraout_EDX,local_e0);
  uVar8 = recovered_2a35b();
  pcVar10 = local_60;
  recovered_2a1bc((uint)uVar8,(uint)((ulonglong)uVar8 >> 0x20),pcVar10);
  pcVar9 = &DAT_00048acf;
  recovered_21de7(local_1e0,0xa0,str_00048ab2,str_00048abe,&DAT_00048acb,&DAT_00048acf);
  if (local_e0[0] != '\0') {
    pcVar9 = &DAT_00048ad4;
    iVar3 = recovered_21415((int)local_e0,0x48ad4);
    if (iVar3 != 0) {
      pcVar9 = pcVar10;
      iVar3 = recovered_21415((int)local_e0,(int)pcVar10);
      if (iVar3 != 0) {
        pcVar9 = str_00048ad8;
        pcVar10 = local_e0;
        goto LAB_00029f1c;
      }
    }
  }
  if (local_60[0] != '\0') {
    pcVar9 = &DAT_00048ad4;
    iVar3 = recovered_21415((int)pcVar10,0x48ad4);
    if (iVar3 != 0) {
      pcVar9 = str_00048b07;
      goto LAB_00029f1c;
    }
  }
  pcVar10 = pcVar9;
  pcVar9 = str_00048b2c;
LAB_00029f1c:
  recovered_21de7(local_c0,0x60,pcVar9,local_40,local_100,pcVar10,local_60);
  recovered_21de7(local_140,0x40,str_00048b47,str_00048b4d);
  if (DAT_0004e5fc == '\x01') {
    recovered_2a379(0x637e0,str_0004844c,1);
    recovered_2a379(0x637e0,&DAT_0004851c,0);
    recovered_2a379(0x637e0,local_1e0,1);
    recovered_2a379(0x637e0,local_140,1);
    recovered_2a379(0x637e0,local_c0,1);
    recovered_2a379(0x637e0,&DAT_0004851c,0);
    recovered_2a379(0x637e0,str_00048b53,1);
    recovered_2a379(0x637e0,&DAT_0004851c,0);
    recovered_2a379(0x637e0,str_00048b62,1);
    recovered_2a379(0x637e0,&DAT_0004851c,0);
  }
  local_18 = local_18 + (local_18 == 0);
  local_14 = &DAT_000535c8;
  uVar2 = 0;
  while (uVar2 < DAT_000535c4) {
    uVar4 = (uint)(ushort)(&DAT_000536c8)[uVar2 * 0x81];
    local_1c = uVar2;
    if (uVar4 == 0) {
      recovered_2a379(0x637e0,&DAT_0004851c,0);
    }
    else {
      uVar2 = 0;
      local_20 = uVar4;
      while ((uVar1 = local_18, uVar2 < local_20 && (DAT_00083fe0 < 0x200))) {
        uVar6 = uVar4 - local_18;
        if (local_18 <= uVar4) {
          uVar4 = local_18;
        }
        recovered_2a40d(0x637e0,(int)(local_14 + uVar2),uVar4,0);
        uVar2 = uVar2 + uVar1;
        uVar4 = uVar6;
      }
    }
    local_14 = local_14 + 0x102;
    uVar2 = local_1c + 1;
  }
  puVar5 = &DAT_00048438;
  if (DAT_00083ff0 != (undefined *)0x0) {
    puVar5 = DAT_00083ff0;
  }
  recovered_21de7(local_500,0x220,&DAT_0004863b,puVar5,&DAT_000522b0);
  uVar2 = 0;
  local_14 = (undefined *)recovered_213fa((int)local_500);
  while( true ) {
    uVar4 = (int)local_14 - uVar2;
    if (local_14 < uVar2 || uVar4 == 0) break;
    if (0x1ff < DAT_00083fe0) goto LAB_0002a162;
    if (local_18 <= uVar4) {
      uVar4 = local_18;
    }
    recovered_21348((int)local_2e0,(int)(local_500 + uVar2),uVar4);
    local_2e0[uVar4] = 0;
    recovered_2a379(0x637e0,local_2e0,0);
    uVar2 = uVar2 + uVar4;
  }
  if (DAT_00083fe0 == 0) {
    recovered_2a379(0x637e0,&DAT_0004851c,0);
  }
  if (local_14 == (undefined *)0x0) {
    uVar2 = 0;
  }
  else {
LAB_0002a162:
    uVar2 = 0;
    if ((uint)local_14 % local_18 == 0) {
      if (DAT_00083fe0 < 0x200) {
        recovered_2a379(0x637e0,&DAT_0004851c,0);
      }
    }
    else {
      uVar2 = (uint)local_14 % local_18;
    }
  }
  DAT_00083fe4 = DAT_00083fe0 - 1;
  DAT_00083fe8 = uVar2;
  DAT_00083fec = 1;
  return;
}
