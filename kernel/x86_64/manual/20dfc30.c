/* Reviewed instruction-equivalent C. Pooka's Free Software License. */
#include "functions.h"
#define str_020a3bae (*(char (*)[1])(0x20f436fU))
#define str_020a3bb7 (*(char (*)[1])(0x20f4378U))
#define str_020a3bbd (*(char (*)[1])(0x20f437eU))
#define str_020a3bc3 (*(char (*)[1])(0x20f4384U))
uchar recovered_20dfc30(long *param_1)

{
  unsigned char frame[64] __attribute__((aligned(16))) = {0};

  char cVar1;
  undefined8 *puVar2;
  char *pcVar3;
  char *pcVar4;
  char cVar5;

  if ((param_1 == (long *)0x0) || (*param_1 == 0)) {
    return '\0';
  }
  puVar2 = (undefined8 *)param_1[2];
  pcVar3 = (char *)*puVar2;
  if (pcVar3 == (char *)0x0) {
    return '\0';
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar4 = str_020a3bae;
LAB_0209a090:
    if (*pcVar4 == '\0') {
      return '\x01';
    }
  }
  else {
    if (cVar1 == 'f') {
LAB_02099ee9:
      cVar1 = pcVar3[1];
      if (cVar1 == '\0') {
        pcVar4 = str_020a3bae + 1;
      }
      else {
        if (cVar1 != 'u') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'U') goto LAB_0209a099;
        }
        cVar1 = pcVar3[2];
        if (cVar1 == '\0') {
          pcVar4 = str_020a3bae + 2;
        }
        else {
          if (cVar1 != 'n') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'N') goto LAB_0209a099;
          }
          cVar1 = pcVar3[3];
          if (cVar1 == '\0') {
            pcVar4 = str_020a3bae + 3;
          }
          else {
            if (cVar1 != 'c') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'C') goto LAB_0209a099;
            }
            cVar1 = pcVar3[4];
            if (cVar1 == '\0') {
              pcVar4 = str_020a3bae + 4;
            }
            else {
              if (cVar1 != 't') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 != 'T') goto LAB_0209a099;
              }
              cVar1 = pcVar3[5];
              if (cVar1 == '\0') {
                pcVar4 = str_020a3bae + 5;
              }
              else {
                if (cVar1 != 'i') {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 != 'I') goto LAB_0209a099;
                }
                cVar1 = pcVar3[6];
                if (cVar1 == '\0') {
                  pcVar4 = str_020a3bae + 6;
                }
                else {
                  if (cVar1 != 'o') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'O') goto LAB_0209a099;
                  }
                  cVar1 = pcVar3[7];
                  if (cVar1 == '\0') {
                    pcVar4 = str_020a3bae + 7;
                  }
                  else {
                    if (cVar1 != 'n') {
                      cVar5 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar5 = cVar1;
                      }
                      if (cVar5 != 'N') goto LAB_0209a099;
                    }
                    if (pcVar3[8] != '\0') goto LAB_0209a099;
                    pcVar4 = str_020a3bae + 8;
                  }
                }
              }
            }
          }
        }
      }
      goto LAB_0209a090;
    }
    cVar5 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar5 = cVar1;
    }
    if (cVar5 == 'F') goto LAB_02099ee9;
  }
