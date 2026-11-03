// Permafrost 0.5. Reconstructed from the bundled native monitor.
// Pooka's Free Software License.
#include <permafrost.h>

namespace {
const char digits[] = "0123456789ABCDEF";
uint32_t next_address;
bool have_address;
void text(const char *s) { pf_puts(s); }
char *skip(char *p) { while (*p == ' ' || *p == '\t') ++p; return p; }
bool hex(char *&p, uint32_t &value, bool &present) {
    value = 0; present = false;
    unsigned count = 0;
    for (;;) {
        char c = *p;
        unsigned d = c >= '0' && c <= '9' ? c - '0' : c >= 'A' && c <= 'F' ? c - 'A' + 10 : 16;
        if (d == 16) return true;
        if (count++ == 8) return false;
        present = true; value = (value << 4) | d; ++p;
    }
}
void examine(uint32_t first, uint32_t last) {
    uint32_t address = first;
    for (;;) {
        char label[9];
        for (unsigned i=0;i<8;++i) label[i] = digits[(address >> (28-i*4)) & 15];
        label[8] = 0; text(label); text(":");
        uint32_t row = address;
        for (unsigned i=0;i<8 && address<=last;++i) {
            uint8_t v = pf_peek8(address);
            char byte[3] = {digits[v>>4], digits[v&15], 0};
            text(" "); text(byte);
            if (++address == 0) break;
        }
        text("\r\n");
        if (row >= last || address == 0 || address-1 >= last) break;
    }
    next_address = last+1; have_address = true;
}
bool command(char *line) {
    char *p = skip(line);
    uint32_t address; bool present;
    if (!hex(p,address,present)) return false;
    p = skip(p);
    if (*p == 'R') {
        if (!present) { if (!have_address) return false; address = next_address; }
        if (*skip(p+1)) return false;
        next_address = address; have_address = true;
        ((void (*)())(uintptr_t)address)(); text("\r\n"); return true;
    }
    if (*p == '.') {
        if (!present) return false;
        p = skip(p+1); uint32_t last; bool found;
        if (!hex(p,last,found) || !found || *skip(p) || last<address) return false;
        examine(address,last); return true;
    }
    if (*p == ':') {
        if (!present) return false;
        p = skip(p+1); bool stored=false;
        while (*p) {
            uint32_t value; bool found;
            if (!hex(p,value,found) || !found || value>=256) return false;
            pf_poke8(address++,value); stored=true; p=skip(p);
        }
        if (!stored) return false;
        next_address=address; have_address=true; return true;
    }
    if (*p) return false;
    if (!present) { if (!have_address) return true; address=next_address; }
    examine(address, address>UINT32_MAX-7 ? UINT32_MAX : address+7); return true;
}
}
extern "C" int main() {
    pf_set_theme(0,0x55ff55,0x0a);
    text("WOZMON FOR PERMAFROST\r\n");
    text("AAAA      EXAMINE 8 BYTES\r\nAAAA.BBBB EXAMINE RANGE\r\n");
    text("AAAA: XX YY ZZ STORE BYTES\r\nAAAAR     RUN CODE\r\n");
    text("ESC ON EMPTY LINE RETURNS TO PERMAFROST\r\n");
    char line[96]; unsigned length=0;
    text("\\");
    for (;;) {
        unsigned c = pf_getkey() & 255;
        if (!c) continue;
        if (c == 27) {
            text("\r\n");
            if (!length) { pf_restore_console(); return 0; }
            length=0; text("\\"); continue;
        }
        if (c == 8 || c == 127) { if (length) { --length; pf_putchar(8); } continue; }
        if (c == '\r' || c == '\n') {
            line[length]=0; text("\r\n");
            if (!command(line)) text("?\r\n");
            length=0; text("\\"); continue;
        }
        if (c<32 || c>126 || length==95) continue;
        if (c>='a' && c<='z') c-=32;
        line[length++]=c; pf_putchar(c);
    }
}
