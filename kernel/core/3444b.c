/* Permafrost 0.3; Pooka's Free Software License.
 * Tagged values store integer bits at +4, float bits at +8, text at +12.
 */
#include "functions.h"
bool recovered_3444b(int *value, int *output) {
    if (!value || !output) return false;
    *output = 0;
    char buffer[96];
    char *text = buffer;
    uint size;
    switch (value[0]) {
    case 1: recovered_219e1(buffer, sizeof(buffer), (char *)0x438a5, value[1]); break;
    case 2: recovered_219e1(buffer, sizeof(buffer), (char *)0x43a53, (double)*(float *)&value[2]); break;
    case 3: return recovered_34508(value, output);
    case 5: text = (char *)(value[1] ? 0x439a7 : 0x439ac); break;
    default: return false;
    }
    size = recovered_20ff4((int)text);
    *output = recovered_28bbf((int)text, size);
    return *output != 0;
}