LAB_0209a099:
  if (*param_1 == 1) {
    return '\0';
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar4 = str_020a3bb7;
LAB_0209a1b7:
    if ((*pcVar4 == '\0') && (pcVar4 = (char *)puVar2[1], pcVar4 != (char *)0x0)) {
      cVar1 = *pcVar4;
      if (cVar1 == '\0') {
        pcVar4 = str_020a3bae;
      }
      else {
        if (cVar1 != 'f') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'F') goto LAB_0209a1c0;
        }
        cVar1 = pcVar4[1];
        if (cVar1 == '\0') {
          pcVar4 = str_020a3bae + 1;
        }
        else {
          if (cVar1 != 'u') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'U') goto LAB_0209a1c0;
          }
          cVar1 = pcVar4[2];
          if (cVar1 == '\0') {
            pcVar4 = str_020a3bae + 2;
          }
          else {
            if (cVar1 != 'n') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'N') goto LAB_0209a1c0;
            }
            cVar1 = pcVar4[3];
            if (cVar1 == '\0') {
              pcVar4 = str_020a3bae + 3;
            }
            else {
              if (cVar1 != 'c') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 != 'C') goto LAB_0209a1c0;
              }
              cVar1 = pcVar4[4];
              if (cVar1 == '\0') {
                pcVar4 = str_020a3bae + 4;
              }
              else {
                if (cVar1 != 't') {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 != 'T') goto LAB_0209a1c0;
                }
                cVar1 = pcVar4[5];
                if (cVar1 == '\0') {
                  pcVar4 = str_020a3bae + 5;
                }
                else {
                  if (cVar1 != 'i') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'I') goto LAB_0209a1c0;
                  }
                  cVar1 = pcVar4[6];
                  if (cVar1 == '\0') {
                    pcVar4 = str_020a3bae + 6;
                  }
                  else {
                    if (cVar1 != 'o') {
                      cVar5 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar5 = cVar1;
                      }
                      if (cVar5 != 'O') goto LAB_0209a1c0;
                    }
                    cVar1 = pcVar4[7];
                    if (cVar1 == '\0') {
                      pcVar4 = str_020a3bae + 7;
                    }
                    else {
                      if (cVar1 != 'n') {
                        cVar5 = cVar1 + -0x20;
                        if (0x19 < (byte)(cVar1 + 0x9fU)) {
                          cVar5 = cVar1;
                        }
                        if (cVar5 != 'N') goto LAB_0209a1c0;
                      }
                      if (pcVar4[8] != '\0') goto LAB_0209a1c0;
                      pcVar4 = str_020a3bae + 8;
                    }
                  }
                }
              }
            }
          }
        }
      }
      if (*pcVar4 == '\0') {
        return '\x01';
      }
    }
  }
  else {
    if (cVar1 == 'd') {
LAB_0209a0d1:
      cVar1 = pcVar3[1];
      if (cVar1 == '\0') {
        pcVar4 = str_020a3bb7 + 1;
      }
      else {
        if (cVar1 != 'e') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'E') goto LAB_0209a1c0;
        }
        cVar1 = pcVar3[2];
        if (cVar1 == '\0') {
          pcVar4 = str_020a3bb7 + 2;
        }
        else {
          if (cVar1 != 'c') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'C') goto LAB_0209a1c0;
          }
          cVar1 = pcVar3[3];
          if (cVar1 == '\0') {
            pcVar4 = str_020a3bb7 + 3;
          }
          else {
            if (cVar1 != 'a') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'A') goto LAB_0209a1c0;
            }
            cVar1 = pcVar3[4];
            if (cVar1 == '\0') {
              pcVar4 = str_020a3bb7 + 4;
            }
            else {
              if (cVar1 != 'y') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 != 'Y') goto LAB_0209a1c0;
              }
              if (pcVar3[5] != '\0') goto LAB_0209a1c0;
              pcVar4 = str_020a3bb7 + 5;
            }
          }
        }
      }
      goto LAB_0209a1b7;
    }
    cVar5 = cVar1 + -0x20;
    if (0x19 < (byte)(cVar1 + 0x9fU)) {
      cVar5 = cVar1;
    }
    if (cVar5 == 'D') goto LAB_0209a0d1;
  }
