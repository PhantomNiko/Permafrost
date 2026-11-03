/* Permafrost 0.5; Pooka's Free Software License.
 * Tagged values store integer bits at +4, float bits at +8, text at +12.
 */
#include "functions.h"
bool recovered_37a39(int *value, int *output) {
    if (!value || !output) return false;
    *output = 0;
    char buffer[96];
    char *text = buffer;
    uint size;
    switch (value[0]) {
    case 1: recovered_21de7(buffer, sizeof(buffer), (char *)0x491ca, value[1]); break;
    case 2: recovered_21de7(buffer, sizeof(buffer), (char *)0x49aa4, (double)*(float *)&value[2]); break;
    case 3: return recovered_37af6(value, output);
    case 5: text = (char *)(value[1] ? 0x499f8 : 0x499fd); break;
    default: return false;
    }
    size = recovered_213fa((int)text);
    *output = recovered_29c22((int)text, size);
    return *output != 0;
}
