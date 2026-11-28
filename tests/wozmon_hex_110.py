#!/usr/bin/env python3
"""Compare monitor hexadecimal parsing with native code and guarded outputs.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from dll import DLL
from native import inspect
from unicorn.x86_const import UC_X86_REG_ECX, UC_X86_REG_EDX


def load_command(path, output, source=False):
    output.parent.mkdir(parents=True, exist_ok=True)
    binary = bytearray(path.read_bytes())
    struct.pack_into('<I', binary, 12, 6)
    output.write_bytes(binary)
    metadata, _ = inspect(binary)
    lib = DLL(output)
    symbols = {name: address for address, name in metadata['symbols']}
    for name, address in symbols.items():
        lib.exports[name] = lib.base + address - metadata['base']
    if source:
        lib.call('_pf_app_initialize')
    return lib


def exercise(reference, source, output):
    metadata, _ = inspect(reference.read_bytes())
    parse = next(address for address, name in metadata['symbols'] if name == '_parse_hex32')
    target = '_recovered_%x' % (parse - metadata['base'] + 0x10000000)
    libraries = [load_command(reference, output / 'native'),
                 load_command(source, output / 'source', True)]
    fixtures = [b'', b'0', b'F', b'abcDEF', b'FFFFFFFF', b'100000000',
                b'12345678R', b'123456789', b'G', b'-1', b' 12', b'12:']
    rng = random.Random(110)
    alphabet = b'0123456789abcdefABCDEF.GRX: '
    fixtures += [bytes(rng.choice(alphabet) for _ in range(rng.randrange(1, 14)))
                 for _ in range(128)]
    for raw in fixtures:
        results = []
        for index, lib in enumerate(libraries):
            word = 'Q' if lib.wide else 'I'
            lib.cpu.mem_write(0x3100000, b'HEAD' + raw + b'\0TAIL')
            lib.cpu.mem_write(0x3110000, struct.pack('<' + word, 0x3100004))
            lib.cpu.mem_write(0x3120000, b'BEFORE!!' + b'\xa5' * 4 + b'AFTER!!!')
            lib.cpu.mem_write(0x3130000, b'BEFORE!!' + b'\xa5AFTER!!!')
            if not index and lib.cpu_type == 7:
                lib.cpu.reg_write(UC_X86_REG_ECX, 0x3110000)
                lib.cpu.reg_write(UC_X86_REG_EDX, 0x3120008)
                result = lib.call('_parse_hex32', 0x3130008, result_bits=8)
            else:
                result = lib.call(target if index else '_parse_hex32', 0x3110000,
                                  0x3120008, 0x3130008, result_bits=8)
            cursor = int.from_bytes(lib.cpu.mem_read(0x3110000, 8 if lib.wide else 4), 'little')
            value = bytes(lib.cpu.mem_read(0x3120008, 4))
            digits = lib.cpu.mem_read(0x3130008, 1)[0]
            assert bytes(lib.cpu.mem_read(0x3100000, len(raw) + 9)) == b'HEAD' + raw + b'\0TAIL'
            for address, size in [(0x3120000, 4), (0x3130000, 1)]:
                assert bytes(lib.cpu.mem_read(address, 8)) == b'BEFORE!!'
                assert bytes(lib.cpu.mem_read(address + 8 + size, 8)) == b'AFTER!!!'
            results.append((result, cursor - 0x3100004, value, digits))
        assert results[0] == results[1], (raw, results)
    print('Monitor: %d native/source hexadecimal parsing workflows passed.' % len(fixtures))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.output)
