/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020c5353 (*(uint8_t *)(0x20c5353U))
#define DAT_020c5f80 (*(uint8_t *)(0x20c5f80U))
#define DAT_020c5f8c (*(uint8_t *)(0x20c5f8cU))
#define DAT_020c5fa8 (*(uint8_t *)(0x20c5fa8U))
#define DAT_020c69e5 (*(uint8_t *)(0x20c69e5U))
#define DAT_020cadc9 (*(uint8_t *)(0x20cadc9U))
#define PTR_str_020c5bb2_020d9c64 (*(char * *)(0x20d9c64U))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c5f85 (*(char (*)[1])(0x20c5f85U))
#define str_020c70d7 (*(char (*)[1])(0x20c70d7U))
#define str_020c7875 (*(char (*)[1])(0x20c7875U))
#define str_020c787d (*(char (*)[1])(0x20c787dU))
#define str_020c7887 (*(char (*)[1])(0x20c7887U))
#define str_020c7bd1 (*(char (*)[1])(0x20c7bd1U))
#define str_020c7d21 (*(char (*)[1])(0x20c7d21U))
#define str_020c7d29 (*(char (*)[1])(0x20c7d29U))
#define str_020caca2 (*(char (*)[1])(0x20caca2U))
#define str_020cadc2 (*(char (*)[1])(0x20cadc2U))
#define str_020cadcd (*(char (*)[1])(0x20cadcdU))
#define str_020cadd4 (*(char (*)[1])(0x20cadd4U))
#define str_020cade2 (*(char (*)[1])(0x20cade2U))
#define str_020cade9 (*(char (*)[1])(0x20cade9U))
#define str_020cadfd (*(char (*)[1])(0x20cadfdU))
#define local_1c (*(char * *)(frame + 20))
#define local_18 (*(char * *)(frame + 24))
#define local_14 (*(char * *)(frame + 28))
#define local_20 (*(char * *)(frame + 16))


void recovered_2062590(int in_ECX)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  int iVar1;
  char *pcVar2;
  char *pcVar3;
  char *pcVar4;
  char *pcVar5;
  char *pcVar6;
  char *pcVar7;
  undefined1 *puVar8;
  char *pcVar9;
  char *pcVar10;
  undefined1 *puVar11;
  bool bVar12;

  if (in_ECX == 0) {
    return;
  }
  pcVar6 = str_020cadc2;
  if (*(int *)(in_ECX + 0x14) != 1) {
    pcVar6 = &DAT_020cadc9;
  }
  iVar1 = *(int *)(in_ECX + 0x1c);
  if (iVar1 < 0xb7) {
    switch((uintptr_t)(iVar1)) {
    case 3:
      local_14 = &DAT_020c5f80;
      break;
    default:
      goto switchD_020625cf_caseD_4;
    case 8:
      local_14 = &DAT_020c5f8c;
      break;
    case 0x14:
      local_14 = str_020c7875;
      break;
    case 0x15:
      local_14 = str_020c787d;
      break;
    case 0x28:
      local_14 = &DAT_020c5fa8;
      break;
    case 0x3e:
      local_14 = str_020c5f85;
    }
  }
  else {
    if (iVar1 == 0xb7) {
      local_14 = str_020c7d21;
      goto LAB_02062643;
    }
    if (iVar1 == 0xf3) {
      local_14 = str_020c7d29;
      goto LAB_02062643;
    }
    if (iVar1 == 0x102) {
      local_14 = str_020c7887;
      goto LAB_02062643;
    }
switchD_020625cf_caseD_4:
    local_14 = str_020c5bb8;
  }
LAB_02062643:
  pcVar9 = str_020c5bb8;
  if (*(int *)(in_ECX + 0x18) - 1U < 3) {
    pcVar9 = (&PTR_str_020c5bb2_020d9c64)[*(int *)(in_ECX + 0x18)];
  }
  pcVar2 = str_020c7bd1;
  if ((*(byte *)(in_ECX + 0xc) & 2) != 0) {
    pcVar2 = &DAT_020c5353;
  }
  local_20 = &DAT_020c69e5;
  pcVar7 = &DAT_020c69e5;
  if (*(char *)(in_ECX + 0x46) == '\0') {
    pcVar7 = str_020c70d7;
  }
  pcVar10 = str_020cadcd;
  local_1c = &DAT_020c69e5;
  if (*(char *)(in_ECX + 0x44) == '\0') {
    pcVar10 = str_020cadd4;
    local_1c = str_020c70d7;
  }
  bVar12 = *(char *)(in_ECX + 0x45) == '\0';
  if (bVar12) {
    local_20 = str_020c70d7;
  }
  local_18 = local_1c;
  if (bVar12) {
    local_18 = str_020c70d7;
  }
  if (*(int *)(in_ECX + 0x40) != 0) {
    local_18 = str_020c70d7;
  }
  pcVar3 = str_020cade2;
  if (*(char *)(in_ECX + 0x6d8) != '\0') {
    pcVar3 = (char *)(in_ECX + 0x6d8);
  }
  pcVar4 = &DAT_020c5084;
  pcVar5 = &DAT_020c5084;
  puVar8 = &DAT_020c5084;
  if (*(char *)(in_ECX + 0x4d8) != '\0') {
    puVar8 = (undefined1 *)(in_ECX + 0x4d8);
    pcVar5 = str_020cade9;
  }
  puVar11 = &DAT_020c5084;
  if (*(char *)(in_ECX + 0x2d8) != '\0') {
    puVar11 = (undefined1 *)(in_ECX + 0x2d8);
    pcVar4 = str_020cadfd;
  }
  recovered_20044f0((char *)(in_ECX + 0x798),0x400,str_020caca2,in_ECX + 0x47,
                    (uint)(*(int *)(in_ECX + 0x10) == 2) * 0x20 + 0x20,pcVar6,local_14,pcVar9,
                    *(undefined4 *)(in_ECX + 0x20),*(undefined4 *)(in_ECX + 0x24),
                    *(undefined4 *)(in_ECX + 0x2c),*(undefined4 *)(in_ECX + 0x28),
                    *(undefined4 *)(in_ECX + 0x34),*(undefined4 *)(in_ECX + 0x38),
                    *(undefined4 *)(in_ECX + 0x30),pcVar2,pcVar10,pcVar7,local_1c,local_20,local_18,
                    *(undefined4 *)(in_ECX + 0x3c),*(int *)(in_ECX + 0x40),pcVar3,pcVar5,puVar8,
                    pcVar4,puVar11);
  return;
}
#undef DAT_020c5084
#undef DAT_020c5353
#undef DAT_020c5f80
#undef DAT_020c5f8c
#undef DAT_020c5fa8
#undef DAT_020c69e5
#undef DAT_020cadc9
#undef PTR_str_020c5bb2_020d9c64
#undef str_020c5bb8
#undef str_020c5f85
#undef str_020c70d7
#undef str_020c7875
#undef str_020c787d
#undef str_020c7887
#undef str_020c7bd1
#undef str_020c7d21
#undef str_020c7d29
#undef str_020caca2
#undef str_020cadc2
#undef str_020cadcd
#undef str_020cadd4
#undef str_020cade2
#undef str_020cade9
#undef str_020cadfd
#undef local_1c
#undef local_18
#undef local_14
#undef local_20
