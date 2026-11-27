#!/usr/bin/env python3
"""Compare browser image cleanup through direct and address-taken imports.

Pooka's Free Software License. Reference executables are test inputs only.
"""
import argparse
from pathlib import Path
import struct
from desktop_calendar import load
from native import inspect


def exercise(reference, source, library, output):
    native, _ = inspect(reference.read_bytes())
    assert native['cpu'] == 0x100000c, 'This fixture exercises ARM64 image ownership.'
    address = next(a for a, n in native['symbols'] if n == '_glacier_free_program_image')
    built, _ = inspect(source.read_bytes())
    symbols = {n: a for a, n in built['symbols']}
    libs = load(reference, source, output, library)
    for index, lib in enumerate(libs):
        if index:
            lib.exports['initialize'] = lib.base + symbols['_pf_app_initialize']
            lib.call('initialize')
        lib.exports['cleanup'] = lib.base + (symbols['_recovered_%x' %
            (address - native['base'] + 0x10000000)] if index else address - native['base'])
        lib.call('cleanup', 0)
        lib.next = 0x1800000
        for owned in [False, True]:
            pointer = lib.next if owned else 0
            if owned:
                lib.allocs[pointer] = 64
                lib.cpu.mem_write(pointer, b'\x91' * 64)
            image = 0x600000
            lib.cpu.mem_write(image, b'GUARD123' + struct.pack('<QQQ', pointer, 17, 23) + b'ENDGUARD')
            lib.call('cleanup', image + 8)
            assert bytes(lib.cpu.mem_read(image, 40)) == b'GUARD123' + bytes(24) + b'ENDGUARD'
            assert not pointer or pointer not in lib.allocs, 'Owned image was not released.'
            lib.call('cleanup', image + 8)
    print('Glacier ARM64: null, empty, owned and repeated image cleanup passed in native and source builds.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    parser.add_argument('--library', type=Path, required=True)
    parser.add_argument('--output', type=Path, required=True)
    args = parser.parse_args()
    exercise(args.reference, args.source, args.library, args.output)
