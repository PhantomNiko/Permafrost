/* Permafrost kernel bootstrap. Pooka's Free Software License.
 * Decode the source-built core above conventional memory before clearing BSS.
 */
#include <stdint.h>
#include <stddef.h>
int pf_unpack(uint8_t *out, size_t capacity, const uint8_t *in, size_t size) {
    size_t source=0, target=0;
    while (source<size) {
        unsigned token=in[source++];
        size_t literal=token>>4, match=(token&15)+4;
        if (literal==15) {
            unsigned part;
            do { if(source==size) return 0; part=in[source++];
                 if(literal>capacity || part>capacity-literal) return 0;
                 literal+=part; } while(part==255);
        }
        if(literal>size-source || literal>capacity-target) return 0;
        while(literal--) out[target++]=in[source++];
        if(source==size) return target==capacity;
        if(size-source<2) return 0;
        size_t offset=in[source] | ((size_t)in[source+1]<<8); source+=2;
        if(!offset || offset>target) return 0;
        if((token&15)==15) {
            unsigned part;
            do { if(source==size) return 0; part=in[source++];
                 if(match>capacity || part>capacity-match) return 0;
                 match+=part; } while(part==255);
        }
        if(match>capacity-target) return 0;
        while(match--) {out[target]=out[target-offset];++target;}
    }
    return target==capacity;
}
