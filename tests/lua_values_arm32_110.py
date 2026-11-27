#!/usr/bin/env python3
"""Compare ARM32 Lua numeric constructors and public floating return registers.

Pooka's Free Software License. Reference binaries are test oracles only.
"""
import argparse
from pathlib import Path
import struct
from dll import DLL


CASES = [('Ei', n) for n in [0, 1, -19, 2147483647, -2147483648]] + [
    ('Ex', n) for n in [4294967297, -4294967297, 9007199254740993,
                       9223372036854775807, -9223372036854775808]
] + [('Ed', n) for n in [0.0, -0.0, 2.5, -17.25, 1e-100, 1e100]] + [
    ('Eb', n) for n in [0, 1]
]


def exercise(path):
    lib = DLL(path, api_base=0x40010800, poison_allocations=True, poison_stack=True)
    results = []
    owner = 0x3100000
    for suffix, value in CASES:
        lib.cpu.mem_write(owner, b'\xa5' * 32)
        if suffix in ['Ei', 'Eb']:
            arguments = [owner, value & 0xffffffff]
        else:
            payload = struct.pack('<d', value) if suffix == 'Ed' else struct.pack('<q', value)
            arguments = [owner] + list(struct.unpack('<2I', payload))
        lib.call('__ZN6winter3lua8LuaValueC1' + suffix, *arguments)
        tag = bytes(lib.cpu.mem_read(owner, 1))
        kind = bytes(lib.cpu.mem_read(owner + 20, 4))
        payload = bytes(lib.cpu.mem_read(owner + 8, 8 if suffix != 'Eb' else 1))
        result = lib.call('__ZNK6winter3lua8LuaValue7asFloatEv', owner, result_bits=64)
        actual = struct.unpack('<d', struct.pack('<Q', result))[0]
        assert actual == float(value), (suffix, value, actual)
        results.append((tag, kind, payload, result))
    return results


def main():
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    native = exercise(args.reference)
    actual = exercise(args.source)
    assert actual == native, [(i, a, b) for i, (a, b) in enumerate(zip(actual, native)) if a != b]
    print('ARM32 Lua: %d native/source numeric value ABI comparisons passed.' % len(CASES))


if __name__ == '__main__':
    main()
