#!/usr/bin/env python3
"""Compare recovered browser SSE helpers with native SSE2 instructions.

Pooka's Free Software License. Test instruction bytes are an independent oracle.
"""
import argparse
import ctypes
from pathlib import Path
import random
import re
import struct
import subprocess
import tempfile
from unicorn import Uc, UC_ARCH_X86, UC_MODE_64
from unicorn.x86_const import UC_X86_REG_RDI, UC_X86_REG_RSI, UC_X86_REG_RDX


def definitions(header):
    result = []
    for name in ['psllw', 'psubusw', 'psraw', 'minpd']:
        match = re.search(r'static inline uint128 ' + name + r'\(', header)
        assert match, name
        start = header.index('{', match.start())
        end, depth = start + 1, 1
        while depth:
            depth += (header[end] == '{') - (header[end] == '}')
            end += 1
        result.append(header[match.start():end])
    return '\n'.join(result)


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--header', type=Path, default=Path(
        'recovery/in-progress/applications/glacier/x86_64/functions.h'))
    args = parser.parse_args()
    wrapper = '''
#include "support.h"
%s
void apply(uint64_t *out,const uint64_t *left,const uint64_t *right,unsigned count,unsigned op){
 uint128 a,b,result;__builtin_memcpy(&a,left,16);__builtin_memcpy(&b,right,16);
 if(op==0)result=psllw(a,count);else if(op==1)result=psubusw(a,b);
 else if(op==2)result=psraw(a,count);else result=minpd(a,b);
 __builtin_memcpy(out,&result,16);
}
''' % definitions(args.header.read_text())
    with tempfile.TemporaryDirectory(prefix='permafrost-browser-sse-') as directory:
        root = Path(directory)
        source = root / 'probe.c'
        source.write_text(wrapper)
        subprocess.run(['clang', '-std=c11', '-O2', '-dynamiclib', '-I', 'kernel',
                        str(source), '-o', str(root / 'probe.dylib')], check=True)
        library = ctypes.CDLL(str(root / 'probe.dylib'))
        array = ctypes.c_uint64 * 2
        library.apply.argtypes = [ctypes.POINTER(ctypes.c_uint64)] * 3 + [ctypes.c_uint] * 2
        cpu = Uc(UC_ARCH_X86, UC_MODE_64)
        cpu.mem_map(0x100000, 4096)
        cpu.mem_map(0x200000, 4096)
        rng = random.Random(110)
        edges = [0, 0x8000000000000000, 0x7ff0000000000000, 0xfff0000000000000,
                 0x7ff8000000000042, 0x7ff0000000000001, 1, 0xffffffffffffffff]
        count = 0
        for op, opcode in enumerate(['660ff1c1', '660fd9c1', '660fe1c1', '660f5dc1']):
            code = bytes.fromhex('f30f6f07f30f6f0e' + opcode + 'f30f7f02')
            cpu.mem_write(0x100000, code)
            for index in range(512):
                left = [rng.getrandbits(64), rng.getrandbits(64)]
                right = [rng.getrandbits(64), rng.getrandbits(64)]
                if index < 64:
                    left = [edges[index // 8], edges[index % 8]]
                    right = [edges[index % 8], edges[index // 8]]
                shift = [0, 1, 7, 15, 16, 32, 64, 0xffffffff][index % 8]
                native_right = [shift, 0] if op in [0, 2] else right
                cpu.mem_write(0x200000, struct.pack('<2Q', *left))
                cpu.mem_write(0x200100, struct.pack('<2Q', *native_right))
                for register, value in [(UC_X86_REG_RDI, 0x200000),
                                        (UC_X86_REG_RSI, 0x200100), (UC_X86_REG_RDX, 0x200200)]:
                    cpu.reg_write(register, value)
                cpu.emu_start(0x100000, 0x100000 + len(code), count=16)
                expected = bytes(cpu.mem_read(0x200200, 16))
                output = array()
                library.apply(output, array(*left), array(*right), shift, op)
                assert bytes(output) == expected, (op, index, left, right, shift,
                                                    bytes(output).hex(), expected.hex())
                count += 1
    print('Browser SSE: %d native-instruction comparisons passed.' % count)


if __name__ == '__main__':
    main()
