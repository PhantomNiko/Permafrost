/* Native scope transfer; Pooka's Free Software License. */
#include "functions.h"
__attribute__((naked,noreturn)) void recovered_20720c0(void *context){
 __asm__ volatile("movq 64(%rdi),%rsp\nmovq 48(%rdi),%rbp\njmp *56(%rdi)");
}
