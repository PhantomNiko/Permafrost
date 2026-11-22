/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020c69e5 (*(uint8_t *)(0x20c69e5U))
#define DAT_02238ef0 (*(uint32_t volatile *)(0x2238ef0U))
#define DAT_0223b71c (*(uint8_t volatile *)(0x223b71cU))
#define str_020c5bb8 (*(char (*)[1])(0x20c5bb8U))
#define str_020c70d7 (*(char (*)[1])(0x20c70d7U))
#define str_020cba4c (*(char (*)[1])(0x20cba4cU))
#define str_020cba76 (*(char (*)[1])(0x20cba76U))
#define str_020cba9d (*(char (*)[1])(0x20cba9dU))
#define str_020cbab5 (*(char (*)[1])(0x20cbab5U))
#define str_020cbb00 (*(char (*)[1])(0x20cbb00U))
#define str_020cbb4e (*(char (*)[1])(0x20cbb4eU))
#define str_020cbb78 (*(char (*)[1])(0x20cbb78U))
#define str_020cbba5 (*(char (*)[1])(0x20cbba5U))
#define str_020cbbaf (*(char (*)[1])(0x20cbbafU))
#define str_020cbbc7 (*(char (*)[1])(0x20cbbc7U))
#define str_020cbc0a (*(char (*)[1])(0x20cbc0aU))
#define str_020cbc33 (*(char (*)[1])(0x20cbc33U))
#define str_020cbc5c (*(char (*)[1])(0x20cbc5cU))
#define str_020cbc7b (*(char (*)[1])(0x20cbc7bU))
#define local_cc (*(undefined4 *)(frame + 20))
#define local_c8 (*(undefined4 *)(frame + 24))
#define local_c4 (*(undefined4 *)(frame + 28))
#define local_c0 (*(code * *)(frame + 32))
#define local_bc (*(code * *)(frame + 36))
#define local_b8 (*(code * *)(frame + 40))
#define local_b4 (*(code * *)(frame + 44))
#define local_b0 (*(code * *)(frame + 48))
#define local_ac (*(code * *)(frame + 52))
#define local_a8 (*(code * *)(frame + 56))
#define local_a4 (*(code * *)(frame + 60))
#define local_a0 (*(code * *)(frame + 64))
#define local_9c (*(code * *)(frame + 68))
#define local_98 (*(code * *)(frame + 72))
#define local_94 (*(code * *)(frame + 76))
#define local_90 (*(code * *)(frame + 80))
#define local_8c (*(code * *)(frame + 84))
#define local_88 (*(code * *)(frame + 88))
#define local_84 (*(code * *)(frame + 92))
#define local_80 (*(code * *)(frame + 96))
#define local_7c (*(code * *)(frame + 100))
#define local_78 (*(code * *)(frame + 104))
#define local_74 (*(code * *)(frame + 108))
#define local_70 (*(code * *)(frame + 112))
#define local_6c (*(code * *)(frame + 116))
#define local_68 (*(code * *)(frame + 120))
#define local_64 (*(code * *)(frame + 124))
#define local_60 (*(code * *)(frame + 128))
#define local_5c (*(code * *)(frame + 132))
#define local_58 (*(code * *)(frame + 136))
#define local_54 (*(code * *)(frame + 140))
#define local_50 (*(code * *)(frame + 144))
#define local_4c (*(code * *)(frame + 148))
#define local_48 (*(code * *)(frame + 152))
#define local_44 (*(undefined4 *)(frame + 156))
#define local_40 (*(undefined4 *)(frame + 160))
#define local_3c (*(char * *)(frame + 164))
#define local_38 (*(int *)(frame + 168))
#define local_34 (*(int *)(frame + 172))
#define local_30 (*(int *)(frame + 176))
#define local_2c (*(uint *)(frame + 180))
#define local_28 (*(uint *)(frame + 184))
#define local_24 (*(uint *)(frame + 188))
#define local_20 (*(uint *)(frame + 192))
#define local_1c (*(char * *)(frame + 196))
#define local_18 (*(uint *)(frame + 200))
#define local_14 (*(int *)(frame + 204))


