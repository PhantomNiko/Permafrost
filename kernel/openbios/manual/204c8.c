/* Permafrost 0.6; Pooka's Free Software License. */
#include "functions.h"
ulonglong recovered_204c8(ulonglong value, uint shift) {
    if ((int)shift <= 0) return value;
    return shift < 64 ? value << shift : 0;
}
