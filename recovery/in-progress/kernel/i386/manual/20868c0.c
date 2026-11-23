/* Native formatted console entry. Pooka's Free Software License. */
#include "functions.h"
void recovered_20868c0(const char *format,...){
 char text[512];__builtin_va_list arguments;
 __builtin_va_start(arguments,format);
 recovered_2003460(text,sizeof(text),(char *)format,(void *)arguments);
 __builtin_va_end(arguments);recovered_20a8300(text);
}
