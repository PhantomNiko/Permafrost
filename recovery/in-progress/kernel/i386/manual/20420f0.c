/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_0214b000 (*(uint32_t volatile *)(0x214b000U))
#define DAT_0214b00c (*(uint32_t volatile *)(0x214b00cU))
#define DAT_0214b01c (*(uint volatile *)(0x214b01cU))
#define str_020d69c3 (*(char (*)[1])(0x20d69c3U))
#define str_020d69da (*(char (*)[1])(0x20d69daU))
#define str_020d69eb (*(char (*)[1])(0x20d69ebU))
#define str_020d69fb (*(char (*)[1])(0x20d69fbU))
#define local_a8e (*(undefined1 (*)[12])(frame + 50))
#define local_a82 (*(ushort *)(frame + 62))
#define local_a80 (*(byte (*)[2])(frame + 64))
#define local_a7e (*(ushort (*)[3])(frame + 66))
#define local_a77 (*(char *)(frame + 73))
#define local_a74 (*(uint *)(frame + 76))
#define local_a70 (*(uint *)(frame + 80))
#define local_28e (*(char (*)[512])(frame + 2098))
#define local_8e (*(char (*)[96])(frame + 2610))
#define local_2e (*(char (*)[6])(frame + 2706))
#define local_28 (*(uint * *)(frame + 2712))
#define local_24 (*(byte * *)(frame + 2716))
#define local_20 (*(int *)(frame + 2720))
#define local_1c (*(uint *)(frame + 2724))
#define local_18 (*(uint *)(frame + 2728))
#define local_14 (*(uint *)(frame + 2732))
#define auStack_a6c (*(ushort (*)[1007])(frame + 84))
#define in_stack_fffff560 (*(char * *)(frame + 32))


undefined4 recovered_20420f0(byte *in_ECX,uint *in_EDX,char *param_3)

