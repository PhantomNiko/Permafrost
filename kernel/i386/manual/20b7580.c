/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_0208f910 (*(char (*)[1])(0x20ccf0dU))
#define str_0208f919 (*(char (*)[1])(0x20ccf16U))
#define str_0208f91f (*(char (*)[1])(0x20ccf1cU))
#define str_0208f925 (*(char (*)[1])(0x20ccf22U))
bool recovered_20b7580(int *incoming_ecx,uint incoming_edx)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  undefined4 *puVar1;
  char *pcVar2;
  char cVar3;
  char *pcVar4;

  if ((incoming_ecx == (int *)0x0) || (*incoming_ecx == 0)) {
    return false;
  }
  puVar1 = (undefined4 *)incoming_ecx[2];
  pcVar2 = (char *)*puVar1;
  if (pcVar2 == (char *)0x0) {
    return false;
  }
  cVar3 = *pcVar2;
  if (cVar3 == '\0') {
    pcVar4 = str_0208f910;
LAB_02085002:
    if (*pcVar4 == '\0') {
      return true;
    }
  }
  else {
    if (cVar3 == 'f') {
LAB_02084ec9:
      cVar3 = pcVar2[1];
      if (cVar3 == '\0') {
        pcVar4 = str_0208f910 + 1;
      }
      else {
        if (cVar3 != 'u') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'U') goto LAB_0208500b;
        }
        cVar3 = pcVar2[2];
        if (cVar3 == '\0') {
          pcVar4 = str_0208f910 + 2;
        }
        else {
          if (cVar3 != 'n') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'N') goto LAB_0208500b;
          }
          cVar3 = pcVar2[3];
          if (cVar3 == '\0') {
            pcVar4 = str_0208f910 + 3;
          }
          else {
            if (cVar3 != 'c') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'C') goto LAB_0208500b;
            }
            cVar3 = pcVar2[4];
            if (cVar3 == '\0') {
              pcVar4 = str_0208f910 + 4;
            }
            else {
              if (cVar3 != 't') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'T') goto LAB_0208500b;
              }
              cVar3 = pcVar2[5];
              if (cVar3 == '\0') {
                pcVar4 = str_0208f910 + 5;
              }
              else {
                if (cVar3 != 'i') {
                  if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                    cVar3 = cVar3 + -0x20;
                  }
                  if (cVar3 != 'I') goto LAB_0208500b;
                }
                cVar3 = pcVar2[6];
                if (cVar3 == '\0') {
                  pcVar4 = str_0208f910 + 6;
                }
                else {
                  if (cVar3 != 'o') {
                    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                      cVar3 = cVar3 + -0x20;
                    }
                    if (cVar3 != 'O') goto LAB_0208500b;
                  }
                  cVar3 = pcVar2[7];
                  if (cVar3 == '\0') {
                    pcVar4 = str_0208f910 + 7;
                  }
                  else {
                    if (cVar3 != 'n') {
                      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                        cVar3 = cVar3 + -0x20;
                      }
                      if (cVar3 != 'N') goto LAB_0208500b;
                    }
                    if (pcVar2[8] != '\0') goto LAB_0208500b;
                    pcVar4 = str_0208f910 + 8;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_02085002;
    }
    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
      cVar3 = cVar3 + -0x20;
    }
    if (cVar3 == 'F') goto LAB_02084ec9;
  }
