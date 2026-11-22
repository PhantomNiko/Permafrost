/* Recovered implementation; Pooka's Free Software License. */
#include "functions.h"
#define str_020cea8a (*(char (*)[1])(0x20cea8aU))
#define str_020d225d (*(char (*)[1])(0x20d225dU))


undefined4 recovered_20bdc00(int in_ECX)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char *pcVar1;
  char cVar2;

  if (in_ECX == 0) {
    return 0;
  }
  cVar2 = *(char *)(in_ECX + 0x44);
  if (cVar2 == '\0') {
    pcVar1 = str_020cea8a;
    goto LAB_020bdc28;
  }
  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
    cVar2 = cVar2 + -0x20;
  }
  if (cVar2 != 'U') {
    return 0;
  }
  cVar2 = *(char *)(in_ECX + 0x45);
  if (cVar2 == '\0') {
    pcVar1 = str_020d225d + 1;
LAB_020bdd5e:
    if (*pcVar1 == '\0') {
      return CONCAT31((int3)((uint)pcVar1 >> 8),*pcVar1 == '\0');
    }
  }
  else {
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    if (cVar2 == 'S') {
      cVar2 = *(char *)(in_ECX + 0x46);
      if (cVar2 == '\0') {
        pcVar1 = str_020d225d + 2;
      }
      else {
        if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          cVar2 = cVar2 + -0x20;
        }
        if (cVar2 != 'E') goto LAB_020bdd73;
        cVar2 = *(char *)(in_ECX + 0x47);
        if (cVar2 == '\0') {
          pcVar1 = str_020d225d + 3;
        }
        else {
          if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            cVar2 = cVar2 + -0x20;
          }
          if (cVar2 != 'R') goto LAB_020bdd73;
          cVar2 = *(char *)(in_ECX + 0x48);
          if (cVar2 == '\0') {
            pcVar1 = str_020d225d + 4;
          }
          else {
            if ((byte)(cVar2 + 0x9fU) < 0x1a) {
              cVar2 = cVar2 + -0x20;
            }
            if (cVar2 != ' ') goto LAB_020bdd73;
            cVar2 = *(char *)(in_ECX + 0x49);
            if (cVar2 == '\0') {
              pcVar1 = str_020d225d + 5;
            }
            else {
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                cVar2 = cVar2 + -0x20;
              }
              if (cVar2 != 'D') goto LAB_020bdd73;
              cVar2 = *(char *)(in_ECX + 0x4a);
              if (cVar2 == '\0') {
                pcVar1 = str_020d225d + 6;
              }
              else {
                if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                  cVar2 = cVar2 + -0x20;
                }
                if (cVar2 != 'A') goto LAB_020bdd73;
                cVar2 = *(char *)(in_ECX + 0x4b);
                if (cVar2 == '\0') {
                  pcVar1 = str_020d225d + 7;
                }
                else {
                  if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                    cVar2 = cVar2 + -0x20;
                  }
                  if (cVar2 != 'T') goto LAB_020bdd73;
                  cVar2 = *(char *)(in_ECX + 0x4c);
                  if (cVar2 == '\0') {
                    pcVar1 = str_020d225d + 8;
                  }
                  else {
                    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                      cVar2 = cVar2 + -0x20;
                    }
                    if ((cVar2 != 'A') || (*(char *)(in_ECX + 0x4d) != '\0')) goto LAB_020bdd73;
                    pcVar1 = str_020d225d + 9;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_020bdd5e;
    }
  }
LAB_020bdd73:
  cVar2 = *(char *)(in_ECX + 0x45);
  if (cVar2 == '\0') {
    pcVar1 = str_020cea8a + 1;
  }
  else {
    if ((byte)(cVar2 + 0x9fU) < 0x1a) {
      cVar2 = cVar2 + -0x20;
    }
    if (cVar2 != 'S') {
      return 0;
    }
    cVar2 = *(char *)(in_ECX + 0x46);
    if (cVar2 == '\0') {
      pcVar1 = str_020cea8a + 2;
    }
    else {
      if ((byte)(cVar2 + 0x9fU) < 0x1a) {
        cVar2 = cVar2 + -0x20;
      }
      if (cVar2 != 'E') {
        return 0;
      }
      cVar2 = *(char *)(in_ECX + 0x47);
      if (cVar2 == '\0') {
        pcVar1 = str_020cea8a + 3;
      }
      else {
        if ((byte)(cVar2 + 0x9fU) < 0x1a) {
          cVar2 = cVar2 + -0x20;
        }
        if (cVar2 != 'R') {
          return 0;
        }
        cVar2 = *(char *)(in_ECX + 0x48);
        if (cVar2 == '\0') {
          pcVar1 = str_020cea8a + 4;
        }
        else {
          if ((byte)(cVar2 + 0x9fU) < 0x1a) {
            cVar2 = cVar2 + -0x20;
          }
          if (cVar2 != 'D') {
            return 0;
          }
          cVar2 = *(char *)(in_ECX + 0x49);
          if (cVar2 == '\0') {
            pcVar1 = str_020cea8a + 5;
          }
          else {
            if ((byte)(cVar2 + 0x9fU) < 0x1a) {
              cVar2 = cVar2 + -0x20;
            }
            if (cVar2 != 'A') {
              return 0;
            }
            cVar2 = *(char *)(in_ECX + 0x4a);
            if (cVar2 == '\0') {
              pcVar1 = str_020cea8a + 6;
            }
            else {
              if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                cVar2 = cVar2 + -0x20;
              }
              if (cVar2 != 'T') {
                return 0;
              }
              cVar2 = *(char *)(in_ECX + 0x4b);
              if (cVar2 == '\0') {
                pcVar1 = str_020cea8a + 7;
              }
              else {
                if ((byte)(cVar2 + 0x9fU) < 0x1a) {
                  cVar2 = cVar2 + -0x20;
                }
                if (cVar2 != 'A') {
                  return 0;
                }
                if (*(char *)(in_ECX + 0x4c) != '\0') {
                  return 0;
                }
                pcVar1 = str_020cea8a + 8;
              }
            }
          }
        }
      }
    }
  }
LAB_020bdc28:
  return CONCAT31((int3)((uint)pcVar1 >> 8),*pcVar1 == '\0');
}
#undef str_020cea8a
#undef str_020d225d