{
  unsigned char frame[2784] __attribute__((aligned(16))) = {0};

  byte *pbVar1;
  uint uVar2;
  byte bVar3;
  bool bVar4;
  short sVar5;
  ushort uVar6;
  undefined4 uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  byte *pbVar11;
  char *pcVar12;

  if (in_EDX == (uint *)0x0 || in_ECX == (byte *)0x0) {
    return 0;
  }
  uVar9 = DAT_0214b00c;
  if (uVar9 == 0) {
    pcVar12 = str_020d69c3;
  }
  else {
    local_28 = in_EDX;
    uVar7 = recovered_20a1d50(0x214aff8,uVar9,local_2e,param_3);
    if ((char)uVar7 == '\0') {
      return 0;
    }
    recovered_2001e00(local_28e,0,0x200);
    in_stack_fffff560 = (char *)0x2042158;
    uVar8 = recovered_20081a0();
    uVar6 = PF_PART2(DAT_0214b01c, 2);
    uVar9 = (uint)uVar6;
    if (uVar6 == 0) {
      if ((ushort)uVar8 < 2) {
        uVar9 = 1;
      }
      else {
        uVar9 = uVar8;
      }
    }
    sVar5 = (short)uVar9 + 1;
    uVar8 = CONCAT22((short)(uVar9 >> 0x10),sVar5);
    if (sVar5 == 0) {
      uVar8 = uVar9 + 2;
    }
    PF_PART2(DAT_0214b01c, 2) = (short)uVar8;
    local_28e[0] = (char)(uVar8 >> 8);
    local_28e[1] = (char)uVar8;
    local_28e[2] = '\x01';
    local_28e[3] = '\0';
    local_28e[4] = '\0';
    local_28e[5] = '\x01';
    bVar3 = *in_ECX;
    if (bVar3 == 0) {
      local_28e[0xc] = 0;
      iVar10 = 0xd;
    }
    else {
      uVar9 = 0xc;
      local_18 = uVar8;
      do {
        iVar10 = 0;
        pbVar11 = in_ECX;
        while ((local_14 = uVar9, bVar3 != 0 && (uVar8 = (uint)bVar3, uVar8 != 0x2e))) {
          if ((bVar3 < 0x21) ||
             (((uVar8 - 0x23 < 0x1d && ((0x10801001U >> (uVar8 - 0x23 & 0x1f) & 1) != 0)) ||
              (uVar8 == 0x5c)))) goto LAB_0204249e;
          pbVar1 = pbVar11 + 1;
          pbVar11 = pbVar11 + 1;
          iVar10 = iVar10 + -1;
          bVar3 = *pbVar1;
        }
        if (iVar10 == 0) {
          if (bVar3 == 0) goto LAB_02042488;
          goto LAB_0204249e;
        }
        if (0x3e < (uint)-iVar10 && iVar10 != -0x3f) goto LAB_0204249e;
        uVar8 = (uVar9 + 1) - iVar10;
        if (0x1ff < uVar8) goto LAB_0204249e;
        local_28e[uVar9] = -(char)iVar10;
        local_24 = in_ECX;
        local_20 = uVar9 + 1;
        recovered_2001b70(local_28e + uVar9 + 1,in_ECX,-iVar10);
        in_ECX = pbVar11 + (*pbVar11 == 0x2e);
        bVar3 = pbVar11[*pbVar11 == 0x2e];
        uVar9 = uVar8;
      } while (bVar3 != 0);
      uVar9 = (local_14 - iVar10) + 1;
LAB_02042488:
      local_28e[uVar9] = '\0';
      if (uVar9 - 0x1fc < 0xfffffdff) {
LAB_0204249e:
        pcVar12 = str_020d69da;
        goto LAB_020424ae;
      }
      iVar10 = uVar9 + 1;
      uVar8 = local_18;
    }
    pcVar12 = local_28e + iVar10;
    pcVar12[0] = '\0';
    pcVar12[1] = '\x01';
    pcVar12[2] = '\0';
    pcVar12[3] = '\x01';
    local_14 = uVar8 | 0xc000;
    uVar2 = DAT_0214b00c;
    uVar9 = DAT_0214b000;
    bVar4 = recovered_20bcda0(0x214aff8,local_2e,uVar9,uVar2,(ushort)uVar8 | 0xc000,0x35,local_28e,
                              iVar10 + 4U & 0xffff);
    if (bVar4) {
      uVar9 = recovered_20081a0();
      iVar10 = uVar9 + 0x37;
      in_stack_fffff560 = (char *)0x20422ed;
      uVar9 = recovered_20081a0();
      if (0 < (int)(iVar10 - uVar9)) {
        local_18 = uVar8 & 0xffff;
        do {
          local_1c = 0;
          local_8e[0] = '\0';
          uVar7 = recovered_20a20d0((int)local_a8e,&local_1c,iVar10);
          if (((((char)uVar7 != '\0') && (0x29 < local_1c)) &&
              (((ushort)(local_a82 << 8 | local_a82 >> 8) == 0x800 &&
               (((local_a80[0] & 0xf0) == 0x40 && (local_a77 == '\x11')))))) &&
             ((uVar9 = DAT_0214b00c,
              (local_a74 >> 0x18 | (local_a74 & 0xff0000) >> 8 | (local_a74 & 0xff00) << 8 |
              local_a74 << 0x18) == uVar9 &&
              ((uVar9 = DAT_0214b000,
               (local_a70 >> 0x18 | (local_a70 & 0xff0000) >> 8 | (local_a70 & 0xff00) << 8 |
               local_a70 << 0x18) == uVar9 && (0x13 < (byte)(local_a80[0] << 2))))))) {
            uVar8 = (uint)(byte)(local_a80[0] << 2);
            uVar9 = (uint)(ushort)(local_a7e[0] << 8 | local_a7e[0] >> 8);
            if (((uVar8 + 8 <= uVar9) &&
                ((((uVar9 + 0xe <= local_1c &&
                   ((ushort)(*(ushort *)(local_a80 + uVar8) << 8 |
                            *(ushort *)(local_a80 + uVar8) >> 8) == 0x35)) &&
                  ((ushort)(*(ushort *)((int)local_a7e + uVar8) << 8 |
                           *(ushort *)((int)local_a7e + uVar8) >> 8) == (ushort)local_14)) &&
                 ((uVar6 = *(ushort *)((int)local_a7e + uVar8 + 2), uVar6 = uVar6 << 8 | uVar6 >> 8,
                  7 < uVar6 && (uVar8 + uVar6 <= uVar9)))))) &&
               (uVar7 = recovered_20bcf90((ushort *)((int)local_a7e + uVar8 + 6),uVar6 - 8,
                                          (ushort)local_18,local_28,local_8e), (char)uVar7 != '\0'))
            {
              return CONCAT31((int3)((uint)uVar7 >> 8),1);
            }
          }
          if (local_8e[0] != '\0') {
            in_stack_fffff560 = local_8e;
            pcVar12 = &DAT_020c5119;
            goto LAB_020424ae;
          }
          recovered_2026f10();
          recovered_200afa0(1000);
          in_stack_fffff560 = (char *)0x2042453;
          uVar9 = recovered_20081a0();
        } while (0 < (int)(iVar10 - uVar9));
      }
      pcVar12 = str_020d69fb;
    }
    else {
      pcVar12 = str_020d69eb;
    }
  }
LAB_020424ae:
  pf_varargs_20044f0__4_(param_3,0x80,pcVar12,(uint)in_stack_fffff560);
  return 0;
}
#undef DAT_020c5119
#undef DAT_0214b000
#undef DAT_0214b00c
#undef DAT_0214b01c
#undef str_020d69c3
#undef str_020d69da
#undef str_020d69eb
#undef str_020d69fb
#undef local_a8e
#undef local_a82
#undef local_a80
#undef local_a7e
#undef local_a77
#undef local_a74
#undef local_a70
#undef local_28e
#undef local_8e
#undef local_2e
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef auStack_a6c
#undef in_stack_fffff560
