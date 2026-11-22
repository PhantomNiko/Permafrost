/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define DAT_020c5084 (*(uint8_t *)(0x20c5084U))
#define local_1e (*(undefined2 *)(frame + 18))
#define local_1c (*(undefined4 *)(frame + 20))
#define local_18 (*(uint *)(frame + 24))
#define local_14 (*(byte * *)(frame + 28))


void recovered_20372f0(byte *in_ECX,char *in_EDX,uint param_3)

{
  unsigned char frame[80] __attribute__((aligned(16))) = {0};

  undefined4 in_EAX = 0;
  uint uVar1;
  ulong uVar2;
  uint uVar3;
  byte *pbVar4;
  byte bVar5;
  byte *pbVar6;

  if (in_ECX == (byte *)0x0) {
    local_1c = CONCAT31((int3)((uint)in_EAX >> 8),1);
    pbVar4 = &DAT_020c5084;
  }
  else {
    do {
      do {
        pbVar4 = in_ECX;
        in_ECX = pbVar4 + 1;
        uVar1 = (uint)*pbVar4;
      } while (uVar1 - 9 < 5);
    } while (uVar1 == 0x20);
    if (uVar1 != 0x2d) {
      local_1c = 1;
      local_18 = 0;
LAB_02037424:
      pbVar4 = in_ECX + -1;
      goto switchD_02037380_caseD_1;
    }
    bVar5 = *in_ECX;
    if (bVar5 != 0) {
      local_1c = 1;
      local_18 = 0;
LAB_02037345:
      local_14 = pbVar4 + 2;
      uVar1 = 1;
      do {
        switch((uintptr_t)(bVar5)) {
        case 0:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
        case 0xd:
        case 0x20:
          goto switchD_02037380_caseD_0;
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 0xe:
        case 0xf:
        case 0x10:
        case 0x11:
        case 0x12:
        case 0x13:
        case 0x14:
        case 0x15:
        case 0x16:
        case 0x17:
        case 0x18:
        case 0x19:
        case 0x1a:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x1f:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x24:
        case 0x25:
        case 0x26:
        case 0x27:
        case 0x28:
        case 0x29:
        case 0x2a:
        case 0x2b:
        case 0x2c:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
        case 0x38:
        case 0x39:
        case 0x3a:
        case 0x3b:
        case 0x3c:
        case 0x3d:
        case 0x3e:
        case 0x3f:
        case 0x40:
        case 0x41:
        case 0x42:
        case 0x43:
        case 0x44:
          goto switchD_02037380_caseD_1;
        default:
          if ((bVar5 != 0x6e) && (bVar5 != 0x65)) goto switchD_02037380_caseD_1;
        case 0x45:
          bVar5 = pbVar4[uVar1 + 1];
          uVar1 = uVar1 + 1;
          local_14 = local_14 + 1;
        }
      } while( true );
    }
    local_1c = 1;
  }
  local_18 = 0;
switchD_02037380_caseD_1:
  local_1e = 0;
  bVar5 = *pbVar4;
  if (bVar5 != 0) {
    local_18 = (uint)(byte)~(byte)local_18;
    do {
      pbVar6 = pbVar4 + 1;
      if (bVar5 != 0x5c || (local_18 & 1) != 0) {
        if (in_EDX != (char *)0x0) {
          local_14 = pbVar6;
          uVar2 = recovered_2002270(in_EDX);
          if (uVar2 + 1 < param_3 && param_3 != 0) {
            pbVar4 = (byte *)((int)&local_1e + 1);
            uVar1 = uVar2 + 2;
            do {
              uVar3 = uVar1;
              in_EDX[uVar3 - 2] = bVar5;
              bVar5 = *pbVar4;
              if (bVar5 == 0) break;
              pbVar4 = pbVar4 + 1;
              uVar1 = uVar3 + 1;
            } while (uVar3 < param_3);
            in_EDX[uVar3 - 1] = '\0';
          }
          pbVar6 = local_14;
        }
        goto LAB_02037455;
      }
      switch((uintptr_t)(*pbVar6)) {
      case 0x5c:
        if (in_EDX == (char *)0x0) break;
        local_14 = pbVar6;
        uVar2 = recovered_2002270(in_EDX);
        uVar1 = uVar2 + 1;
        pbVar6 = local_14;
        if (param_3 == 0 || param_3 <= uVar1) break;
        in_EDX[uVar2] = '\\';
        goto LAB_0203765c;
      case 0x5d:
      case 0x5e:
      case 0x5f:
      case 0x60:
      case 0x61:
      case 0x62:
      case 100:
      case 0x65:
      case 0x66:
      case 0x67:
      case 0x68:
      case 0x69:
      case 0x6a:
      case 0x6b:
      case 0x6c:
      case 0x6d:
      case 0x6f:
      case 0x70:
      case 0x71:
      case 0x73:
        goto switchD_02037481_caseD_5d;
      case 99:
        goto switchD_02037481_caseD_63;
      case 0x6e:
        if (in_EDX != (char *)0x0) {
          local_14 = pbVar6;
          uVar2 = recovered_2002270(in_EDX);
          uVar1 = uVar2 + 1;
          pbVar6 = local_14;
          if (param_3 != 0 && uVar1 < param_3) {
            in_EDX[uVar2] = '\n';
            goto LAB_0203765c;
          }
        }
        break;
      case 0x72:
        if (in_EDX != (char *)0x0) {
          local_14 = pbVar6;
          uVar2 = recovered_2002270(in_EDX);
          uVar1 = uVar2 + 1;
          pbVar6 = local_14;
          if (param_3 != 0 && uVar1 < param_3) {
            in_EDX[uVar2] = '\r';
            goto LAB_0203765c;
          }
        }
        break;
      case 0x74:
        if (in_EDX != (char *)0x0) {
          local_14 = pbVar6;
          uVar2 = recovered_2002270(in_EDX);
          uVar1 = uVar2 + 1;
          pbVar6 = local_14;
          if (param_3 != 0 && uVar1 < param_3) {
            in_EDX[uVar2] = '\t';
            goto LAB_0203765c;
          }
        }
        break;
      default:
        if (*pbVar6 == 0) {
          if (in_EDX == (char *)0x0) {
            return;
          }
          uVar2 = recovered_2002270(in_EDX);
          if (uVar2 + 1 < param_3 && param_3 != 0) {
            (in_EDX + uVar2)[0] = '\\';
            (in_EDX + uVar2)[1] = '\0';
          }
          goto LAB_020376a0;
        }
switchD_02037481_caseD_5d:
        if (in_EDX != (char *)0x0) {
          local_14 = pbVar6;
          uVar2 = recovered_2002270(in_EDX);
          if (uVar2 + 1 < param_3 && param_3 != 0) {
            (in_EDX + uVar2)[0] = '\\';
            (in_EDX + uVar2)[1] = '\0';
          }
          bVar5 = *local_14;
          uVar1 = recovered_2002270(in_EDX);
          pbVar6 = local_14;
          if (uVar1 + 1 < param_3 && param_3 != 0) {
            if (bVar5 != 0) {
              pbVar6 = (byte *)((int)&local_1e + 1);
              uVar2 = uVar1;
              do {
                in_EDX[uVar2] = bVar5;
                bVar5 = *pbVar6;
                uVar1 = uVar2 + 1;
                if (bVar5 == 0) break;
                uVar3 = uVar2 + 2;
                pbVar6 = pbVar6 + 1;
                uVar2 = uVar1;
              } while (uVar3 < param_3);
            }
LAB_0203765c:
            in_EDX[uVar1] = '\0';
            pbVar6 = local_14;
          }
        }
      }
      if (pbVar4[1] != 0) {
        pbVar6 = pbVar4 + 2;
      }
LAB_02037455:
      bVar5 = *pbVar6;
      pbVar4 = pbVar6;
    } while (bVar5 != 0);
  }
LAB_020376a0:
  if ((((byte)local_1c & in_EDX != (char *)0x0) != 0) &&
     (uVar2 = recovered_2002270(in_EDX), uVar2 + 1 < param_3 && param_3 != 0)) {
    (in_EDX + uVar2)[0] = '\n';
    (in_EDX + uVar2)[1] = '\0';
  }
switchD_02037481_caseD_63:
  return;
switchD_02037380_caseD_0:
  if (1 < uVar1) {
    do {
      bVar5 = *in_ECX;
      if (bVar5 == 0x6e) {
        local_1c = 0;
      }
      else if (bVar5 == 0x65) {
        local_18 = 1;
      }
      else if (bVar5 == 0x45) {
        local_18 = 0;
      }
      in_ECX = in_ECX + 1;
    } while (in_ECX < pbVar4 + uVar1);
  }
  for (in_ECX = local_14; (uVar1 = (uint)in_ECX[-1], uVar1 - 9 < 5 || (uVar1 == 0x20));
      in_ECX = in_ECX + 1) {
  }
  if (uVar1 != 0x2d) goto LAB_02037424;
  bVar5 = *in_ECX;
  pbVar4 = in_ECX + -1;
  if (bVar5 == 0) goto LAB_02037424;
  goto LAB_02037345;
}
#undef DAT_020c5084
#undef local_1e
#undef local_1c
#undef local_18
#undef local_14
