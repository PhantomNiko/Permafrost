/* Permafrost 0.3; Pooka's Free Software License. */
#include "functions.h"
ulonglong recovered_20b4a(ulonglong value, uint shift) {
    if ((int)shift <= 0) return value;
    return shift < 64 ? value << shift : 0;
}
