/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define DAT_020cbda7 (*(uint8_t *)(0x20cbda7U))
#define DAT_020cbdaa (*(uint8_t *)(0x20cbdaaU))
#define DAT_020cc02b (*(uint8_t *)(0x20cc02bU))
#define DAT_021408ea (*(uint8_t volatile *)(0x21408eaU))
#define DAT_021408ec (*(uint32_t volatile *)(0x21408ecU))
#define str_020ca47d (*(char (*)[1])(0x20ca47dU))
#define str_020cbd7d (*(char (*)[1])(0x20cbd7dU))
#define str_020cbdae (*(char (*)[1])(0x20cbdaeU))
#define str_020cbdb7 (*(char (*)[1])(0x20cbdb7U))
#define str_020cbde1 (*(char (*)[1])(0x20cbde1U))
#define str_020cbe1b (*(char (*)[1])(0x20cbe1bU))
#define str_020cbe27 (*(char (*)[1])(0x20cbe27U))
#define str_020cbe54 (*(char (*)[1])(0x20cbe54U))
#define str_020cbe86 (*(char (*)[1])(0x20cbe86U))
#define str_020cbe94 (*(char (*)[1])(0x20cbe94U))
#define str_020cbea1 (*(char (*)[1])(0x20cbea1U))
#define str_020cbed2 (*(char (*)[1])(0x20cbed2U))
#define str_020cbefd (*(char (*)[1])(0x20cbefdU))
#define str_020cbf44 (*(char (*)[1])(0x20cbf44U))
#define str_020cbf50 (*(char (*)[1])(0x20cbf50U))
#define str_020cbf8e (*(char (*)[1])(0x20cbf8eU))
#define str_020cbfbd (*(char (*)[1])(0x20cbfbdU))
#define str_020cbfc6 (*(char (*)[1])(0x20cbfc6U))
#define str_020cc00b (*(char (*)[1])(0x20cc00bU))
#define str_020cc030 (*(char (*)[1])(0x20cc030U))
#define str_020cc038 (*(char (*)[1])(0x20cc038U))
#define str_020cc066 (*(char (*)[1])(0x20cc066U))
#define str_020cc085 (*(char (*)[1])(0x20cc085U))
#define str_020cc08f (*(char (*)[1])(0x20cc08fU))
#define str_020cc0c8 (*(char (*)[1])(0x20cc0c8U))
#define str_020cc0e9 (*(char (*)[1])(0x20cc0e9U))
#define local_4cc (*(uint *)(frame + 36))
#define local_4c8 (*(uint (*)[2])(frame + 40))
#define local_4c0 (*(uint *)(frame + 48))
#define local_4bc (*(uint * *)(frame + 52))
#define local_4b8 (*(uint *)(frame + 56))
#define local_4b4 (*(uint *)(frame + 60))
#define local_468 (*(uint *)(frame + 136))
#define local_434 (*(uint *)(frame + 188))
#define local_430 (*(uint *)(frame + 192))
#define local_42c (*(uint *)(frame + 196))
#define local_428 (*(uint *)(frame + 200))
#define local_cc (*(byte (*)[64])(frame + 1060))
#define local_8c (*(uint * *)(frame + 1124))
#define local_88 (*(uint *)(frame + 1128))
#define local_84 (*(uint *)(frame + 1132))
#define local_80 (*(uint *)(frame + 1136))
#define local_78 (*(uint *)(frame + 1144))
#define local_6c (*(uint *)(frame + 1156))
#define local_68 (*(uint *)(frame + 1160))
#define local_64 (*(undefined1 (*)[56])(frame + 1164))
#define local_2c (*(uint *)(frame + 1220))
#define local_28 (*(uint *)(frame + 1224))
#define local_24 (*(uint *)(frame + 1228))
#define local_20 (*(char * *)(frame + 1232))
#define local_1c (*(uint *)(frame + 1236))
#define local_18 (*(uint *)(frame + 1240))
#define local_14 (*(byte * *)(frame + 1244))
#define vararg7 (*(undefined1 * *)(frame + 28))


