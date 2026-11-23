/* Native WinterShell provider tail call; Pooka's Free Software License. */
#include "functions.h"
unsigned char recovered_20947a0(const char *path){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x25ebb40U;
 return provider?((unsigned char (*)(const char *))*(uintptr_t *)(provider+0x60))(path):0;
}
