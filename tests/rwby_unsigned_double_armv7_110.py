#!/usr/bin/env python3
"""Compare the ARM32 unsigned-to-double helper through its native word ABI.

Pooka's Free Software License.
"""
import argparse
from pathlib import Path
import random
import struct
from dll import DLL


def exercise(reference, source):
    values = {0, 1, (1 << 64) - 1}
    for bit in range(64):
        for delta in [-3, -2, -1, 0, 1, 2, 3]:
            value = (1 << bit) + delta
            if 0 <= value < 1 << 64:
                values.add(value)
    rng = random.Random(110)
    values.update(rng.getrandbits(64) for _ in range(128))
    libraries = [DLL(path) for path in [reference, source]]
    for value in sorted(values):
        expected = int.from_bytes(struct.pack('<d', float(value)), 'little')
        results = []
        for lib in libraries:
            actual = lib.call('___floatundidf', value & 0xffffffff,
                              value >> 32, result_bits=64)
            results.append(actual)
        assert results[0] == results[1], (hex(value), [hex(result) for result in results])
        if value <= 1 << 53:
            assert results[0] == expected, (hex(value), hex(results[0]), hex(expected))
    print('Rwby ARM32 unsigned-to-double: %d native/source ABI cases passed.' % len(values))


if __name__ == '__main__':
    parser = argparse.ArgumentParser(description=__doc__)
    parser.add_argument('reference', type=Path)
    parser.add_argument('source', type=Path)
    args = parser.parse_args()
    exercise(args.reference, args.source)
