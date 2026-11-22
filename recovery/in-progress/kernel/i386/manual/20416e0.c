/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define format (*(char * *)(frame + 28))
#define DAT_020c5119 (*(uint8_t *)(0x20c5119U))
#define DAT_020de4fc (*(uint32_t volatile *)(0x20de4fcU))
#define DAT_0214b000 (*(uint32_t volatile *)(0x214b000U))
#define DAT_02245260 (*(uint8_t volatile *)(0x2245260U))
#define DAT_02245268 (*(uint32_t volatile *)(0x2245268U))
#define DAT_0224526c (*(uint32_t volatile *)(0x224526cU))
#define DAT_02245270 (*(uint8_t volatile *)(0x2245270U))
#define DAT_02245274 (*(uint8_t volatile *)(0x2245274U))
#define DAT_02245278 (*(uint8_t volatile *)(0x2245278U))
#define DAT_0224527c (*(uint8_t volatile *)(0x224527cU))
#define Ram02245270 (*(uint32_t volatile *)(0x2245270U))
#define Ram02245274 (*(uint32_t volatile *)(0x2245274U))
#define Ram02245278 (*(uint32_t volatile *)(0x2245278U))
#define str_020c56ee (*(char (*)[1])(0x20c56eeU))
#define str_020c56fb (*(char (*)[1])(0x20c56fbU))
#define str_020c570e (*(char (*)[1])(0x20c570eU))
#define str_020d6a41 (*(char (*)[1])(0x20d6a41U))
#define str_020d6a54 (*(char (*)[1])(0x20d6a54U))
#define str_020d6a64 (*(char (*)[1])(0x20d6a64U))
#define str_020d6a70 (*(char (*)[1])(0x20d6a70U))
#define str_020d6a98 (*(char (*)[1])(0x20d6a98U))
#define local_a34 (*(ushort (*)[3])(frame + 44))
#define local_a2a (*(uint *)(frame + 54))
#define local_a26 (*(uint *)(frame + 58))
#define local_23e (*(byte (*)[256])(frame + 2082))
#define auStack_a22 (*(ushort (*)[4])(frame + 62))
#define local_13e (*(undefined1 (*)[48])(frame + 2338))
#define abStack_a2e (*(byte (*)[4])(frame + 50))
#define local_10e (*(char (*)[96])(frame + 2386))
#define local_ae (*(char (*)[128])(frame + 2482))
#define auStack_9f2 (*(uint (*)[493])(frame + 110))
#define local_2e (*(char (*)[6])(frame + 2610))
#define local_28 (*(uint *)(frame + 2616))
#define abStack_a1a (*(byte (*)[20])(frame + 70))
#define local_24 (*(uint *)(frame + 2620))
#define auStack_a06 (*(uint (*)[5])(frame + 90))
#define local_20 (*(uint *)(frame + 2624))
#define local_1c (*(uint *)(frame + 2628))
#define local_18 (*(uint *)(frame + 2632))
#define local_14 (*(uint *)(frame + 2636))
#define vararg0 (*(char * *)(frame + 16))
#define local_a44 (*(undefined8 *)(frame + 28))
#define local_a38 (*(ushort *)(frame + 40))
#define local_a36 (*(byte (*)[2])(frame + 42))


undefined4 recovered_20416e0(char *param_1,int param_2,char *param_3,ulong param_4)