LAB_0208500b:
  if (*incoming_ecx == 1) {
    return false;
  }
  cVar3 = *pcVar2;
  if (cVar3 == '\0') {
    pcVar4 = str_0208f919;
LAB_020850e2:
    if ((*pcVar4 == '\0') && (pcVar4 = (char *)puVar1[1], pcVar4 != (char *)0x0)) {
      cVar3 = *pcVar4;
      if (cVar3 == '\0') {
        pcVar4 = str_0208f910;
      }
      else {
        if (cVar3 != 'f') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'F') goto LAB_020850eb;
        }
        cVar3 = pcVar4[1];
        if (cVar3 == '\0') {
          pcVar4 = str_0208f910 + 1;
        }
        else {
          if (cVar3 != 'u') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'U') goto LAB_020850eb;
          }
          cVar3 = pcVar4[2];
          if (cVar3 == '\0') {
            pcVar4 = str_0208f910 + 2;
          }
          else {
            if (cVar3 != 'n') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'N') goto LAB_020850eb;
            }
            cVar3 = pcVar4[3];
            if (cVar3 == '\0') {
              pcVar4 = str_0208f910 + 3;
            }
            else {
              if (cVar3 != 'c') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'C') goto LAB_020850eb;
              }
              cVar3 = pcVar4[4];
              if (cVar3 == '\0') {
                pcVar4 = str_0208f910 + 4;
              }
              else {
                if (cVar3 != 't') {
                  if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                    cVar3 = cVar3 + -0x20;
                  }
                  if (cVar3 != 'T') goto LAB_020850eb;
                }
                cVar3 = pcVar4[5];
                if (cVar3 == '\0') {
                  pcVar4 = str_0208f910 + 5;
                }
                else {
                  if (cVar3 != 'i') {
                    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                      cVar3 = cVar3 + -0x20;
                    }
                    if (cVar3 != 'I') goto LAB_020850eb;
                  }
                  cVar3 = pcVar4[6];
                  if (cVar3 == '\0') {
                    pcVar4 = str_0208f910 + 6;
                  }
                  else {
                    if (cVar3 != 'o') {
                      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                        cVar3 = cVar3 + -0x20;
                      }
                      if (cVar3 != 'O') goto LAB_020850eb;
                    }
                    cVar3 = pcVar4[7];
                    if (cVar3 == '\0') {
                      pcVar4 = str_0208f910 + 7;
                    }
                    else {
                      if (cVar3 != 'n') {
                        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                          cVar3 = cVar3 + -0x20;
                        }
                        if (cVar3 != 'N') goto LAB_020850eb;
                      }
                      if (pcVar4[8] != '\0') goto LAB_020850eb;
                      pcVar4 = str_0208f910 + 8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (*pcVar4 == '\0') {
        return true;
      }
    }
  }
  else {
    if (cVar3 == 'd') {
LAB_02085038:
      cVar3 = pcVar2[1];
      if (cVar3 == '\0') {
        pcVar4 = str_0208f919 + 1;
      }
      else {
        if (cVar3 != 'e') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'E') goto LAB_020850eb;
        }
        cVar3 = pcVar2[2];
        if (cVar3 == '\0') {
          pcVar4 = str_0208f919 + 2;
        }
        else {
          if (cVar3 != 'c') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'C') goto LAB_020850eb;
          }
          cVar3 = pcVar2[3];
          if (cVar3 == '\0') {
            pcVar4 = str_0208f919 + 3;
          }
          else {
            if (cVar3 != 'a') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'A') goto LAB_020850eb;
            }
            cVar3 = pcVar2[4];
            if (cVar3 == '\0') {
              pcVar4 = str_0208f919 + 4;
            }
            else {
              if (cVar3 != 'y') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'Y') goto LAB_020850eb;
              }
              if (pcVar2[5] != '\0') goto LAB_020850eb;
              pcVar4 = str_0208f919 + 5;
            }
          }
        }
      }
      goto LAB_020850e2;
    }
    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
      cVar3 = cVar3 + -0x20;
    }
    if (cVar3 == 'D') goto LAB_02085038;
  }
