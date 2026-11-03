/* Permafrost 0.1; Pooka's Free Software License. */
#include "functions.h"
ulonglong recovered_20874(ulonglong value, uint shift) {
    if ((int)shift <= 0) return value;
    return shift < 64 ? value >> shift : 0;
}
