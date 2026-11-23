#!/usr/bin/env python3
"""Compare recovered terminal lane shifts against native SSE2 instructions.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
import sys
import tempfile
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from darwin import compile_object, link_dynamic_executable
from cube_render import diagnostic_reference
from dll import DLL


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    with tempfile.TemporaryDirectory(prefix='permafrost-terminal-vectors-') as directory:
        folder = Path(directory)
        source = folder / 'probe.c'
        source.write_text('''#include "functions.h"
int main(void *words,unsigned count,unsigned operation){
 uint128 value;__builtin_memcpy(&value,words,16);
 value=operation?pf_psllw(value,count):pf_psraw(value,count);
 __builtin_memcpy(words,&value,16);return 0;
}
''')
        obj = folder / 'probe.o'
        compile_object(source, obj, 'x86_64',
                       [args.source, 'recovery/in-progress/sdk/include', 'sdk/include', 'kernel'],
                       pic=True, extra_flags=['-w'])
        binary = folder / 'probe'
        compiler = folder / 'compiler.o'
        compile_object(Path('kernel/compiler.c'), compiler, 'x86_64', ['sdk/include'], pic=True)
        memory = folder / 'memory.o'
        compile_object(Path('kernel/runtime.c'), memory, 'x86_64', ['sdk/include', 'kernel'], pic=True)
        link_dynamic_executable([obj, compiler, memory], binary, 'x86_64', {})
        diagnostic_reference(binary, folder / 'diagnostic')
        lib = DLL(folder / 'diagnostic')
        # MOVDQU xmm0,[rdi]; MOVD xmm1,esi; shift xmm0,xmm1;
        # MOVDQU [rdi],xmm0; RET. These test the native count and lane semantics.
        for operation, opcode in [(0, 'e1'), (1, 'f1')]:
            address = 0x22000 + operation * 32
            lib.cpu.mem_write(address, bytes.fromhex('f30f6f07660f6ece660f' + opcode + 'c1f30f7f07c3'))
            lib.exports['native%d' % operation] = address
        rng = random.Random(110)
        fixtures = [bytes(16), b'\xff' * 16,
                    struct.pack('<8H', 0, 1, 0x7fff, 0x8000, 0xffff, 0x100, 0xff, 0x5555)]
        fixtures += [rng.getrandbits(128).to_bytes(16, 'little') for _ in range(40)]
        count = 0
        for value in fixtures:
            for shift in list(range(18)) + [31, 63, 255]:
                for operation in [0, 1]:
                    outputs = []
                    for entry in ['native%d' % operation, '_main']:
                        lib.cpu.mem_write(0x3000000, b'\xa5' * 16 + value + b'\xa5' * 16)
                        lib.call(entry, 0x3000010, shift, operation)
                        outputs.append(bytes(lib.cpu.mem_read(0x3000000, 48)))
                    assert outputs[0] == outputs[1], (operation, shift, value.hex())
                    assert outputs[1][:16] == outputs[1][-16:] == b'\xa5' * 16
                    count += 1
        print('Terminal vector shifts: %d native SSE2 comparisons and guards passed.' % count)


if __name__ == '__main__':
    main()
