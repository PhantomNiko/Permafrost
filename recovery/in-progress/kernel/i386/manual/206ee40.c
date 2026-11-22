/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020cb3d9 (*(uint8_t *)(0x20cb3d9U))
#define DAT_021ec4ec (*(uint8_t volatile *)(0x21ec4ecU))
#define DAT_02238eec (*(uint32_t volatile *)(0x2238eecU))
#define str_020cb0a3 (*(char (*)[1])(0x20cb0a3U))
#define str_020cb3ab (*(char (*)[1])(0x20cb3abU))
#define str_020cb3dd (*(char (*)[1])(0x20cb3ddU))
#define str_020cb400 (*(char (*)[1])(0x20cb400U))
#define local_10d (*(char (*)[241])(frame + 19))
#define local_1c (*(char * *)(frame + 260))
#define local_18 (*(uint *)(frame + 264))
#define local_14 (*(uint *)(frame + 268))


uint recovered_206ee40(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[320] __attribute__((aligned(16))) = {0};

  byte bVar1;
  int iVar2;
  ulong uVar3;
  uint uVar4;
  char cVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  char *in_ECX_00;

  if (in_ECX != (byte *)0x0) {
    do {
      do {
        pbVar6 = in_ECX;
        in_ECX = pbVar6 + 1;
        uVar8 = (uint)*pbVar6;
      } while (uVar8 - 9 < 5);
    } while (uVar8 == 0x20);
    local_10d[0] = '\0';
    if (uVar8 != 0) {
      if ((uVar8 == 0x22) || (uVar8 == 0x27)) {
        uVar4 = uVar8;
        pbVar6 = in_ECX;
        uVar8 = (uint)*in_ECX;
        if (*in_ECX == 0) goto LAB_0206ef00;
LAB_0206ee95:
        pbVar6 = pbVar6 + 1;
        uVar7 = 0;
        local_1c = in_EDX;
        do {
          if (uVar4 == 0) {
            if ((uVar8 - 9 < 0x18) &&
               (in_EDX = local_1c, (0x80001fU >> (uVar8 - 9 & 0x1f) & 1) != 0)) break;
          }
          else if (uVar4 == (int)(char)uVar8) goto LAB_0206ef02;
          if (uVar7 + 1 < 0xf1) {
            local_10d[uVar7] = (char)uVar8;
            uVar7 = uVar7 + 1;
          }
          bVar1 = *pbVar6;
          uVar8 = (uint)bVar1;
          pbVar6 = pbVar6 + 1;
        } while (bVar1 != 0);
        pbVar6 = pbVar6 + -1;
      }
      else {
        uVar4 = 0;
        if (*pbVar6 != 0) goto LAB_0206ee95;
LAB_0206ef00:
        uVar7 = 0;
      }
LAB_0206ef02:
      local_10d[uVar7] = '\0';
      for (; ((uint)(*pbVar6) - 9U < 5U || (*pbVar6 == 0x20)); pbVar6 = pbVar6 + 1) {
      }
      if (uVar7 != 0) {
        iVar2 = recovered_20022a0(local_10d,&DAT_020cb3d9);
        if (iVar2 == 0) {
          iVar2 = DAT_02238eec;
          if (iVar2 == 0) {
            local_14 = 0;
            local_18 = 0;
          }
          else {
            local_18 = 0;
            in_ECX_00 = &DAT_021ec4ec;
            uVar8 = 0;
            local_14 = 0;
            do {
              if ((*in_ECX_00 == '\x01') &&
                 ((iVar2 = recovered_2019320(in_ECX_00 + 0x138,str_020cb400,5), iVar2 == 0 ||
                  (iVar2 = recovered_2019320(in_ECX_00 + 0x178,str_020cb400,5), iVar2 == 0)))) {
                local_18 = local_18 + 1;
                uVar4 = recovered_20703b0((int)in_ECX_00,in_EDX,param_3);
                local_14 = local_14 + (uVar4 & 0xff);
              }
              uVar8 = uVar8 + 1;
              in_ECX_00 = in_ECX_00 + 0x1328;
              uVar4 = DAT_02238eec;
            } while (uVar8 < uVar4);
          }
          uVar4 = local_14;
          uVar8 = local_18;
          pf_varargs_202ecc0__4__4_(in_EDX,param_3,str_020cb3dd,local_14,local_18);
          uVar8 = (uint)(uVar4 == uVar8 && uVar8 != 0);
        }
        else {
          uVar8 = recovered_206e5a0(local_10d);
          if ((int)uVar8 < 0) {
            pf_varargs_202ecc0__4_(in_EDX,param_3,str_020cb0a3,(uint)local_10d);
            uVar8 = 0;
          }
          else {
            uVar8 = recovered_20703b0((int)(&DAT_021ec4ec + uVar8 * 0x1328),in_EDX,param_3);
            pf_varargs_202ecc0__4__4_(in_EDX,param_3,str_020cb3dd,uVar8 & 0xff,1);
          }
        }
        goto LAB_0206f0f7;
      }
    }
  }
  if (param_3 == 0 || in_EDX == (char *)0x0) {
    uVar8 = 0;
  }
  else {
    if ((*in_EDX != '\0') && (uVar3 = recovered_2002270(in_EDX), uVar3 + 1 < param_3)) {
      (in_EDX + uVar3)[0] = '\n';
      (in_EDX + uVar3)[1] = '\0';
    }
    uVar3 = recovered_2002270(in_EDX);
    uVar8 = 0;
    if (uVar3 + 1 < param_3) {
      cVar5 = 'u';
      do {
        in_EDX[uVar8 + uVar3] = cVar5;
        cVar5 = str_020cb3ab[uVar8 + 1];
        uVar4 = uVar8 + 1;
        if (cVar5 == '\0') break;
        uVar7 = uVar8 + uVar3 + 2;
        uVar8 = uVar4;
      } while (uVar7 < param_3);
      in_EDX[uVar4 + uVar3] = '\0';
      uVar8 = 0;
    }
  }
LAB_0206f0f7:
  return uVar8 & 0xff;
}
#undef DAT_020cb3d9
#undef DAT_021ec4ec
#undef DAT_02238eec
#undef str_020cb0a3
#undef str_020cb3ab
#undef str_020cb3dd
#undef str_020cb400
#undef local_10d
#undef local_1c
#undef local_18
#undef local_14