undefined4 recovered_206f920(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[1296] __attribute__((aligned(16))) = {0};

  char cVar1;
  uchar uVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  byte *pbVar7;
  byte *pbVar8;
  uint uVar9;
  byte bVar10;
  int iVar11;
  char *pcVar12;

  pbVar7 = in_ECX;
  local_14 = in_ECX;
  if (in_ECX != (byte *)0x0) {
    do {
      do {
        pbVar8 = pbVar7;
        pbVar7 = pbVar8 + 1;
        bVar10 = *pbVar8;
        uVar4 = (uint)bVar10;
      } while (uVar4 - 9 < 5);
    } while (uVar4 == 0x20);
    local_cc[0] = 0;
    local_14 = in_ECX;
    if (uVar4 != 0) {
      if ((uVar4 == 0x22) || (uVar4 == 0x27)) {
        bVar10 = *pbVar7;
        pbVar8 = pbVar7;
      }
      else {
        uVar4 = 0;
      }
      local_20 = in_EDX;
      if (bVar10 == 0) {
        uVar9 = 0;
      }
      else {
        pbVar8 = pbVar8 + 1;
        uVar9 = 0;
        do {
          if (uVar4 == 0) {
            if ((bVar10 - 9 < 0x18) &&
               (in_EDX = local_20, (0x80001fU >> (bVar10 - 9 & 0x1f) & 1) != 0)) break;
          }
          else if (uVar4 == (int)(char)bVar10) goto LAB_0206f9e8;
          if (uVar9 + 1 < 0x40) {
            local_cc[uVar9] = bVar10;
            uVar9 = uVar9 + 1;
          }
          bVar10 = *pbVar8;
          pbVar8 = pbVar8 + 1;
        } while (bVar10 != 0);
        pbVar8 = pbVar8 + -1;
      }
LAB_0206f9e8:
      local_cc[uVar9] = 0;
      for (; ((uint)(*pbVar8) - 9 < 5 || (*pbVar8 == 0x20)); pbVar8 = pbVar8 + 1) {
      }
      local_14 = pbVar8;
      if (uVar9 != 0) {
        iVar5 = recovered_20022a0((char *)local_cc,str_020ca47d);
        if (iVar5 == 0) {
          uVar4 = recovered_20081a0();
LAB_0206fbba:
          pcVar12 = &DAT_020cbda7;
LAB_0206fbbf:
        }
        else {
          iVar5 = recovered_20022a0((char *)local_cc,&DAT_020cbdaa);
          if (iVar5 == 0) {
            pbVar7 = local_14;
            if (local_14 == (byte *)0x0) {
              pbVar7 = &DAT_020c5084;
            }
            else {
              for (; ((uint)(*pbVar7) - 9 < 5 || (*pbVar7 == 0x20)); pbVar7 = pbVar7 + 1) {
              }
            }
            uVar4 = 0;
            while( true ) {
              do {
                pbVar8 = pbVar7 + 1;
                bVar10 = *pbVar7;
                pbVar7 = pbVar8;
              } while (bVar10 == 0xd);
              if (bVar10 == 0) break;
              if (bVar10 == 10) {
                recovered_20a11d0((uchar *)&local_4cc,uVar4,'\x01','\x01');
                uVar4 = 0;
              }
              else if (uVar4 + 1 < 0x400) {
                *(byte *)((int)local_4c8 + (uVar4 - 4)) = bVar10;
                uVar4 = uVar4 + 1;
              }
            }
            recovered_20a11d0((uchar *)&local_4cc,uVar4,'\x01','\x01');
            return 1;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cbdae);
          if (iVar5 == 0) {
            vararg7 = (undefined1 *)0xa8;
            uVar9 = 0;
            recovered_2001e00(&local_4cc,0,0xa8);
            uVar4 = recovered_2070b80(&local_4cc);
            if (uVar4 != 0) {
              local_8c = local_4c8;
              pcVar12 = str_020cbde1;
              local_88 = local_468;
              local_84 = local_430;
              local_80 = local_434;
              local_6c = local_42c;
              local_68 = local_428;
              local_78 = uVar9;
              goto LAB_0206fd12;
            }
            if (param_3 == 0 || in_EDX == (char *)0x0) {
              return 0;
            }
            if ((*in_EDX != '\0') && (uVar6 = recovered_2002270(in_EDX), uVar6 + 1 < param_3)) {
              (in_EDX + uVar6)[0] = '\n';
              (in_EDX + uVar6)[1] = '\0';
            }
            uVar6 = recovered_2002270(in_EDX);
            if (param_3 <= uVar6 + 1) {
              return 0;
            }
            pcVar12 = in_EDX + uVar6;
            cVar1 = 'f';
            iVar5 = 0;
            do {
              pcVar12[iVar5] = cVar1;
              cVar1 = str_020cbdb7[iVar5 + 1];
              iVar11 = iVar5 + 1;
              if (cVar1 == '\0') break;
              uVar4 = iVar5 + uVar6 + 2;
              iVar5 = iVar11;
            } while (uVar4 < param_3);
            goto LAB_0206fba9;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cbe1b);
          if (iVar5 == 0) {
            vararg7 = (undefined1 *)0x34;
            uVar9 = 0;
            recovered_2001e00(&local_4cc,0,0x34);
            uVar4 = recovered_2070eb0(&local_4cc);
            if (uVar4 == 0) {
              pcVar12 = str_020cbe27;
              goto LAB_0207021a;
            }
            pcVar12 = str_020cbe54;
            local_8c = local_4bc;
            local_88 = local_4b8;
            local_84 = local_4b4;
            local_80 = local_4c0;
            local_6c = local_4c8[0];
            local_68 = local_4cc;
            local_78 = uVar9;
LAB_0206fd12:
            pf_varargs_202ecc0__4__4__4__4__4__4__4__4_
                      (in_EDX,param_3,pcVar12,(uint)local_8c,local_88,local_84,local_80,local_6c,
                       local_68,local_78,(uint)vararg7);
            return 1;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cbe86);
          if (iVar5 == 0) {
            cVar1 = DAT_021408ea;
            if (cVar1 == '\0') {
              uVar4 = 0;
              uVar2 = recovered_202a5c0();
              if (uVar2 == '\0') goto LAB_0206fbba;
            }
            uVar4 = DAT_021408ec;
            goto LAB_0206fbba;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cbe94);
          if (iVar5 == 0) {
            local_18 = 0;
            bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1);
            if ((!bVar3) ||
               (uVar4 = recovered_206e6c0((uint)&local_4cc,&local_18), (char)uVar4 == '\0')) {
              pcVar12 = str_020cbea1;
            }
            else {
              recovered_2001e00(&local_8c,0,0x38);
              uVar4 = recovered_2070ce0(local_18,(uint *)&local_8c);
              if (uVar4 != 0) {
                vararg7 = local_64;
                pcVar12 = str_020cbefd;
                goto LAB_0206fd12;
              }
              pcVar12 = str_020cbed2;
            }
LAB_0207021a:
            recovered_202dd30(in_EDX,param_3,pcVar12);
            return 0;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cbf44);
          if (iVar5 == 0) {
            bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1);
            pcVar12 = str_020cbf50;
            if ((bVar3) &&
               (bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_8c,0x60), bVar3)) {
              pbVar7 = local_14;
              if (local_14 == (byte *)0x0) {
                pbVar7 = &DAT_020c5084;
              }
              else {
                for (; ((uint)(*pbVar7) - 9 < 5 || (*pbVar7 == 0x20)); pbVar7 = pbVar7 + 1) {
                }
              }
              uVar4 = recovered_20717b0((char *)&local_4cc,(int)&local_8c,(int)pbVar7);
              if (uVar4 != 0) {
                return 1;
              }
              pcVar12 = str_020cbf8e;
            }
            goto LAB_0207021a;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cbfbd);
          if (iVar5 == 0) {
            local_8c = (uint *)0x0;
            local_18 = 0;
            local_1c = 0;
            local_2c = 0;
            local_28 = 0;
            local_24 = 0;
            bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1);
            if ((((((!bVar3) ||
                   (uVar4 = recovered_206e6c0((uint)&local_4cc,(uint *)&local_8c),
                   (char)uVar4 == '\0')) ||
                  (bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1), !bVar3)) ||
                 ((uVar4 = recovered_206e6c0((uint)&local_4cc,&local_18), (char)uVar4 == '\0' ||
                  (bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1), !bVar3)))) ||
                ((uVar4 = recovered_206e6c0((uint)&local_4cc,&local_1c), (char)uVar4 == '\0' ||
                 ((bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1), !bVar3 ||
                  (uVar4 = recovered_206e6c0((uint)&local_4cc,&local_2c), (char)uVar4 == '\0'))))))
               || ((bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1), !bVar3 ||
                   (uVar4 = recovered_206e6c0((uint)&local_4cc,&local_28), (char)uVar4 == '\0')))) {
              pcVar12 = str_020cbfc6;
              goto LAB_0207021a;
            }
            uVar4 = recovered_2005080((uchar)local_8c,(uchar)local_18,(uchar)local_1c,
                                      (ushort)local_2c,local_28,&local_24);
            in_EDX = local_20;
            if ((char)uVar4 == '\0') {
              pcVar12 = str_020cc00b;
              goto LAB_0207021a;
            }
            pcVar12 = &DAT_020cc02b;
            uVar4 = local_24;
            goto LAB_0206fbc3;
          }
          iVar5 = recovered_20022a0((char *)local_cc,str_020cc030);
          if (iVar5 != 0) {
            iVar5 = recovered_20022a0((char *)local_cc,str_020cc085);
            if (iVar5 != 0) {
              pf_varargs_202ecc0__4_(in_EDX,param_3,str_020cc0e9,(uint)local_cc);
              return 0;
            }
            local_8c = (uint *)0x0;
            local_18 = 0;
            local_1c = 0;
            bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1);
            if ((((!bVar3) ||
                 (uVar4 = recovered_206e6c0((uint)&local_4cc,(uint *)&local_8c), (char)uVar4 == '\0'
                 )) || (bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1), !bVar3))
               || (uVar4 = recovered_206e6c0((uint)&local_4cc,&local_18), (char)uVar4 == '\0')) {
              pcVar12 = str_020cc08f;
              goto LAB_0207021a;
            }
            uVar4 = recovered_2006f90(local_8c,local_18,&local_1c);
            if ((char)uVar4 == '\0') {
              pcVar12 = str_020cc0c8;
              goto LAB_0207021a;
            }
            pcVar12 = &DAT_020cc02b;
            uVar4 = local_1c;
            goto LAB_0206fbbf;
          }
          local_8c = (uint *)0x0;
          local_18 = 0;
          local_1c = 0;
          bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1);
          if (((!bVar3) ||
              (uVar4 = recovered_206e6c0((uint)&local_4cc,(uint *)&local_8c), (char)uVar4 == '\0'))
             || ((bVar3 = recovered_202ddc0(&local_14,(undefined1 *)&local_4cc,0xf1), !bVar3 ||
                 (uVar4 = recovered_206e6c0((uint)&local_4cc,&local_18), (char)uVar4 == '\0')))) {
            pcVar12 = str_020cc038;
            goto LAB_0207021a;
          }
          uVar4 = recovered_20048a0((ushort)local_8c,local_18,&local_1c);
          if ((char)uVar4 == '\0') {
            pcVar12 = str_020cc066;
            goto LAB_0207021a;
          }
          pcVar12 = &DAT_020cc02b;
          uVar4 = local_1c;
        }
