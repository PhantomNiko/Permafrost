/* Permafrost 0.6; Pooka's Free Software License.
 * Tagged values store integer bits at +4, float bits at +8, text at +12.
 */
#include "functions.h"
bool recovered_46020(int *value, int *output) {
    if (!value || !output) return false;
    *output = 0;
    char buffer[96];
    char *text = buffer;
    uint size;
    switch (value[0]) {
    case 1: recovered_218da(buffer, sizeof(buffer), (char *)0x580bc, value[1]); break;
    case 2: recovered_218da(buffer, sizeof(buffer), (char *)0x58996, (double)*(float *)&value[2]); break;
    case 3: return recovered_460dd(value, output);
    case 5: text = (char *)(value[1] ? 0x588ea : 0x588ef); break;
    default: return false;
    }
    size = recovered_20a56((int)text);
    *output = recovered_3710b((int)text, size);
    return *output != 0;
}
