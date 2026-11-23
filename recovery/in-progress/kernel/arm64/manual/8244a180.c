/* Native WinterScript provider tail call; Pooka's Free Software License. */
#include "functions.h"
unsigned char recovered_8244a180(const char *path){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x827382b8U;
 return provider?((unsigned char (*)(const char *))*(uintptr_t *)(provider+0x60))(path):0;
}