LAB_0206fbc3:
        pf_varargs_202ecc0__4_(in_EDX,param_3,pcVar12,uVar4);
        return 1;
      }
    }
  }
  if (param_3 == 0 || in_EDX == (char *)0x0) {
    return 0;
  }
  if ((*in_EDX != '\0') && (uVar6 = recovered_2002270(in_EDX), uVar6 + 1 < param_3)) {
    (in_EDX + uVar6)[0] = '\n';
    (in_EDX + uVar6)[1] = '\0';
  }
  uVar6 = recovered_2002270(in_EDX);
  if (param_3 <= uVar6 + 1) {
    return 0;
  }
  pcVar12 = in_EDX + uVar6;
  cVar1 = 'u';
  iVar5 = 0;
  do {
    pcVar12[iVar5] = cVar1;
    cVar1 = str_020cbd7d[iVar5 + 1];
    iVar11 = iVar5 + 1;
    if (cVar1 == '\0') break;
    uVar4 = iVar5 + uVar6 + 2;
    iVar5 = iVar11;
  } while (uVar4 < param_3);
LAB_0206fba9:
  pcVar12[iVar11] = '\0';
  return 0;
}
#undef DAT_020c5084
#undef DAT_020cbda7
#undef DAT_020cbdaa
#undef DAT_020cc02b
#undef DAT_021408ea
#undef DAT_021408ec
#undef str_020ca47d
#undef str_020cbd7d
#undef str_020cbdae
#undef str_020cbdb7
#undef str_020cbde1
#undef str_020cbe1b
#undef str_020cbe27
#undef str_020cbe54
#undef str_020cbe86
#undef str_020cbe94
#undef str_020cbea1
#undef str_020cbed2
#undef str_020cbefd
#undef str_020cbf44
#undef str_020cbf50
#undef str_020cbf8e
#undef str_020cbfbd
#undef str_020cbfc6
#undef str_020cc00b
#undef str_020cc030
#undef str_020cc038
#undef str_020cc066
#undef str_020cc085
#undef str_020cc08f
#undef str_020cc0c8
#undef str_020cc0e9
#undef local_4cc
#undef local_4c8
#undef local_4c0
#undef local_4bc
#undef local_4b8
#undef local_4b4
#undef local_468
#undef local_434
#undef local_430
#undef local_42c
#undef local_428
#undef local_cc
#undef local_8c
#undef local_88
#undef local_84
#undef local_80
#undef local_78
#undef local_6c
#undef local_68
#undef local_64
#undef local_2c
#undef local_28
#undef local_24
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef vararg7
