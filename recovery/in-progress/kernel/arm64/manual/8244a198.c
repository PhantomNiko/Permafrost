/* Native WinterScript provider tail call; Pooka's Free Software License. */
#include "functions.h"
unsigned char recovered_8244a198(unsigned device,const char *path){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x827382b8U;
 return provider?((unsigned char (*)(unsigned,const char *))*(uintptr_t *)(provider+0x68))(device,path):0;
}