LAB_020850eb:
  cVar3 = *pcVar2;
  if (cVar3 == '\0') {
    pcVar4 = str_0208f91f;
  }
  else {
    if (cVar3 != 'l') {
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
      if (cVar3 != 'L') goto LAB_0208533e;
    }
    cVar3 = pcVar2[1];
    if (cVar3 == '\0') {
      pcVar4 = str_0208f91f + 1;
    }
    else {
      if (cVar3 != 'o') {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          cVar3 = cVar3 + -0x20;
        }
        if (cVar3 != 'O') goto LAB_0208533e;
      }
      cVar3 = pcVar2[2];
      if (cVar3 == '\0') {
        pcVar4 = str_0208f91f + 2;
      }
      else {
        if (cVar3 != 'c') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'C') goto LAB_0208533e;
        }
        cVar3 = pcVar2[3];
        if (cVar3 == '\0') {
          pcVar4 = str_0208f91f + 3;
        }
        else {
          if (cVar3 != 'a') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'A') goto LAB_0208533e;
          }
          cVar3 = pcVar2[4];
          if (cVar3 == '\0') {
            pcVar4 = str_0208f91f + 4;
          }
          else {
            if (cVar3 != 'l') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'L') goto LAB_0208533e;
            }
            if (pcVar2[5] != '\0') goto LAB_0208533e;
            pcVar4 = str_0208f91f + 5;
          }
        }
      }
    }
  }
  if ((*pcVar4 == '\0') && (pcVar4 = (char *)puVar1[1], pcVar4 != (char *)0x0)) {
    cVar3 = *pcVar4;
    if (cVar3 == '\0') {
      pcVar4 = str_0208f910;
    }
    else {
      if (cVar3 != 'f') {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          cVar3 = cVar3 + -0x20;
        }
        if (cVar3 != 'F') goto LAB_0208533e;
      }
      cVar3 = pcVar4[1];
      if (cVar3 == '\0') {
        pcVar4 = str_0208f910 + 1;
      }
      else {
        if (cVar3 != 'u') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'U') goto LAB_0208533e;
        }
        cVar3 = pcVar4[2];
        if (cVar3 == '\0') {
          pcVar4 = str_0208f910 + 2;
        }
        else {
          if (cVar3 != 'n') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'N') goto LAB_0208533e;
          }
          cVar3 = pcVar4[3];
          if (cVar3 == '\0') {
            pcVar4 = str_0208f910 + 3;
          }
          else {
            if (cVar3 != 'c') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'C') goto LAB_0208533e;
            }
            cVar3 = pcVar4[4];
            if (cVar3 == '\0') {
              pcVar4 = str_0208f910 + 4;
            }
            else {
              if (cVar3 != 't') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'T') goto LAB_0208533e;
              }
              cVar3 = pcVar4[5];
              if (cVar3 == '\0') {
                pcVar4 = str_0208f910 + 5;
              }
              else {
                if (cVar3 != 'i') {
                  if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                    cVar3 = cVar3 + -0x20;
                  }
                  if (cVar3 != 'I') goto LAB_0208533e;
                }
                cVar3 = pcVar4[6];
                if (cVar3 == '\0') {
                  pcVar4 = str_0208f910 + 6;
                }
                else {
                  if (cVar3 != 'o') {
                    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                      cVar3 = cVar3 + -0x20;
                    }
                    if (cVar3 != 'O') goto LAB_0208533e;
                  }
                  cVar3 = pcVar4[7];
                  if (cVar3 == '\0') {
                    pcVar4 = str_0208f910 + 7;
                  }
                  else {
                    if (cVar3 != 'n') {
                      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                        cVar3 = cVar3 + -0x20;
                      }
                      if (cVar3 != 'N') goto LAB_0208533e;
                    }
                    if (pcVar4[8] != '\0') goto LAB_0208533e;
                    pcVar4 = str_0208f910 + 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (*pcVar4 == '\0') {
      return true;
    }
  }