bool recovered_206f110(int in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[256] __attribute__((aligned(16))) = {0};

  uint uVar1;
  code *pcVar2;
  undefined4 uVar3;
  ulong uVar4;
  uint uVar5;
  uint uVar6;
  undefined4 extraout_EAX = 0;
  int iVar7;
  char cVar8;
  char *pcVar9;
  uint uVar10;
  char *pcVar11;
  uint uVar12;
  uint uVar13;
  char *vararg0;
  uint uVar14;
  uint vararg0_00;
  bool bVar15;

  if (in_ECX == 0) {
    if (param_3 != 0 && in_EDX != (char *)0x0) {
      if ((*in_EDX != '\0') && (uVar4 = recovered_2002270(in_EDX), uVar4 + 1 < param_3)) {
        (in_EDX + uVar4)[0] = '\n';
        (in_EDX + uVar4)[1] = '\0';
      }
      uVar4 = recovered_2002270(in_EDX);
      uVar5 = 0;
      if (param_3 <= uVar4 + 1) goto LAB_0206f241;
      cVar8 = 'f';
      do {
        in_EDX[uVar5 + uVar4] = cVar8;
        cVar8 = str_020cba4c[uVar5 + 1];
        uVar14 = uVar5 + 1;
        if (cVar8 == '\0') break;
        uVar12 = uVar5 + uVar4 + 2;
        uVar5 = uVar14;
      } while (uVar12 < param_3);
      in_EDX[uVar14 + uVar4] = '\0';
    }
  }
  else if ((*(char *)(in_ECX + 0x44) == '\x01') && (*(char *)(in_ECX + 0x46) != '\0')) {
    if (*(char *)(in_ECX + 0x45) == '\x01') {
      if (*(char *)(in_ECX + 0x138) == '\0') {
        uVar5 = in_ECX + 0x47;
        uVar14 = in_ECX + 0x48;
        do {
          cVar8 = *(char *)(uVar14 - 1);
          if ((cVar8 == '/') || (cVar8 == '\\')) {
            uVar5 = uVar14;
          }
          else if (cVar8 == '\0') goto LAB_0206f5f7;
          uVar14 = uVar14 + 1;
        } while( true );
      }
      uVar5 = in_ECX + 0x138;
LAB_0206f5f7:
      pf_varargs_202ecc0__4__4_(in_EDX,param_3,str_020cbab5,uVar5,*(uint *)(in_ECX + 0x40));
      iVar7 = *(int *)(in_ECX + 0x40);
LAB_0206f613:
      uVar5 = (uint)(iVar7 == 0);
      goto LAB_0206f241;
    }
    local_14 = in_ECX;
    if (((*(byte *)(in_ECX + 0xc) & 2) != 0) &&
       (*(int *)(in_ECX + 0xba4) != 0 || *(int *)(in_ECX + 0xba8) != 0)) {
      local_1c = in_EDX;
      recovered_2001e00(&local_44,0,0x18);
      recovered_2001e00(&local_cc,0,0x88);
      local_cc = 0x46425457;
      local_c8 = 1000000;
      local_c4 = 0x88;
      local_c0 = recovered_20716e0;
      local_bc = recovered_2071780;
      local_b8 = recovered_20717a0;
      local_b4 = recovered_20717b0;
      local_b0 = recovered_2066890;
      local_ac = recovered_206d920;
      local_a8 = recovered_2070b80;
      local_a4 = recovered_2070eb0;
      local_a0 = recovered_2070cb0;
      local_9c = recovered_2070ce0;
      local_98 = recovered_2070df0;
      local_94 = recovered_2071950;
      local_90 = recovered_20716b0;
      local_8c = recovered_2071a40;
      local_88 = recovered_206d570;
      local_84 = recovered_206d5b0;
      local_80 = recovered_206d540;
      local_7c = recovered_2071a70;
      local_78 = recovered_2071aa0;
      local_74 = recovered_206d5f0;
      local_70 = recovered_206d620;
      local_6c = recovered_2071ad0;
      local_68 = recovered_2071ae0;
      local_64 = recovered_2070f60;
      local_60 = recovered_2070fd0;
      local_5c = recovered_2071bb0;
      local_58 = recovered_2071c10;
      local_54 = recovered_2071d90;
      local_50 = recovered_2071f10;
      local_4c = recovered_2071f30;
      local_48 = recovered_2072110;
      local_44 = 1000000;
      local_40 = *(undefined4 *)(local_14 + 0xc);
      vararg0 = (char *)(local_14 + 0x138);
      local_38 = local_14 + 0x178;
      local_34 = local_14 + 0x198;
      local_30 = local_14 + 0x1f8;
      DAT_02238ef0 = local_14;
      pcVar11 = vararg0;
      if (*(char *)(local_14 + 0x138) == '\0') {
        pcVar11 = (char *)(local_14 + 0x47);
        pcVar9 = (char *)(local_14 + 0x48);
        do {
          cVar8 = pcVar9[-1];
          if ((cVar8 == '/') || (cVar8 == '\\')) {
            pcVar11 = pcVar9;
          }
          else if (cVar8 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while( true );
      }
      local_3c = vararg0;
      pf_varargs_202ce90__4__8_(str_020cbc0a,(uint)pcVar11,*(ulonglong *)(local_14 + 0xba4));
      uVar14 = (**(code **)(local_14 + 0xba4))(&local_cc,&local_44,1,0);
      iVar7 = local_14;
      pcVar11 = vararg0;
      if (*(char *)(local_14 + 0x138) == '\0') {
        pcVar11 = (char *)(local_14 + 0x47);
        pcVar9 = (char *)(local_14 + 0x48);
        do {
          cVar8 = pcVar9[-1];
          if ((cVar8 == '/') || (cVar8 == '\\')) {
            pcVar11 = pcVar9;
          }
          else if (cVar8 == '\0') break;
          pcVar9 = pcVar9 + 1;
        } while( true );
      }
      pf_varargs_202ce90__4__4_(str_020cbc33,(uint)pcVar11,uVar14);
      DAT_02238ef0 = 0;
      *(undefined1 *)(iVar7 + 0x45) = 1;
      *(uint *)(iVar7 + 0x40) = uVar14;
      pcVar11 = str_020c5bb8;
      if (*(char *)(iVar7 + 0x138) != '\0') {
        pcVar11 = vararg0;
      }
      pf_varargs_20044f0__4__4_((char *)(iVar7 + 0x6d8),0xc0,str_020cbc5c,(uint)pcVar11,uVar14);
      iVar7 = local_14;
      recovered_2062590(local_14);
      if (*(char *)(iVar7 + 0x138) == '\0') {
        vararg0 = (char *)(iVar7 + 0x47);
        pcVar11 = (char *)(iVar7 + 0x48);
        do {
          cVar8 = pcVar11[-1];
          if ((cVar8 == '/') || (cVar8 == '\\')) {
            vararg0 = pcVar11;
          }
          else if (cVar8 == '\0') break;
          pcVar11 = pcVar11 + 1;
        } while( true );
      }
      uVar5 = (uint)(uVar14 == 0);
      pcVar11 = &DAT_020c69e5;
      if (uVar14 != 0) {
        pcVar11 = str_020c70d7;
      }
      pf_varargs_202ecc0__4__4__4_(local_1c,param_3,str_020cbc7b,(uint)vararg0,uVar14,(uint)pcVar11)
      ;
      goto LAB_0206f241;
    }
    uVar5 = *(uint *)(in_ECX + 0xbac);
    uVar14 = *(uint *)(in_ECX + 0xbb0);
    if (uVar5 == 0 && uVar14 == 0) {
LAB_0206f589:
      pf_varargs_20044f0__4_((char *)(in_ECX + 0x6d8),0xc0,&DAT_020c5119,0x20cbae2);
      recovered_2062590(local_14);
      if (*(char *)(local_14 + 0x138) == '\0') {
        uVar5 = local_14 + 0x47;
        uVar14 = local_14 + 0x48;
        do {
          cVar8 = *(char *)(uVar14 - 1);
          if ((cVar8 == '/') || (cVar8 == '\\')) {
            uVar5 = uVar14;
          }
          else if (cVar8 == '\0') goto LAB_0206f6d5;
          uVar14 = uVar14 + 1;
        } while( true );
      }
      uVar5 = local_14 + 0x138;
LAB_0206f6d5:
      pcVar11 = str_020cbb00;
    }
    else {
      local_18 = *(uint *)(in_ECX + 0xbb4);
      local_20 = *(uint *)(in_ECX + 3000);
      local_1c = (char *)0x0;
      local_24 = uVar5;
      if (local_20 == 0 && (uint)(7 < local_18) <= -local_20) goto LAB_0206f589;
      local_2c = *(uint *)(in_ECX + 0xb9c);
      local_28 = *(uint *)(in_ECX + 0xba0);
      if (((local_20 == 0 && (uint)(local_28 < local_18) <= -local_20) &&
           ((uVar5 < local_2c) <= uVar14 && local_2c != 0)) &&
         (uVar14 = uVar14 - (uVar5 < local_2c), uVar12 = -(uint)(local_28 < local_18) - local_20,
         uVar14 <= uVar12 && (uint)(local_28 - local_18 < uVar5 - local_2c) <= uVar12 - uVar14)) {
        DAT_02238ef0 = in_ECX;
        cVar8 = DAT_0223b71c;
        if (cVar8 == '\0') {
          DAT_0223b71c = 1;
        }
        uVar5 = local_18 >> 3;
        uVar14 = local_20 << 0x1d;
        uVar13 = local_20 >> 3;
        local_1c = in_EDX;
        recovered_20668a0();
        vararg0_00 = 0;
        uVar12 = 0;
        local_20 = uVar13;
        local_18 = uVar5 | uVar14;
        do {
          uVar14 = local_18;
          uVar5 = *(uint *)(local_14 + 0xb9c);
          local_24 = uVar12;
          if (uVar5 == 0) {
LAB_0206f7e9:
            pf_varargs_20044f0__4_((char *)(local_14 + 0x6d8),0xc0,str_020cbb78,vararg0_00);
            DAT_02238ef0 = 0;
            recovered_206df80();
            local_18 = CONCAT31((int3)((uint)extraout_EAX >> 8),1);
            goto LAB_0206f88a;
          }
          uVar13 = *(uint *)(*(int *)(local_14 + 0xbac) + vararg0_00 * 8);
          uVar10 = *(uint *)(*(int *)(local_14 + 0xbac) + 4 + vararg0_00 * 8);
          if (((uVar10 < (uVar13 < uVar5)) || (uVar1 = *(uint *)(local_14 + 0xba0), uVar1 < 0x20))
             || (uVar10 = uVar10 - (uVar13 < uVar5), uVar6 = (0x1f < uVar1) - 1,
                uVar6 < uVar10 || uVar6 - uVar10 < (uint)(uVar1 - 0x20 < uVar13 - uVar5)))
          goto LAB_0206f7e9;
          pcVar2 = *(code **)(uVar13 + 0x10);
          if (*(int *)(uVar13 + 0x14) != 0 || pcVar2 != (code *)0x0) {
            uVar3 = *(undefined4 *)(uVar13 + 0x18);
            *(int *)(local_14 + 0x3c) = *(int *)(local_14 + 0x3c) + 1;
            (*pcVar2)(uVar3);
          }
          bVar15 = 0xfffffffe < vararg0_00;
          vararg0_00 = vararg0_00 + 1;
          uVar12 = uVar12 + bVar15;
        } while (uVar12 < local_20 || uVar12 - local_20 < (uint)(vararg0_00 < uVar14));
        DAT_02238ef0 = 0;
        recovered_206df80();
        if (*(char *)(local_14 + 0x45) == '\0') {
          *(undefined1 *)(local_14 + 0x45) = 1;
          *(undefined4 *)(local_14 + 0x40) = 0;
        }
        pcVar11 = (char *)(local_14 + 0x6d8);
        if ((*(char *)(local_14 + 0x6d8) == '\0') ||
           (iVar7 = recovered_2019320(pcVar11,str_020cbba5,9), iVar7 == 0)) {
          pf_varargs_20044f0__4_(pcVar11,0xc0,str_020cbbaf,*(uint *)(local_14 + 0x3c));
        }
        local_18 = 0;
LAB_0206f88a:
        recovered_2062590(local_14);
        if (*(char *)(local_14 + 0x138) == '\0') {
          uVar5 = local_14 + 0x47;
          uVar14 = local_14 + 0x48;
          do {
            cVar8 = *(char *)(uVar14 - 1);
            if ((cVar8 == '/') || (cVar8 == '\\')) {
              uVar5 = uVar14;
            }
            else if (cVar8 == '\0') goto LAB_0206f8cc;
            uVar14 = uVar14 + 1;
          } while( true );
        }
        uVar5 = local_14 + 0x138;
LAB_0206f8cc:
        pcVar11 = &DAT_020c69e5;
        if (*(char *)(local_14 + 0x45) == '\0') {
          pcVar11 = str_020c70d7;
        }
        if (*(uint *)(local_14 + 0x40) != 0) {
          pcVar11 = str_020c70d7;
        }
        pf_varargs_202ecc0__4__4__4__4_
                  (local_1c,param_3,str_020cbbc7,uVar5,*(uint *)(local_14 + 0x3c),
                   *(uint *)(local_14 + 0x40),(uint)pcVar11);
        if ((char)local_18 != '\0') goto LAB_0206f23f;
        iVar7 = *(int *)(local_14 + 0x40);
        goto LAB_0206f613;
      }
      pf_varargs_20044f0__4_((char *)(in_ECX + 0x6d8),0xc0,&DAT_020c5119,0x20cbb2a);
      recovered_2062590(local_14);
      if (*(char *)(local_14 + 0x138) == '\0') {
        uVar5 = local_14 + 0x47;
        uVar14 = local_14 + 0x48;
        do {
          cVar8 = *(char *)(uVar14 - 1);
          if ((cVar8 == '/') || (cVar8 == '\\')) {
            uVar5 = uVar14;
          }
          else if (cVar8 == '\0') goto LAB_0206f705;
          uVar14 = uVar14 + 1;
        } while( true );
      }
      uVar5 = local_14 + 0x138;
LAB_0206f705:
      pcVar11 = str_020cbb4e;
    }
    pf_varargs_202ecc0__4_(in_EDX,param_3,pcVar11,uVar5);
  }
  else {
    if (*(char *)(in_ECX + 0x138) == '\0') {
      uVar5 = in_ECX + 0x47;
      uVar14 = in_ECX + 0x48;
      do {
        cVar8 = *(char *)(uVar14 - 1);
        if ((cVar8 == '/') || (cVar8 == '\\')) {
          uVar5 = uVar14;
        }
        else if (cVar8 == '\0') goto LAB_0206f215;
        uVar14 = uVar14 + 1;
      } while( true );
    }
    uVar5 = in_ECX + 0x138;
LAB_0206f215:
    pcVar11 = str_020cba9d;
    if (*(char *)(in_ECX + 0x6d8) != '\0') {
      pcVar11 = (char *)(in_ECX + 0x6d8);
    }
    pf_varargs_202ecc0__4__4_(in_EDX,param_3,str_020cba76,uVar5,(uint)pcVar11);
  }
LAB_0206f23f:
  uVar5 = 0;
LAB_0206f241:
  return SUB41(uVar5,0);
}
#undef DAT_020c5119
#undef DAT_020c69e5
#undef DAT_02238ef0
#undef DAT_0223b71c
#undef str_020c5bb8
#undef str_020c70d7
#undef str_020cba4c
#undef str_020cba76
#undef str_020cba9d
#undef str_020cbab5
#undef str_020cbb00
#undef str_020cbb4e
#undef str_020cbb78
#undef str_020cbba5
#undef str_020cbbaf
#undef str_020cbbc7
#undef str_020cbc0a
#undef str_020cbc33
#undef str_020cbc5c
#undef str_020cbc7b
#undef local_cc
#undef local_c8
#undef local_c4
#undef local_c0
#undef local_bc
#undef local_b8
#undef local_b4
#undef local_b0
#undef local_ac
#undef local_a8
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
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
