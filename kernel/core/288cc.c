/* Permafrost 0.1; Pooka's Free Software License.
 * Tagged values store integer bits at +4, float bits at +8, text at +12.
 */
#include "functions.h"
bool recovered_288cc(int *value, int *output) {
    if (!value || !output) return false;
    *output = 0;
    char buffer[96];
    char *text = buffer;
    uint size;
    switch (value[0]) {
    case 1: recovered_216bc(buffer, sizeof(buffer), (char *)0x2d051, value[1]); break;
    case 2: recovered_216bc(buffer, sizeof(buffer), (char *)0x2d054, (double)*(float *)&value[2]); break;
    case 3: return recovered_2b32b(value, output);
    case 5: text = (char *)(value[1] ? 0x2cf78 : 0x2cf7d); break;
    default: return false;
    }
    size = recovered_20ccf((int)text);
    *output = recovered_24f9e((int)text, size);
    return *output != 0;
}
