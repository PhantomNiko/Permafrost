/* Native WinterScript provider tail call; Pooka's Free Software License. */
#include "functions.h"
unsigned char recovered_4048a990(const char *path){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x4065cc70U;
 return provider?((unsigned char (*)(const char *))*(uintptr_t *)(provider+0x34))(path):0;
}
