/* Native formatted console entry; Pooka's Free Software License. */
#include "functions.h"
void recovered_8244bcc4(const char *format,...){
 char text[512];__builtin_va_list arguments;
 __builtin_va_start(arguments,format);
 recovered_8240201c(text,sizeof(text),format,(void *)arguments);
 __builtin_va_end(arguments);recovered_824601b4(text);
}