LAB_0209a1c0:
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar4 = str_020a3bbd;
  }
  else {
    if (cVar1 != 'l') {
      cVar5 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar5 = cVar1;
      }
      if (cVar5 != 'L') goto LAB_0209a4b9;
    }
    cVar1 = pcVar3[1];
    if (cVar1 == '\0') {
      pcVar4 = str_020a3bbd + 1;
    }
    else {
      if (cVar1 != 'o') {
        cVar5 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar5 = cVar1;
        }
        if (cVar5 != 'O') goto LAB_0209a4b9;
      }
      cVar1 = pcVar3[2];
      if (cVar1 == '\0') {
        pcVar4 = str_020a3bbd + 2;
      }
      else {
        if (cVar1 != 'c') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'C') goto LAB_0209a4b9;
        }
        cVar1 = pcVar3[3];
        if (cVar1 == '\0') {
          pcVar4 = str_020a3bbd + 3;
        }
        else {
          if (cVar1 != 'a') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'A') goto LAB_0209a4b9;
          }
          cVar1 = pcVar3[4];
          if (cVar1 == '\0') {
            pcVar4 = str_020a3bbd + 4;
          }
          else {
            if (cVar1 != 'l') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'L') goto LAB_0209a4b9;
            }
            if (pcVar3[5] != '\0') goto LAB_0209a4b9;
            pcVar4 = str_020a3bbd + 5;
          }
        }
      }
    }
  }
  if ((*pcVar4 == '\0') && (pcVar4 = (char *)puVar2[1], pcVar4 != (char *)0x0)) {
    cVar1 = *pcVar4;
    if (cVar1 == '\0') {
      pcVar4 = str_020a3bae;
    }
    else {
      if (cVar1 != 'f') {
        cVar5 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar5 = cVar1;
        }
        if (cVar5 != 'F') goto LAB_0209a4b9;
      }
      cVar1 = pcVar4[1];
      if (cVar1 == '\0') {
        pcVar4 = str_020a3bae + 1;
      }
      else {
        if (cVar1 != 'u') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'U') goto LAB_0209a4b9;
        }
        cVar1 = pcVar4[2];
        if (cVar1 == '\0') {
          pcVar4 = str_020a3bae + 2;
        }
        else {
          if (cVar1 != 'n') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'N') goto LAB_0209a4b9;
          }
          cVar1 = pcVar4[3];
          if (cVar1 == '\0') {
            pcVar4 = str_020a3bae + 3;
          }
          else {
            if (cVar1 != 'c') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'C') goto LAB_0209a4b9;
            }
            cVar1 = pcVar4[4];
            if (cVar1 == '\0') {
              pcVar4 = str_020a3bae + 4;
            }
            else {
              if (cVar1 != 't') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 != 'T') goto LAB_0209a4b9;
              }
              cVar1 = pcVar4[5];
              if (cVar1 == '\0') {
                pcVar4 = str_020a3bae + 5;
              }
              else {
                if (cVar1 != 'i') {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 != 'I') goto LAB_0209a4b9;
                }
                cVar1 = pcVar4[6];
                if (cVar1 == '\0') {
                  pcVar4 = str_020a3bae + 6;
                }
                else {
                  if (cVar1 != 'o') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'O') goto LAB_0209a4b9;
                  }
                  cVar1 = pcVar4[7];
                  if (cVar1 == '\0') {
                    pcVar4 = str_020a3bae + 7;
                  }
                  else {
                    if (cVar1 != 'n') {
                      cVar5 = cVar1 + -0x20;
                      if (0x19 < (byte)(cVar1 + 0x9fU)) {
                        cVar5 = cVar1;
                      }
                      if (cVar5 != 'N') goto LAB_0209a4b9;
                    }
                    if (pcVar4[8] != '\0') goto LAB_0209a4b9;
                    pcVar4 = str_020a3bae + 8;
                  }
                }
              }
            }
          }
        }
      }
    }
    if (*pcVar4 == '\0') {
      return '\x01';
    }
  }
