#!/usr/bin/env python3
"""Exercise the freestanding C PFZ1 decoder on all four target CPUs.

Pooka's Free Software License. Original Stage3 is an optional test input.
"""
import argparse
from pathlib import Path
import random
import struct
import sys
sys.path.insert(0, str(Path(__file__).resolve().parents[1] / 'tools'))
from darwin import compile_object, link_dynamic_executable
from cube_render import diagnostic_reference
from dll import DLL
from pfz import pack
from pfz1 import native_decode


def exercise(output, reference):
    rng = random.Random(344)
    cases = [b'', b'A', b'abc' * 1000, bytes(range(256)) * 40,
             bytes(rng.randrange(256) for _ in range(12000)),
             bytes(rng.randrange(256) for _ in range(4096)) * 3]
    encoded_cases = [pack(data) for data in cases]
    if reference:
        for data, encoded in zip(cases[1:], encoded_cases[1:]):
            assert native_decode(reference, encoded, len(data)) == data
    for arch in ['i386', 'x86_64', 'armv7', 'arm64']:
        folder = output / arch
        folder.mkdir(parents=True, exist_ok=True)
        objects = []
        for tag, path in [('pfz', 'firmware/pfz.c'), ('memory', 'kernel/runtime.c'),
                          ('compiler', 'kernel/compiler.c')]:
            obj = folder / (tag + '.o')
            compile_object(Path(path), obj, arch, ['sdk/include', 'firmware'], pic=True)
            objects.append(obj)
        binary = link_dynamic_executable(objects, folder / 'decoder', arch, {}, entry='pf_pfz_unpack')
        diagnostic = folder / 'decoder.dylib'
        diagnostic_reference(binary, diagnostic)
        library = DLL(diagnostic)
        source, destination, written = 0x3000000, 0x3100000, 0x3200000
        def call(encoded, capacity):
            library.cpu.mem_write(source, encoded)
            library.cpu.mem_write(destination - 16, b'\xa5' * (capacity + 32))
            library.cpu.mem_write(written, b'\xff' * 8)
            result = library.call('_pf_pfz_unpack', source, len(encoded), destination,
                                  capacity, written, result_bits=32)
            assert bytes(library.cpu.mem_read(destination - 16, 16)) == b'\xa5' * 16
            assert bytes(library.cpu.mem_read(destination + capacity, 16)) == b'\xa5' * 16
            count = int.from_bytes(library.cpu.mem_read(written, 8 if library.wide else 4), 'little')
            return result, count
        for data, encoded in zip(cases, encoded_cases):
            assert call(encoded, len(data)) == (0, len(data))
            assert bytes(library.cpu.mem_read(destination, len(data))) == data
            if data:
                assert call(encoded, len(data) - 1) == (2, 0)
            broken = bytearray(encoded)
            broken[12] ^= 1
            assert call(bytes(broken), len(data)) == (5, 0)
            for length in range(min(18, len(encoded))):
                status, count = call(encoded[:length], len(data))
                assert status and count == 0
        # Structurally valid headers enclosing impossible references, unused
        # control bits, truncated literals and excess payload are rejected.
        malformed = [b'PFZ1' + struct.pack('<3I', 3, 3, 0) + b'\0\0\0',
                     b'PFZ1' + struct.pack('<3I', 1, 1, 0) + b'\1',
                     encoded_cases[1][:16] + b'\x81A',
                     b'PFZ1' + struct.pack('<3I', 0, 1, 0) + b'\0']
        for encoded in malformed:
            status, count = call(encoded, 64)
            assert status and count == 0
        print(arch + ': C PFZ1 decoder passes native-checked payloads, bounds, CRC and malformed-token checks.')


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('--output', type=Path, required=True)
    parser.add_argument('--stage3', type=Path)
    args = parser.parse_args()
    exercise(args.output, args.stage3)