LAB_0208533e:
  cVar3 = *pcVar2;
  if (cVar3 == '\0') {
    pcVar2 = str_0208f925;
  }
  else {
    if (cVar3 != 'n') {
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
      if (cVar3 != 'N') {
        return false;
      }
    }
    cVar3 = pcVar2[1];
    if (cVar3 == '\0') {
      pcVar2 = str_0208f925 + 1;
    }
    else {
      if (cVar3 != 'a') {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          cVar3 = cVar3 + -0x20;
        }
        if (cVar3 != 'A') {
          return false;
        }
      }
      cVar3 = pcVar2[2];
      if (cVar3 == '\0') {
        pcVar2 = str_0208f925 + 2;
      }
      else {
        if (cVar3 != 't') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'T') {
            return false;
          }
        }
        cVar3 = pcVar2[3];
        if (cVar3 == '\0') {
          pcVar2 = str_0208f925 + 3;
        }
        else {
          if (cVar3 != 'i') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'I') {
              return false;
            }
          }
          cVar3 = pcVar2[4];
          if (cVar3 == '\0') {
            pcVar2 = str_0208f925 + 4;
          }
          else {
            if (cVar3 != 'v') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'V') {
                return false;
              }
            }
            cVar3 = pcVar2[5];
            if (cVar3 == '\0') {
              pcVar2 = str_0208f925 + 5;
            }
            else {
              if (cVar3 != 'e') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'E') {
                  return false;
                }
              }
              if (pcVar2[6] != '\0') {
                return false;
              }
              pcVar2 = str_0208f925 + 6;
            }
          }
        }
      }
    }
  }
  if ((*pcVar2 != '\0') || (pcVar2 = (char *)puVar1[1], pcVar2 == (char *)0x0)) {
    return false;
  }
  cVar3 = *pcVar2;
  if (cVar3 == '\0') {
    pcVar2 = str_0208f910;
  }
  else {
    if (cVar3 != 'f') {
      if ((byte)(cVar3 + 0x9fU) < 0x1a) {
        cVar3 = cVar3 + -0x20;
      }
      if (cVar3 != 'F') {
        return false;
      }
    }
    cVar3 = pcVar2[1];
    if (cVar3 == '\0') {
      pcVar2 = str_0208f910 + 1;
    }
    else {
      if (cVar3 != 'u') {
        if ((byte)(cVar3 + 0x9fU) < 0x1a) {
          cVar3 = cVar3 + -0x20;
        }
        if (cVar3 != 'U') {
          return false;
        }
      }
      cVar3 = pcVar2[2];
      if (cVar3 == '\0') {
        pcVar2 = str_0208f910 + 2;
      }
      else {
        if (cVar3 != 'n') {
          if ((byte)(cVar3 + 0x9fU) < 0x1a) {
            cVar3 = cVar3 + -0x20;
          }
          if (cVar3 != 'N') {
            return false;
          }
        }
        cVar3 = pcVar2[3];
        if (cVar3 == '\0') {
          pcVar2 = str_0208f910 + 3;
        }
        else {
          if (cVar3 != 'c') {
            if ((byte)(cVar3 + 0x9fU) < 0x1a) {
              cVar3 = cVar3 + -0x20;
            }
            if (cVar3 != 'C') {
              return false;
            }
          }
          cVar3 = pcVar2[4];
          if (cVar3 == '\0') {
            pcVar2 = str_0208f910 + 4;
          }
          else {
            if (cVar3 != 't') {
              if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                cVar3 = cVar3 + -0x20;
              }
              if (cVar3 != 'T') {
                return false;
              }
            }
            cVar3 = pcVar2[5];
            if (cVar3 == '\0') {
              pcVar2 = str_0208f910 + 5;
            }
            else {
              if (cVar3 != 'i') {
                if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                  cVar3 = cVar3 + -0x20;
                }
                if (cVar3 != 'I') {
                  return false;
                }
              }
              cVar3 = pcVar2[6];
              if (cVar3 == '\0') {
                pcVar2 = str_0208f910 + 6;
              }
              else {
                if (cVar3 != 'o') {
                  if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                    cVar3 = cVar3 + -0x20;
                  }
                  if (cVar3 != 'O') {
                    return false;
                  }
                }
                cVar3 = pcVar2[7];
                if (cVar3 == '\0') {
                  pcVar2 = str_0208f910 + 7;
                }
                else {
                  if (cVar3 != 'n') {
                    if ((byte)(cVar3 + 0x9fU) < 0x1a) {
                      cVar3 = cVar3 + -0x20;
                    }
                    if (cVar3 != 'N') {
                      return false;
                    }
                  }
                  if (pcVar2[8] != '\0') {
                    return false;
                  }
                  pcVar2 = str_0208f910 + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  return *pcVar2 == '\0';
}
