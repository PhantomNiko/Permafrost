/* Native WinterScript provider tail call; Pooka's Free Software License. */
#include "functions.h"
unsigned char recovered_4048a9b0(unsigned device,const char *path){
 uintptr_t provider=*(volatile uintptr_t *)(uintptr_t)0x4065cc70U;
 return provider?((unsigned char (*)(unsigned,const char *))*(uintptr_t *)(provider+0x38))(device,path):0;
}