{
  unsigned char frame[2688] __attribute__((aligned(16))) = {0};

  uint uVar1;
  bool bVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  undefined4 uVar7;
  char *pcVar8;
  undefined4 uVar9;
  int iVar10;

  local_18 = 0;
  if (param_1 == (char *)0x0) {
    pcVar8 = str_020c56ee;
  }
  else {
    pcVar8 = str_020c56ee;
    if (*param_1 != '\0') {
      pcVar8 = param_1;
    }
  }
  if (param_4 != 0 && param_3 != (char *)0x0) {
    *param_3 = '\0';
  }
  local_ae[0] = '\0';
  recovered_2026f10();
  vararg0 = (char *)0x204173f;
  uVar3 = recovered_2041b30(pcVar8,local_23e);
  if ((char)uVar3 == '\0') {
    pcVar8 = str_020c56fb;
LAB_02041a13:
    pf_varargs_20044f0__4_(local_ae,0x80,pcVar8,(uint)vararg0);
  }
  else {
    uVar3 = recovered_2041bd0(local_ae);
    if (((char)uVar3 != '\0') &&
       ((uVar3 = recovered_2041f60((char *)local_23e,&local_18), (char)uVar3 != '\0' ||
        (uVar3 = recovered_20420f0(local_23e,&local_18,local_ae), (char)uVar3 != '\0')))) {
      uVar5 = local_18;
      if (local_18 == 0) {
        pcVar8 = str_020d6a41;
      }
      else {
        uVar3 = recovered_20a1d50(0x214aff8,local_18,local_2e,local_ae);
        if ((char)uVar3 == '\0') goto LAB_02041a38;
        recovered_2001e00(local_13e,0,0x30);
        local_13e[0] = 0x1b;
        uVar4 = recovered_20081a0();
        local_24 = uVar4 | 0xc000;
        local_28 = uVar5;
        uVar1 = DAT_0214b000;
        bVar2 = recovered_20bcda0(0x214aff8,local_2e,uVar1,uVar5,(ushort)uVar4 | 0xc000,0x7b,
                                  local_13e,0x30);
        pcVar8 = str_020d6a54;
        if (bVar2) {
          uVar5 = recovered_20081a0();
          iVar10 = uVar5 + 0x37;
          uVar5 = recovered_20081a0();
          pcVar8 = str_020d6a64;
          if (0 < (int)(iVar10 - uVar5)) {
            do {
              local_1c = 0;
              local_10e[0] = '\0';
              uVar3 = recovered_20a20d0((int)&local_a44,&local_1c,iVar10);
              if (((((char)uVar3 != '\0') && (0x59 < local_1c)) &&
                  ((ushort)(local_a38 << 8 | local_a38 >> 8) == 0x800)) &&
                 ((((local_a36[0] & 0xf0) == 0x40 && (abStack_a2e[1] == '\x11')) &&
                  (((local_a2a >> 0x18 | (local_a2a & 0xff0000) >> 8 | (local_a2a & 0xff00) << 8 |
                    local_a2a << 0x18) == local_28 &&
                   ((uVar5 = DAT_0214b000,
                    (local_a26 >> 0x18 | (local_a26 & 0xff0000) >> 8 | (local_a26 & 0xff00) << 8 |
                    local_a26 << 0x18) == uVar5 && (0x13 < (byte)(local_a36[0] << 2))))))))) {
                local_14 = (uint)(byte)(local_a36[0] << 2);
                local_20 = (uint)(ushort)(local_a34[0] << 8 | local_a34[0] >> 8);
                if ((local_14 + 8 <= local_20) &&
                   ((((local_20 + 0xe <= local_1c &&
                      ((ushort)(*(ushort *)(local_a36 + local_14) << 8 |
                               *(ushort *)(local_a36 + local_14) >> 8) == 0x7b)) &&
                     ((ushort)(*(ushort *)((int)local_a34 + local_14) << 8 |
                              *(ushort *)((int)local_a34 + local_14) >> 8) == (ushort)local_24)) &&
                    ((uVar6 = *(ushort *)((int)local_a34 + local_14 + 2),
                     uVar6 = uVar6 << 8 | uVar6 >> 8, 0x37 < uVar6 && (uVar6 + local_14 <= local_20)
                     ))))) {
                  pcVar8 = str_020d6a70;
                  if (((abStack_a2e[local_14] & 6) == 4) &&
                     (0xf0 < (byte)(abStack_a2e[local_14 + 1] - 0x10))) {
                    uVar5 = *(uint *)((int)auStack_a06 + local_14);
                    uVar5 = uVar5 >> 0x18 | (uVar5 & 0xff0000) >> 8 | (uVar5 & 0xff00) << 8 |
                            uVar5 << 0x18;
                    pcVar8 = str_020d6a98;
                    if (0x83aa7e7f < uVar5) {
                      PF_PART4(local_a44, 4) = 0;
                      PF_PART4(local_a44, 0) = 0;
                      Ram02245270 = uVar5 + 0x7c558180;
                      Ram02245274 = 0;
                      uVar5 = recovered_20081a0();
                      Ram02245278 = uVar5;
                      uVar3 = recovered_20b64c0(&local_a44);
                      if ((char)uVar3 == '\0') {
                        uVar7 = 0;
                        uVar9 = 0;
                      }
                      else {
                        uVar7 = (undefined4)local_a44;
                        uVar9 = PF_PART4(local_a44, 4);
                      }
                      DAT_0224526c = uVar9;
                      DAT_02245268 = uVar7;
                      DAT_02245260 = (char)uVar3;
                      DAT_020de4fc = 5;
                      DAT_0224527c = 1;
                      if (param_2 == 0) {
                        return 1;
                      }
                      recovered_203baf0((undefined4 *)param_2);
                      return 1;
                    }
                  }
                  pf_varargs_20044f0___(local_10e,0x60,pcVar8);
                }
              }
              if (local_10e[0] != '\0') {
                vararg0 = local_10e;
                pcVar8 = &DAT_020c5119;
                goto LAB_02041a13;
              }
              recovered_2026f10();
              recovered_200afa0(1000);
              uVar5 = recovered_20081a0();
            } while (0 < (int)(iVar10 - uVar5));
            pcVar8 = str_020d6a64;
          }
        }
      }
      pf_varargs_20044f0___(local_ae,0x80,pcVar8);
    }
  }
LAB_02041a38:
  if (param_4 != 0 && param_3 != (char *)0x0) {
    pcVar8 = str_020c570e;
    if (local_ae[0] != '\0') {
      pcVar8 = local_ae;
    }
    pf_varargs_20044f0__4_(param_3,param_4,&DAT_020c5119,(uint)pcVar8);
  }
  return 0;
}
#undef format
#undef DAT_020c5119
#undef DAT_020de4fc
#undef DAT_0214b000
#undef DAT_02245260
#undef DAT_02245268
#undef DAT_0224526c
#undef DAT_02245270
#undef DAT_02245274
#undef DAT_02245278
#undef DAT_0224527c
#undef Ram02245270
#undef Ram02245274
#undef Ram02245278
#undef str_020c56ee
#undef str_020c56fb
#undef str_020c570e
#undef str_020d6a41
#undef str_020d6a54
#undef str_020d6a64
#undef str_020d6a70
#undef str_020d6a98
#undef local_a34
#undef local_a2a
#undef local_a26
#undef local_23e
#undef auStack_a22
#undef local_13e
#undef abStack_a2e
#undef local_10e
#undef local_ae
#undef auStack_9f2
#undef local_2e
#undef local_28
#undef abStack_a1a
#undef local_24
#undef auStack_a06
#undef local_20
#undef local_1c
#undef local_18
#undef local_14
#undef vararg0
#undef local_a44
#undef local_a38
#undef local_a36
