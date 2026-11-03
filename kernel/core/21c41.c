/* Permafrost 0.1; Pooka's Free Software License. */
#include "functions.h"
void recovered_21c41(char *format, ...) {
    char text[512];
    __builtin_va_list args;
    __builtin_va_start(args, format);
    recovered_21360(text, sizeof(text), format, (double *)args);
    __builtin_va_end(args);
    recovered_2176e(text);
}
