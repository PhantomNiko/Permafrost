/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cb465 (*(uint8_t *)(0x20cb465U))
#define DAT_020cb89e (*(uint8_t *)(0x20cb89eU))
#define DAT_020cb8bf (*(uint8_t *)(0x20cb8bfU))
#define DAT_021408ea (*(uint8_t volatile *)(0x21408eaU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define str_020c5405 (*(char (*)[1])(0x20c5405U))
#define str_020cb400 (*(char (*)[1])(0x20cb400U))
#define str_020cb406 (*(char (*)[1])(0x20cb406U))
#define str_020cb42a (*(char (*)[1])(0x20cb42aU))
#define str_020cb459 (*(char (*)[1])(0x20cb459U))
#define str_020cb469 (*(char (*)[1])(0x20cb469U))
#define str_020cb487 (*(char (*)[1])(0x20cb487U))
#define str_020cb4c4 (*(char (*)[1])(0x20cb4c4U))
#define str_020cb4cc (*(char (*)[1])(0x20cb4ccU))
#define str_020cb4f4 (*(char (*)[1])(0x20cb4f4U))
#define str_020cb54c (*(char (*)[1])(0x20cb54cU))
#define str_020cb555 (*(char (*)[1])(0x20cb555U))
#define str_020cb576 (*(char (*)[1])(0x20cb576U))
#define str_020cb5c1 (*(char (*)[1])(0x20cb5c1U))
#define str_020cb5c9 (*(char (*)[1])(0x20cb5c9U))
#define str_020cb617 (*(char (*)[1])(0x20cb617U))
#define str_020cb639 (*(char (*)[1])(0x20cb639U))
#define str_020cb6a4 (*(char (*)[1])(0x20cb6a4U))
#define str_020cb850 (*(char (*)[1])(0x20cb850U))
#define str_020cb858 (*(char (*)[1])(0x20cb858U))
#define str_020cb879 (*(char (*)[1])(0x20cb879U))
#define str_020cb87f (*(char (*)[1])(0x20cb87fU))
#define str_020cb8a2 (*(char (*)[1])(0x20cb8a2U))
#define str_020cb8c3 (*(char (*)[1])(0x20cb8c3U))
#define str_020cb8e7 (*(char (*)[1])(0x20cb8e7U))
#define str_020cb8ee (*(char (*)[1])(0x20cb8eeU))
#define str_020cb958 (*(char (*)[1])(0x20cb958U))
#define str_020cb987 (*(char (*)[1])(0x20cb987U))
#define str_020cb9bb (*(char (*)[1])(0x20cb9bbU))
#define str_020cb9e9 (*(char (*)[1])(0x20cb9e9U))
#define in_stack_fffffee0 (*(uint *)(frame + 48))
#define format (*(char * *)(frame + 28))
#define local_110 (*(uint *)(frame + 64))
#define local_10c (*(uint *)(frame + 68))
#define local_108 (*(uint *)(frame + 72))
#define local_104 (*(uint *)(frame + 76))
#define local_f8 (*(uint *)(frame + 88))
#define local_f4 (*(char * *)(frame + 92))
#define local_f0 (*(uint * *)(frame + 96))
#define local_ec (*(char * *)(frame + 100))
#define local_e8 (*(uint *)(frame + 104))
#define local_e4 (*(byte *)(frame + 108))
#define local_e3 (*(byte *)(frame + 109))
#define local_e2 (*(byte *)(frame + 110))
#define local_e0 (*(uint * *)(frame + 112))
#define local_dc (*(uint *)(frame + 116))
#define local_d8 (*(uint *)(frame + 120))
#define local_d4 (*(uint *)(frame + 124))
#define local_c4 (*(undefined4 *)(frame + 140))
#define local_bc (*(undefined4 *)(frame + 148))
#define local_b8 (*(undefined4 *)(frame + 152))
#define local_b0 (*(undefined4 *)(frame + 160))
#define local_a4 (*(undefined4 *)(frame + 172))
#define local_a0 (*(undefined4 *)(frame + 176))
#define local_9c (*(undefined4 *)(frame + 180))
#define local_98 (*(undefined4 *)(frame + 184))
#define local_94 (*(undefined4 *)(frame + 188))
#define local_90 (*(undefined4 *)(frame + 192))
#define local_8c (*(undefined4 *)(frame + 196))
#define local_88 (*(uint *)(frame + 200))
#define local_84 (*(undefined4 *)(frame + 204))
#define local_80 (*(undefined4 *)(frame + 208))
#define local_7c (*(undefined4 *)(frame + 212))
#define local_78 (*(undefined4 *)(frame + 216))
#define local_74 (*(undefined4 *)(frame + 220))
#define local_70 (*(undefined4 *)(frame + 224))
#define local_6c (*(undefined4 *)(frame + 228))
#define local_68 (*(undefined4 *)(frame + 232))
#define local_64 (*(undefined4 *)(frame + 236))
#define local_60 (*(undefined4 *)(frame + 240))
#define local_5c (*(undefined4 *)(frame + 244))
#define local_58 (*(undefined4 *)(frame + 248))
#define local_54 (*(undefined4 *)(frame + 252))
#define local_50 (*(undefined4 *)(frame + 256))
#define local_4c (*(undefined4 *)(frame + 260))
#define local_48 (*(undefined4 *)(frame + 264))
#define local_44 (*(undefined4 *)(frame + 268))
#define local_40 (*(undefined4 *)(frame + 272))
#define local_3c (*(undefined4 *)(frame + 276))
#define local_38 (*(undefined4 *)(frame + 280))
#define local_34 (*(undefined4 *)(frame + 284))
#define local_30 (*(byte *)(frame + 288))
#define local_2f (*(byte *)(frame + 289))
#define local_2e (*(byte *)(frame + 290))
#define local_2c (*(ushort *)(frame + 292))
#define local_2a (*(ushort *)(frame + 294))
#define local_28 (*(byte *)(frame + 296))
#define local_27 (*(byte *)(frame + 297))
#define local_26 (*(byte *)(frame + 298))
#define local_24 (*(uint *)(frame + 300))
#define local_20 (*(uint *)(frame + 304))
#define local_1c (*(uint *)(frame + 308))
#define local_18 (*(char * *)(frame + 312))
#define local_14 (*(char * *)(frame + 316))