LAB_0209a4b9:
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar3 = str_020a3bc3;
  }
  else {
    if (cVar1 != 'n') {
      cVar5 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar5 = cVar1;
      }
      if (cVar5 != 'N') {
        return '\0';
      }
    }
    cVar1 = pcVar3[1];
    if (cVar1 == '\0') {
      pcVar3 = str_020a3bc3 + 1;
    }
    else {
      if (cVar1 != 'a') {
        cVar5 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar5 = cVar1;
        }
        if (cVar5 != 'A') {
          return '\0';
        }
      }
      cVar1 = pcVar3[2];
      if (cVar1 == '\0') {
        pcVar3 = str_020a3bc3 + 2;
      }
      else {
        if (cVar1 != 't') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'T') {
            return '\0';
          }
        }
        cVar1 = pcVar3[3];
        if (cVar1 == '\0') {
          pcVar3 = str_020a3bc3 + 3;
        }
        else {
          if (cVar1 != 'i') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'I') {
              return '\0';
            }
          }
          cVar1 = pcVar3[4];
          if (cVar1 == '\0') {
            pcVar3 = str_020a3bc3 + 4;
          }
          else {
            if (cVar1 != 'v') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'V') {
                return '\0';
              }
            }
            cVar1 = pcVar3[5];
            if (cVar1 == '\0') {
              pcVar3 = str_020a3bc3 + 5;
            }
            else {
              if (cVar1 != 'e') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 != 'E') {
                  return '\0';
                }
              }
              if (pcVar3[6] != '\0') {
                return '\0';
              }
              pcVar3 = str_020a3bc3 + 6;
            }
          }
        }
      }
    }
  }
  if ((*pcVar3 != '\0') || (pcVar3 = (char *)puVar2[1], pcVar3 == (char *)0x0)) {
    return '\0';
  }
  cVar1 = *pcVar3;
  if (cVar1 == '\0') {
    pcVar3 = str_020a3bae;
  }
  else {
    if (cVar1 != 'f') {
      cVar5 = cVar1 + -0x20;
      if (0x19 < (byte)(cVar1 + 0x9fU)) {
        cVar5 = cVar1;
      }
      if (cVar5 != 'F') {
        return '\0';
      }
    }
    cVar1 = pcVar3[1];
    if (cVar1 == '\0') {
      pcVar3 = str_020a3bae + 1;
    }
    else {
      if (cVar1 != 'u') {
        cVar5 = cVar1 + -0x20;
        if (0x19 < (byte)(cVar1 + 0x9fU)) {
          cVar5 = cVar1;
        }
        if (cVar5 != 'U') {
          return '\0';
        }
      }
      cVar1 = pcVar3[2];
      if (cVar1 == '\0') {
        pcVar3 = str_020a3bae + 2;
      }
      else {
        if (cVar1 != 'n') {
          cVar5 = cVar1 + -0x20;
          if (0x19 < (byte)(cVar1 + 0x9fU)) {
            cVar5 = cVar1;
          }
          if (cVar5 != 'N') {
            return '\0';
          }
        }
        cVar1 = pcVar3[3];
        if (cVar1 == '\0') {
          pcVar3 = str_020a3bae + 3;
        }
        else {
          if (cVar1 != 'c') {
            cVar5 = cVar1 + -0x20;
            if (0x19 < (byte)(cVar1 + 0x9fU)) {
              cVar5 = cVar1;
            }
            if (cVar5 != 'C') {
              return '\0';
            }
          }
          cVar1 = pcVar3[4];
          if (cVar1 == '\0') {
            pcVar3 = str_020a3bae + 4;
          }
          else {
            if (cVar1 != 't') {
              cVar5 = cVar1 + -0x20;
              if (0x19 < (byte)(cVar1 + 0x9fU)) {
                cVar5 = cVar1;
              }
              if (cVar5 != 'T') {
                return '\0';
              }
            }
            cVar1 = pcVar3[5];
            if (cVar1 == '\0') {
              pcVar3 = str_020a3bae + 5;
            }
            else {
              if (cVar1 != 'i') {
                cVar5 = cVar1 + -0x20;
                if (0x19 < (byte)(cVar1 + 0x9fU)) {
                  cVar5 = cVar1;
                }
                if (cVar5 != 'I') {
                  return '\0';
                }
              }
              cVar1 = pcVar3[6];
              if (cVar1 == '\0') {
                pcVar3 = str_020a3bae + 6;
              }
              else {
                if (cVar1 != 'o') {
                  cVar5 = cVar1 + -0x20;
                  if (0x19 < (byte)(cVar1 + 0x9fU)) {
                    cVar5 = cVar1;
                  }
                  if (cVar5 != 'O') {
                    return '\0';
                  }
                }
                cVar1 = pcVar3[7];
                if (cVar1 == '\0') {
                  pcVar3 = str_020a3bae + 7;
                }
                else {
                  if (cVar1 != 'n') {
                    cVar5 = cVar1 + -0x20;
                    if (0x19 < (byte)(cVar1 + 0x9fU)) {
                      cVar5 = cVar1;
                    }
                    if (cVar5 != 'N') {
                      return '\0';
                    }
                  }
                  if (pcVar3[8] != '\0') {
                    return '\0';
                  }
                  pcVar3 = str_020a3bae + 8;
                }
              }
            }
          }
        }
      }
    }
  }
  return *pcVar3 == '\0';
}