uint recovered_20703b0(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[368] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  bool bVar3;
  int iVar4;
  undefined3 extraout_var = 0;
  undefined3 extraout_var_00 = 0;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  byte bVar8;
  uint uVar9;
  undefined3 uVar11;
  char *pcVar10;
  char *pcVar12;
  uint *puVar13;

  if (in_ECX == 0) {
    pcVar10 = str_020c5405;
LAB_02070417:
    pf_varargs_202ecc0__4_(in_EDX,param_3,str_020cb406,(uint)pcVar10);
    pcVar10 = in_EDX;
    goto LAB_02070427;
  }
  pcVar7 = (char *)(in_ECX + 0x138);
  puVar13 = (uint *)0x5;
  iVar4 = recovered_2019320(pcVar7,str_020cb400,5);
  if (iVar4 == 0) {
    pcVar10 = (char *)(in_ECX + 0x13d);
  }
  else {
    puVar13 = (uint *)0x5;
    iVar4 = recovered_2019320((char *)(in_ECX + 0x178),str_020cb400,5);
    if (iVar4 != 0) {
      pcVar10 = str_020c5405;
      if (*pcVar7 != '\0') {
        pcVar10 = pcVar7;
      }
      goto LAB_02070417;
    }
    pcVar10 = (char *)(in_ECX + 0x17d);
  }
  local_14 = str_020c5405;
  if (*(char *)(in_ECX + 0x138) != '\0') {
    local_14 = pcVar7;
  }
  bVar8 = *(byte *)(in_ECX + 0x45);
  local_18 = in_EDX;
  if (bVar8 == 0) {
    local_ec = (char *)((uint)local_ec & 0xffffff00);
    recovered_206f110(in_ECX,(char *)&local_ec,1);
    bVar8 = *(byte *)(in_ECX + 0x45);
  }
  pcVar7 = *(char **)(in_ECX + 0x40);
  if ((bVar8 & pcVar7 == (char *)0x0) == 0) {
    pcVar12 = str_020cb459;
    if (*(char *)(in_ECX + 0x6d8) != '\0') {
      pcVar12 = (char *)(in_ECX + 0x6d8);
    }
    pcVar10 = str_020cb42a;
    goto LAB_020705a2;
  }
  iVar4 = recovered_20022a0(pcVar10,&DAT_020cb465);
  uVar11 = (undefined3)((uint)pcVar10 >> 8);
  if (iVar4 == 0) {
    recovered_2001e00(&local_ec,0,0xa8);
    local_1c = recovered_20081a0();
    recovered_200afa0(1000);
    uVar6 = recovered_20081a0();
    uVar9 = recovered_2070b80((uint *)&local_ec);
    uVar5 = CONCAT31(uVar11,local_88 != 0 && uVar9 != 0);
    if (local_88 != 0 && uVar9 != 0) {
      pf_varargs_202ecc0__4__4__4__4__4_
                (local_18,param_3,str_020cb487,(uint)local_14,local_88,local_1c,uVar6,
                 (uint)&local_e8);
      return uVar5;
    }
    pcVar10 = str_020cb469;
LAB_02070aa9:
    pcVar12 = local_18;
LAB_02070aaf:
    pf_varargs_202ecc0__4_(pcVar12,param_3,pcVar10,(uint)local_14);
    return uVar5;
  }
  iVar4 = recovered_20022a0(pcVar10,str_020cb4c4);
  if (iVar4 != 0) {
    iVar4 = recovered_20022a0(pcVar10,str_020cb54c);
    if (iVar4 == 0) {
      uVar9 = 0x34;
      recovered_2001e00(&local_ec,0,0x34);
      uVar6 = recovered_2070eb0((uint *)&local_ec);
      uVar5 = CONCAT31(uVar11,(local_e0 != (uint *)0x0 && local_d8 != 0) &&
                              (local_dc != 0 && uVar6 != 0));
      if ((local_e0 == (uint *)0x0 || local_d8 == 0) || (local_dc == 0 || uVar6 == 0)) {
        pcVar10 = str_020cb555;
        goto LAB_02070aa9;
      }
      pcVar7 = str_020cb576;
      pcVar10 = local_ec;
    }
    else {
      iVar4 = recovered_20022a0(pcVar10,str_020cb5c1);
      if (iVar4 == 0) {
        uVar9 = 0x20;
        recovered_2001e00(&local_110,0,0x20);
        uVar6 = recovered_2070f60(&local_110);
        if (uVar6 == 0) {
          recovered_2001e00(&local_ec,0,0xbc);
          bVar3 = recovered_2070fd0(&local_ec);
          pcVar12 = local_18;
          if (CONCAT31(extraout_var_00,bVar3) != 0) {
            recovered_202ecc0(local_18,param_3,str_020cb6a4,local_14,local_c4,local_b8,local_bc,
                              local_a4,local_9c,local_b0,local_a0,local_e8,local_54,local_50,
                              local_4c,local_48,local_44,local_40,local_3c,local_38,local_34,
                              local_68,local_64,local_60,local_5c,local_58,local_98,local_94,
                              local_90,local_8c,local_88,local_84,local_80,local_7c,local_78,
                              local_74,local_70,local_6c);
            goto LAB_02070427;
          }
          uVar5 = recovered_2071480(0x1052,&local_30);
          if ((char)uVar5 == '\0') {
            pcVar10 = str_020cb617;
            goto LAB_02070aaf;
          }
          local_dc = (uint)local_30;
          local_d8 = (uint)local_2f;
          local_d4 = (uint)local_2e;
          local_e0 = (uint *)(uint)local_2c;
          local_e8 = (uint)local_2a;
          pcVar10 = (char *)(uint)local_28;
          uVar9 = (uint)local_27;
          in_stack_fffffee0 = (uint)local_26;
          pcVar7 = str_020cb639;
          local_f0 = local_e0;
          local_24 = local_d4;
          local_20 = local_d8;
          local_1c = local_dc;
          goto LAB_020709e2;
        }
        pcVar7 = str_020cb5c9;
        uVar6 = local_110;
LAB_020707d1:
        pf_varargs_202ecc0__4__4__4__4__4__4__4__4__4_
                  (local_18,param_3,pcVar7,(uint)local_14,uVar6,local_10c,local_108,local_104,
                   local_f8,(uint)local_f4,uVar9,in_stack_fffffee0);
LAB_02070427:
        return CONCAT31((int3)((uint)pcVar10 >> 8),1);
      }
      iVar4 = recovered_20022a0(pcVar10,str_020cb850);
      if (iVar4 == 0) {
        uVar5 = recovered_2071590(2,-1,(undefined1 *)&local_ec);
        if ((char)uVar5 == '\0') {
          pcVar10 = str_020cb858;
          goto LAB_02070aa9;
        }
      }
      else {
        iVar4 = recovered_20022a0(pcVar10,str_020cb879);
        if (iVar4 == 0) {
          uVar5 = recovered_2071590(4,-1,(undefined1 *)&local_ec);
          if ((char)uVar5 == '\0') {
            pcVar10 = str_020cb87f;
            goto LAB_02070aa9;
          }
        }
        else {
          iVar4 = recovered_20022a0(pcVar10,&DAT_020cb89e);
          if (iVar4 == 0) {
            uVar5 = recovered_2071590(0xc,3,(undefined1 *)&local_ec);
            if ((char)uVar5 == '\0') {
              pcVar10 = str_020cb8a2;
              goto LAB_02070aa9;
            }
          }
          else {
            iVar4 = recovered_20022a0(pcVar10,&DAT_020cb8bf);
            if (iVar4 != 0) {
              pcVar12 = str_020cb8e7;
              iVar4 = recovered_20022a0(pcVar10,str_020cb8e7);
              if (iVar4 == 0) {
                local_110 = 0;
                puVar13 = &local_110;
                pcVar12 = (char *)0x1;
                uVar6 = recovered_20048a0(0x3fd,1,puVar13);
                if ((char)uVar6 == '\0') {
                  uVar6 = recovered_2071480(0x1003,(undefined1 *)&local_ec);
                  if (((char)uVar6 == '\0') &&
                     (uVar6 = recovered_2071590(7,-1,(undefined1 *)&local_ec), (char)uVar6 == '\0'))
                  {
                    pf_varargs_202ecc0__4_(local_18,param_3,str_020cb958,(uint)local_14);
                    return 0;
                  }
                  local_1c = (uint)local_ec & 0xff;
                  local_10c = (uint)local_ec >> 8 & 0xff;
                  local_108 = (uint)local_ec >> 0x10 & 0xff;
                  local_104 = local_e8 & 0xffff;
                  local_f8 = local_e8 >> 0x10;
                  pcVar10 = (char *)(uint)local_e4;
                  uVar9 = (uint)local_e3;
                  in_stack_fffffee0 = (uint)local_e2;
                  pcVar7 = str_020cb8ee;
                  uVar6 = local_1c;
                  local_f4 = pcVar10;
                  local_20 = local_10c;
                  goto LAB_020707d1;
                }
                pcVar7 = (char *)(local_110 & 0xff);
                format = str_020cb987;
                local_e0 = puVar13;
                local_dc = in_stack_fffffee0;
              }
              else {
                format = str_020cb9bb;
                pcVar7 = pcVar10;
                local_e0 = puVar13;
                local_dc = in_stack_fffffee0;
              }
LAB_020706d4:
              pf_varargs_202ecc0__4__4__4__4__4_
                        (local_18,param_3,format,(uint)local_14,(uint)pcVar7,(uint)pcVar12,
                         (uint)local_e0,local_dc);
              goto LAB_02070427;
            }
            uVar5 = recovered_2071480(0x1005,(undefined1 *)&local_ec);
            if ((char)uVar5 == '\0') {
              pcVar10 = str_020cb8c3;
              goto LAB_02070aa9;
            }
          }
        }
      }
      local_dc = (uint)local_ec & 0xff;
      local_d8 = (uint)local_ec >> 8 & 0xff;
      local_d4 = (uint)local_ec >> 0x10 & 0xff;
      local_e0 = (uint *)(local_e8 & 0xffff);
      local_e8 = local_e8 >> 0x10;
      uVar9 = (uint)local_e3;
      in_stack_fffffee0 = (uint)local_e2;
      pcVar7 = str_020cb9e9;
      pcVar10 = (char *)(uint)local_e4;
      local_24 = local_d4;
      local_20 = local_d8;
      local_1c = local_dc;
    }
    pcVar12 = local_18;
LAB_020709e2:
    pf_varargs_202ecc0__4__4__4__4__4__4__4__4__4_
              (pcVar12,param_3,pcVar7,(uint)local_14,local_dc,local_d8,local_d4,(uint)local_e0,
               local_e8,(uint)pcVar10,uVar9,in_stack_fffffee0);
    return uVar5;
  }
  cVar1 = DAT_021408ea;
  if (cVar1 == '\0') {
    pcVar7 = (char *)0x0;
    uVar2 = recovered_202a5c0();
    if (uVar2 != '\0') goto LAB_0207064e;
  }
  else {
LAB_0207064e:
    pcVar7 = (char *)DAT_021408ec;
  }
  recovered_2001e00(&local_ec,0,0x38);
  pcVar10 = (char *)0x0;
  do {
    pcVar12 = (char *)&local_ec;
    uVar6 = recovered_2070ce0((int)pcVar10,(uint *)&local_ec);
    if (((uVar6 != 0) && (local_dc - 1 < 0x1000)) && (local_e0 != (uint *)0x0)) {
      pcVar12 = (char *)0x0;
      uVar2 = recovered_2070df0((int)local_ec,0,0x223b72c,1);
      if (CONCAT31(extraout_var,uVar2) != 0) {
        format = str_020cb4f4;
        pcVar12 = local_ec;
        goto LAB_020706d4;
      }
      break;
    }
    pcVar10 = pcVar10 + 1;
  } while (pcVar10 != (char *)0x40);
  pcVar10 = str_020cb4cc;
LAB_020705a2:
  pf_varargs_202ecc0__4__4__4_(local_18,param_3,pcVar10,(uint)local_14,(uint)pcVar7,(uint)pcVar12);
  return 0;
}
#undef DAT_020cb465
#undef DAT_020cb89e
#undef DAT_020cb8bf
#undef DAT_021408ea
#undef DAT_021408ec
#undef str_020c5405
#undef str_020cb400
#undef str_020cb406
#undef str_020cb42a
#undef str_020cb459
#undef str_020cb469
#undef str_020cb487
#undef str_020cb4c4
#undef str_020cb4cc
#undef str_020cb4f4
#undef str_020cb54c
#undef str_020cb555
#undef str_020cb576
#undef str_020cb5c1
#undef str_020cb5c9
#undef str_020cb617
#undef str_020cb639
#undef str_020cb6a4
#undef str_020cb850
#undef str_020cb858
#undef str_020cb879
#undef str_020cb87f
#undef str_020cb8a2
#undef str_020cb8c3
#undef str_020cb8e7
#undef str_020cb8ee
#undef str_020cb958
#undef str_020cb987
#undef str_020cb9bb
#undef str_020cb9e9
#undef in_stack_fffffee0
#undef format
#undef local_110
#undef local_10c
#undef local_108
#undef local_104
#undef local_f8
#undef local_f4
#undef local_f0
#undef local_ec
#undef local_e8
#undef local_e4
#undef local_e3
#undef local_e2
#undef local_e0
#undef local_dc
#undef local_d8
#undef local_d4
#undef local_c4
#undef local_bc
#undef local_b8
#undef local_b0
#undef local_a4
#undef local_a0
#undef local_9c
#undef local_98
#undef local_94
#undef local_90
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_7c
#undef local_78
#undef local_74
#undef local_70
#undef local_6c
#undef local_68
#undef local_64
#undef local_60
#undef local_5c
#undef local_58
#undef local_54
#undef local_50
#undef local_4c
#undef local_48
#undef local_44
#undef local_40
#undef local_3c
#undef local_38
#undef local_34
#undef local_30
#undef local_2f
#undef local_2e
#undef local_2c
#undef local_2a
#undef local_28
#undef local_27
#undef local_26
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
